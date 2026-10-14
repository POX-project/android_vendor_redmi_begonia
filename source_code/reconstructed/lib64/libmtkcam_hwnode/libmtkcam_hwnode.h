/*
 * Reverse-Engineered ABI Specification for: libmtkcam_hwnode.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_hwnode.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_HWNODE_H
#define BEGONIA_RE_LIBMTKCAM_HWNODE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK5NSCam2v38BaseNode11getNodeNameEv */
/* Demangled: NSCam::v3::BaseNode::getNodeName() const */
int _ZNK5NSCam2v38BaseNode11getNodeNameEv(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferEm */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::destroyBuffer(unsigned long) */
int _ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferEm(void);

/* Symbol: _ZGVZ18isTrace1On_LMVInfovE6sTrace */
/* Demangled: guard variable for isTrace1On_LMVInfo()::sTrace */
extern void* _ZGVZ18isTrace1On_LMVInfovE6sTrace;

/* Symbol: _ZN2P216P2ScanlinePluginD0Ev */
/* Demangled: P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZN2P216P2ScanlinePluginD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm(void);

/* Symbol: _ZN2P211P2InitParamC2Ev */
/* Demangled: P2::P2InitParam::P2InitParam() */
int _ZN2P211P2InitParamC2Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZN12RAW16NodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: RAW16NodeImp::onDequeRequest(android::sp<NSCam::v3::IPipelineFrame>&) */
int _ZN12RAW16NodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE200_NS3_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread */
extern void* _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE200_NS3_6ThreadE;

/* Symbol: _ZNK2P214MWFrameRequest9findP2ImgENS_6ID_IMGE */
/* Demangled: P2::MWFrameRequest::findP2Img(P2::ID_IMG) const */
int _ZNK2P214MWFrameRequest9findP2ImgENS_6ID_IMGE(void);

/* Symbol: _ZN2P29P2InIDMapC1ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj */
/* Demangled: P2::P2InIDMap::P2InIDMap(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&, unsigned int) */
int _ZN2P29P2InIDMapC1ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj(void);

/* Symbol: _ZGVZ25isTrace1On_Streaming_SMVRvE4sVal */
/* Demangled: guard variable for isTrace1On_Streaming_SMVR()::sVal */
extern void* _ZGVZ25isTrace1On_Streaming_SMVRvE4sVal;

/* Symbol: _ZTTN2P216P2CaptureNodeImpE */
/* Demangled: VTT for P2::P2CaptureNodeImp */
extern void* _ZTTN2P216P2CaptureNodeImpE;

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9threshold */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9threshold;

/* Symbol: _ZN2P214MWFrameRequest15createP2MetaMapERN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE */
/* Demangled: P2::MWFrameRequest::createP2MetaMap(NSCam::v3::IPipelineFrame::MetaInfoIOMapSet&) */
int _ZN2P214MWFrameRequest15createP2MetaMapERN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node12P1ConnectLMVE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1ConnectLMV */
extern void* _ZTVN5NSCam2v38NSP1Node12P1ConnectLMVE;

/* Symbol: _ZN5NSCam2v38NSP1Node15StuffBufferPool12createBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::createBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node15StuffBufferPool12createBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN2P214toIMetadataPtrERKN7android2spINS_6P2MetaEEE */
/* Demangled: P2::toIMetadataPtr(android::sp<P2::P2Meta> const&) */
int _ZN2P214toIMetadataPtrERKN7android2spINS_6P2MetaEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZN2P27MWFrame12ReleaseToken19refreshStreamStatusEv */
/* Demangled: P2::MWFrame::ReleaseToken::refreshStreamStatus() */
int _ZN2P27MWFrame12ReleaseToken19refreshStreamStatusEv(void);

/* Symbol: _ZN2P216P2ScanlinePluginD1Ev */
/* Demangled: P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZN2P216P2ScanlinePluginD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16queryRollingSkewEjjRji */
/* Demangled: NSCam::v3::NSP1Node::queryRollingSkew(unsigned int, unsigned int, unsigned int&, int) */
int _ZN5NSCam2v38NSP1Node16queryRollingSkewEjjRji(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl14checkSkipBlockEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkSkipBlock() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl14checkSkipBlockEv(void);

/* Symbol: _ZN5NSCam2v37JpgPack4initEv */
/* Demangled: NSCam::v3::JpgPack::init() */
int _ZN5NSCam2v37JpgPack4initEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS9_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__tree_node<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const&>(int const&, std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const&) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS9_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZTv0_n48_N2P212MDPProcessor13onThreadStartEv */
/* Demangled: virtual thunk to P2::MDPProcessor::onThreadStart() */
int _ZTv0_n48_N2P212MDPProcessor13onThreadStartEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN2P218StreamingProcessor15incPayloadCountERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::incPayloadCount(NSCam::Feature::ILog const&) */
int _ZN2P218StreamingProcessor15incPayloadCountERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNK2P29P2Request6getImgENS_6ID_IMGE */
/* Demangled: P2::P2Request::getImg(P2::ID_IMG) const */
int _ZNK2P29P2Request6getImgENS_6ID_IMGE(void);

/* Symbol: _ZN2P214BasicProcessor13onNotifyFlushEv */
/* Demangled: P2::BasicProcessor::onNotifyFlush() */
int _ZN2P214BasicProcessor13onNotifyFlushEv(void);

/* Symbol: _ZN2P26P2Util8SimpleIO21findDisplayAndReleaseEi */
/* Demangled: P2::P2Util::SimpleIO::findDisplayAndRelease(int) */
int _ZN2P26P2Util8SimpleIO21findDisplayAndReleaseEi(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO12updateResultEi */
/* Demangled: P2::P2Util::SimpleIO::updateResult(int) const */
int _ZNK2P26P2Util8SimpleIO12updateResultEi(void);

/* Symbol: _ZN2P217DispatchProcessor13onThreadStartEv */
/* Demangled: P2::DispatchProcessor::onThreadStart() */
int _ZN2P217DispatchProcessor13onThreadStartEv(void);

/* Symbol: _ZN2P27MWFrame12ReleaseToken6updateERKlRKNS1_11StreamStateE */
/* Demangled: P2::MWFrame::ReleaseToken::update(long const&, P2::MWFrame::ReleaseToken::StreamState const&) */
int _ZN2P27MWFrame12ReleaseToken6updateERKlRKNS1_11StreamStateE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19generateAppTagIndexERNS_9IMetadataES4_ */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateAppTagIndex(NSCam::IMetadata&, NSCam::IMetadata&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19generateAppTagIndexERNS_9IMetadataES4_(void);

/* Symbol: _ZTCN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE200_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread */
extern void* _ZTCN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE200_N7android6ThreadE;

/* Symbol: _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_ */
/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_(void);

/* Symbol: _ZNK2P27MWFrame11acquireMetaERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE */
/* Demangled: P2::MWFrame::acquireMeta(android::sp<NSCam::v3::IMetaStreamBuffer> const&, P2::IO_DIR) const */
int _ZNK2P27MWFrame11acquireMetaERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE(void);

/* Symbol: _ZZN2P216isTrace1On_MWImgEvE4sVal */
/* Demangled: P2::isTrace1On_MWImg()::sVal */
extern void* _ZZN2P216isTrace1On_MWImgEvE4sVal;

/* Symbol: _ZN2P216P2ScanlinePluginD2Ev */
/* Demangled: P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZN2P216P2ScanlinePluginD2Ev(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPackC1ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE */
/* Demangled: P2::StreamingProcessor::P2RequestPack::P2RequestPack(NSCam::Feature::ILog const&, android::sp<P2::P2Request> const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
int _ZN2P218StreamingProcessor13P2RequestPackC1ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE(void);

/* Symbol: _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEE */
/* Demangled: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > */
extern void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD2Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD2Ev(void);

/* Symbol: _ZN2P25P2Img7getNameENS_6ID_IMGE */
/* Demangled: P2::P2Img::getName(P2::ID_IMG) */
int _ZN2P25P2Img7getNameENS_6ID_IMGE(void);

/* Symbol: _ZN7android2spIN5NSCam20IResourceConcurrencyEEaSERKS3_ */
/* Demangled: android::sp<NSCam::IResourceConcurrency>::operator=(android::sp<NSCam::IResourceConcurrency> const&) */
int _ZN7android2spIN5NSCam20IResourceConcurrencyEEaSERKS3_(void);

/* Symbol: _ZTv0_n96_NK2P25MWImg19getIImageBufferPtrsEv */
/* Demangled: virtual thunk to P2::MWImg::getIImageBufferPtrs() const */
int _ZTv0_n96_NK2P25MWImg19getIImageBufferPtrsEv(void);

/* Symbol: _ZTCN2P27MWFrameE0_NS_8IP2FrameE */
/* Demangled: construction vtable for P2::IP2Frame-in-P2::MWFrame */
extern void* _ZTCN2P27MWFrameE0_NS_8IP2FrameE;

/* Symbol: _ZNK2P26P2Util8SimpleIn9isResizedEv */
/* Demangled: P2::P2Util::SimpleIn::isResized() const */
int _ZNK2P26P2Util8SimpleIn9isResizedEv(void);

/* Symbol: _ZTv0_n32_N2P26MWMetaD0Ev */
/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
int _ZTv0_n32_N2P26MWMetaD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor12calcEISRatioERKN5NSCam5MSizeERKNSt3__16vectorINS1_7Feature6P2Util15P2AppStreamInfoENS5_9allocatorIS9_EEEE */
/* Demangled: P2::StreamingProcessor::calcEISRatio(NSCam::MSize const&, std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> > const&) */
int _ZN2P218StreamingProcessor12calcEISRatioERKN5NSCam5MSizeERKNSt3__16vectorINS1_7Feature6P2Util15P2AppStreamInfoENS5_9allocatorIS9_EEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV16processDropFrameERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processDropFrame(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV16processDropFrameERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi */
/* Demangled: P2::CaptureRequestCallback::onCompleted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>, int) */
int _ZN2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node19generateMetaInfoStrERKNS_9IMetadata6IEntryERN7android7String8E */
/* Demangled: NSCam::v3::NSP1Node::generateMetaInfoStr(NSCam::IMetadata::IEntry const&, android::String8&) */
int _ZN5NSCam2v38NSP1Node19generateMetaInfoStrERKNS_9IMetadata6IEntryERN7android7String8E(void);

/* Symbol: _ZN7Request11prepareMetaEv */
/* Demangled: Request::prepareMeta() */
int _ZN7Request11prepareMetaEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE8__rehashEm(void);

/* Symbol: _ZTv0_n136_N11JpegNodeImpD0Ev */
/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
int _ZTv0_n136_N11JpegNodeImpD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN2P25MWImg12updateResultEi */
/* Demangled: P2::MWImg::updateResult(int) */
int _ZN2P25MWImg12updateResultEi(void);

/* Symbol: _ZNK2P25MWImg15getBufferHandleERPK13native_handle */
/* Demangled: P2::MWImg::getBufferHandle(native_handle const*&) const */
int _ZNK2P25MWImg15getBufferHandleERPK13native_handle(void);

/* Symbol: _ZNK2P214MWFrameRequest9findP2ImgERKNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGE */
/* Demangled: P2::MWFrameRequest::findP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > > const&, P2::ID_IMG) const */
int _ZNK2P214MWFrameRequest9findP2ImgERKNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGE(void);

/* Symbol: _ZZN2P229isTrace1On_StreamingProcessorEvE4sVal */
/* Demangled: P2::isTrace1On_StreamingProcessor()::sVal */
extern void* _ZZN2P229isTrace1On_StreamingProcessorEvE4sVal;

/* Symbol: _ZN2P29P2Request10initIOInfoEv */
/* Demangled: P2::P2Request::initIOInfo() */
int _ZN2P29P2Request10initIOInfoEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEEvT_SL_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEEvT_SL_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18onProcessDropFrameEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessDropFrame(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18onProcessDropFrameEi(void);

/* Symbol: _ZZ18isTrace1On_MWFramevE6sTrace */
/* Demangled: isTrace1On_MWFrame()::sTrace */
extern void* _ZZ18isTrace1On_MWFramevE6sTrace;

/* Symbol: _ZN2P25P2Img10setImgInfoERKN5NSCam5MSizeERKNSt3__16vectorIlNS5_9allocatorIlEEEE */
/* Demangled: P2::P2Img::setImgInfo(NSCam::MSize const&, std::__1::vector<long, std::__1::allocator<long> > const&) */
int _ZN2P25P2Img10setImgInfoERKN5NSCam5MSizeERKNSt3__16vectorIlNS5_9allocatorIlEEEE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::threadLoop() */
int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv(void);

/* Symbol: _ZTv0_n104_N5NSCam2v38NSP1Node9P1NodeImp4kickEv */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::kick() */
int _ZTv0_n104_N5NSCam2v38NSP1Node9P1NodeImp4kickEv(void);

/* Symbol: _ZN2P26P2Util15extractSimpleIOERKN7android2spINS_9P2RequestEEEj */
/* Demangled: P2::P2Util::extractSimpleIO(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P26P2Util15extractSimpleIOERKN7android2spINS_9P2RequestEEEj(void);

/* Symbol: _ZTv0_n32_N2P26MWMetaD1Ev */
/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
int _ZTv0_n32_N2P26MWMetaD1Ev(void);

/* Symbol: _ZTCN2P214MWFrameRequestE0_NS_14P2FrameRequestE */
/* Demangled: construction vtable for P2::P2FrameRequest-in-P2::MWFrameRequest */
extern void* _ZTCN2P214MWFrameRequestE0_NS_14P2FrameRequestE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE10push_frontEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*> >::push_front(android::sp<P2::P2FrameRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE10push_frontEOS6_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp5flushEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::flush() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp5flushEv(void);

/* Symbol: _ZTv0_n136_N11JpegNodeImpD1Ev */
/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
int _ZTv0_n136_N11JpegNodeImpD1Ev(void);

/* Symbol: _ZNK2P29P2Cropper12getP1BinSizeEv */
/* Demangled: P2::P2Cropper::getP1BinSize() const */
int _ZNK2P29P2Cropper12getP1BinSizeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm(void);

/* Symbol: _ZTv0_n80_N2P218StreamingProcessor13onNotifyFlushEv */
/* Demangled: virtual thunk to P2::StreamingProcessor::onNotifyFlush() */
int _ZTv0_n80_N2P218StreamingProcessor13onNotifyFlushEv(void);

/* Symbol: _ZTCN5NSCam2v38NSP1Node9P1NodeImpE0_NS0_8BaseNodeE */
/* Demangled: construction vtable for NSCam::v3::BaseNode-in-NSCam::v3::NSP1Node::P1NodeImp */
extern void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE0_NS0_8BaseNodeE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread14waitEnqueParamERS6_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::waitEnqueParam(android::sp<P2::P2Request>&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread14waitEnqueParamERS6_(void);

/* Symbol: _ZN2P214MWFrameRequest14createP2ImgMapERN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE */
/* Demangled: P2::MWFrameRequest::createP2ImgMap(NSCam::v3::IPipelineFrame::ImageInfoIOMapSet&) */
int _ZN2P214MWFrameRequest14createP2ImgMapERN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE(void);

/* Symbol: _ZN2P218P2StreamingNodeImp10sConditionE */
/* Demangled: P2::P2StreamingNodeImp::sCondition */
extern void* _ZN2P218P2StreamingNodeImp10sConditionE;

/* Symbol: _ZN2P218StreamingProcessor19waitFeaturePipeDoneEv */
/* Demangled: P2::StreamingProcessor::waitFeaturePipeDone() */
int _ZN2P218StreamingProcessor19waitFeaturePipeDoneEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV13processResultEiiiPNS_9IMetadataES4_RN6NS3Av39MetaSet_TEPNS5_6IHal3AEijjjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjjRS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processResult(int, int, int, NSCam::IMetadata*, NSCam::IMetadata*, NS3Av3::MetaSet_T&, NS3Av3::IHal3A*, int, unsigned int, unsigned int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, unsigned int, unsigned int, NSCam::IMetadata&) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV13processResultEiiiPNS_9IMetadataES4_RN6NS3Av39MetaSet_TEPNS5_6IHal3AEijjjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjjRS3_(void);

/* Symbol: _ZNK5NSCam2v38NSP1Node9P1NodeAct9getOpenIdEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getOpenId() const */
int _ZNK5NSCam2v38NSP1Node9P1NodeAct9getOpenIdEv(void);

/* Symbol: _ZN11JpegBufPool10commitPoolEv */
/* Demangled: JpegBufPool::commitPool() */
int _ZN11JpegBufPool10commitPoolEv(void);

/* Symbol: _ZN12RAW16NodeImp12UnpackThread10readyToRunEv */
/* Demangled: RAW16NodeImp::UnpackThread::readyToRun() */
int _ZN12RAW16NodeImp12UnpackThread10readyToRunEv(void);

/* Symbol: _ZN2P211isValidCropERKN5NSCam5MRectE */
/* Demangled: P2::isValidCrop(NSCam::MRect const&) */
int _ZN2P211isValidCropERKN5NSCam5MRectE(void);

/* Symbol: _ZNK2P218StreamingProcessor9prepareTPERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepareTP(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor9prepareTPERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn12useCropRatioEv */
/* Demangled: P2::P2Util::SimpleIn::useCropRatio() const */
int _ZNK2P26P2Util8SimpleIn12useCropRatioEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_readyEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_ready() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_readyEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1NotifyCrop14p1TuningNotifyEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1NotifyCrop::p1TuningNotify(void*, void*) */
int _ZN5NSCam2v38NSP1Node12P1NotifyCrop14p1TuningNotifyEPvS3_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack12earlyReleaseEj */
/* Demangled: P2::StreamingProcessor::P2RequestPack::earlyRelease(unsigned int) */
int _ZN2P218StreamingProcessor13P2RequestPack12earlyReleaseEj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr14isActListEmptyEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::isActListEmpty() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr14isActListEmptyEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread14waitEnqueParamERSB_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::waitEnqueParam(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread14waitEnqueParamERSB_(void);

/* Symbol: _ZNK2P27MWFrame18createOpaqueImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE */
/* Demangled: P2::MWFrame::createOpaqueImages(android::sp<NSCam::IImageBufferHeap> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >&) const */
int _ZNK2P27MWFrame18createOpaqueImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE(void);

/* Symbol: _ZN2P214MWFrameRequest17updateP2FrameDataEv */
/* Demangled: P2::MWFrameRequest::updateP2FrameData() */
int _ZN2P214MWFrameRequest17updateP2FrameDataEv(void);

/* Symbol: _ZN2P27isValidEPKNS_5P2ImgE */
/* Demangled: P2::isValid(P2::P2Img const*) */
int _ZN2P27isValidEPKNS_5P2ImgE(void);

/* Symbol: _ZN2P218StreamingProcessor14updateSMVRMetaERKN7android2spINS0_7PayloadEEEj */
/* Demangled: P2::StreamingProcessor::updateSMVRMeta(android::sp<P2::StreamingProcessor::Payload> const&, unsigned int) */
int _ZN2P218StreamingProcessor14updateSMVRMetaERKN7android2spINS0_7PayloadEEEj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl17initBufInfo_cleanEv */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::initBufInfo_clean() */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl17initBufInfo_cleanEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZGVZN2P228isTrace1On_DispatchProcessorEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_DispatchProcessor()::sVal */
extern void* _ZGVZN2P228isTrace1On_DispatchProcessorEvE4sVal;

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZZ18isTrace1On_LMVInfovE4sVal */
/* Demangled: isTrace1On_LMVInfo()::sVal */
extern void* _ZZ18isTrace1On_LMVInfovE4sVal;

/* Symbol: _ZGVZ20isTrace1On_SMVRQueuevE6sTrace */
/* Demangled: guard variable for isTrace1On_SMVRQueue()::sTrace */
extern void* _ZGVZ20isTrace1On_SMVRQueuevE6sTrace;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9waitFlushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::waitFlush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9waitFlushEv(void);

/* Symbol: _ZNK2P29P2Request4dumpEv */
/* Demangled: P2::P2Request::dump() const */
int _ZNK2P29P2Request4dumpEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload14getPathRequestENS0_12ERequestPathERKj */
/* Demangled: P2::StreamingProcessor::Payload::getPathRequest(P2::StreamingProcessor::ERequestPath, unsigned int const&) */
int _ZN2P218StreamingProcessor7Payload14getPathRequestENS0_12ERequestPathERKj(void);

/* Symbol: _ZN2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: P2::P2CaptureNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZNK2P216P2ScanlinePlugin9isEnabledEv */
/* Demangled: P2::P2ScanlinePlugin::isEnabled() const */
int _ZNK2P216P2ScanlinePlugin9isEnabledEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> const&>(unsigned int const&, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTv0_n120_N5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE */
/* Demangled: P2::P2DumpPlugin::onPlugin(P2::P2Img const*) */
int _ZN2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE(void);

/* Symbol: _ZN2P212MDPProcessor8onUninitEv */
/* Demangled: P2::MDPProcessor::onUninit() */
int _ZN2P212MDPProcessor8onUninitEv(void);

/* Symbol: _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE200_NS3_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread */
extern void* _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE200_NS3_6ThreadE;

/* Symbol: _ZTTN2P29P2RequestE */
/* Demangled: VTT for P2::P2Request */
extern void* _ZTTN2P29P2RequestE;

/* Symbol: _ZNK2P214BasicProcessor7MyTimer6getFPSEv */
/* Demangled: P2::BasicProcessor::MyTimer::getFPS() const */
int _ZNK2P214BasicProcessor7MyTimer6getFPSEv(void);

/* Symbol: _ZN2P27MWFrame12toUserStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE */
/* Demangled: P2::MWFrame::toUserStatus(NSCam::Feature::ILog const&, P2::IO_STATUS) */
int _ZN2P27MWFrame12toUserStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPackD0Ev */
/* Demangled: P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
int _ZN2P218StreamingProcessor13P2RequestPackD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV6uninitEv */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::uninit() */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV6uninitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19setQualitySwitchingEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setQualitySwitching(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19setQualitySwitchingEi(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node15StuffBufferPool7BufNoteE */
/* Demangled: vtable for NSCam::v3::NSP1Node::StuffBufferPool::BufNote */
extern void* _ZTVN5NSCam2v38NSP1Node15StuffBufferPool7BufNoteE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm(void);

/* Symbol: _ZN2P218StreamingProcessor12getSMVRCountERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE */
/* Demangled: P2::StreamingProcessor::getSMVRCount(NSCam::Feature::ILog const&, android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
int _ZN2P218StreamingProcessor12getSMVRCountERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp20eventStreamingInformEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::eventStreamingInform() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp20eventStreamingInformEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5flushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::flush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5flushEv(void);

/* Symbol: _ZN2P29SMVRQueue4pushEjRKNS_6P2Util8SimpleInE */
/* Demangled: P2::SMVRQueue::push(unsigned int, P2::P2Util::SimpleIn const&) */
int _ZN2P29SMVRQueue4pushEjRKNS_6P2Util8SimpleInE(void);

/* Symbol: _ZN2P218StreamingProcessor6init3AEv */
/* Demangled: P2::StreamingProcessor::init3A() */
int _ZN2P218StreamingProcessor6init3AEv(void);

/* Symbol: _ZN2P29P2Cropper11initAppInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE */
/* Demangled: P2::P2Cropper::initAppInfo(NSCam::Feature::P2Util::P2SensorData const*) */
int _ZN2P29P2Cropper11initAppInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE11notifyFlushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::notifyFlush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE11notifyFlushEv(void);

/* Symbol: _ZTVN2P26MWInfoE */
/* Demangled: vtable for P2::MWInfo */
extern void* _ZTVN2P26MWInfoE;

/* Symbol: _ZTv0_n32_N2P218StreamingProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: virtual thunk to P2::StreamingProcessor::onInit(P2::P2InitParam const&) */
int _ZTv0_n32_N2P218StreamingProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn7getLcsoEv */
/* Demangled: P2::P2Util::SimpleIn::getLcso() const */
int _ZNK2P26P2Util8SimpleIn7getLcsoEv(void);

/* Symbol: _ZTv0_n120_N2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::readyToRun() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZN2P25MWImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji */
/* Demangled: P2::MWImg::MWImg(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, NSCam::Feature::P2Util::IMG_TYPE, P2::IMG_INFO const&, unsigned int, int) */
int _ZN2P25MWImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl13cleanAidStageEv */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::cleanAidStage() */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl13cleanAidStageEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15onProcessResultERNS1_8P1QueActERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKN6NS3Av39MetaSet_TERKNS_9IMetadataEj */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessResult(NSCam::v3::NSP1Node::P1QueAct&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NS3Av3::MetaSet_T const&, NSCam::IMetadata const&, unsigned int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15onProcessResultERNS1_8P1QueActERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKN6NS3Av39MetaSet_TERKNS_9IMetadataEj(void);

/* Symbol: _ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android6VectorINS2_2spIN5NSCam2v316IImageStreamInfoEEEEE */
/* Demangled: P2::MWInfo::initImgInfo(P2::ID_IMG, android::Vector<android::sp<NSCam::v3::IImageStreamInfo> > const&) */
int _ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android6VectorINS2_2spIN5NSCam2v316IImageStreamInfoEEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPackD1Ev */
/* Demangled: P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
int _ZN2P218StreamingProcessor13P2RequestPackD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTT11JpegNodeImp */
/* Demangled: VTT for JpegNodeImp */
extern void* _ZTT11JpegNodeImp;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_(void);

/* Symbol: _ZN2P26P2Util8SimpleIn12setISResizedEi */
/* Demangled: P2::P2Util::SimpleIn::setISResized(int) */
int _ZN2P26P2Util8SimpleIn12setISResizedEi(void);

/* Symbol: _ZN2P216P2CaptureNodeImpC2EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE */
/* Demangled: P2::P2CaptureNodeImp::P2CaptureNodeImp(NSCam::v3::P2CaptureNode::ePass2Type, NSCam::v3::P2Common::Capture::UsageHint const&) */
int _ZN2P216P2CaptureNodeImpC2EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp;

/* Symbol: _ZNK2P25MWImg8isRecordEv */
/* Demangled: P2::MWImg::isRecord() const */
int _ZNK2P25MWImg8isRecordEv(void);

/* Symbol: _ZNK2P29SMVRQueue4sizeEv */
/* Demangled: P2::SMVRQueue::size() const */
int _ZNK2P29SMVRQueue4sizeEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14getPowerNotifyEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getPowerNotify() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14getPowerNotifyEv(void);

/* Symbol: _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN2P29P2InIDMap9getMetaIDEjNS_7ID_METAE */
/* Demangled: P2::P2InIDMap::getMetaID(unsigned int, P2::ID_META) */
int _ZN2P29P2InIDMap9getMetaIDEjNS_7ID_METAE(void);

/* Symbol: _ZTTN2P214P2DrawIDPluginE */
/* Demangled: VTT for P2::P2DrawIDPlugin */
extern void* _ZTTN2P214P2DrawIDPluginE;

/* Symbol: _ZN5NSCam2v38BaseNode10onCtrlSyncERKN7android2spINS0_14IPipelineFrameEEEjjl */
/* Demangled: NSCam::v3::BaseNode::onCtrlSync(android::sp<NSCam::v3::IPipelineFrame> const&, unsigned int, unsigned int, long) */
int _ZN5NSCam2v38BaseNode10onCtrlSyncERKN7android2spINS0_14IPipelineFrameEEEjjl(void);

/* Symbol: _ZNK2P25MWImg19getIImageBufferPtrsEv */
/* Demangled: P2::MWImg::getIImageBufferPtrs() const */
int _ZNK2P25MWImg19getIImageBufferPtrsEv(void);

/* Symbol: _ZNK2P25P2Img10getImgSizeEv */
/* Demangled: P2::P2Img::getImgSize() const */
int _ZNK2P25P2Img10getImgSizeEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp13buildInitItemEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::buildInitItem() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp13buildInitItemEv(void);

/* Symbol: _ZN11JpegBufPool10getBufHeapEl */
/* Demangled: JpegBufPool::getBufHeap(long) */
int _ZN11JpegBufPool10getBufHeapEl(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm(void);

/* Symbol: _ZN2P26MWMeta12updateResultEi */
/* Demangled: P2::MWMeta::updateResult(int) */
int _ZN2P26MWMeta12updateResultEi(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPackD2Ev */
/* Demangled: P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
int _ZN2P218StreamingProcessor13P2RequestPackD2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderI20EIS_STATISTIC_STRUCTEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<EIS_STATISTIC_STRUCT> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderI20EIS_STATISTIC_STRUCTEE;

/* Symbol: _ZTTN5NSCam2v38NSP1Node13TimingChecker6ClientE */
/* Demangled: VTT for NSCam::v3::NSP1Node::TimingChecker::Client */
extern void* _ZTTN5NSCam2v38NSP1Node13TimingChecker6ClientE;

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack14getVRTimestampEv */
/* Demangled: P2::StreamingProcessor::P2RequestPack::getVRTimestamp() */
int _ZN2P218StreamingProcessor13P2RequestPack14getVRTimestampEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN2P214MWFrameRequest15endBatchReleaseEv */
/* Demangled: P2::MWFrameRequest::endBatchRelease() */
int _ZN2P214MWFrameRequest15endBatchReleaseEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_(void);

/* Symbol: _ZN7Request17getMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE */
/* Demangled: Request::getMetadataBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>&, NSCam::IMetadata*&) */
int _ZN7Request17getMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE(void);

/* Symbol: _ZTv0_n32_N2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: virtual thunk to P2::CaptureRequestCallback::onContinue(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZTv0_n32_N2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm(void);

/* Symbol: _ZZ25isTrace1On_Streaming_SMVRvE6sTrace */
/* Demangled: isTrace1On_Streaming_SMVR()::sTrace */
extern void* _ZZ25isTrace1On_Streaming_SMVRvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrlC2EN7android2spINS1_9P1NodeImpEEE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::P1TaskCtrl(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrlC2EN7android2spINS1_9P1NodeImpEEE(void);

/* Symbol: _ZTv0_n96_N11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to JpegNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38BaseNodeC2Ev */
/* Demangled: NSCam::v3::BaseNode::BaseNode() */
int _ZN5NSCam2v38BaseNodeC2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkCtrlStandbyEi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkCtrlStandby(int) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkCtrlStandbyEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl5cleanEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::clean() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl5cleanEv(void);

/* Symbol: _ZTVN7android4ListINS_2spIN5NSCam2v314IPipelineFrameEEEEE */
/* Demangled: vtable for android::List<android::sp<NSCam::v3::IPipelineFrame> > */
extern void* _ZTVN7android4ListINS_2spIN5NSCam2v314IPipelineFrameEEEEE;

/* Symbol: _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v316IImageStreamInfoEEEljjPKc */
/* Demangled: P2::MWFrame::print(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IImageStreamInfo> const&, long, unsigned int, unsigned int, char const*) */
int _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v316IImageStreamInfoEEEljjPKc(void);

/* Symbol: _ZTv0_n56_N2P213P2FrameHolder17notifyNextCaptureEii */
/* Demangled: virtual thunk to P2::P2FrameHolder::notifyNextCapture(int, int) */
int _ZTv0_n56_N2P213P2FrameHolder17notifyNextCaptureEii(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV9enableOISEPN6NS3Av36IHal3AE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::enableOIS(NS3Av3::IHal3A*) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV9enableOISEPN6NS3Av36IHal3AE(void);

/* Symbol: _ZNK2P29P2Cropper14applyViewRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFERKNS1_5MSizeE */
/* Demangled: P2::P2Cropper::applyViewRatio(NSCam::Feature::ILog const&, NSCam::MRectF const&, NSCam::MSize const&) const */
int _ZNK2P29P2Cropper14applyViewRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFERKNS1_5MSizeE(void);

/* Symbol: _ZNK2P25MWImg24getIImageBufferPtrsCountEv */
/* Demangled: P2::MWImg::getIImageBufferPtrsCount() const */
int _ZNK2P25MWImg24getIImageBufferPtrsCountEv(void);

/* Symbol: _ZNK2P26MWMeta6getDirEv */
/* Demangled: P2::MWMeta::getDir() const */
int _ZNK2P26MWMeta6getDirEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlAcquiringEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE1EEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onEvtCtrlAcquiring(NSCam::v3::NSP1Node::P1NodeImp*, NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)1>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlAcquiringEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE1EEE(void);

/* Symbol: _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE */
/* Demangled: VTT for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread */
extern void* _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE;

/* Symbol: _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE13__vdeallocateEv */
/* Demangled: std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> >::__vdeallocate() */
int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE13__vdeallocateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v36P1Node14createInstanceEv */
/* Demangled: NSCam::v3::P1Node::createInstance() */
int _ZN5NSCam2v36P1Node14createInstanceEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp11setupActionERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setupAction(NSCam::v3::NSP1Node::P1QueAct&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp11setupActionERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZN2P214BasicProcessor8P2CookieC2EPS0_RKN7android2spINS0_9P2PayloadEEE */
/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, android::sp<P2::BasicProcessor::P2Payload> const&) */
int _ZN2P214BasicProcessor8P2CookieC2EPS0_RKN7android2spINS0_9P2PayloadEEE(void);

/* Symbol: _ZGVZN2P225isTrace1On_P2BufferHandleEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_P2BufferHandle()::sTrace */
extern void* _ZGVZN2P225isTrace1On_P2BufferHandleEvE6sTrace;

/* Symbol: _ZTTN2P213P2FrameHolderE */
/* Demangled: VTT for P2::P2FrameHolder */
extern void* _ZTTN2P213P2FrameHolderE;

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker6Client4dumpEPKc */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::Client::dump(char const*) */
int _ZN5NSCam2v38NSP1Node13TimingChecker6Client4dumpEPKc(void);

/* Symbol: _ZNK2P29P2Request9isResizedEv */
/* Demangled: P2::P2Request::isResized() const */
int _ZNK2P29P2Request9isResizedEv(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack17updateVRTimestampEj */
/* Demangled: P2::StreamingProcessor::P2RequestPack::updateVRTimestamp(unsigned int) */
int _ZN2P218StreamingProcessor13P2RequestPack17updateVRTimestampEj(void);

/* Symbol: _ZNK2P26MWMeta7isValidEv */
/* Demangled: P2::MWMeta::isValid() const */
int _ZNK2P26MWMeta7isValidEv(void);

/* Symbol: _ZN12RAW16NodeImp21getImageBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_16IImageStreamInfoEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEEi */
/* Demangled: RAW16NodeImp::getImageBufferAndLock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&, int) */
int _ZN12RAW16NodeImp21getImageBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_16IImageStreamInfoEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n32_NK5NSCam2v38BaseNode9getOpenIdEv */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::getOpenId() const */
int _ZTv0_n32_NK5NSCam2v38BaseNode9getOpenIdEv(void);

/* Symbol: _ZN12RAW16NodeImp11unpackRaw10ERN7android2spIN5NSCam12IImageBufferEEES5_ */
/* Demangled: RAW16NodeImp::unpackRaw10(android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>&) */
int _ZN12RAW16NodeImp11unpackRaw10ERN7android2spIN5NSCam12IImageBufferEEES5_(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN2P218StreamingProcessor10processTSQERKN7android2spINS_9P2RequestEEEl */
/* Demangled: P2::StreamingProcessor::processTSQ(android::sp<P2::P2Request> const&, long) */
int _ZN2P218StreamingProcessor10processTSQERKN7android2spINS_9P2RequestEEEl(void);

/* Symbol: _ZNK2P25MWImg11getStreamIDEv */
/* Demangled: P2::MWImg::getStreamID() const */
int _ZNK2P25MWImg11getStreamIDEv(void);

/* Symbol: _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE */
/* Demangled: P2::MWFrameRequest::addP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > >&, long const&, P2::IO_DIR) */
int _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE(void);

/* Symbol: _ZN2P26P2Util12xmakeQParamsERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOERKN6NS3Av311TuningParamERKNS3_8P2ObjPtrE */
/* Demangled: P2::P2Util::xmakeQParams(NSCam::Feature::P2Util::P2Pack const&, P2::P2Util::SimpleIO const&, NS3Av3::TuningParam const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
int _ZN2P26P2Util12xmakeQParamsERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOERKN6NS3Av311TuningParamERKNS3_8P2ObjPtrE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImpC1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::P1NodeImp() */
int _ZN5NSCam2v38NSP1Node9P1NodeImpC1Ev(void);

/* Symbol: _ZNK7Request14isInMetaStreamEl */
/* Demangled: Request::isInMetaStream(long) const */
int _ZNK7Request14isInMetaStreamEl(void);

/* Symbol: _ZTV11JpegBufPool */
/* Demangled: vtable for JpegBufPool */
extern void* _ZTV11JpegBufPool;

/* Symbol: _ZN10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: PDENodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZNK2P26MWInfo5printERKN5NSCam7Feature4ILogE */
/* Demangled: P2::MWInfo::print(NSCam::Feature::ILog const&) const */
int _ZNK2P26MWInfo5printERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNK2P27MWFrame19getMWFrameRequestIDEv */
/* Demangled: P2::MWFrame::getMWFrameRequestID() const */
int _ZNK2P27MWFrame19getMWFrameRequestIDEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp13acceptRequestEN7android2spINS0_14IPipelineFrameEEERj */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::acceptRequest(android::sp<NSCam::v3::IPipelineFrame>, unsigned int&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp13acceptRequestEN7android2spINS0_14IPipelineFrameEEERj(void);

/* Symbol: _ZTVN5NSCam2v37JpgPackE */
/* Demangled: vtable for NSCam::v3::JpgPack */
extern void* _ZTVN5NSCam2v37JpgPackE;

/* Symbol: _ZN2P214BasicProcessor8onUninitEv */
/* Demangled: P2::BasicProcessor::onUninit() */
int _ZN2P214BasicProcessor8onUninitEv(void);

/* Symbol: _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE10do_destroyEPvm */
/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE10do_destroyEPvm(void);

/* Symbol: _ZTVN2P214P2BufferHandleE */
/* Demangled: vtable for P2::P2BufferHandle */
extern void* _ZTVN2P214P2BufferHandleE;

/* Symbol: _ZN2P217toIImageBufferPtrERKN7android2spINS_5P2ImgEEE */
/* Demangled: P2::toIImageBufferPtr(android::sp<P2::P2Img> const&) */
int _ZN2P217toIImageBufferPtrERKN7android2spINS_5P2ImgEEE(void);

/* Symbol: _ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<P2::MDPParam, std::__1::allocator<P2::MDPParam> >::__add_back_capacity() */
int _ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN2P217DispatchProcessor8onUninitEv */
/* Demangled: P2::DispatchProcessor::onUninit() */
int _ZN2P217DispatchProcessor8onUninitEv(void);

/* Symbol: _ZNK2P26MWMeta8getEntryEj */
/* Demangled: P2::MWMeta::getEntry(unsigned int) const */
int _ZNK2P26MWMeta8getEntryEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_IMG> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZZ24isTrace1On_StreamingNodevE6sTrace */
/* Demangled: isTrace1On_StreamingNode()::sTrace */
extern void* _ZZ24isTrace1On_StreamingNodevE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15generateAppMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9IMetadataEj */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateAppMeta(NSCam::v3::NSP1Node::P1QueAct&, NS3Av3::MetaSet_T const&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NSCam::IMetadata&, unsigned int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15generateAppMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9IMetadataEj(void);

/* Symbol: _ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp(NSCam::IImageBufferHeap*) */
int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZNK2P26MWInfo6hasImgENS_6ID_IMGE */
/* Demangled: P2::MWInfo::hasImg(P2::ID_IMG) const */
int _ZNK2P26MWInfo6hasImgENS_6ID_IMGE(void);

/* Symbol: _ZN2P29P2RequestC2ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE */
/* Demangled: P2::P2Request::P2Request(NSCam::Feature::ILog const&, android::sp<P2::IP2Frame> const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::P2InIDMap> const&) */
int _ZN2P29P2RequestC2ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImpC2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::P1NodeImp() */
int _ZN5NSCam2v38NSP1Node9P1NodeImpC2Ev(void);

/* Symbol: _ZN2P213P2ConfigParamC1Ev */
/* Demangled: P2::P2ConfigParam::P2ConfigParam() */
int _ZN2P213P2ConfigParamC1Ev(void);

/* Symbol: _ZNSt3__13mapIlN2P27MWFrame12ReleaseToken8MWStreamENS_4lessIlEENS_9allocatorINS_4pairIKlS4_EEEEEixERS9_ */
/* Demangled: std::__1::map<long, P2::MWFrame::ReleaseToken::MWStream, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, P2::MWFrame::ReleaseToken::MWStream> > >::operator[](long const&) */
int _ZNSt3__13mapIlN2P27MWFrame12ReleaseToken8MWStreamENS_4lessIlEENS_9allocatorINS_4pairIKlS4_EEEEEixERS9_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo7setMemoENS2_10CheckPointEllll */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::setMemo(NSCam::v3::NSP1Node::LogInfo::CheckPoint, long, long, long, long) */
int _ZN5NSCam2v38NSP1Node7LogInfo7setMemoENS2_10CheckPointEllll(void);

/* Symbol: _ZTv0_n24_N2P214BasicProcessor9P2PayloadD0Ev */
/* Demangled: virtual thunk to P2::BasicProcessor::P2Payload::~P2Payload() */
int _ZTv0_n24_N2P214BasicProcessor9P2PayloadD0Ev(void);

/* Symbol: _ZTv0_n80_N2P212MDPProcessor13onNotifyFlushEv */
/* Demangled: virtual thunk to P2::MDPProcessor::onNotifyFlush() */
int _ZTv0_n80_N2P212MDPProcessor13onNotifyFlushEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node18ConcurrenceControlE */
/* Demangled: vtable for NSCam::v3::NSP1Node::ConcurrenceControl */
extern void* _ZTVN5NSCam2v38NSP1Node18ConcurrenceControlE;

/* Symbol: _ZN5NSCam2v38NSP1Node9FrameNote3getEPN7android7String8E */
/* Demangled: NSCam::v3::NSP1Node::FrameNote::get(android::String8*) */
int _ZN5NSCam2v38NSP1Node9FrameNote3getEPN7android7String8E(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct13updateMetaSetEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::updateMetaSet() */
int _ZN5NSCam2v38NSP1Node9P1NodeAct13updateMetaSetEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE9setEnableEi */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::setEnable(int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE9setEnableEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node17getResizeMaxRatioEj */
/* Demangled: NSCam::v3::NSP1Node::getResizeMaxRatio(unsigned int) */
int _ZN5NSCam2v38NSP1Node17getResizeMaxRatioEj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr12sendActQueueERNS1_8P1QueActEi */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::sendActQueue(NSCam::v3::NSP1Node::P1QueAct&, int) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr12sendActQueueERNS1_8P1QueActEi(void);

/* Symbol: _ZTTN2P214BasicProcessor9P2PayloadE */
/* Demangled: VTT for P2::BasicProcessor::P2Payload */
extern void* _ZTTN2P214BasicProcessor9P2PayloadE;

/* Symbol: _ZN2P216CaptureProcessor11onGetStatusEv */
/* Demangled: P2::CaptureProcessor::onGetStatus() */
int _ZN2P216CaptureProcessor11onGetStatusEv(void);

/* Symbol: _ZN2P213P2ConfigParamC2Ev */
/* Demangled: P2::P2ConfigParam::P2ConfigParam() */
int _ZN2P213P2ConfigParamC2Ev(void);

/* Symbol: _ZN2P27MWFrame15getReleaseTokenEv */
/* Demangled: P2::MWFrame::getReleaseToken() */
int _ZN2P27MWFrame15getReleaseTokenEv(void);

/* Symbol: _ZN2P214BasicProcessor12onThreadStopEv */
/* Demangled: P2::BasicProcessor::onThreadStop() */
int _ZN2P214BasicProcessor12onThreadStopEv(void);

/* Symbol: _ZTv0_n24_N2P214BasicProcessor9P2PayloadD1Ev */
/* Demangled: virtual thunk to P2::BasicProcessor::P2Payload::~P2Payload() */
int _ZTv0_n24_N2P214BasicProcessor9P2PayloadD1Ev(void);

/* Symbol: _ZGVZN2P224isTrace1On_ReleaseBundleEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_ReleaseBundle()::sTrace */
extern void* _ZGVZN2P224isTrace1On_ReleaseBundleEvE6sTrace;

/* Symbol: _ZN2P213P2FrameHolderC1ERKN7android2spINS_8IP2FrameEEE */
/* Demangled: P2::P2FrameHolder::P2FrameHolder(android::sp<P2::IP2Frame> const&) */
int _ZN2P213P2FrameHolderC1ERKN7android2spINS_8IP2FrameEEE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread14waitEnqueParamERS6_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::waitEnqueParam(android::sp<P2::P2FrameRequest>&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread14waitEnqueParamERS6_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZN2P214BasicProcessor11processP2CBERKN5NSCam8NSIoPipe7QParamsEPNS0_8P2CookieE */
/* Demangled: P2::BasicProcessor::processP2CB(NSCam::NSIoPipe::QParams const&, P2::BasicProcessor::P2Cookie*) */
int _ZN2P214BasicProcessor11processP2CBERKN5NSCam8NSIoPipe7QParamsEPNS0_8P2CookieE(void);

/* Symbol: _ZGVZN2P228isTrace1On_DispatchProcessorEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_DispatchProcessor()::sTrace */
extern void* _ZGVZN2P228isTrace1On_DispatchProcessorEvE6sTrace;

/* Symbol: _ZN2P212P2DumpPluginD0Ev */
/* Demangled: P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZN2P212P2DumpPluginD0Ev(void);

/* Symbol: _ZN2P212MDPProcessor7onEnqueERKNS_8MDPParamE */
/* Demangled: P2::MDPProcessor::onEnque(P2::MDPParam const&) */
int _ZN2P212MDPProcessor7onEnqueERKNS_8MDPParamE(void);

/* Symbol: _ZThn40_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE(void);

/* Symbol: _ZN2P216CaptureProcessor11onWaitFlushEv */
/* Demangled: P2::CaptureProcessor::onWaitFlush() */
int _ZN2P216CaptureProcessor11onWaitFlushEv(void);

/* Symbol: _ZNK2P26MWInfo15getCustomOptionEv */
/* Demangled: P2::MWInfo::getCustomOption() const */
int _ZNK2P26MWInfo15getCustomOptionEv(void);

/* Symbol: _ZTv0_n64_N2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE */
/* Demangled: virtual thunk to P2::MWImg::registerPlugin(std::__1::list<android::sp<P2::P2ImgPlugin>, std::__1::allocator<android::sp<P2::P2ImgPlugin> > > const&) */
int _ZTv0_n64_N2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE(void);

/* Symbol: _ZN2P218P2StreamingNodeImp16parseConfigParamERKN5NSCam2v315P2StreamingNode12ConfigParamsE */
/* Demangled: P2::P2StreamingNodeImp::parseConfigParam(NSCam::v3::P2StreamingNode::ConfigParams const&) */
int _ZN2P218P2StreamingNodeImp16parseConfigParamERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void);

/* Symbol: _ZN2P27MWFrame12ReleaseTokenC2ERKN5NSCam7Feature4ILogERKN7android7String8ERKl */
/* Demangled: P2::MWFrame::ReleaseToken::ReleaseToken(NSCam::Feature::ILog const&, android::String8 const&, long const&) */
int _ZN2P27MWFrame12ReleaseTokenC2ERKN5NSCam7Feature4ILogERKN7android7String8ERKl(void);

/* Symbol: _ZZN2P225isTrace1On_P2BufferHandleEvE6sTrace */
/* Demangled: P2::isTrace1On_P2BufferHandle()::sTrace */
extern void* _ZZN2P225isTrace1On_P2BufferHandleEvE6sTrace;

/* Symbol: _ZNK2P218StreamingProcessor10prepareEISERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepareEIS(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor10prepareEISERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZN2P214BasicProcessor6init3AEv */
/* Demangled: P2::BasicProcessor::init3A() */
int _ZN2P214BasicProcessor6init3AEv(void);

/* Symbol: _ZN2P212P2DumpPluginD1Ev */
/* Demangled: P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZN2P212P2DumpPluginD1Ev(void);

/* Symbol: _ZN2P214MWFrameRequestD0Ev */
/* Demangled: P2::MWFrameRequest::~MWFrameRequest() */
int _ZN2P214MWFrameRequestD0Ev(void);

/* Symbol: _ZN2P26P2Meta11getMetaInfoENS_7ID_METAE */
/* Demangled: P2::P2Meta::getMetaInfo(P2::ID_META) */
int _ZN2P26P2Meta11getMetaInfoENS_7ID_METAE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr12dumpActQueueEi */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::dumpActQueue(int) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr12dumpActQueueEi(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
int _ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev(void);

/* Symbol: _ZThn40_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: non-virtual thunk to RAW16NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZThn40_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE9threshold */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9threshold;

/* Symbol: _ZN2P218StreamingProcessor9onFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_RKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::onFPipeCB(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam::MSG_TYPE, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor9onFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_RKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZTVN2P214BasicProcessor9P2PayloadE */
/* Demangled: vtable for P2::BasicProcessor::P2Payload */
extern void* _ZTVN2P214BasicProcessor9P2PayloadE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _ZTVN2P29P2CropperE */
/* Demangled: vtable for P2::P2Cropper */
extern void* _ZTVN2P29P2CropperE;

/* Symbol: _ZN5NSCam2v315P2StreamingNode14createInstanceENS1_10ePass2TypeENS0_8P2Common9UsageHintE */
/* Demangled: NSCam::v3::P2StreamingNode::createInstance(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint) */
int _ZN5NSCam2v315P2StreamingNode14createInstanceENS1_10ePass2TypeENS0_8P2Common9UsageHintE(void);

/* Symbol: _ZN2P29P2Request20updateDummyAppResultENS_7ID_METAE */
/* Demangled: P2::P2Request::updateDummyAppResult(P2::ID_META) */
int _ZN2P29P2Request20updateDummyAppResultENS_7ID_METAE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void);

/* Symbol: _ZTT12RAW16NodeImp */
/* Demangled: VTT for RAW16NodeImp */
extern void* _ZTT12RAW16NodeImp;

/* Symbol: _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*> >::push_back(P2::SMVRQueue::SMVRData*&&) */
int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZNSt3__112__deque_baseIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__deque_base<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::clear() */
int _ZNSt3__112__deque_baseIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZTv0_n128_N2P216P2CaptureNodeImp9getStatusEv */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::getStatus() */
int _ZTv0_n128_N2P216P2CaptureNodeImp9getStatusEv(void);

/* Symbol: _ZN7Request16getInImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_INS3_16IImageStreamInfoEEE */
/* Demangled: Request::getInImageBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::v3::IImageStreamInfo>&) */
int _ZN7Request16getInImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_INS3_16IImageStreamInfoEEE(void);

/* Symbol: _ZN2P214BasicProcessor9P2PayloadC1Ev */
/* Demangled: P2::BasicProcessor::P2Payload::P2Payload() */
int _ZN2P214BasicProcessor9P2PayloadC1Ev(void);

/* Symbol: _ZN2P212P2DumpPluginD2Ev */
/* Demangled: P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZN2P212P2DumpPluginD2Ev(void);

/* Symbol: _ZN2P214MWFrameRequestD1Ev */
/* Demangled: P2::MWFrameRequest::~MWFrameRequest() */
int _ZN2P214MWFrameRequestD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
int _ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev(void);

/* Symbol: _ZTv0_n40_N2P216CaptureProcessor8onUninitEv */
/* Demangled: virtual thunk to P2::CaptureProcessor::onUninit() */
int _ZTv0_n40_N2P216CaptureProcessor8onUninitEv(void);

/* Symbol: _ZNK2P29P2Cropper10getLMVInfoEv */
/* Demangled: P2::P2Cropper::getLMVInfo() const */
int _ZNK2P29P2Cropper10getLMVInfoEv(void);

/* Symbol: _ZN2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE */
/* Demangled: P2::P2DrawIDPlugin::onPlugin(P2::P2Img const*) */
int _ZN2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE(void);

/* Symbol: _ZN2P26P2Util9SimpleOutC1EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE */
/* Demangled: P2::P2Util::SimpleOut::SimpleOut(unsigned int, android::sp<P2::P2Request>, android::sp<P2::P2Img>&) */
int _ZN2P26P2Util9SimpleOutC1EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE(void);

/* Symbol: _ZNK2P218StreamingProcessor17isSubPixelEnabledEv */
/* Demangled: P2::StreamingProcessor::isSubPixelEnabled() const */
int _ZNK2P218StreamingProcessor17isSubPixelEnabledEv(void);

/* Symbol: _ZNK2P216P2CaptureNodeImp8toP2TypeEN5NSCam2v313P2CaptureNode10ePass2TypeE */
/* Demangled: P2::P2CaptureNodeImp::toP2Type(NSCam::v3::P2CaptureNode::ePass2Type) const */
int _ZNK2P216P2CaptureNodeImp8toP2TypeEN5NSCam2v313P2CaptureNode10ePass2TypeE(void);

/* Symbol: _ZTCN2P216P2CaptureNodeImpE512_N5NSCam2v38BaseNodeE */
/* Demangled: construction vtable for NSCam::v3::BaseNode-in-P2::P2CaptureNodeImp */
extern void* _ZTCN2P216P2CaptureNodeImpE512_N5NSCam2v38BaseNodeE;

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipSyncEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkSkipSync() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipSyncEv(void);

/* Symbol: _ZTv0_n40_N2P27MWFrame17beginBatchReleaseEv */
/* Demangled: virtual thunk to P2::MWFrame::beginBatchRelease() */
int _ZTv0_n40_N2P27MWFrame17beginBatchReleaseEv(void);

/* Symbol: _ZTv0_n48_NK5NSCam2v38BaseNode11getNodeNameEv */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::getNodeName() const */
int _ZTv0_n48_NK5NSCam2v38BaseNode11getNodeNameEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataGetENS1_11STREAM_METAEPNS_9IMetadataEiS5_ */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameMetadataGet(NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*, int, NSCam::IMetadata*) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataGetENS1_11STREAM_METAEPNS_9IMetadataEiS5_(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNK2P29P2Cropper10isEISAppOnEv */
/* Demangled: P2::P2Cropper::isEISAppOn() const */
int _ZNK2P29P2Cropper10isEISAppOnEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSEOS5_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1NodeAct>::operator=(android::sp<NSCam::v3::NSP1Node::P1NodeAct>&&) */
int _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSEOS5_(void);

/* Symbol: _ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void);

/* Symbol: _ZN2P29P2CropperD0Ev */
/* Demangled: P2::P2Cropper::~P2Cropper() */
int _ZN2P29P2CropperD0Ev(void);

/* Symbol: _ZTv0_n24_N2P217DispatchProcessorD0Ev */
/* Demangled: virtual thunk to P2::DispatchProcessor::~DispatchProcessor() */
int _ZTv0_n24_N2P217DispatchProcessorD0Ev(void);

/* Symbol: _ZN2P26MWMeta6detachEv */
/* Demangled: P2::MWMeta::detach() */
int _ZN2P26MWMeta6detachEv(void);

/* Symbol: _ZN2P29P2MetaSetC1Ev */
/* Demangled: P2::P2MetaSet::P2MetaSet() */
int _ZN2P29P2MetaSetC1Ev(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn12hasCropRatioEv */
/* Demangled: P2::P2Util::SimpleIn::hasCropRatio() const */
int _ZNK2P26P2Util8SimpleIn12hasCropRatioEv(void);

/* Symbol: _ZN5NSCam2v38BaseNode15onEarlyCallbackERKN7android2spINS0_14IPipelineFrameEEElRKNS_9IMetadataEi */
/* Demangled: NSCam::v3::BaseNode::onEarlyCallback(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata const&, int) */
int _ZN5NSCam2v38BaseNode15onEarlyCallbackERKN7android2spINS0_14IPipelineFrameEEElRKNS_9IMetadataEi(void);

/* Symbol: _ZN2P214BasicProcessor9P2PayloadC2Ev */
/* Demangled: P2::BasicProcessor::P2Payload::P2Payload() */
int _ZN2P214BasicProcessor9P2PayloadC2Ev(void);

/* Symbol: _ZN2P214MWFrameRequestD2Ev */
/* Demangled: P2::MWFrameRequest::~MWFrameRequest() */
int _ZN2P214MWFrameRequestD2Ev(void);

/* Symbol: _ZN2P213P2FrameHolder17beginBatchReleaseEv */
/* Demangled: P2::P2FrameHolder::beginBatchRelease() */
int _ZN2P213P2FrameHolder17beginBatchReleaseEv(void);

/* Symbol: _ZN2P218StreamingProcessor26checkFeaturePipeParamValidERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::checkFeaturePipeParamValid(android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor26checkFeaturePipeParamValidERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14syncHelperStopEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::syncHelperStop() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14syncHelperStopEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo4readENS2_10CheckPointEPN7android7String8E */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::read(NSCam::v3::NSP1Node::LogInfo::CheckPoint, android::String8*) */
int _ZN5NSCam2v38NSP1Node7LogInfo4readENS2_10CheckPointEPN7android7String8E(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE5enqueERKS6_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::enque(android::sp<P2::P2Request> const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE5enqueERKS6_(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEEC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P29ProcessorIjjNS_8MDPParamEEC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN2P218StreamingProcessor16prepareSMVRQueueERKN5NSCam7Feature4ILogERKNS_6P2Util8SimpleInEj */
/* Demangled: P2::StreamingProcessor::prepareSMVRQueue(NSCam::Feature::ILog const&, P2::P2Util::SimpleIn const&, unsigned int) */
int _ZN2P218StreamingProcessor16prepareSMVRQueueERKN5NSCam7Feature4ILogERKNS_6P2Util8SimpleInEj(void);

/* Symbol: _ZTv0_n32_N2P212P2DumpPluginD0Ev */
/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZTv0_n32_N2P212P2DumpPluginD0Ev(void);

/* Symbol: _ZTv0_n128_NK2P25MWImg9isDisplayEv */
/* Demangled: virtual thunk to P2::MWImg::isDisplay() const */
int _ZTv0_n128_NK2P25MWImg9isDisplayEv(void);

/* Symbol: _ZTv0_n144_NK2P25MWImg9isCaptureEv */
/* Demangled: virtual thunk to P2::MWImg::isCapture() const */
int _ZTv0_n144_NK2P25MWImg9isCaptureEv(void);

/* Symbol: _ZN2P218StreamingProcessor8sFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_ */
/* Demangled: P2::StreamingProcessor::sFPipeCB(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam::MSG_TYPE, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) */
int _ZN2P218StreamingProcessor8sFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_(void);

/* Symbol: _ZN2P214BasicProcessor12createCookieIN7android2spINS0_9P2PayloadEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_ */
/* Demangled: P2::BasicProcessor::P2Cookie* P2::BasicProcessor::createCookie<android::sp<P2::BasicProcessor::P2Payload> >(NSCam::Feature::ILog const&, android::sp<P2::BasicProcessor::P2Payload> const&) */
int _ZN2P214BasicProcessor12createCookieIN7android2spINS0_9P2PayloadEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor13P2RequestPack13getNumDisplayEv */
/* Demangled: P2::StreamingProcessor::P2RequestPack::getNumDisplay() const */
int _ZNK2P218StreamingProcessor13P2RequestPack13getNumDisplayEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9waitReadyEv */
/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::waitReady() */
int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9waitReadyEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node12P1ConnectLMVEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1ConnectLMV>::operator=(NSCam::v3::NSP1Node::P1ConnectLMV*) */
int _ZN7android2spIN5NSCam2v38NSP1Node12P1ConnectLMVEEaSEPS4_(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEM11JpegNodeImpFvRN7android2spI12encode_frameEEEPS7_NS_17reference_wrapperISB_EEEEEEEPvSJ_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (JpegNodeImp::*)(android::sp<encode_frame>&), JpegNodeImp*, std::__1::reference_wrapper<android::sp<encode_frame> > > >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEM11JpegNodeImpFvRN7android2spI12encode_frameEEEPS7_NS_17reference_wrapperISB_EEEEEEEPvSJ_(void);

/* Symbol: _ZN2P29P2CropperD1Ev */
/* Demangled: P2::P2Cropper::~P2Cropper() */
int _ZN2P29P2CropperD1Ev(void);

/* Symbol: _ZTv0_n24_N2P217DispatchProcessorD1Ev */
/* Demangled: virtual thunk to P2::DispatchProcessor::~DispatchProcessor() */
int _ZTv0_n24_N2P217DispatchProcessorD1Ev(void);

/* Symbol: _ZN2P29P2MetaSetC2Ev */
/* Demangled: P2::P2MetaSet::P2MetaSet() */
int _ZN2P29P2MetaSetC2Ev(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node8P1QueActE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1QueAct */
extern void* _ZTVN5NSCam2v38NSP1Node8P1QueActE;

/* Symbol: _ZN2P214BasicProcessor8P2CookieD1Ev */
/* Demangled: P2::BasicProcessor::P2Cookie::~P2Cookie() */
int _ZN2P214BasicProcessor8P2CookieD1Ev(void);

/* Symbol: _ZGVZ25isTrace1On_MWFrameRequestvE4sVal */
/* Demangled: guard variable for isTrace1On_MWFrameRequest()::sVal */
extern void* _ZGVZ25isTrace1On_MWFrameRequestvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node18StuffBufferManager18releaseStoreBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferManager::releaseStoreBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node18StuffBufferManager18releaseStoreBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZZ25isTrace1On_ScanlinePluginvE6sTrace */
/* Demangled: isTrace1On_ScanlinePlugin()::sTrace */
extern void* _ZZ25isTrace1On_ScanlinePluginvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct14mapFrameStreamEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::mapFrameStream() */
int _ZN5NSCam2v38NSP1Node9P1NodeAct14mapFrameStreamEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZTv0_n32_N2P212P2DumpPluginD1Ev */
/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZTv0_n32_N2P212P2DumpPluginD1Ev(void);

/* Symbol: _ZN2P27MWFrame17notifyNextCaptureEii */
/* Demangled: P2::MWFrame::notifyNextCapture(int, int) */
int _ZN2P27MWFrame17notifyNextCaptureEii(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17getCurrentBinSizeEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getCurrentBinSize() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17getCurrentBinSizeEv(void);

/* Symbol: _ZTv0_n24_N2P216CaptureProcessorD0Ev */
/* Demangled: virtual thunk to P2::CaptureProcessor::~CaptureProcessor() */
int _ZTv0_n24_N2P216CaptureProcessorD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorIlE10do_destroyEPvm */
/* Demangled: android::SortedVector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorIlE10do_destroyEPvm(void);

/* Symbol: _ZN2P216CaptureProcessor13onThreadStartEv */
/* Demangled: P2::CaptureProcessor::onThreadStart() */
int _ZN2P216CaptureProcessor13onThreadStartEv(void);

/* Symbol: _ZN2P29P2CropperD2Ev */
/* Demangled: P2::P2Cropper::~P2Cropper() */
int _ZN2P29P2CropperD2Ev(void);

/* Symbol: _ZN2P214BasicProcessor8P2CookieD2Ev */
/* Demangled: P2::BasicProcessor::P2Cookie::~P2Cookie() */
int _ZN2P214BasicProcessor8P2CookieD2Ev(void);

/* Symbol: _ZTv0_n64_N2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZTv0_n64_N2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZTTN2P216P2ScanlinePluginE */
/* Demangled: VTT for P2::P2ScanlinePlugin */
extern void* _ZTTN2P216P2ScanlinePluginE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15generateHalMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKNS_9IMetadataESG_RSE_j */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateHalMeta(NSCam::v3::NSP1Node::P1QueAct&, NS3Av3::MetaSet_T const&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NSCam::IMetadata const&, NSCam::IMetadata const&, NSCam::IMetadata&, unsigned int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15generateHalMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKNS_9IMetadataESG_RSE_j(void);

/* Symbol: _ZN2P217DispatchProcessorC1Ev */
/* Demangled: P2::DispatchProcessor::DispatchProcessor() */
int _ZN2P217DispatchProcessorC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, P2::ID_META>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_META>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_META> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK2P218StreamingProcessor11isBatchSMVREv */
/* Demangled: P2::StreamingProcessor::isBatchSMVR() const */
int _ZNK2P218StreamingProcessor11isBatchSMVREv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11JpegNodeImp6uninitEv */
/* Demangled: JpegNodeImp::uninit() */
int _ZN11JpegNodeImp6uninitEv(void);

/* Symbol: _ZN2P26P2Util11xmakeTuningERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOEPN6NS3Av37IHalISPERNS_9P2MetaSetE */
/* Demangled: P2::P2Util::xmakeTuning(NSCam::Feature::P2Util::P2Pack const&, P2::P2Util::SimpleIO const&, NS3Av3::IHalISP*, P2::P2MetaSet&) */
int _ZN2P26P2Util11xmakeTuningERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOEPN6NS3Av37IHalISPERNS_9P2MetaSetE(void);

/* Symbol: _ZNK2P26MWInfo7toImgIDEl */
/* Demangled: P2::MWInfo::toImgID(long) const */
int _ZNK2P26MWInfo7toImgIDEl(void);

/* Symbol: _ZTv0_n24_N2P26MWMetaD0Ev */
/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
int _ZTv0_n24_N2P26MWMetaD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14setPowerNotifyEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setPowerNotify(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14setPowerNotifyEi(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE(void);

/* Symbol: _ZTv0_n24_N2P216CaptureProcessorD1Ev */
/* Demangled: virtual thunk to P2::CaptureProcessor::~CaptureProcessor() */
int _ZTv0_n24_N2P216CaptureProcessorD1Ev(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node7LogInfo4DataE */
/* Demangled: vtable for NSCam::v3::NSP1Node::LogInfo::Data */
extern void* _ZTVN5NSCam2v38NSP1Node7LogInfo4DataE;

/* Symbol: _ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android2spIN5NSCam2v315IMetaStreamInfoEEE */
/* Demangled: P2::MWInfo::initMetaInfo(P2::ID_META, android::sp<NSCam::v3::IMetaStreamInfo> const&) */
int _ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android2spIN5NSCam2v315IMetaStreamInfoEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18StuffBufferManager17collectBufferInfoEjiiNS_5MSizeERNSt3__16vectorIjNS4_9allocatorIjEEEE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferManager::collectBufferInfo(unsigned int, int, int, NSCam::MSize, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN5NSCam2v38NSP1Node18StuffBufferManager17collectBufferInfoEjiiNS_5MSizeERNSt3__16vectorIjNS4_9allocatorIjEEEE(void);

/* Symbol: _ZN2P217DispatchProcessor12onThreadStopEv */
/* Demangled: P2::DispatchProcessor::onThreadStop() */
int _ZN2P217DispatchProcessor12onThreadStopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZN2P217DispatchProcessorC2Ev */
/* Demangled: P2::DispatchProcessor::DispatchProcessor() */
int _ZN2P217DispatchProcessorC2Ev(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTv0_n48_NK2P218P2StreamingNodeImp11getNodeNameEv */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::getNodeName() const */
int _ZTv0_n48_NK2P218P2StreamingNodeImp11getNodeNameEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSERKS5_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1NodeAct>::operator=(android::sp<NSCam::v3::NSP1Node::P1NodeAct> const&) */
int _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSERKS5_(void);

/* Symbol: _ZN11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: JpegNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n24_N2P26MWMetaD1Ev */
/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
int _ZTv0_n24_N2P26MWMetaD1Ev(void);

/* Symbol: _ZTv0_n24_N2P29P2RequestD0Ev */
/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
int _ZTv0_n24_N2P29P2RequestD0Ev(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN2P29P2InIDMap7SubMetaE */
/* Demangled: P2::P2InIDMap::SubMeta */
extern void* _ZN2P29P2InIDMap7SubMetaE;

/* Symbol: _ZN2P218StreamingProcessor7PayloadC1EPS0_RKN5NSCam7Feature4ILogEj */
/* Demangled: P2::StreamingProcessor::Payload::Payload(P2::StreamingProcessor*, NSCam::Feature::ILog const&, unsigned int) */
int _ZN2P218StreamingProcessor7PayloadC1EPS0_RKN5NSCam7Feature4ILogEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE14__assign_multiINS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEEEEvT_SS_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE14__assign_multiINS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEEEEvT_SS_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessEnqueFrameERNS1_8P1QueJobE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessEnqueFrame(NSCam::v3::NSP1Node::P1QueJob&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessEnqueFrameERNS1_8P1QueJobE(void);

/* Symbol: _ZNK2P218P2StreamingNodeImp9getNodeIdEv */
/* Demangled: P2::P2StreamingNodeImp::getNodeId() const */
int _ZNK2P218P2StreamingNodeImp9getNodeIdEv(void);

/* Symbol: _ZN2P29SMVRQueue8SMVRDataC1Ev */
/* Demangled: P2::SMVRQueue::SMVRData::SMVRData() */
int _ZN2P29SMVRQueue8SMVRDataC1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSERKS6_ */
/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelper>::operator=(android::sp<NSCam::v3::Utils::Imp::ISyncHelper> const&) */
int _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSERKS6_(void);

/* Symbol: _ZThn40_N12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE */
/* Demangled: non-virtual thunk to RAW16NodeImp::config(NSCam::v3::RAW16Node::ConfigParams const&) */
int _ZThn40_N12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE(void);

/* Symbol: _ZN2P25MWImg17updateVRTimestampEjRKl */
/* Demangled: P2::MWImg::updateVRTimestamp(unsigned int, long const&) */
int _ZN2P25MWImg17updateVRTimestampEjRKl(void);

/* Symbol: _ZN2P27MWFrameD0Ev */
/* Demangled: P2::MWFrame::~MWFrame() */
int _ZN2P27MWFrameD0Ev(void);

/* Symbol: _ZNK2P27MWFrame12getMWFrameIDEv */
/* Demangled: P2::MWFrame::getMWFrameID() const */
int _ZNK2P27MWFrame12getMWFrameIDEv(void);

/* Symbol: _ZTVN5NSCam2v38BaseNodeE */
/* Demangled: vtable for NSCam::v3::BaseNode */
extern void* _ZTVN5NSCam2v38BaseNodeE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15checkConstraintEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::checkConstraint() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15checkConstraintEv(void);

/* Symbol: _ZN7Request18acquireImageBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_18IImageStreamBufferEEEi */
/* Demangled: Request::acquireImageBuffer(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IImageStreamBuffer>&, int) */
int _ZN7Request18acquireImageBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_18IImageStreamBufferEEEi(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN2P216CaptureProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: P2::CaptureProcessor::onInit(P2::P2InitParam const&) */
int _ZN2P216CaptureProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZNK2P29P2Request11isValidMetaENS_7ID_METAE */
/* Demangled: P2::P2Request::isValidMeta(P2::ID_META) const */
int _ZNK2P29P2Request11isValidMetaENS_7ID_METAE(void);

/* Symbol: _ZTv0_n24_N2P29P2RequestD1Ev */
/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
int _ZTv0_n24_N2P29P2RequestD1Ev(void);

/* Symbol: _ZGVZ20isTrace1On_VRGrallocvE4sVal */
/* Demangled: guard variable for isTrace1On_VRGralloc()::sVal */
extern void* _ZGVZ20isTrace1On_VRGrallocvE4sVal;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n56_N2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi */
/* Demangled: virtual thunk to P2::CaptureRequestCallback::onCompleted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>, int) */
int _ZTv0_n56_N2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi(void);

/* Symbol: _ZN5NSCam2v38BaseNode4kickEv */
/* Demangled: NSCam::v3::BaseNode::kick() */
int _ZN5NSCam2v38BaseNode4kickEv(void);

/* Symbol: _ZTVN5NSCam2v315DurationProfileE */
/* Demangled: vtable for NSCam::v3::DurationProfile */
extern void* _ZTVN5NSCam2v315DurationProfileE;

/* Symbol: _ZNSt3__16vectorIN11JpegBufPool6BufLotENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> >::__push_back_slow_path<JpegBufPool::BufLot const&>(JpegBufPool::BufLot const&) */
int _ZNSt3__16vectorIN11JpegBufPool6BufLotENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTC12RAW16NodeImp0_N5NSCam2v313IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-RAW16NodeImp */
extern void* _ZTC12RAW16NodeImp0_N5NSCam2v313IPipelineNodeE;

/* Symbol: _ZN2P29P2Request20releaseImageWithLockENS_6ID_IMGE */
/* Demangled: P2::P2Request::releaseImageWithLock(P2::ID_IMG) */
int _ZN2P29P2Request20releaseImageWithLockENS_6ID_IMGE(void);

/* Symbol: _ZN2P214MWFrameRequest10printIOMapERKN5NSCam2v314IPipelineFrame12InfoIOMapSetE */
/* Demangled: P2::MWFrameRequest::printIOMap(NSCam::v3::IPipelineFrame::InfoIOMapSet const&) */
int _ZN2P214MWFrameRequest10printIOMapERKN5NSCam2v314IPipelineFrame12InfoIOMapSetE(void);

/* Symbol: _ZN2P29SMVRQueue8SMVRDataC2Ev */
/* Demangled: P2::SMVRQueue::SMVRData::SMVRData() */
int _ZN2P29SMVRQueue8SMVRDataC2Ev(void);

/* Symbol: _ZN2P218StreamingProcessor10updateRSSOERKN5NSCam7Feature4ILogERKN7android2spINS_5P2ImgEEEj */
/* Demangled: P2::StreamingProcessor::updateRSSO(NSCam::Feature::ILog const&, android::sp<P2::P2Img> const&, unsigned int) */
int _ZN2P218StreamingProcessor10updateRSSOERKN5NSCam7Feature4ILogERKN7android2spINS_5P2ImgEEEj(void);

/* Symbol: _ZTTN2P216P2MetadataHandleE */
/* Demangled: VTT for P2::P2MetadataHandle */
extern void* _ZTTN2P216P2MetadataHandleE;

/* Symbol: _ZN2P214BasicProcessor11onWaitFlushEv */
/* Demangled: P2::BasicProcessor::onWaitFlush() */
int _ZN2P214BasicProcessor11onWaitFlushEv(void);

/* Symbol: _ZN2P214BasicProcessor4p2CBERN5NSCam8NSIoPipe7QParamsE */
/* Demangled: P2::BasicProcessor::p2CB(NSCam::NSIoPipe::QParams&) */
int _ZN2P214BasicProcessor4p2CBERN5NSCam8NSIoPipe7QParamsE(void);

/* Symbol: _ZN2P27MWFrameD1Ev */
/* Demangled: P2::MWFrame::~MWFrame() */
int _ZN2P27MWFrameD1Ev(void);

/* Symbol: _ZTv0_n24_N2P214MWFrameRequestD0Ev */
/* Demangled: virtual thunk to P2::MWFrameRequest::~MWFrameRequest() */
int _ZTv0_n24_N2P214MWFrameRequestD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl18checkThreadStandbyEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkThreadStandby() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl18checkThreadStandbyEv(void);

/* Symbol: _ZTv0_n72_N10PDENodeImp6uninitEv */
/* Demangled: virtual thunk to PDENodeImp::uninit() */
int _ZTv0_n72_N10PDENodeImp6uninitEv(void);

/* Symbol: _ZTVN2P218StreamingProcessor14PartialPayloadE */
/* Demangled: vtable for P2::StreamingProcessor::PartialPayload */
extern void* _ZTVN2P218StreamingProcessor14PartialPayloadE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZThn40_N11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE */
/* Demangled: non-virtual thunk to JpegNodeImp::config(NSCam::v3::JpegNode::ConfigParams const&) */
int _ZThn40_N11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE(void);

/* Symbol: _ZTv0_n48_N2P214BasicProcessor13onThreadStartEv */
/* Demangled: virtual thunk to P2::BasicProcessor::onThreadStart() */
int _ZTv0_n48_N2P214BasicProcessor13onThreadStartEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl11setAidUsageEi */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::setAidUsage(int) */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl11setAidUsageEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp16findPortBufIndexERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS1_8P1QueJobE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::findPortBufIndex(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::v3::NSP1Node::P1QueJob&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp16findPortBufIndexERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS1_8P1QueJobE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN2P217DispatchProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: P2::DispatchProcessor::onInit(P2::P2InitParam const&) */
int _ZN2P217DispatchProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE */
/* Demangled: VTT for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread */
extern void* _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE;

/* Symbol: _ZN2P27MWFrameD2Ev */
/* Demangled: P2::MWFrame::~MWFrame() */
int _ZN2P27MWFrameD2Ev(void);

/* Symbol: _ZTv0_n24_N2P214MWFrameRequestD1Ev */
/* Demangled: virtual thunk to P2::MWFrameRequest::~MWFrameRequest() */
int _ZTv0_n24_N2P214MWFrameRequestD1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<P2::P2FrameRequest>, std::__1::allocator<android::sp<P2::P2FrameRequest> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE5clearEv(void);

/* Symbol: _ZN2P218StreamingProcessor19getFeatureUsageHintERKN5NSCam7Feature6P2Util12P2ConfigInfoE */
/* Demangled: P2::StreamingProcessor::getFeatureUsageHint(NSCam::Feature::P2Util::P2ConfigInfo const&) */
int _ZN2P218StreamingProcessor19getFeatureUsageHintERKN5NSCam7Feature6P2Util12P2ConfigInfoE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl10setDropNumEi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::setDropNum(int) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl10setDropNumEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*> >::push_front(P2::MDPParam*&&) */
int _ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*> >::push_back(P2::MDPParam*&&) */
int _ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN2P218P2StreamingNodeImpD0Ev */
/* Demangled: P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZN2P218P2StreamingNodeImpD0Ev(void);

/* Symbol: _ZN2P29P2InIDMap8MainMetaE */
/* Demangled: P2::P2InIDMap::MainMeta */
extern void* _ZN2P29P2InIDMap8MainMetaE;

/* Symbol: _ZN2P29P2RequestC2ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE */
/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, android::sp<P2::IP2Frame> const&) */
int _ZN2P29P2RequestC2ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE(void);

/* Symbol: _ZTv0_n64_N2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: virtual thunk to P2::StreamingProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZTv0_n64_N2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__push_back_slow_path<NSCam::NSIoPipe::PortID const&>(NSCam::NSIoPipe::PortID const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker11doWaitReadyEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::doWaitReady() */
int _ZN5NSCam2v38NSP1Node13TimingChecker11doWaitReadyEv(void);

/* Symbol: _ZN2P29P2Request12updateResultEi */
/* Demangled: P2::P2Request::updateResult(int) */
int _ZN2P29P2Request12updateResultEi(void);

/* Symbol: _ZNK2P218StreamingProcessor16makeRequestPacksERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE */
/* Demangled: P2::StreamingProcessor::makeRequestPacks(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&, std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > >&) const */
int _ZNK2P218StreamingProcessor16makeRequestPacksERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn12getInputSizeEv */
/* Demangled: P2::P2Util::SimpleIn::getInputSize() const */
int _ZNK2P26P2Util8SimpleIn12getInputSizeEv(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO9isResizedEv */
/* Demangled: P2::P2Util::SimpleIO::isResized() const */
int _ZNK2P26P2Util8SimpleIO9isResizedEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16TimingCheckerMgr12createClientEPKcjNS1_13TimingChecker10EVENT_TYPEE */
/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::createClient(char const*, unsigned int, NSCam::v3::NSP1Node::TimingChecker::EVENT_TYPE) */
int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr12createClientEPKcjNS1_13TimingChecker10EVENT_TYPEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > > >::__emplace_unique_key_args<long, std::__1::pair<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > >(long const&, std::__1::pair<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P218StreamingProcessor12onThreadStopEv */
/* Demangled: P2::StreamingProcessor::onThreadStop() */
int _ZN2P218StreamingProcessor12onThreadStopEv(void);

/* Symbol: _ZN7android2spIN5NSCam16IImageBufferHeapEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IImageBufferHeap>::operator=(NSCam::IImageBufferHeap*) */
int _ZN7android2spIN5NSCam16IImageBufferHeapEEaSEPS2_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_(void);

/* Symbol: _ZGVZ24isTrace1On_Streaming_FSCvE6sTrace */
/* Demangled: guard variable for isTrace1On_Streaming_FSC()::sTrace */
extern void* _ZGVZ24isTrace1On_Streaming_FSCvE6sTrace;

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvm */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_6MRectFEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::MRectF> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_6MRectFEEE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlReleasingEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE2EEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onEvtCtrlReleasing(NSCam::v3::NSP1Node::P1NodeImp*, NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)2>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlReleasingEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE2EEE(void);

/* Symbol: _ZN2P214BasicProcessor13onThreadStartEv */
/* Demangled: P2::BasicProcessor::onThreadStart() */
int _ZN2P214BasicProcessor13onThreadStartEv(void);

/* Symbol: _ZN2P218P2StreamingNodeImpD1Ev */
/* Demangled: P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZN2P218P2StreamingNodeImpD1Ev(void);

/* Symbol: _ZN2P26P2Util8SimpleInC1EjN7android2spINS_9P2RequestEEE */
/* Demangled: P2::P2Util::SimpleIn::SimpleIn(unsigned int, android::sp<P2::P2Request>) */
int _ZN2P26P2Util8SimpleInC1EjN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZTVN2P218StreamingProcessor7PayloadE */
/* Demangled: vtable for P2::StreamingProcessor::Payload */
extern void* _ZTVN2P218StreamingProcessor7PayloadE;

/* Symbol: _ZTVN12RAW16NodeImp12UnpackThreadE */
/* Demangled: vtable for RAW16NodeImp::UnpackThread */
extern void* _ZTVN12RAW16NodeImp12UnpackThreadE;

/* Symbol: _ZN2P29P2Request16updateMetaResultEi */
/* Demangled: P2::P2Request::updateMetaResult(int) */
int _ZN2P29P2Request16updateMetaResultEi(void);

/* Symbol: _ZNK2P29P2Cropper8toActiveERKN5NSCam8NSIoPipe9MCropRectEi */
/* Demangled: P2::P2Cropper::toActive(NSCam::NSIoPipe::MCropRect const&, int) const */
int _ZNK2P29P2Cropper8toActiveERKN5NSCam8NSIoPipe9MCropRectEi(void);

/* Symbol: _ZTv0_n24_N2P218StreamingProcessorD0Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::~StreamingProcessor() */
int _ZTv0_n24_N2P218StreamingProcessorD0Ev(void);

/* Symbol: _ZTv0_n96_N2P218StreamingProcessor6onIdleEv */
/* Demangled: virtual thunk to P2::StreamingProcessor::onIdle() */
int _ZTv0_n96_N2P218StreamingProcessor6onIdleEv(void);

/* Symbol: _ZZ20isTrace1On_ProcessorvE4sVal */
/* Demangled: isTrace1On_Processor()::sVal */
extern void* _ZZ20isTrace1On_ProcessorvE4sVal;

/* Symbol: _ZNK2P26MWInfo10supportDREEv */
/* Demangled: P2::MWInfo::supportDRE() const */
int _ZNK2P26MWInfo10supportDREEv(void);

/* Symbol: _ZTTN2P25P2ImgE */
/* Demangled: VTT for P2::P2Img */
extern void* _ZTTN2P25P2ImgE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp16eventStreamingOnEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::eventStreamingOn() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp16eventStreamingOnEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeActD0Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::~P1NodeAct() */
int _ZN5NSCam2v38NSP1Node9P1NodeActD0Ev(void);

/* Symbol: _ZN12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: RAW16NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN2P211P2ImgPluginE */
/* Demangled: vtable for P2::P2ImgPlugin */
extern void* _ZTVN2P211P2ImgPluginE;

/* Symbol: _ZN2P213P2FrameHolderC2ERKN7android2spINS_8IP2FrameEEE */
/* Demangled: P2::P2FrameHolder::P2FrameHolder(android::sp<P2::IP2Frame> const&) */
int _ZN2P213P2FrameHolderC2ERKN7android2spINS_8IP2FrameEEE(void);

/* Symbol: _ZNK2P25P2Img16getTransformSizeEv */
/* Demangled: P2::P2Img::getTransformSize() const */
int _ZNK2P25P2Img16getTransformSizeEv(void);

/* Symbol: _ZN2P218P2StreamingNodeImpD2Ev */
/* Demangled: P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZN2P218P2StreamingNodeImpD2Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor14prepareEISMaskERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE */
/* Demangled: P2::StreamingProcessor::prepareEISMask(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) const */
int _ZNK2P218StreamingProcessor14prepareEISMaskERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void);

/* Symbol: _ZN2P26P2Util8SimpleInC2EjN7android2spINS_9P2RequestEEE */
/* Demangled: P2::P2Util::SimpleIn::SimpleIn(unsigned int, android::sp<P2::P2Request>) */
int _ZN2P26P2Util8SimpleInC2EjN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZN2P216P2CaptureNodeImpD0Ev */
/* Demangled: P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZN2P216P2CaptureNodeImpD0Ev(void);

/* Symbol: _ZN11JpegNodeImp16getBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_16IImageBufferHeapEEERNS1_INS2_12IImageBufferEEEi */
/* Demangled: JpegNodeImp::getBufferAndLock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBufferHeap>&, android::sp<NSCam::IImageBuffer>&, int) */
int _ZN11JpegNodeImp16getBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_16IImageBufferHeapEEERNS1_INS2_12IImageBufferEEEi(void);

/* Symbol: _ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android2spIN5NSCam2v316IImageStreamInfoEEE */
/* Demangled: P2::MWInfo::initImgInfo(P2::ID_IMG, android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android2spIN5NSCam2v316IImageStreamInfoEEE(void);

/* Symbol: _ZNK2P214MWFrameRequest10findP2MetaENS_7ID_METAE */
/* Demangled: P2::MWFrameRequest::findP2Meta(P2::ID_META) const */
int _ZNK2P214MWFrameRequest10findP2MetaENS_7ID_METAE(void);

/* Symbol: _ZZ24isTrace1On_StreamingNodevE4sVal */
/* Demangled: isTrace1On_StreamingNode()::sVal */
extern void* _ZZ24isTrace1On_StreamingNodevE4sVal;

/* Symbol: _ZTv0_n24_N2P218StreamingProcessorD1Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::~StreamingProcessor() */
int _ZTv0_n24_N2P218StreamingProcessorD1Ev(void);

/* Symbol: _ZTv0_n88_N2P216P2CaptureNodeImp5flushEv */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::flush() */
int _ZTv0_n88_N2P216P2CaptureNodeImp5flushEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm(void);

/* Symbol: _ZZN2P227isTrace1On_CaptureProcessorEvE6sTrace */
/* Demangled: P2::isTrace1On_CaptureProcessor()::sTrace */
extern void* _ZZN2P227isTrace1On_CaptureProcessorEvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector10requireJobERNS1_8P1QueJobE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::requireJob(NSCam::v3::NSP1Node::P1QueJob&) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector10requireJobERNS1_8P1QueJobE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeActD1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::~P1NodeAct() */
int _ZN5NSCam2v38NSP1Node9P1NodeActD1Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl17checkReceiveFrameEPNS_9IMetadataE */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkReceiveFrame(NSCam::IMetadata*) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl17checkReceiveFrameEPNS_9IMetadataE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE200_NS5_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread */
extern void* _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE200_NS5_6ThreadE;

/* Symbol: _ZZ24isTrace1On_Streaming_EISvE6sTrace */
/* Demangled: isTrace1On_Streaming_EIS()::sTrace */
extern void* _ZZ24isTrace1On_Streaming_EISvE6sTrace;

/* Symbol: _ZN2P216P2CaptureNodeImpD1Ev */
/* Demangled: P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZN2P216P2CaptureNodeImpD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IMetadataProvider>::sp(NSCam::IMetadataProvider*) */
int _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node21ProcedureStageControlE */
/* Demangled: vtable for NSCam::v3::NSP1Node::ProcedureStageControl */
extern void* _ZTVN5NSCam2v38NSP1Node21ProcedureStageControlE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadC1EPS7_i */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::ProcessThread(P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >*, int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadC1EPS7_i(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__push_back_slow_path<android::sp<NSCam::IImageBuffer> >(android::sp<NSCam::IImageBuffer>&&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN2P218P2StreamingNodeImp19prepareFrameRequestERKN5NSCam7Feature4ILogERN7android2spINS_14P2FrameRequestEEERKNS7_INS_7MWFrameEEE */
/* Demangled: P2::P2StreamingNodeImp::prepareFrameRequest(NSCam::Feature::ILog const&, android::sp<P2::P2FrameRequest>&, android::sp<P2::MWFrame> const&) */
int _ZN2P218P2StreamingNodeImp19prepareFrameRequestERKN5NSCam7Feature4ILogERN7android2spINS_14P2FrameRequestEEERKNS7_INS_7MWFrameEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN10PDENodeImpC1Ev */
/* Demangled: PDENodeImp::PDENodeImp() */
int _ZN10PDENodeImpC1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN2P28MDPParamENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<P2::MDPParam, std::__1::allocator<P2::MDPParam> >::clear() */
int _ZNSt3__112__deque_baseIN2P28MDPParamENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P214BasicProcessor9P2PayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >::__push_back_slow_path<android::sp<P2::BasicProcessor::P2Payload> const&>(android::sp<P2::BasicProcessor::P2Payload> const&) */
int _ZNSt3__16vectorIN7android2spIN2P214BasicProcessor9P2PayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZTv0_n168_N2P25MWImg6detachEv */
/* Demangled: virtual thunk to P2::MWImg::detach() */
int _ZTv0_n168_N2P25MWImg6detachEv(void);

/* Symbol: _ZTCN2P216P2ScanlinePluginE0_NS_11P2ImgPluginE */
/* Demangled: construction vtable for P2::P2ImgPlugin-in-P2::P2ScanlinePlugin */
extern void* _ZTCN2P216P2ScanlinePluginE0_NS_11P2ImgPluginE;

/* Symbol: _ZN7Request10lockOutImgEv */
/* Demangled: Request::lockOutImg() */
int _ZN7Request10lockOutImgEv(void);

/* Symbol: _ZTTN2P218StreamingProcessorE */
/* Demangled: VTT for P2::StreamingProcessor */
extern void* _ZTTN2P218StreamingProcessorE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeActD2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::~P1NodeAct() */
int _ZN5NSCam2v38NSP1Node9P1NodeActD2Ev(void);

/* Symbol: _ZN2P216CaptureProcessor12abortRequestEi */
/* Demangled: P2::CaptureProcessor::abortRequest(int) */
int _ZN2P216CaptureProcessor12abortRequestEi(void);

/* Symbol: _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: P2::DispatchProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZN2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZN2P29P2RequestC2ERKN7android2spIS0_EE */
/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&) */
int _ZN2P29P2RequestC2ERKN7android2spIS0_EE(void);

/* Symbol: _ZN2P216CaptureProcessor11releaseMetaEN7android2spINS_9P2RequestEEENS_7ID_METAE */
/* Demangled: P2::CaptureProcessor::releaseMeta(android::sp<P2::P2Request>, P2::ID_META) */
int _ZN2P216CaptureProcessor11releaseMetaEN7android2spINS_9P2RequestEEENS_7ID_METAE(void);

/* Symbol: _ZN2P27MWFrame12ReleaseToken14registerStreamERKlRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: P2::MWFrame::ReleaseToken::registerStream(long const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P27MWFrame12ReleaseToken14registerStreamERKlRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN2P216P2CaptureNodeImpD2Ev */
/* Demangled: P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZN2P216P2CaptureNodeImpD2Ev(void);

/* Symbol: _ZTv0_n152_N2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::config(NSCam::v3::P2StreamingNode::ConfigParams const&) */
int _ZTv0_n152_N2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node17P1NotifyYuvR1CropE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NotifyYuvR1Crop */
extern void* _ZTVN5NSCam2v38NSP1Node17P1NotifyYuvR1CropE;

/* Symbol: _ZTTN11JpegNodeImp10jpeg_frameE */
/* Demangled: VTT for JpegNodeImp::jpeg_frame */
extern void* _ZTTN11JpegNodeImp10jpeg_frameE;

/* Symbol: _ZN10PDENodeImpC2Ev */
/* Demangled: PDENodeImp::PDENodeImp() */
int _ZN10PDENodeImpC2Ev(void);

/* Symbol: _ZTv0_n88_N2P214BasicProcessor11onWaitFlushEv */
/* Demangled: virtual thunk to P2::BasicProcessor::onWaitFlush() */
int _ZTv0_n88_N2P214BasicProcessor11onWaitFlushEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE15__assign_uniqueIPKNS_4pairIKiS9_EEEEvT_SO_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > > >::__assign_unique<std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const*>(std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const*, std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const*) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE15__assign_uniqueIPKNS_4pairIKiS9_EEEEvT_SO_(void);

/* Symbol: _ZGVZ18isTrace1On_MWFramevE6sTrace */
/* Demangled: guard variable for isTrace1On_MWFrame()::sTrace */
extern void* _ZGVZ18isTrace1On_MWFramevE6sTrace;

/* Symbol: _ZTVN7android4ListINS_2spIN11JpegNodeImp10jpeg_frameEEEEE */
/* Demangled: vtable for android::List<android::sp<JpegNodeImp::jpeg_frame> > */
extern void* _ZTVN7android4ListINS_2spIN11JpegNodeImp10jpeg_frameEEEEE;

/* Symbol: _ZZN2P216isTrace1On_MWImgEvE6sTrace */
/* Demangled: P2::isTrace1On_MWImg()::sTrace */
extern void* _ZZN2P216isTrace1On_MWImgEvE6sTrace;

/* Symbol: _ZN2P214MWFrameRequest17notifyNextCaptureEii */
/* Demangled: P2::MWFrameRequest::notifyNextCapture(int, int) */
int _ZN2P214MWFrameRequest17notifyNextCaptureEii(void);

/* Symbol: _ZZ25isTrace1On_ScanlinePluginvE4sVal */
/* Demangled: isTrace1On_ScanlinePlugin()::sVal */
extern void* _ZZ25isTrace1On_ScanlinePluginvE4sVal;

/* Symbol: _ZN2P218StreamingProcessor7PayloadC2EPS0_RKN5NSCam7Feature4ILogEj */
/* Demangled: P2::StreamingProcessor::Payload::Payload(P2::StreamingProcessor*, NSCam::Feature::ILog const&, unsigned int) */
int _ZN2P218StreamingProcessor7PayloadC2EPS0_RKN5NSCam7Feature4ILogEj(void);

/* Symbol: _ZTTN5NSCam2v38BaseNodeE */
/* Demangled: VTT for NSCam::v3::BaseNode */
extern void* _ZTTN5NSCam2v38BaseNodeE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17eventStreamingOffEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::eventStreamingOff() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17eventStreamingOffEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker12doThreadLoopEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::doThreadLoop() */
int _ZN5NSCam2v38NSP1Node13TimingChecker12doThreadLoopEv(void);

/* Symbol: _ZN2P214BasicProcessor9processP2IN7android2spINS0_9P2PayloadEEEEEiT_ */
/* Demangled: int P2::BasicProcessor::processP2<android::sp<P2::BasicProcessor::P2Payload> >(android::sp<P2::BasicProcessor::P2Payload>) */
int _ZN2P214BasicProcessor9processP2IN7android2spINS0_9P2PayloadEEEEEiT_(void);

/* Symbol: _ZGVZ18isTrace1On_LMVInfovE4sVal */
/* Demangled: guard variable for isTrace1On_LMVInfo()::sVal */
extern void* _ZGVZ18isTrace1On_LMVInfovE4sVal;

/* Symbol: _ZTv0_n72_N2P212MDPProcessor7onEnqueERKNS_8MDPParamE */
/* Demangled: virtual thunk to P2::MDPProcessor::onEnque(P2::MDPParam const&) */
int _ZTv0_n72_N2P212MDPProcessor7onEnqueERKNS_8MDPParamE(void);

/* Symbol: _ZN2P25P2Img7InfoMapE */
/* Demangled: P2::P2Img::InfoMap */
extern void* _ZN2P25P2Img7InfoMapE;

/* Symbol: _ZN2P26MWInfoC1ERKN5NSCam2v313P2CaptureNode12ConfigParamsE */
/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2CaptureNode::ConfigParams const&) */
int _ZN2P26MWInfoC1ERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload14getMainRequestEv */
/* Demangled: P2::StreamingProcessor::Payload::getMainRequest() */
int _ZN2P218StreamingProcessor7Payload14getMainRequestEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm(void);

/* Symbol: _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE */
/* Demangled: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread */
extern void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE;

/* Symbol: _ZTv0_n24_N2P218StreamingProcessor7PayloadD0Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::Payload::~Payload() */
int _ZTv0_n24_N2P218StreamingProcessor7PayloadD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node24calculateCropInfoResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i */
/* Demangled: NSCam::v3::NSP1Node::calculateCropInfoResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect const&, NSCam::MRect&, NSCam::MSize&, int) */
int _ZN5NSCam2v38NSP1Node24calculateCropInfoResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i(void);

/* Symbol: _ZN12RAW16NodeImp23returnMetadataAndUnlockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi */
/* Demangled: RAW16NodeImp::returnMetadataAndUnlock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>, NSCam::IMetadata*, int) */
int _ZN12RAW16NodeImp23returnMetadataAndUnlockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6configERKS2_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::config(P2::P2ConfigParam const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6configERKS2_(void);

/* Symbol: _ZN2P214BasicProcessor16initNormalStreamEv */
/* Demangled: P2::BasicProcessor::initNormalStream() */
int _ZN2P214BasicProcessor16initNormalStreamEv(void);

/* Symbol: _ZNK2P29P2Cropper15refineBoundaryFERKN5NSCam7Feature4ILogERKNS1_6MSizeFERNS1_6MRectFE */
/* Demangled: P2::P2Cropper::refineBoundaryF(NSCam::Feature::ILog const&, NSCam::MSizeF const&, NSCam::MRectF&) const */
int _ZNK2P29P2Cropper15refineBoundaryFERKN5NSCam7Feature4ILogERKNS1_6MSizeFERNS1_6MRectFE(void);

/* Symbol: _ZN2P29P2InIDMap7isEmptyEj */
/* Demangled: P2::P2InIDMap::isEmpty(unsigned int) */
int _ZN2P29P2InIDMap7isEmptyEj(void);

/* Symbol: _ZN2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE */
/* Demangled: P2::P2ScanlinePlugin::onPlugin(P2::P2Img const*) */
int _ZN2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE(void);

/* Symbol: _ZN11JpegNodeImpC1Ev */
/* Demangled: JpegNodeImp::JpegNodeImp() */
int _ZN11JpegNodeImpC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::IHalISP*, std::__1::allocator<NS3Av3::IHalISP*> >::__push_back_slow_path<NS3Av3::IHalISP*>(NS3Av3::IHalISP*&&) */
int _ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN5NSCam2v37JpgPack6configERKNS1_15ConfigJpgParamsE */
/* Demangled: NSCam::v3::JpgPack::config(NSCam::v3::JpgPack::ConfigJpgParams const&) */
int _ZN5NSCam2v37JpgPack6configERKNS1_15ConfigJpgParamsE(void);

/* Symbol: _ZN5NSCam2v37JpgPackD0Ev */
/* Demangled: NSCam::v3::JpgPack::~JpgPack() */
int _ZN5NSCam2v37JpgPackD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTv0_n24_N2P218StreamingProcessor7PayloadD1Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::Payload::~Payload() */
int _ZTv0_n24_N2P218StreamingProcessor7PayloadD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN2P29P2Request13updateMetaSetERKNS_9P2MetaSetE */
/* Demangled: P2::P2Request::updateMetaSet(P2::P2MetaSet const&) */
int _ZN2P29P2Request13updateMetaSetERKNS_9P2MetaSetE(void);

/* Symbol: _ZN2P29P2Request22detachResourceWithLockEj */
/* Demangled: P2::P2Request::detachResourceWithLock(unsigned int) */
int _ZN2P29P2Request22detachResourceWithLockEj(void);

/* Symbol: _ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKNS2_INS_6P2MetaEEE */
/* Demangled: P2::MWFrameRequest::fillP2Meta(android::sp<P2::P2Request> const&, android::sp<P2::P2Meta> const&) */
int _ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKNS2_INS_6P2MetaEEE(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE4initERKj */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::init(unsigned int const&) */
int _ZN2P29ProcessorIjjNS_8MDPParamEE4initERKj(void);

/* Symbol: _ZTv0_n56_N2P27MWFrame17notifyNextCaptureEii */
/* Demangled: virtual thunk to P2::MWFrame::notifyNextCapture(int, int) */
int _ZTv0_n56_N2P27MWFrame17notifyNextCaptureEii(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO> > >::__emplace_unique_key_args<P2::ID_META, std::__1::pair<P2::ID_META const, P2::META_INFO> const&>(P2::ID_META const&, std::__1::pair<P2::ID_META const, P2::META_INFO> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38BaseNode9getStatusEv */
/* Demangled: NSCam::v3::BaseNode::getStatus() */
int _ZN5NSCam2v38BaseNode9getStatusEv(void);

/* Symbol: _ZN2P26P2Util8SimpleIOC1Ev */
/* Demangled: P2::P2Util::SimpleIO::SimpleIO() */
int _ZN2P26P2Util8SimpleIOC1Ev(void);

/* Symbol: _ZNK2P25MWImg9isDisplayEv */
/* Demangled: P2::MWImg::isDisplay() const */
int _ZNK2P25MWImg9isDisplayEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P25P2ImgEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long, android::sp<P2::P2Img> >, std::__1::__map_value_compare<long, std::__1::__value_type<long, android::sp<P2::P2Img> >, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, android::sp<P2::P2Img> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, android::sp<P2::P2Img> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P25P2ImgEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZN2P218StreamingProcessor9processP2ERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::processP2(android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor9processP2ERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn6useLMVEv */
/* Demangled: P2::P2Util::SimpleIn::useLMV() const */
int _ZNK2P26P2Util8SimpleIn6useLMVEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS0_13NSFeaturePipe21IStreamingFeaturePipe8eAppModeEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::NSCamFeature::NSFeaturePipe::IStreamingFeaturePipe::eAppMode> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS0_13NSFeaturePipe21IStreamingFeaturePipe8eAppModeEEE;

/* Symbol: _ZNK2P26P2Util8SimpleIO10toP2IOPackEv */
/* Demangled: P2::P2Util::SimpleIO::toP2IOPack() const */
int _ZNK2P26P2Util8SimpleIO10toP2IOPackEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct16frameImageUninitENS1_10STREAM_IMGE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImageUninit(NSCam::v3::NSP1Node::STREAM_IMG) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct16frameImageUninitENS1_10STREAM_IMGE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE7reserveEm */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::NSP1Node::StuffBufferPool>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::StuffBufferPool> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE7reserveEm(void);

/* Symbol: _ZN11JpegNodeImpC2Ev */
/* Demangled: JpegNodeImp::JpegNodeImp() */
int _ZN11JpegNodeImpC2Ev(void);

/* Symbol: _ZTVN11JpegNodeImp10jpeg_frameE */
/* Demangled: vtable for JpegNodeImp::jpeg_frame */
extern void* _ZTVN11JpegNodeImp10jpeg_frameE;

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify15doNotifyQualityEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyQuality(void*, void*) */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify15doNotifyQualityEPvS3_(void);

/* Symbol: _ZN5NSCam2v37JpgPackD1Ev */
/* Demangled: NSCam::v3::JpgPack::~JpgPack() */
int _ZN5NSCam2v37JpgPackD1Ev(void);

/* Symbol: _ZN12RAW16NodeImp13threadSettingEv */
/* Demangled: RAW16NodeImp::threadSetting() */
int _ZN12RAW16NodeImp13threadSettingEv(void);

/* Symbol: _ZN12RAW16NodeImp13updateDNGMetaERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: RAW16NodeImp::updateDNGMeta(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN12RAW16NodeImp13updateDNGMetaERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN12RAW16NodeImpD0Ev */
/* Demangled: RAW16NodeImp::~RAW16NodeImp() */
int _ZN12RAW16NodeImpD0Ev(void);

/* Symbol: _ZN2P217DispatchProcessor11onWaitFlushEv */
/* Demangled: P2::DispatchProcessor::onWaitFlush() */
int _ZN2P217DispatchProcessor11onWaitFlushEv(void);

/* Symbol: _ZNK2P29P2Request10getCropperEj */
/* Demangled: P2::P2Request::getCropper(unsigned int) const */
int _ZNK2P29P2Request10getCropperEj(void);

/* Symbol: _ZN2P216P2CaptureNodeImp16parseConfigParamERKN5NSCam2v313P2CaptureNode12ConfigParamsE */
/* Demangled: P2::P2CaptureNodeImp::parseConfigParam(NSCam::v3::P2CaptureNode::ConfigParams const&) */
int _ZN2P216P2CaptureNodeImp16parseConfigParamERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void);

/* Symbol: _ZThn48_N5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::doNotifyCb(int, long, long, long) */
int _ZThn48_N5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll(void);

/* Symbol: _ZN12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: RAW16NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n136_N10PDENodeImpD0Ev */
/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
int _ZTv0_n136_N10PDENodeImpD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META&&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZGVZ23isTrace1On_DrawIDPluginvE4sVal */
/* Demangled: guard variable for isTrace1On_DrawIDPlugin()::sVal */
extern void* _ZGVZ23isTrace1On_DrawIDPluginvE4sVal;

/* Symbol: _ZTTN5NSCam2v38NSP1Node21ProcedureStageControlE */
/* Demangled: VTT for NSCam::v3::NSP1Node::ProcedureStageControl */
extern void* _ZTTN5NSCam2v38NSP1Node21ProcedureStageControlE;

/* Symbol: _ZTv0_n32_N2P212MDPProcessor6onInitERKj */
/* Demangled: virtual thunk to P2::MDPProcessor::onInit(unsigned int const&) */
int _ZTv0_n32_N2P212MDPProcessor6onInitERKj(void);

/* Symbol: _ZNK2P25P2Img10getImgTypeEv */
/* Demangled: P2::P2Img::getImgType() const */
int _ZNK2P25P2Img10getImgTypeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev(void);

/* Symbol: _ZN2P214MWFrameRequest12removeP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE */
/* Demangled: P2::MWFrameRequest::removeP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, P2::ID_META) */
int _ZN2P214MWFrameRequest12removeP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE(void);

/* Symbol: _ZN2P26P2Util8SimpleIOC2Ev */
/* Demangled: P2::P2Util::SimpleIO::SimpleIO() */
int _ZN2P26P2Util8SimpleIOC2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl5resetEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::reset() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl5resetEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node21ProcedureStageControl4doneEji */
/* Demangled: NSCam::v3::NSP1Node::ProcedureStageControl::done(unsigned int, int) */
int _ZN5NSCam2v38NSP1Node21ProcedureStageControl4doneEji(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp4kickEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::kick() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp4kickEv(void);

/* Symbol: _ZN2P214BasicProcessor12updateResultENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEEi */
/* Demangled: P2::BasicProcessor::updateResult(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >, int) */
int _ZN2P214BasicProcessor12updateResultENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEEi(void);

/* Symbol: _ZN2P212MDPProcessorD0Ev */
/* Demangled: P2::MDPProcessor::~MDPProcessor() */
int _ZN2P212MDPProcessorD0Ev(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO7printIOERKN5NSCam7Feature4ILogE */
/* Demangled: P2::P2Util::SimpleIO::printIO(NSCam::Feature::ILog const&) const */
int _ZNK2P26P2Util8SimpleIO7printIOERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZTTN5NSCam2v38NSP1Node12P1DeliverMgrE */
/* Demangled: VTT for NSCam::v3::NSP1Node::P1DeliverMgr */
extern void* _ZTTN5NSCam2v38NSP1Node12P1DeliverMgrE;

/* Symbol: _ZN5NSCam2v37JpgPackD2Ev */
/* Demangled: NSCam::v3::JpgPack::~JpgPack() */
int _ZN5NSCam2v37JpgPackD2Ev(void);

/* Symbol: _ZN12RAW16NodeImpD1Ev */
/* Demangled: RAW16NodeImp::~RAW16NodeImp() */
int _ZN12RAW16NodeImpD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::__unordered_map_hasher<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::hash<P2::P2Request*>, true>, std::__1::__unordered_map_equal<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::equal_to<P2::P2Request*>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE8__rehashEm(void);

/* Symbol: _ZZN2P225isTrace1On_BasicProcessorEvE6sTrace */
/* Demangled: P2::isTrace1On_BasicProcessor()::sTrace */
extern void* _ZZN2P225isTrace1On_BasicProcessorEvE6sTrace;

/* Symbol: _ZN2P218P2StreamingNodeImp6uninitEv */
/* Demangled: P2::P2StreamingNodeImp::uninit() */
int _ZN2P218P2StreamingNodeImp6uninitEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR1CropEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyYuvR1Crop() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR1CropEv(void);

/* Symbol: _ZTv0_n136_N10PDENodeImpD1Ev */
/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
int _ZTv0_n136_N10PDENodeImpD1Ev(void);

/* Symbol: _ZN2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE */
/* Demangled: P2::DispatchProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
int _ZN2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void);

/* Symbol: _ZNK2P26MWInfo16getAppStreamInfoEv */
/* Demangled: P2::MWInfo::getAppStreamInfo() const */
int _ZNK2P26MWInfo16getAppStreamInfoEv(void);

/* Symbol: _ZN2P214MWFrameRequest14decideMasterIDEv */
/* Demangled: P2::MWFrameRequest::decideMasterID() */
int _ZN2P214MWFrameRequest14decideMasterIDEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN2P218StreamingProcessor11prepareRSSOERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::prepareRSSO(android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor11prepareRSSOERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZN2P212MDPProcessorD1Ev */
/* Demangled: P2::MDPProcessor::~MDPProcessor() */
int _ZN2P212MDPProcessorD1Ev(void);

/* Symbol: _ZZN2P227isTrace1On_P2MetadataHandleEvE6sTrace */
/* Demangled: P2::isTrace1On_P2MetadataHandle()::sTrace */
extern void* _ZZN2P227isTrace1On_P2MetadataHandleEvE6sTrace;

/* Symbol: _ZTCN2P29P2CropperE0_N5NSCam7Feature6P2Util7CropperE */
/* Demangled: construction vtable for NSCam::Feature::P2Util::Cropper-in-P2::P2Cropper */
extern void* _ZTCN2P29P2CropperE0_N5NSCam7Feature6P2Util7CropperE;

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector8dumpRollEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::dumpRoll() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector8dumpRollEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeActC2EPNS1_9P1NodeImpEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::P1NodeAct(NSCam::v3::NSP1Node::P1NodeImp*, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeActC2EPNS1_9P1NodeImpEi(void);

/* Symbol: _ZN12RAW16NodeImpD2Ev */
/* Demangled: RAW16NodeImp::~RAW16NodeImp() */
int _ZN12RAW16NodeImpD2Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6uninitEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::uninit() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6uninitEv(void);

/* Symbol: _ZN2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE */
/* Demangled: P2::StreamingProcessor::onEnque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
int _ZN2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE(void);

/* Symbol: _ZNK5NSCam2v38NSP1Node9P1NodeAct9getNodeIdEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getNodeId() const */
int _ZNK5NSCam2v38NSP1Node9P1NodeAct9getNodeIdEv(void);

/* Symbol: _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE8do_splatEPvPKvm */
/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor8onUninitEv */
/* Demangled: P2::StreamingProcessor::onUninit() */
int _ZN2P218StreamingProcessor8onUninitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkDoneNumEi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkDoneNum(int) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkDoneNumEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl8flushActEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::flushAct() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl8flushActEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n56_N2P218StreamingProcessor12onThreadStopEv */
/* Demangled: virtual thunk to P2::StreamingProcessor::onThreadStop() */
int _ZTv0_n56_N2P218StreamingProcessor12onThreadStopEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> > */
extern void* _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEEE;

/* Symbol: _ZNK2P29P2Request10getCropperEv */
/* Demangled: P2::P2Request::getCropper() const */
int _ZNK2P29P2Request10getCropperEv(void);

/* Symbol: _ZN2P26P2Util8SimpleIn9setUseLMVEi */
/* Demangled: P2::P2Util::SimpleIn::setUseLMV(int) */
int _ZN2P26P2Util8SimpleIn9setUseLMVEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node15StuffBufferPoolE */
/* Demangled: vtable for NSCam::v3::NSP1Node::StuffBufferPool */
extern void* _ZTVN5NSCam2v38NSP1Node15StuffBufferPoolE;

/* Symbol: _ZTT11JpegBufPool */
/* Demangled: VTT for JpegBufPool */
extern void* _ZTT11JpegBufPool;

/* Symbol: _ZN2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: P2::CaptureRequestCallback::onRestored(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZN2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZN2P212MDPProcessorD2Ev */
/* Demangled: P2::MDPProcessor::~MDPProcessor() */
int _ZN2P212MDPProcessorD2Ev(void);

/* Symbol: _ZZ22isTrace1On_CaptureNodevE6sTrace */
/* Demangled: isTrace1On_CaptureNode()::sTrace */
extern void* _ZZ22isTrace1On_CaptureNodevE6sTrace;

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
int _ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD0Ev(void);

/* Symbol: _ZZN2P217isTrace1On_MWInfoEvE4sVal */
/* Demangled: P2::isTrace1On_MWInfo()::sVal */
extern void* _ZZN2P217isTrace1On_MWInfoEvE4sVal;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE;

/* Symbol: _ZNSt3__16vectorIPN5NSCam2v38NSP1Node13TimingChecker6RecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::TimingChecker::Record*, std::__1::allocator<NSCam::v3::NSP1Node::TimingChecker::Record*> >::__push_back_slow_path<NSCam::v3::NSP1Node::TimingChecker::Record* const&>(NSCam::v3::NSP1Node::TimingChecker::Record* const&) */
int _ZNSt3__16vectorIPN5NSCam2v38NSP1Node13TimingChecker6RecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN11JpegNodeImp18hardwareOps_encodeERNS_16my_encode_paramsE */
/* Demangled: JpegNodeImp::hardwareOps_encode(JpegNodeImp::my_encode_params&) */
int _ZN11JpegNodeImp18hardwareOps_encodeERNS_16my_encode_paramsE(void);

/* Symbol: _ZZ18isTrace1On_CroppervE4sVal */
/* Demangled: isTrace1On_Cropper()::sVal */
extern void* _ZZ18isTrace1On_CroppervE4sVal;

/* Symbol: _ZNK2P25MWImg12getTransformEv */
/* Demangled: P2::MWImg::getTransform() const */
int _ZNK2P25MWImg12getTransformEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE8__appendEm */
/* Demangled: std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__append(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE8__appendEm(void);

/* Symbol: _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV12enableSensorEv */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::enableSensor() */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV12enableSensorEv(void);

/* Symbol: _ZN2P29P2Request15releaseResourceEj */
/* Demangled: P2::P2Request::releaseResource(unsigned int) */
int _ZN2P29P2Request15releaseResourceEj(void);

/* Symbol: _ZN2P218StreamingProcessor11onWaitFlushEv */
/* Demangled: P2::StreamingProcessor::onWaitFlush() */
int _ZN2P218StreamingProcessor11onWaitFlushEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEED2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr4initEN7android2spINS1_9P1NodeImpEEE */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::init(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr4initEN7android2spINS1_9P1NodeImpEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK2P214P2FrameRequest10getFrameIDEv */
/* Demangled: P2::P2FrameRequest::getFrameID() const */
int _ZNK2P214P2FrameRequest10getFrameIDEv(void);

/* Symbol: _ZNK2P29P2Request8isPhysicEv */
/* Demangled: P2::P2Request::isPhysic() const */
int _ZNK2P29P2Request8isPhysicEv(void);

/* Symbol: _ZTv0_n104_N5NSCam2v38BaseNode4kickEv */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::kick() */
int _ZTv0_n104_N5NSCam2v38BaseNode4kickEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkRequestEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkRequest() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkRequestEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20verifySizeYuvResizerEjjRKNS_5MSizeES4_S4_RKiRS2_i */
/* Demangled: NSCam::v3::NSP1Node::verifySizeYuvResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize const&, int const&, NSCam::MSize&, int) */
int _ZN5NSCam2v38NSP1Node20verifySizeYuvResizerEjjRKNS_5MSizeES4_S4_RKiRS2_i(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
int _ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct14frameImageInitENS1_10STREAM_IMGE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImageInit(NSCam::v3::NSP1Node::STREAM_IMG) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct14frameImageInitENS1_10STREAM_IMGE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::Client::onLastStrongRef(void const*) */
int _ZN5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::NSP1Node::StuffBufferPool>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::StuffBufferPool> > >::__push_back_slow_path<android::sp<NSCam::v3::NSP1Node::StuffBufferPool> const&>(android::sp<NSCam::v3::NSP1Node::StuffBufferPool> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE8__appendEm */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >::__append(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE8__appendEm(void);

/* Symbol: _ZN2P214BasicProcessor8P2CookieC1EPS0_RKN7android2spINS0_9P2PayloadEEE */
/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, android::sp<P2::BasicProcessor::P2Payload> const&) */
int _ZN2P214BasicProcessor8P2CookieC1EPS0_RKN7android2spINS0_9P2PayloadEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN2P212MDPProcessor6onInitERKj */
/* Demangled: P2::MDPProcessor::onInit(unsigned int const&) */
int _ZN2P212MDPProcessor6onInitERKj(void);

/* Symbol: _ZNK2P27MWFrame10getFrameIDEv */
/* Demangled: P2::MWFrame::getFrameID() const */
int _ZNK2P27MWFrame10getFrameIDEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_startEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_start() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_startEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessDequeFrameEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessDequeFrame() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessDequeFrameEv(void);

/* Symbol: _ZThn40_N5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::config(NSCam::v3::P1Node::ConfigParams const&) */
int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE(void);

/* Symbol: _ZN2P214BasicProcessor12createCookieINSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_ */
/* Demangled: P2::BasicProcessor::P2Cookie* P2::BasicProcessor::createCookie<std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > >(NSCam::Feature::ILog const&, std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
int _ZN2P214BasicProcessor12createCookieINSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_(void);

/* Symbol: _ZTv0_n56_N2P217DispatchProcessor12onThreadStopEv */
/* Demangled: virtual thunk to P2::DispatchProcessor::onThreadStop() */
int _ZTv0_n56_N2P217DispatchProcessor12onThreadStopEv(void);

/* Symbol: _ZN2P218P2StreamingNodeImp14parseInitParamERKN5NSCam7Feature4ILogERKNS1_2v313IPipelineNode10InitParamsE */
/* Demangled: P2::P2StreamingNodeImp::parseInitParam(NSCam::Feature::ILog const&, NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN2P218P2StreamingNodeImp14parseInitParamERKN5NSCam7Feature4ILogERKNS1_2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN5NSCam2v38BaseNode13onCtrlReadoutERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri */
/* Demangled: NSCam::v3::BaseNode::onCtrlReadout(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZN5NSCam2v38BaseNode13onCtrlReadoutERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri(void);

/* Symbol: _ZTv0_n64_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv */
/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::threadLoop() */
int _ZTv0_n64_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZNK2P214P2DrawIDPlugin9isEnabledEv */
/* Demangled: P2::P2DrawIDPlugin::isEnabled() const */
int _ZNK2P214P2DrawIDPlugin9isEnabledEv(void);

/* Symbol: _ZNK2P218StreamingProcessor15releaseResourceERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEEj */
/* Demangled: P2::StreamingProcessor::releaseResource(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&, unsigned int) const */
int _ZNK2P218StreamingProcessor15releaseResourceERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEEj(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node16TimingCheckerMgrEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::TimingCheckerMgr>::operator=(NSCam::v3::NSP1Node::TimingCheckerMgr*) */
int _ZN7android2spIN5NSCam2v38NSP1Node16TimingCheckerMgrEEaSEPS4_(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_back(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr15registerActListEi */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::registerActList(int) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr15registerActListEi(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread4stopEv */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::stop() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread4stopEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE11notifyFlushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::notifyFlush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE11notifyFlushEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*> >::push_front(P2::SMVRQueue::SMVRData*&&) */
int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZTv0_n40_NK5NSCam2v38BaseNode9getNodeIdEv */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::getNodeId() const */
int _ZTv0_n40_NK5NSCam2v38BaseNode9getNodeIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp21hardwareOps_streamingEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_streaming() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp21hardwareOps_streamingEv(void);

/* Symbol: _ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS5_JRKS5_EEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<android::sp<P2::P2Request>, std::__1::__tree_node<android::sp<P2::P2Request>, void*>*, long>, bool> std::__1::__tree<android::sp<P2::P2Request>, std::__1::less<android::sp<P2::P2Request> >, std::__1::allocator<android::sp<P2::P2Request> > >::__emplace_unique_key_args<android::sp<P2::P2Request>, android::sp<P2::P2Request> const&>(android::sp<P2::P2Request> const&, android::sp<P2::P2Request> const&) */
int _ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS5_JRKS5_EEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node7LogInfo4SlotE */
/* Demangled: vtable for NSCam::v3::NSP1Node::LogInfo::Slot */
extern void* _ZTVN5NSCam2v38NSP1Node7LogInfo4SlotE;

/* Symbol: _ZNK2P25MWImg13getPhysicalIDEv */
/* Demangled: P2::MWImg::getPhysicalID() const */
int _ZNK2P25MWImg13getPhysicalIDEv(void);

/* Symbol: _ZTv0_n64_N2P26MWMeta12updateResultEi */
/* Demangled: virtual thunk to P2::MWMeta::updateResult(int) */
int _ZTv0_n64_N2P26MWMeta12updateResultEi(void);

/* Symbol: _ZN2P25P2Img12setTimestampERKNSt3__16vectorIlNS1_9allocatorIlEEEE */
/* Demangled: P2::P2Img::setTimestamp(std::__1::vector<long, std::__1::allocator<long> > const&) */
int _ZN2P25P2Img12setTimestampERKNSt3__16vectorIlNS1_9allocatorIlEEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*>&>::push_back(android::sp<P2::P2FrameRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZTTN2P218StreamingProcessor7PayloadE */
/* Demangled: VTT for P2::StreamingProcessor::Payload */
extern void* _ZTTN2P218StreamingProcessor7PayloadE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::threadLoop() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZZN2P217isTrace1On_MWMetaEvE6sTrace */
/* Demangled: P2::isTrace1On_MWMeta()::sTrace */
extern void* _ZZN2P217isTrace1On_MWMetaEvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV6configEv */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::config() */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV6configEv(void);

/* Symbol: _ZN2P214BasicProcessor19prepareEnqueQParamsEN7android2spINS0_9P2PayloadEEE */
/* Demangled: P2::BasicProcessor::prepareEnqueQParams(android::sp<P2::BasicProcessor::P2Payload>) */
int _ZN2P214BasicProcessor19prepareEnqueQParamsEN7android2spINS0_9P2PayloadEEE(void);

/* Symbol: _ZN2P214BasicProcessor9P2PayloadC2ERKN7android2spINS_9P2RequestEEEj */
/* Demangled: P2::BasicProcessor::P2Payload::P2Payload(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P214BasicProcessor9P2PayloadC2ERKN7android2spINS_9P2RequestEEEj(void);

/* Symbol: _ZN2P29P2Cropper13initTransformEv */
/* Demangled: P2::P2Cropper::initTransform() */
int _ZN2P29P2Cropper13initTransformEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P214BasicProcessor7getILogERKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE */
/* Demangled: P2::BasicProcessor::getILog(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
int _ZN2P214BasicProcessor7getILogERKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6uninitEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::uninit() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6uninitEv(void);

/* Symbol: _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor13P2RequestPack8containsERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::StreamingProcessor::P2RequestPack::contains(android::sp<P2::P2Request> const&) const */
int _ZNK2P218StreamingProcessor13P2RequestPack8containsERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvm */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIiE12do_constructEPvm(void);

/* Symbol: _ZZN2P217isTrace1On_MWMetaEvE4sVal */
/* Demangled: P2::isTrace1On_MWMeta()::sVal */
extern void* _ZZN2P217isTrace1On_MWMetaEvE4sVal;

/* Symbol: _ZTVN6NS3Av38IHal3ACbE */
/* Demangled: vtable for NS3Av3::IHal3ACb */
extern void* _ZTVN6NS3Av38IHal3ACbE;

/* Symbol: _ZN11JpegBufPoolD0Ev */
/* Demangled: JpegBufPool::~JpegBufPool() */
int _ZN11JpegBufPoolD0Ev(void);

/* Symbol: _ZN10PDENodeImp6uninitEv */
/* Demangled: PDENodeImp::uninit() */
int _ZN10PDENodeImp6uninitEv(void);

/* Symbol: _ZGVZN2P225isTrace1On_BasicProcessorEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_BasicProcessor()::sTrace */
extern void* _ZGVZN2P225isTrace1On_BasicProcessorEvE6sTrace;

/* Symbol: _ZN2P214MWFrameRequestC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd */
/* Demangled: P2::MWFrameRequest::MWFrameRequest(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&, android::sp<P2::MWInfo> const&, android::sp<P2::MWFrame> const&, android::sp<P2::P2InIDMap> const&, double) */
int _ZN2P214MWFrameRequestC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO> > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::pair<P2::ID_IMG const, P2::IMG_INFO> const&>(P2::ID_IMG const&, std::__1::pair<P2::ID_IMG const, P2::IMG_INFO> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZZ25isTrace1On_Streaming_3DNRvE4sVal */
/* Demangled: isTrace1On_Streaming_3DNR()::sVal */
extern void* _ZZ25isTrace1On_Streaming_3DNRvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr6uninitEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::uninit() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr6uninitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector9enrollActERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::enrollAct(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector9enrollActERNS1_8P1QueActE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN9ExifUtils21updateStdExifParam_3AERKN5NSCam9IMetadataES3_R10ExifParamsi */
/* Demangled: ExifUtils::updateStdExifParam_3A(NSCam::IMetadata const&, NSCam::IMetadata const&, ExifParams&, int) */
int _ZN9ExifUtils21updateStdExifParam_3AERKN5NSCam9IMetadataES3_R10ExifParamsi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n88_N2P217DispatchProcessor11onWaitFlushEv */
/* Demangled: virtual thunk to P2::DispatchProcessor::onWaitFlush() */
int _ZTv0_n88_N2P217DispatchProcessor11onWaitFlushEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZGVZ24isTrace1On_Streaming_FSCvE4sVal */
/* Demangled: guard variable for isTrace1On_Streaming_FSC()::sVal */
extern void* _ZGVZ24isTrace1On_Streaming_FSCvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node21calculateCropInfoFullEjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i */
/* Demangled: NSCam::v3::NSP1Node::calculateCropInfoFull(unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect const&, NSCam::MRect&, NSCam::MSize&, int) */
int _ZN5NSCam2v38NSP1Node21calculateCropInfoFullEjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18destroyStuffBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::destroyStuffBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18destroyStuffBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeActC1EPNS1_9P1NodeImpEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::P1NodeAct(NSCam::v3::NSP1Node::P1NodeImp*, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeActC1EPNS1_9P1NodeImpEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void);

/* Symbol: _ZNK2P29P2Request11isReprocessEv */
/* Demangled: P2::P2Request::isReprocess() const */
int _ZNK2P29P2Request11isReprocessEv(void);

/* Symbol: _ZZ25isTrace1On_Streaming_3DNRvE6sTrace */
/* Demangled: isTrace1On_Streaming_3DNR()::sTrace */
extern void* _ZZ25isTrace1On_Streaming_3DNRvE6sTrace;

/* Symbol: _ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void);

/* Symbol: _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZNK2P26P2Meta5getIDEv */
/* Demangled: P2::P2Meta::getID() const */
int _ZNK2P26P2Meta5getIDEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE9push_backEOSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*> >::push_back(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*&&) */
int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE9push_backEOSA_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE10push_frontERKSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*>&>::push_front(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >* const&) */
int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE10push_frontERKSA_(void);

/* Symbol: _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE */
/* Demangled: VTT for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread */
extern void* _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE;

/* Symbol: _ZN2P218P2StreamingNodeImp8sRunningE */
/* Demangled: P2::P2StreamingNodeImp::sRunning */
extern void* _ZN2P218P2StreamingNodeImp8sRunningE;

/* Symbol: _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEEE;

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningSetEi */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::runningSet(int) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningSetEi(void);

/* Symbol: _ZN11JpegBufPoolD1Ev */
/* Demangled: JpegBufPool::~JpegBufPool() */
int _ZN11JpegBufPoolD1Ev(void);

/* Symbol: _ZN2P214BasicProcessor18uninitNormalStreamEv */
/* Demangled: P2::BasicProcessor::uninitNormalStream() */
int _ZN2P214BasicProcessor18uninitNormalStreamEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void);

/* Symbol: _ZNK2P29P2Cropper10applyEIS12ERKN5NSCam7Feature4ILogERKNS1_6MRectFEi */
/* Demangled: P2::P2Cropper::applyEIS12(NSCam::Feature::ILog const&, NSCam::MRectF const&, int) const */
int _ZNK2P29P2Cropper10applyEIS12ERKN5NSCam7Feature4ILogERKNS1_6MRectFEi(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::threadLoop() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18procedureAid_startEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::procedureAid_start() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18procedureAid_startEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_captureEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_capture() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_captureEv(void);

/* Symbol: _ZN7Request8lockMetaEv */
/* Demangled: Request::lockMeta() */
int _ZN7Request8lockMetaEv(void);

/* Symbol: _ZZN2P225isTrace1On_P2BufferHandleEvE4sVal */
/* Demangled: P2::isTrace1On_P2BufferHandle()::sVal */
extern void* _ZZN2P225isTrace1On_P2BufferHandleEvE4sVal;

/* Symbol: _ZN2P26MWInfoD0Ev */
/* Demangled: P2::MWInfo::~MWInfo() */
int _ZN2P26MWInfoD0Ev(void);

/* Symbol: _ZTCN2P26MWMetaE72_NS_6P2MetaE */
/* Demangled: construction vtable for P2::P2Meta-in-P2::MWMeta */
extern void* _ZTCN2P26MWMetaE72_NS_6P2MetaE;

/* Symbol: _ZTVN5NSCam2v39DummyNodeE */
/* Demangled: vtable for NSCam::v3::DummyNode */
extern void* _ZTVN5NSCam2v39DummyNodeE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp11onSyncBeginEiPN6NS3Av312RequestSet_TEjPNS3_10CapParam_TE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onSyncBegin(int, NS3Av3::RequestSet_T*, unsigned int, NS3Av3::CapParam_T*) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp11onSyncBeginEiPN6NS3Av312RequestSet_TEjPNS3_10CapParam_TE(void);

/* Symbol: _ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void);

/* Symbol: _ZN2P212MDPProcessorC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: P2::MDPProcessor::MDPProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P212MDPProcessorC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN2P216P2CaptureNodeImp18createFrameRequestERKN5NSCam7Feature4ILogERKN7android2spINS_7MWFrameEEE */
/* Demangled: P2::P2CaptureNodeImp::createFrameRequest(NSCam::Feature::ILog const&, android::sp<P2::MWFrame> const&) */
int _ZN2P216P2CaptureNodeImp18createFrameRequestERKN5NSCam7Feature4ILogERKN7android2spINS_7MWFrameEEE(void);

/* Symbol: _ZTv0_n136_NK2P25MWImg8isRecordEv */
/* Demangled: virtual thunk to P2::MWImg::isRecord() const */
int _ZTv0_n136_NK2P25MWImg8isRecordEv(void);

/* Symbol: _ZZ20isTrace1On_VRGrallocvE6sTrace */
/* Demangled: isTrace1On_VRGralloc()::sTrace */
extern void* _ZZ20isTrace1On_VRGrallocvE6sTrace;

/* Symbol: _ZN2P218StreamingProcessor13prepareInputsERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::prepareInputs(android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor13prepareInputsERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoNoticeERiS3_i */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::lastFrameRequestInfoNotice(int&, int&, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoNoticeERiS3_i(void);

/* Symbol: _ZN11JpegBufPoolD2Ev */
/* Demangled: JpegBufPool::~JpegBufPool() */
int _ZN11JpegBufPoolD2Ev(void);

/* Symbol: _ZN2P216CaptureProcessorC1Ev */
/* Demangled: P2::CaptureProcessor::CaptureProcessor() */
int _ZN2P216CaptureProcessorC1Ev(void);

/* Symbol: _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN2P27MWFrame15getInfoIOMapSetERN5NSCam2v314IPipelineFrame12InfoIOMapSetE */
/* Demangled: P2::MWFrame::getInfoIOMapSet(NSCam::v3::IPipelineFrame::InfoIOMapSet&) */
int _ZN2P27MWFrame15getInfoIOMapSetERN5NSCam2v314IPipelineFrame12InfoIOMapSetE(void);

/* Symbol: _ZNK7android12SortedVectorIlE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl8isActiveEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::isActive() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl8isActiveEv(void);

/* Symbol: _ZN2P25MWImgD0Ev */
/* Demangled: P2::MWImg::~MWImg() */
int _ZN2P25MWImgD0Ev(void);

/* Symbol: _ZTTN2P25MWImgE */
/* Demangled: VTT for P2::MWImg */
extern void* _ZTTN2P25MWImgE;

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node15P1TaskCollectorEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1TaskCollector>::operator=(NSCam::v3::NSP1Node::P1TaskCollector*) */
int _ZN7android2spIN5NSCam2v38NSP1Node15P1TaskCollectorEEaSEPS4_(void);

/* Symbol: _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEE */
/* Demangled: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> > */
extern void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEE;

/* Symbol: _ZN2P26MWInfoD1Ev */
/* Demangled: P2::MWInfo::~MWInfo() */
int _ZN2P26MWInfoD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO12getInputSizeEv */
/* Demangled: P2::P2Util::SimpleIO::getInputSize() const */
int _ZNK2P26P2Util8SimpleIO12getInputSizeEv(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
int _ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD0Ev(void);

/* Symbol: _ZTv0_n24_N2P212P2DumpPluginD0Ev */
/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZTv0_n24_N2P212P2DumpPluginD0Ev(void);

/* Symbol: _ZNK2P218P2StreamingNodeImp8toP2TypeEN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE */
/* Demangled: P2::P2StreamingNodeImp::toP2Type(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint const&) const */
int _ZNK2P218P2StreamingNodeImp8toP2TypeEN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE(void);

/* Symbol: _ZN2P29P2RequestC1ERKN7android2spIS0_EE */
/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&) */
int _ZN2P29P2RequestC1ERKN7android2spIS0_EE(void);

/* Symbol: _ZTv0_n64_N2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZTv0_n64_N2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN7Request9lockInImgEv */
/* Demangled: Request::lockInImg() */
int _ZN7Request9lockInImgEv(void);

/* Symbol: _ZTv0_n24_N12RAW16NodeImpD0Ev */
/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
int _ZTv0_n24_N12RAW16NodeImpD0Ev(void);

/* Symbol: _ZN2P216CaptureProcessorC2Ev */
/* Demangled: P2::CaptureProcessor::CaptureProcessor() */
int _ZN2P216CaptureProcessorC2Ev(void);

/* Symbol: _ZNK2P29P2Cropper13getSensorSizeEv */
/* Demangled: P2::P2Cropper::getSensorSize() const */
int _ZNK2P29P2Cropper13getSensorSizeEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE7reserveEm */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::NSP1Node::P1NodeAct>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::P1NodeAct> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE7reserveEm(void);

/* Symbol: _ZN2P214BasicProcessor7MyTimerC2ERKN5NSCam7Feature4ILogEj */
/* Demangled: P2::BasicProcessor::MyTimer::MyTimer(NSCam::Feature::ILog const&, unsigned int) */
int _ZN2P214BasicProcessor7MyTimerC2ERKN5NSCam7Feature4ILogEj(void);

/* Symbol: _ZN2P213P2ConfigParamC1ERKN5NSCam7Feature6P2Util6P2InfoE */
/* Demangled: P2::P2ConfigParam::P2ConfigParam(NSCam::Feature::P2Util::P2Info const&) */
int _ZN2P213P2ConfigParamC1ERKN5NSCam7Feature6P2Util6P2InfoE(void);

/* Symbol: _ZN2P25MWImgD1Ev */
/* Demangled: P2::MWImg::~MWImg() */
int _ZN2P25MWImgD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp11checkReqCntERi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::checkReqCnt(int&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp11checkReqCntERi(void);

/* Symbol: _ZN2P26MWInfoD2Ev */
/* Demangled: P2::MWInfo::~MWInfo() */
int _ZN2P26MWInfoD2Ev(void);

/* Symbol: _ZNK2P26MWInfo7hasMetaENS_7ID_METAE */
/* Demangled: P2::MWInfo::hasMeta(P2::ID_META) const */
int _ZNK2P26MWInfo7hasMetaENS_7ID_METAE(void);

/* Symbol: _ZTv0_n48_NK2P25MWImg7isValidEv */
/* Demangled: virtual thunk to P2::MWImg::isValid() const */
int _ZTv0_n48_NK2P25MWImg7isValidEv(void);

/* Symbol: _ZN2P26P2Util14p2PQIdx2StringEj */
/* Demangled: P2::P2Util::p2PQIdx2String(unsigned int) */
int _ZN2P26P2Util14p2PQIdx2StringEj(void);

/* Symbol: _ZZ24isTrace1On_Streaming_EISvE4sVal */
/* Demangled: isTrace1On_Streaming_EIS()::sVal */
extern void* _ZZ24isTrace1On_Streaming_EISvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollectorC1EN7android2spINS1_10P1TaskCtrlEEE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::P1TaskCollector(android::sp<NSCam::v3::NSP1Node::P1TaskCtrl>) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollectorC1EN7android2spINS1_10P1TaskCtrlEEE(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEE24__emplace_back_slow_pathIJS8_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >::__emplace_back_slow_path<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > >(std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEE24__emplace_back_slow_pathIJS8_EEEvDpOT_(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
int _ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD1Ev(void);

/* Symbol: _ZTv0_n24_N2P212P2DumpPluginD1Ev */
/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
int _ZTv0_n24_N2P212P2DumpPluginD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamInfo> const&>(android::sp<NSCam::v3::IMetaStreamInfo> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNK2P29P2Cropper7isValidEv */
/* Demangled: P2::P2Cropper::isValid() const */
int _ZNK2P29P2Cropper7isValidEv(void);

/* Symbol: _ZNK2P25MWImg7isValidEv */
/* Demangled: P2::MWImg::isValid() const */
int _ZNK2P25MWImg7isValidEv(void);

/* Symbol: _ZNK2P218StreamingProcessor17is3DNRFlowEnabledEiPN5NSCam9IMetadataES3_RKNS1_7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::is3DNRFlowEnabled(int, NSCam::IMetadata*, NSCam::IMetadata*, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor17is3DNRFlowEnabledEiPN5NSCam9IMetadataES3_RKNS1_7Feature4ILogE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18LongExposureStatus6configEiii */
/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::config(int, int, int) */
int _ZN5NSCam2v38NSP1Node18LongExposureStatus6configEiii(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob>&>&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZTv0_n24_N12RAW16NodeImpD1Ev */
/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
int _ZTv0_n24_N12RAW16NodeImpD1Ev(void);

/* Symbol: _ZN2P214BasicProcessorC1Ev */
/* Demangled: P2::BasicProcessor::BasicProcessor() */
int _ZN2P214BasicProcessorC1Ev(void);

/* Symbol: _ZTv0_n64_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: virtual thunk to JpegNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZTv0_n64_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: PDENodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZN2P25MWImgD2Ev */
/* Demangled: P2::MWImg::~MWImg() */
int _ZN2P25MWImgD2Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor13P2RequestPack12getNumRecordEv */
/* Demangled: P2::StreamingProcessor::P2RequestPack::getNumRecord() const */
int _ZNK2P218StreamingProcessor13P2RequestPack12getNumRecordEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV17processDequeFrameERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processDequeFrame(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV17processDequeFrameERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::threadLoop() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector5resetEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::reset() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector5resetEv(void);

/* Symbol: _ZN2P216CaptureProcessor21getCaptureFeaturePipeEi */
/* Demangled: P2::CaptureProcessor::getCaptureFeaturePipe(int) */
int _ZN2P216CaptureProcessor21getCaptureFeaturePipeEi(void);

/* Symbol: _ZN2P26MWMetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE */
/* Demangled: P2::MWMeta::MWMeta(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, P2::META_INFO const&) */
int _ZN2P26MWMetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE(void);

/* Symbol: _ZGVZ25isTrace1On_Streaming_SMVRvE6sTrace */
/* Demangled: guard variable for isTrace1On_Streaming_SMVR()::sTrace */
extern void* _ZGVZ25isTrace1On_Streaming_SMVRvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct13frameImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImageGet(NSCam::v3::NSP1Node::STREAM_IMG, signed char, android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct13frameImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::readyToRun() */
int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZNK2P29P2Cropper4dumpERKN5NSCam7Feature4ILogE */
/* Demangled: P2::P2Cropper::dump(NSCam::Feature::ILog const&) const */
int _ZNK2P29P2Cropper4dumpERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZN2P214BasicProcessor7MyTimerC1Ev */
/* Demangled: P2::BasicProcessor::MyTimer::MyTimer() */
int _ZN2P214BasicProcessor7MyTimerC1Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9setEnableEi */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::setEnable(int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9setEnableEi(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5flushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::flush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5flushEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTTN5NSCam2v38NSP1Node9P1NodeImpE */
/* Demangled: VTT for NSCam::v3::NSP1Node::P1NodeImp */
extern void* _ZTTN5NSCam2v38NSP1Node9P1NodeImpE;

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeAct12SubStreamImgE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeAct::SubStreamImg */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct12SubStreamImgE;

/* Symbol: _ZN2P214BasicProcessorC2Ev */
/* Demangled: P2::BasicProcessor::BasicProcessor() */
int _ZN2P214BasicProcessorC2Ev(void);

/* Symbol: _ZTCN2P214P2FrameRequestE0_NS_8IP2FrameE */
/* Demangled: construction vtable for P2::IP2Frame-in-P2::P2FrameRequest */
extern void* _ZTCN2P214P2FrameRequestE0_NS_8IP2FrameE;

/* Symbol: _ZTVN2P29P2RequestE */
/* Demangled: vtable for P2::P2Request */
extern void* _ZTVN2P29P2RequestE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTTN2P216CaptureProcessorE */
/* Demangled: VTT for P2::CaptureProcessor */
extern void* _ZTTN2P216CaptureProcessorE;

/* Symbol: _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp8fetchJobERNS1_8P1QueJobE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::fetchJob(NSCam::v3::NSP1Node::P1QueJob&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp8fetchJobERNS1_8P1QueJobE(void);

/* Symbol: _ZN2P214BasicProcessor7getILogERKN7android2spINS0_9P2PayloadEEE */
/* Demangled: P2::BasicProcessor::getILog(android::sp<P2::BasicProcessor::P2Payload> const&) */
int _ZN2P214BasicProcessor7getILogERKN7android2spINS0_9P2PayloadEEE(void);

/* Symbol: _ZN2P26MWInfoC2ERKN5NSCam2v315P2StreamingNode12ConfigParamsE */
/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2StreamingNode::ConfigParams const&) */
int _ZN2P26MWInfoC2ERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void);

/* Symbol: _ZN2P214MWFrameRequest10updateP1TSERKN7android2spINS_6P2MetaEEES6_RN5NSCam7Feature6P2Util12P2SensorDataE */
/* Demangled: P2::MWFrameRequest::updateP1TS(android::sp<P2::P2Meta> const&, android::sp<P2::P2Meta> const&, NSCam::Feature::P2Util::P2SensorData&) */
int _ZN2P214MWFrameRequest10updateP1TSERKN7android2spINS_6P2MetaEEES6_RN5NSCam7Feature6P2Util12P2SensorDataE(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK2P26MWInfo10getImgTypeEl */
/* Demangled: P2::MWInfo::getImgType(long) const */
int _ZNK2P26MWInfo10getImgTypeEl(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> >::__push_back_slow_path<NSCam::Feature::P2Util::P2AppStreamInfo const&>(NSCam::Feature::P2Util::P2AppStreamInfo const&) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImpD0Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZN5NSCam2v38NSP1Node9P1NodeImpD0Ev(void);

/* Symbol: _ZN10PDENodeImp13ExtractThread10threadLoopEv */
/* Demangled: PDENodeImp::ExtractThread::threadLoop() */
int _ZN10PDENodeImp13ExtractThread10threadLoopEv(void);

/* Symbol: _ZN2P214BasicProcessor7MyTimerC2Ev */
/* Demangled: P2::BasicProcessor::MyTimer::MyTimer() */
int _ZN2P214BasicProcessor7MyTimerC2Ev(void);

/* Symbol: _ZN2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE */
/* Demangled: P2::CaptureProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
int _ZN2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void);

/* Symbol: _ZGVZN2P217isTrace1On_MWInfoEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_MWInfo()::sTrace */
extern void* _ZGVZN2P217isTrace1On_MWInfoEvE6sTrace;

/* Symbol: _ZN2P27MWFrame9doReleaseEv */
/* Demangled: P2::MWFrame::doRelease() */
int _ZN2P27MWFrame9doReleaseEv(void);

/* Symbol: _ZN2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: P2::P2StreamingNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n72_N5NSCam2v38NSP1Node9P1NodeImp6uninitEv */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::uninit() */
int _ZTv0_n72_N5NSCam2v38NSP1Node9P1NodeImp6uninitEv(void);

/* Symbol: _ZTv0_n64_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: virtual thunk to RAW16NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZTv0_n64_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN2P26P2Util8SimpleIO9setUseLMVEi */
/* Demangled: P2::P2Util::SimpleIO::setUseLMV(int) */
int _ZN2P26P2Util8SimpleIO9setUseLMVEi(void);

/* Symbol: _ZN2P218StreamingProcessor10processVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::processVRQ(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam const&, android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor10processVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZNK2P218StreamingProcessor16getInputCrop3DNRERiS1_RN5NSCam5MRectERNS_6P2Util8SimpleInERKNS2_7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::getInputCrop3DNR(int&, int&, NSCam::MRect&, P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor16getInputCrop3DNRERiS1_RN5NSCam5MRectERNS_6P2Util8SimpleInERKNS2_7Feature4ILogE(void);

/* Symbol: _ZTv0_n128_N5NSCam2v38BaseNode9getStatusEv */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::getStatus() */
int _ZTv0_n128_N5NSCam2v38BaseNode9getStatusEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE7reserveEm */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE7reserveEm(void);

/* Symbol: _ZN11JpegNodeImp5flushEv */
/* Demangled: JpegNodeImp::flush() */
int _ZN11JpegNodeImp5flushEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp16onCheckDropFrameEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onCheckDropFrame() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp16onCheckDropFrameEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkPausingEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkPausing() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkPausingEv(void);

/* Symbol: _ZNK2P29P2Cropper14applyCropRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFEff */
/* Demangled: P2::P2Cropper::applyCropRatio(NSCam::Feature::ILog const&, NSCam::MRectF const&, float, float) const */
int _ZNK2P29P2Cropper14applyCropRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFEff(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImpD1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZN5NSCam2v38NSP1Node9P1NodeImpD1Ev(void);

/* Symbol: _ZTTN5NSCam2v37JpgPackE */
/* Demangled: VTT for NSCam::v3::JpgPack */
extern void* _ZTTN5NSCam2v37JpgPackE;

/* Symbol: _ZN2P27MWFrame18acquireImageStreamERKl */
/* Demangled: P2::MWFrame::acquireImageStream(long const&) */
int _ZN2P27MWFrame18acquireImageStreamERKl(void);

/* Symbol: _ZN2P218StreamingProcessor10flushSMVRQEv */
/* Demangled: P2::StreamingProcessor::flushSMVRQ() */
int _ZN2P218StreamingProcessor10flushSMVRQEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl4dumpEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::dump() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl4dumpEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7logMetaEiPKNS_9IMetadataEPKcj */
/* Demangled: NSCam::v3::NSP1Node::logMeta(int, NSCam::IMetadata const*, char const*, unsigned int) */
int _ZN5NSCam2v38NSP1Node7logMetaEiPKNS_9IMetadataEPKcj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15StuffBufferPool13compareLayoutEiNS_5MSizeEjjj */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::compareLayout(int, NSCam::MSize, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam2v38NSP1Node15StuffBufferPool13compareLayoutEiNS_5MSizeEjjj(void);

/* Symbol: _ZN9ExifUtils22updateStdExifParam_gpsERKN5NSCam9IMetadata6IEntryES4_S4_R10ExifParams */
/* Demangled: ExifUtils::updateStdExifParam_gps(NSCam::IMetadata::IEntry const&, NSCam::IMetadata::IEntry const&, NSCam::IMetadata::IEntry const&, ExifParams&) */
int _ZN9ExifUtils22updateStdExifParam_gpsERKN5NSCam9IMetadata6IEntryES4_S4_R10ExifParams(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_front(timespec* const&) */
int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::NSP1Node::P1NodeAct>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::P1NodeAct> > >::__push_back_slow_path<android::sp<NSCam::v3::NSP1Node::P1NodeAct> >(android::sp<NSCam::v3::NSP1Node::P1NodeAct>&&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet> >::__push_back_slow_path<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet const&>(NSCam::v3::NSP1Node::StuffBufferManager::InfoSet const&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZTv0_n48_N2P217DispatchProcessor13onThreadStartEv */
/* Demangled: virtual thunk to P2::DispatchProcessor::onThreadStart() */
int _ZTv0_n48_N2P217DispatchProcessor13onThreadStartEv(void);

/* Symbol: _ZNK2P29P2Request7isLargeEv */
/* Demangled: P2::P2Request::isLarge() const */
int _ZNK2P29P2Request7isLargeEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkOnExecutingEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkOnExecuting() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkOnExecutingEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV7isEISOnEPNS_9IMetadataE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::isEISOn(NSCam::IMetadata*) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV7isEISOnEPNS_9IMetadataE(void);

/* Symbol: _ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNK2P29P2Cropper14getResizedCropEv */
/* Demangled: P2::P2Cropper::getResizedCrop() const */
int _ZNK2P29P2Cropper14getResizedCropEv(void);

/* Symbol: _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE */
/* Demangled: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread */
extern void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE;

/* Symbol: _ZTVN2P212MDPProcessorE */
/* Demangled: vtable for P2::MDPProcessor */
extern void* _ZTVN2P212MDPProcessorE;

/* Symbol: _ZTVN2P27MWFrameE */
/* Demangled: vtable for P2::MWFrame */
extern void* _ZTVN2P27MWFrameE;

/* Symbol: _ZN2P218StreamingProcessor10decPayloadERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEEi */
/* Demangled: P2::StreamingProcessor::decPayload(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::StreamingProcessor::Payload> const&, int) */
int _ZN2P218StreamingProcessor10decPayloadERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEEi(void);

/* Symbol: _ZN2P218StreamingProcessor17uninitFeaturePipeEv */
/* Demangled: P2::StreamingProcessor::uninitFeaturePipe() */
int _ZN2P218StreamingProcessor17uninitFeaturePipeEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node12P1NotifyCropE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NotifyCrop */
extern void* _ZTVN5NSCam2v38NSP1Node12P1NotifyCropE;

/* Symbol: _ZN12RAW16NodeImp18getMetadataAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE */
/* Demangled: RAW16NodeImp::getMetadataAndLock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>&, NSCam::IMetadata*&) */
int _ZN12RAW16NodeImp18getMetadataAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImpD2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZN5NSCam2v38NSP1Node9P1NodeImpD2Ev(void);

/* Symbol: _ZN2P212P2DumpPlugin11isFrameDumpEi */
/* Demangled: P2::P2DumpPlugin::isFrameDump(int) */
int _ZN2P212P2DumpPlugin11isFrameDumpEi(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE;

/* Symbol: _ZTTN5NSCam2v38NSP1Node10P1TaskCtrlE */
/* Demangled: VTT for NSCam::v3::NSP1Node::P1TaskCtrl */
extern void* _ZTTN5NSCam2v38NSP1Node10P1TaskCtrlE;

/* Symbol: _ZN2P218StreamingProcessor12processSMVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::processSMVRQ(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam const&, android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor12processSMVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZN7Request11prepareExifEv */
/* Demangled: Request::prepareExif() */
int _ZN7Request11prepareExifEv(void);

/* Symbol: _ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev(void);

/* Symbol: _ZTv0_n64_N2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: virtual thunk to P2::BasicProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZTv0_n64_N2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZN2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: P2::CaptureRequestCallback::onAborted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZN2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN2P29P2InIDMapE */
/* Demangled: VTT for P2::P2InIDMap */
extern void* _ZTTN2P29P2InIDMapE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38BaseNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::BaseNode::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v38BaseNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl10releaseActERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::releaseAct(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl10releaseActERNS1_8P1QueActE(void);

/* Symbol: _ZN2P217DispatchProcessor16needBasicProcessERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::DispatchProcessor::needBasicProcess(android::sp<P2::P2Request> const&) */
int _ZN2P217DispatchProcessor16needBasicProcessERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZN2P212MDPProcessor11onWaitFlushEv */
/* Demangled: P2::MDPProcessor::onWaitFlush() */
int _ZN2P212MDPProcessor11onWaitFlushEv(void);

/* Symbol: _ZTTN2P211P2ImgPluginE */
/* Demangled: VTT for P2::P2ImgPlugin */
extern void* _ZTTN2P211P2ImgPluginE;

/* Symbol: _ZTVN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE */
/* Demangled: vtable for NSCam::v3::IPipelineFrame::MetaInfoIOMapSet */
extern void* _ZTVN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17generateCtrlQueueERNSt3__16vectorIPN6NS3Av39MetaSet_TENS3_9allocatorIS7_EEEERNS1_8P1QueJobEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateCtrlQueue(std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >&, NSCam::v3::NSP1Node::P1QueJob&, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17generateCtrlQueueERNSt3__16vectorIPN6NS3Av39MetaSet_TENS3_9allocatorIS7_EEEERNS1_8P1QueJobEi(void);

/* Symbol: _ZGVZN2P220isTrace1On_P2RequestEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_P2Request()::sVal */
extern void* _ZGVZN2P220isTrace1On_P2RequestEvE4sVal;

/* Symbol: _ZTv0_n40_N2P213P2FrameHolder17beginBatchReleaseEv */
/* Demangled: virtual thunk to P2::P2FrameHolder::beginBatchRelease() */
int _ZTv0_n40_N2P213P2FrameHolder17beginBatchReleaseEv(void);

/* Symbol: _ZTv0_n80_N5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::triggerdb(NSCam::v3::IPipelineNode::TriggerDB const&) */
int _ZTv0_n80_N5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE(void);

/* Symbol: _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<timespec, std::__1::allocator<timespec> >::__add_back_capacity() */
int _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTv0_n24_N2P29P2CropperD0Ev */
/* Demangled: virtual thunk to P2::P2Cropper::~P2Cropper() */
int _ZTv0_n24_N2P29P2CropperD0Ev(void);

/* Symbol: _ZTv0_n80_N2P25MWImg17updateVRTimestampEjRKl */
/* Demangled: virtual thunk to P2::MWImg::updateVRTimestamp(unsigned int, long const&) */
int _ZTv0_n80_N2P25MWImg17updateVRTimestampEjRKl(void);

/* Symbol: _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE */
/* Demangled: P2::MWFrameRequest::addP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, long const&, P2::IO_DIR) */
int _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr4exitEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::exit() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr4exitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*>&>::push_back(P2::MDPParam*&&) */
int _ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZGVZ18isTrace1On_CroppervE4sVal */
/* Demangled: guard variable for isTrace1On_Cropper()::sVal */
extern void* _ZGVZ18isTrace1On_CroppervE4sVal;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*>&>::push_back(android::sp<P2::P2Request>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct12poolImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImageGet(NSCam::v3::NSP1Node::STREAM_IMG, signed char, android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct12poolImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN12RAW16NodeImp12UnpackThread11requestExitEv */
/* Demangled: RAW16NodeImp::UnpackThread::requestExit() */
int _ZN12RAW16NodeImp12UnpackThread11requestExitEv(void);

/* Symbol: _ZN2P214BasicProcessor8uninit3AEv */
/* Demangled: P2::BasicProcessor::uninit3A() */
int _ZN2P214BasicProcessor8uninit3AEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED0Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::~Processor() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED0Ev(void);

/* Symbol: _ZN2P214MWFrameRequest16updateP2MetadataEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEE */
/* Demangled: P2::MWFrameRequest::updateP2Metadata(unsigned int, android::sp<NSCam::Feature::P2Util::Cropper> const&) */
int _ZN2P214MWFrameRequest16updateP2MetadataEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEE(void);

/* Symbol: _ZZ25isTrace1On_Streaming_SMVRvE4sVal */
/* Demangled: isTrace1On_Streaming_SMVR()::sVal */
extern void* _ZZ25isTrace1On_Streaming_SMVRvE4sVal;

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp;

/* Symbol: _ZGVZN2P225isTrace1On_P2BufferHandleEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_P2BufferHandle()::sVal */
extern void* _ZGVZN2P225isTrace1On_P2BufferHandleEvE4sVal;

/* Symbol: _ZTVN2P213ReleaseBundleE */
/* Demangled: vtable for P2::ReleaseBundle */
extern void* _ZTVN2P213ReleaseBundleE;

/* Symbol: _ZZN2P228isTrace1On_DispatchProcessorEvE6sTrace */
/* Demangled: P2::isTrace1On_DispatchProcessor()::sTrace */
extern void* _ZZN2P228isTrace1On_DispatchProcessorEvE6sTrace;

/* Symbol: _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9pop_frontEv */
/* Demangled: std::__1::deque<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::pop_front() */
int _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9pop_frontEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp16hardwareOps_stopEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_stop() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp16hardwareOps_stopEv(void);

/* Symbol: _ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor14drawCropRegionERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::drawCropRegion(android::sp<P2::StreamingProcessor::Payload> const&) const */
int _ZNK2P218StreamingProcessor14drawCropRegionERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZTCN2P216P2CaptureNodeImpE0_N5NSCam2v313P2CaptureNodeE */
/* Demangled: construction vtable for NSCam::v3::P2CaptureNode-in-P2::P2CaptureNodeImp */
extern void* _ZTCN2P216P2CaptureNodeImpE0_N5NSCam2v313P2CaptureNodeE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp11requestExitEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::requestExit() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp11requestExitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_dequeERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_deque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_dequeERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp6uninitEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::uninit() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp6uninitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6addRecEPNS2_6RecordE */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::addRec(NSCam::v3::NSP1Node::TimingChecker::Record*) */
int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6addRecEPNS2_6RecordE(void);

/* Symbol: _ZN2P214BasicProcessor6onP2CBERKN5NSCam8NSIoPipe7QParamsERN7android2spINS0_9P2PayloadEEE */
/* Demangled: P2::BasicProcessor::onP2CB(NSCam::NSIoPipe::QParams const&, android::sp<P2::BasicProcessor::P2Payload>&) */
int _ZN2P214BasicProcessor6onP2CBERKN5NSCam8NSIoPipe7QParamsERN7android2spINS0_9P2PayloadEEE(void);

/* Symbol: _ZTv0_n24_N2P29P2CropperD1Ev */
/* Demangled: virtual thunk to P2::P2Cropper::~P2Cropper() */
int _ZTv0_n24_N2P29P2CropperD1Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::threadLoop() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZN2P213P2FrameHolderD0Ev */
/* Demangled: P2::P2FrameHolder::~P2FrameHolder() */
int _ZN2P213P2FrameHolderD0Ev(void);

/* Symbol: _ZN10PDENodeImp13ExtractThread11requestExitEv */
/* Demangled: PDENodeImp::ExtractThread::requestExit() */
int _ZN10PDENodeImp13ExtractThread11requestExitEv(void);

/* Symbol: _ZN2P214BasicProcessor9P2PayloadD0Ev */
/* Demangled: P2::BasicProcessor::P2Payload::~P2Payload() */
int _ZN2P214BasicProcessor9P2PayloadD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18inflightMonitoringENS1_26INFLIGHT_MONITORING_TIMINGE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::inflightMonitoring(NSCam::v3::NSP1Node::INFLIGHT_MONITORING_TIMING) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18inflightMonitoringENS1_26INFLIGHT_MONITORING_TIMINGE(void);

/* Symbol: _ZTv0_n88_N5NSCam2v38NSP1Node9P1NodeImp5flushEv */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::flush() */
int _ZTv0_n88_N5NSCam2v38NSP1Node9P1NodeImp5flushEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_destroyEPvm(void);

/* Symbol: _ZN2P27isValidERKN7android2spINS_5P2ImgEEE */
/* Demangled: P2::isValid(android::sp<P2::P2Img> const&) */
int _ZN2P27isValidERKN7android2spINS_5P2ImgEEE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO9getMDPSrcEv */
/* Demangled: P2::P2Util::SimpleIO::getMDPSrc() const */
int _ZNK2P26P2Util8SimpleIO9getMDPSrcEv(void);

/* Symbol: _ZN2P218P2StreamingNodeImp4kickEv */
/* Demangled: P2::P2StreamingNodeImp::kick() */
int _ZN2P218P2StreamingNodeImp4kickEv(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn11getSensorIdEv */
/* Demangled: P2::P2Util::SimpleIn::getSensorId() const */
int _ZNK2P26P2Util8SimpleIn11getSensorIdEv(void);

/* Symbol: _ZN2P29P2Request19releaseMetaWithLockENS_7ID_METAE */
/* Demangled: P2::P2Request::releaseMetaWithLock(P2::ID_META) */
int _ZN2P29P2Request19releaseMetaWithLockENS_7ID_METAE(void);

/* Symbol: _ZNK2P25MWImg18getIImageBufferPtrEv */
/* Demangled: P2::MWImg::getIImageBufferPtr() const */
int _ZNK2P25MWImg18getIImageBufferPtrEv(void);

/* Symbol: _ZN2P218StreamingProcessor12needReConfigERKN5NSCam7Feature6P2Util12P2ConfigInfoES6_ */
/* Demangled: P2::StreamingProcessor::needReConfig(NSCam::Feature::P2Util::P2ConfigInfo const&, NSCam::Feature::P2Util::P2ConfigInfo const&) */
int _ZN2P218StreamingProcessor12needReConfigERKN5NSCam7Feature6P2Util12P2ConfigInfoES6_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV4initERN7android2spINS_12IImageBufferEEEjj */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::init(android::sp<NSCam::IImageBuffer>&, unsigned int, unsigned int) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV4initERN7android2spINS_12IImageBufferEEEjj(void);

/* Symbol: _ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void);

/* Symbol: _ZTv0_n88_N10PDENodeImp5flushEv */
/* Demangled: virtual thunk to PDENodeImp::flush() */
int _ZTv0_n88_N10PDENodeImp5flushEv(void);

/* Symbol: _ZTTN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE */
/* Demangled: VTT for P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread */
extern void* _ZTTN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: P2::P2StreamingNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTVN2P216P2CaptureNodeImpE */
/* Demangled: vtable for P2::P2CaptureNodeImp */
extern void* _ZTVN2P216P2CaptureNodeImpE;

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE7reserveEm */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE7reserveEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify12doNotifyCropEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyCrop(void*, void*) */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify12doNotifyCropEPvS3_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE6rehashEm(void);

/* Symbol: _ZTC12RAW16NodeImp40_N5NSCam2v39RAW16NodeE */
/* Demangled: construction vtable for NSCam::v3::RAW16Node-in-RAW16NodeImp */
extern void* _ZTC12RAW16NodeImp40_N5NSCam2v39RAW16NodeE;

/* Symbol: _ZN2P213P2FrameHolderD1Ev */
/* Demangled: P2::P2FrameHolder::~P2FrameHolder() */
int _ZN2P213P2FrameHolderD1Ev(void);

/* Symbol: _ZN5NSCam2v38BaseNode26ensureMetaBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_17IMetaStreamBufferEEEi */
/* Demangled: NSCam::v3::BaseNode::ensureMetaBufferAvailable_(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IMetaStreamBuffer>&, int) */
int _ZN5NSCam2v38BaseNode26ensureMetaBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_17IMetaStreamBufferEEEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp13releaseActionERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::releaseAction(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp13releaseActionERNS1_8P1QueActE(void);

/* Symbol: _ZGVZ20isTrace1On_ProcessorvE4sVal */
/* Demangled: guard variable for isTrace1On_Processor()::sVal */
extern void* _ZGVZ20isTrace1On_ProcessorvE4sVal;

/* Symbol: _ZN2P214BasicProcessor9P2PayloadD1Ev */
/* Demangled: P2::BasicProcessor::P2Payload::~P2Payload() */
int _ZN2P214BasicProcessor9P2PayloadD1Ev(void);

/* Symbol: _ZTTN2P214P2BufferHandleE */
/* Demangled: VTT for P2::P2BufferHandle */
extern void* _ZTTN2P214P2BufferHandleE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6configERKS2_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::config(P2::P2ConfigParam const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6configERKS2_(void);

/* Symbol: _ZNK2P26MWMeta11getStreamIDEv */
/* Demangled: P2::MWMeta::getStreamID() const */
int _ZNK2P26MWMeta11getStreamIDEv(void);

/* Symbol: _ZN5NSCam2v39DummyNodeC2ERKNS0_13IPipelineNode10InitParamsE */
/* Demangled: NSCam::v3::DummyNode::DummyNode(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN5NSCam2v39DummyNodeC2ERKNS0_13IPipelineNode10InitParamsE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED2Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::~Processor() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED2Ev(void);

/* Symbol: _ZZ18isTrace1On_CroppervE6sTrace */
/* Demangled: isTrace1On_Cropper()::sTrace */
extern void* _ZZ18isTrace1On_CroppervE6sTrace;

/* Symbol: _ZTv0_n48_N2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE */
/* Demangled: virtual thunk to P2::P2DumpPlugin::onPlugin(P2::P2Img const*) */
int _ZTv0_n48_N2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__emplace_unique_key_args<P2::ID_META, std::__1::pair<P2::ID_META const, P2::ID_META> const&>(P2::ID_META const&, std::__1::pair<P2::ID_META const, P2::ID_META> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZGVZ23isTrace1On_DrawIDPluginvE6sTrace */
/* Demangled: guard variable for isTrace1On_DrawIDPlugin()::sTrace */
extern void* _ZGVZ23isTrace1On_DrawIDPluginvE6sTrace;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node12P1DeliverMgrEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1DeliverMgr>::operator=(NSCam::v3::NSP1Node::P1DeliverMgr*) */
int _ZN7android2spIN5NSCam2v38NSP1Node12P1DeliverMgrEEaSEPS4_(void);

/* Symbol: _ZN12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE */
/* Demangled: RAW16NodeImp::config(NSCam::v3::RAW16Node::ConfigParams const&) */
int _ZN12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED0Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::~Processor() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED0Ev(void);

/* Symbol: _ZTv0_n24_N2P218P2StreamingNodeImpD0Ev */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZTv0_n24_N2P218P2StreamingNodeImpD0Ev(void);

/* Symbol: _ZTv0_n48_N2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE */
/* Demangled: virtual thunk to P2::P2ScanlinePlugin::onPlugin(P2::P2Img const*) */
int _ZTv0_n48_N2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE(void);

/* Symbol: _ZTVN2P218StreamingProcessorE */
/* Demangled: vtable for P2::StreamingProcessor */
extern void* _ZTVN2P218StreamingProcessorE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImagePutENS1_10STREAM_IMGEa */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::stuffImagePut(NSCam::v3::NSP1Node::STREAM_IMG, signed char) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImagePutENS1_10STREAM_IMGEa(void);

/* Symbol: _ZTCN5NSCam2v38NSP1Node12P1DeliverMgrE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::NSP1Node::P1DeliverMgr */
extern void* _ZTCN5NSCam2v38NSP1Node12P1DeliverMgrE0_N7android6ThreadE;

/* Symbol: _ZN2P214BasicProcessor10checkBurstEv */
/* Demangled: P2::BasicProcessor::checkBurst() */
int _ZN2P214BasicProcessor10checkBurstEv(void);

/* Symbol: _ZTTN2P222CaptureRequestCallbackE */
/* Demangled: VTT for P2::CaptureRequestCallback */
extern void* _ZTTN2P222CaptureRequestCallbackE;

/* Symbol: _ZNK2P218StreamingProcessor14prepareSMVRVarERKN5NSCam7Feature4ILogERNS1_12NSCamFeature13NSFeaturePipe16FeaturePipeParamEj */
/* Demangled: P2::StreamingProcessor::prepareSMVRVar(NSCam::Feature::ILog const&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, unsigned int) const */
int _ZNK2P218StreamingProcessor14prepareSMVRVarERKN5NSCam7Feature4ILogERNS1_12NSCamFeature13NSFeaturePipe16FeaturePipeParamEj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV8is3DNROnEPNS_9IMetadataES4_ */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::is3DNROn(NSCam::IMetadata*, NSCam::IMetadata*) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV8is3DNROnEPNS_9IMetadataES4_(void);

/* Symbol: _ZN2P213P2FrameHolderD2Ev */
/* Demangled: P2::P2FrameHolder::~P2FrameHolder() */
int _ZN2P213P2FrameHolderD2Ev(void);

/* Symbol: _ZTv0_n96_N5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN2P214BasicProcessor9P2PayloadD2Ev */
/* Demangled: P2::BasicProcessor::P2Payload::~P2Payload() */
int _ZN2P214BasicProcessor9P2PayloadD2Ev(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5flushEv */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::flush() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5flushEv(void);

/* Symbol: _ZNK2P27MWFrame14validateStreamERKlRN5NSCam2v316IStreamBufferSetERKN7android2spINS4_13IStreamBufferEEEi */
/* Demangled: P2::MWFrame::validateStream(long const&, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IStreamBuffer> const&, int) const */
int _ZNK2P27MWFrame14validateStreamERKlRN5NSCam2v316IStreamBufferSetERKN7android2spINS4_13IStreamBufferEEEi(void);

/* Symbol: _ZTv0_n96_N2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P27isValidEPKNS_6P2MetaE */
/* Demangled: P2::isValid(P2::P2Meta const*) */
int _ZN2P27isValidEPKNS_6P2MetaE(void);

/* Symbol: _ZN2P218StreamingProcessor16releaseSMVRQueueEjj */
/* Demangled: P2::StreamingProcessor::releaseSMVRQueue(unsigned int, unsigned int) */
int _ZN2P218StreamingProcessor16releaseSMVRQueueEjj(void);

/* Symbol: _ZTv0_n96_N2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n64_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: virtual thunk to PDENodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZTv0_n64_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZTv0_n72_N2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE */
/* Demangled: virtual thunk to P2::BasicProcessor::onEnque(android::sp<P2::P2Request> const&) */
int _ZTv0_n72_N2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZTv0_n24_N2P218P2StreamingNodeImpD1Ev */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZTv0_n24_N2P218P2StreamingNodeImpD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl12getStageCtrlEv */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::getStageCtrl() */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl12getStageCtrlEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18LongExposureStatus5resetEi */
/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::reset(int) */
int _ZN5NSCam2v38NSP1Node18LongExposureStatus5resetEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp16ensureStartReadyEhi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::ensureStartReady(unsigned char, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp16ensureStartReadyEhi(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE5enqueERKSB_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::enque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE5enqueERKSB_(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node10P1TaskCtrlEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1TaskCtrl>::operator=(NSCam::v3::NSP1Node::P1TaskCtrl*) */
int _ZN7android2spIN5NSCam2v38NSP1Node10P1TaskCtrlEEaSEPS4_(void);

/* Symbol: _ZTC11JpegNodeImp40_N5NSCam2v38JpegNodeE */
/* Demangled: construction vtable for NSCam::v3::JpegNode-in-JpegNodeImp */
extern void* _ZTC11JpegNodeImp40_N5NSCam2v38JpegNodeE;

/* Symbol: _ZN2P210isTrace1OnEv */
/* Demangled: P2::isTrace1On() */
int _ZN2P210isTrace1OnEv(void);

/* Symbol: _ZNK2P25P2Img13dumpNddBufferEv */
/* Demangled: P2::P2Img::dumpNddBuffer() const */
int _ZNK2P25P2Img13dumpNddBufferEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE8__rehashEm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_5MSizeEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::MSize> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_5MSizeEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN2P217DispatchProcessorD0Ev */
/* Demangled: P2::DispatchProcessor::~DispatchProcessor() */
int _ZN2P217DispatchProcessorD0Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9waitFlushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::waitFlush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9waitFlushEv(void);

/* Symbol: _ZN2P25MWImgC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji */
/* Demangled: P2::MWImg::MWImg(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, NSCam::Feature::P2Util::IMG_TYPE, P2::IMG_INFO const&, unsigned int, int) */
int _ZN2P25MWImgC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji(void);

/* Symbol: _ZN2P27isValidERKN7android2spINS_6P2MetaEEE */
/* Demangled: P2::isValid(android::sp<P2::P2Meta> const&) */
int _ZN2P27isValidERKN7android2spINS_6P2MetaEEE(void);

/* Symbol: _ZNK2P25P2Img12getHumanNameEv */
/* Demangled: P2::P2Img::getHumanName() const */
int _ZNK2P25P2Img12getHumanNameEv(void);

/* Symbol: _ZGVZ25isTrace1On_ScanlinePluginvE6sTrace */
/* Demangled: guard variable for isTrace1On_ScanlinePlugin()::sTrace */
extern void* _ZGVZ25isTrace1On_ScanlinePluginvE6sTrace;

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED2Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::~Processor() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED2Ev(void);

/* Symbol: _ZNK2P29P2Cropper13getCropRegionEv */
/* Demangled: P2::P2Cropper::getCropRegion() const */
int _ZNK2P29P2Cropper13getCropRegionEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm(void);

/* Symbol: _ZN2P222CaptureRequestCallbackC1EPNS_16CaptureProcessorE */
/* Demangled: P2::CaptureRequestCallback::CaptureRequestCallback(P2::CaptureProcessor*) */
int _ZN2P222CaptureRequestCallbackC1EPNS_16CaptureProcessorE(void);

/* Symbol: _ZTv0_n64_N2P212MDPProcessor8onConfigERKj */
/* Demangled: virtual thunk to P2::MDPProcessor::onConfig(unsigned int const&) */
int _ZTv0_n64_N2P212MDPProcessor8onConfigERKj(void);

/* Symbol: _ZTv0_n104_N2P218P2StreamingNodeImp4kickEv */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::kick() */
int _ZTv0_n104_N2P218P2StreamingNodeImp4kickEv(void);

/* Symbol: _ZN2P29P2InIDMapC2ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj */
/* Demangled: P2::P2InIDMap::P2InIDMap(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&, unsigned int) */
int _ZN2P29P2InIDMapC2ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj(void);

/* Symbol: _ZN2P214BasicProcessor8P2CookieC1EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE */
/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
int _ZN2P214BasicProcessor8P2CookieC1EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEEE;

/* Symbol: _ZTv0_n40_NK2P26MWMeta11getStreamIDEv */
/* Demangled: virtual thunk to P2::MWMeta::getStreamID() const */
int _ZTv0_n40_NK2P26MWMeta11getStreamIDEv(void);

/* Symbol: _ZTv0_n24_N2P213P2FrameHolderD0Ev */
/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
int _ZTv0_n24_N2P213P2FrameHolderD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void);

/* Symbol: _ZN2P29P2InIDMap6SubImgE */
/* Demangled: P2::P2InIDMap::SubImg */
extern void* _ZN2P29P2InIDMap6SubImgE;

/* Symbol: _ZN2P29SMVRQueue8SMVRDataC2EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_ */
/* Demangled: P2::SMVRQueue::SMVRData::SMVRData(int, android::sp<P2::P2Request> const&, android::sp<P2::P2Img> const&, android::sp<P2::P2Img> const&) */
int _ZN2P29SMVRQueue8SMVRDataC2EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_(void);

/* Symbol: _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9push_backERKS3_ */
/* Demangled: std::__1::deque<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::push_back(P2::SMVRQueue::SMVRData const&) */
int _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9push_backERKS3_(void);

/* Symbol: _ZNK2P218StreamingProcessor23prepare3DNR_FeatureDataEiiiRNS_6P2Util8SimpleInEhRKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepare3DNR_FeatureData(int, int, int, P2::P2Util::SimpleIn&, unsigned char, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor23prepare3DNR_FeatureDataEiiiRNS_6P2Util8SimpleInEhRKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct17frameMetadataInitENS1_11STREAM_METAERN7android2spINS0_17IMetaStreamBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameMetadataInit(NSCam::v3::NSP1Node::STREAM_META, android::sp<NSCam::v3::IMetaStreamBuffer>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct17frameMetadataInitENS1_11STREAM_METAERN7android2spINS0_17IMetaStreamBufferEEE(void);

/* Symbol: _ZN12RAW16NodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: RAW16NodeImp::errorHandle(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN12RAW16NodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN10PDENodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: PDENodeImp::onDequeRequest(android::sp<NSCam::v3::IPipelineFrame>&) */
int _ZN10PDENodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P217DispatchProcessorD1Ev */
/* Demangled: P2::DispatchProcessor::~DispatchProcessor() */
int _ZN2P217DispatchProcessorD1Ev(void);

/* Symbol: _ZN5NSCam2v39DummyNode14onProcessFrameERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::DummyNode::onProcessFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v39DummyNode14onProcessFrameERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl6configEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::config() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl6configEv(void);

/* Symbol: _ZTVN2P212P2DumpPluginE */
/* Demangled: vtable for P2::P2DumpPlugin */
extern void* _ZTVN2P212P2DumpPluginE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadC1EPS7_i */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::ProcessThread(P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >*, int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadC1EPS7_i(void);

/* Symbol: _ZN2P216P2CaptureNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE */
/* Demangled: P2::P2CaptureNodeImp::updateConfigInfo(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<P2::MWInfo> const&) */
int _ZN2P216P2CaptureNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE(void);

/* Symbol: _ZNK5NSCam2v38NSP1Node9P1NodeAct6getNumEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getNum() const */
int _ZNK5NSCam2v38NSP1Node9P1NodeAct6getNumEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE7reserveEm */
/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE7reserveEm(void);

/* Symbol: _ZGVZ24isTrace1On_StreamingNodevE6sTrace */
/* Demangled: guard variable for isTrace1On_StreamingNode()::sTrace */
extern void* _ZGVZ24isTrace1On_StreamingNodevE6sTrace;

/* Symbol: _ZNK2P218StreamingProcessor14prepareOutputsERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::prepareOutputs(android::sp<P2::StreamingProcessor::Payload> const&) const */
int _ZNK2P218StreamingProcessor14prepareOutputsERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN10PDENodeImp13ExtractThreadE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-PDENodeImp::ExtractThread */
extern void* _ZTCN10PDENodeImp13ExtractThreadE0_N7android6ThreadE;

/* Symbol: _ZTv0_n24_N2P213P2FrameHolderD1Ev */
/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
int _ZTv0_n24_N2P213P2FrameHolderD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp13beckonRequestEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::beckonRequest() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp13beckonRequestEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEERKNS4_INS0_16IImageStreamInfoEEEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::createStuffBuffer(android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::v3::IImageStreamInfo> const&, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEERKNS4_INS0_16IImageStreamInfoEEEi(void);

/* Symbol: _ZN2P212toCapabilityEN5NSCam7Feature6P2Util8IMG_TYPEE */
/* Demangled: P2::toCapability(NSCam::Feature::P2Util::IMG_TYPE) */
int _ZN2P212toCapabilityEN5NSCam7Feature6P2Util8IMG_TYPEE(void);

/* Symbol: _ZN5NSCam2v38BaseNode13onCtrlSettingERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri */
/* Demangled: NSCam::v3::BaseNode::onCtrlSetting(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZN5NSCam2v38BaseNode13onCtrlSettingERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV14checkSwitchOutEPNS_9IMetadataE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::checkSwitchOut(NSCam::IMetadata*) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV14checkSwitchOutEPNS_9IMetadataE(void);

/* Symbol: _ZNK7android12SortedVectorIlE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v39RAW16Node14createInstanceEv */
/* Demangled: NSCam::v3::RAW16Node::createInstance() */
int _ZN5NSCam2v39RAW16Node14createInstanceEv(void);

/* Symbol: _ZTv0_n136_N12RAW16NodeImpD0Ev */
/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
int _ZTv0_n136_N12RAW16NodeImpD0Ev(void);

/* Symbol: _ZN2P217DispatchProcessorD2Ev */
/* Demangled: P2::DispatchProcessor::~DispatchProcessor() */
int _ZN2P217DispatchProcessorD2Ev(void);

/* Symbol: _ZTv0_n40_NK2P218P2StreamingNodeImp9getNodeIdEv */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::getNodeId() const */
int _ZTv0_n40_NK2P218P2StreamingNodeImp9getNodeIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp11cleanActionERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::cleanAction(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp11cleanActionERNS1_8P1QueActE(void);

/* Symbol: _ZN12RAW16NodeImp6uninitEv */
/* Demangled: RAW16NodeImp::uninit() */
int _ZN12RAW16NodeImp6uninitEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE10push_frontEOSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*> >::push_front(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*&&) */
int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE10push_frontEOSA_(void);

/* Symbol: _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::threadLoop() */
int _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZTVN2P214MWFrameRequestE */
/* Demangled: vtable for P2::MWFrameRequest */
extern void* _ZTVN2P214MWFrameRequestE;

/* Symbol: _ZN5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE */
/* Demangled: NSCam::v3::BaseNode::triggerdb(NSCam::v3::IPipelineNode::TriggerDB const&) */
int _ZN5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker9checkListEl */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::checkList(long) */
int _ZN5NSCam2v38NSP1Node13TimingChecker9checkListEl(void);

/* Symbol: _ZN11JpegNodeImp10encodeExifERN7android2spI12encode_frameEE */
/* Demangled: JpegNodeImp::encodeExif(android::sp<encode_frame>&) */
int _ZN11JpegNodeImp10encodeExifERN7android2spI12encode_frameEE(void);

/* Symbol: _ZN2P26P2Meta7getNameENS_7ID_METAE */
/* Demangled: P2::P2Meta::getName(P2::ID_META) */
int _ZN2P26P2Meta7getNameENS_7ID_METAE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_(void);

/* Symbol: _ZN2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: P2::CaptureProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZN2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZTv0_n48_NK2P26MWMeta7isValidEv */
/* Demangled: virtual thunk to P2::MWMeta::isValid() const */
int _ZTv0_n48_NK2P26MWMeta7isValidEv(void);

/* Symbol: _ZNK2P25P2Img10dumpBufferEPN5NSCam12IImageBufferEj */
/* Demangled: P2::P2Img::dumpBuffer(NSCam::IImageBuffer*, unsigned int) const */
int _ZNK2P25P2Img10dumpBufferEPN5NSCam12IImageBufferEj(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload14getRequestPackERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::StreamingProcessor::Payload::getRequestPack(android::sp<P2::P2Request> const&) */
int _ZN2P218StreamingProcessor7Payload14getRequestPackERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZN2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: P2::StreamingProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZN2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZN2P216P2CaptureNodeImp5flushEv */
/* Demangled: P2::P2CaptureNodeImp::flush() */
int _ZN2P216P2CaptureNodeImp5flushEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4sizeEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::size() */
int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4sizeEv(void);

/* Symbol: _ZTv0_n136_N12RAW16NodeImpD1Ev */
/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
int _ZTv0_n136_N12RAW16NodeImpD1Ev(void);

/* Symbol: _ZN10PDENodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: PDENodeImp::onProcessFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN10PDENodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P218StreamingProcessor14PartialPayloadD0Ev */
/* Demangled: P2::StreamingProcessor::PartialPayload::~PartialPayload() */
int _ZN2P218StreamingProcessor14PartialPayloadD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload13prepareFdDataERKN5NSCam7Feature6P2Util6P2InfoEPNS2_12IFDContainerE */
/* Demangled: P2::StreamingProcessor::Payload::prepareFdData(NSCam::Feature::P2Util::P2Info const&, NSCam::IFDContainer*) */
int _ZN2P218StreamingProcessor7Payload13prepareFdDataERKN5NSCam7Feature6P2Util6P2InfoEPNS2_12IFDContainerE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::createStuffBuffer(android::sp<NSCam::IImageBuffer>&, char const*, int, NSCam::MSize, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEi(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node7LogInfo10CheckPointENS_9allocatorIS5_EEE6assignIPKS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38NSP1Node7LogInfo10CheckPointENS_9allocatorIS5_EEE6assignIPKS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node7LogInfo10CheckPointENS_9allocatorIS5_EEE6assignIPKS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void);

/* Symbol: _ZTVN2P25P2ImgE */
/* Demangled: vtable for P2::P2Img */
extern void* _ZTVN2P25P2ImgE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE5flushEv */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::flush() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE5flushEv(void);

/* Symbol: _ZN2P27MWFrame20toStreamBufferStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE */
/* Demangled: P2::MWFrame::toStreamBufferStatus(NSCam::Feature::ILog const&, P2::IO_STATUS) */
int _ZN2P27MWFrame20toStreamBufferStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::pair<P2::ID_IMG const, P2::ID_IMG> const&>(P2::ID_IMG const&, std::__1::pair<P2::ID_IMG const, P2::ID_IMG> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataPutENS1_11STREAM_METAE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameMetadataPut(NSCam::v3::NSP1Node::STREAM_META) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataPutENS1_11STREAM_METAE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::config(NSCam::v3::P1Node::ConfigParams const&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE(void);

/* Symbol: _ZNK5NSCam2v38NSP1Node9P1NodeAct7getTypeEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getType() const */
int _ZNK5NSCam2v38NSP1Node9P1NodeAct7getTypeEv(void);

/* Symbol: _ZNK2P29P2Request11getSensorIDEv */
/* Demangled: P2::P2Request::getSensorID() const */
int _ZNK2P29P2Request11getSensorIDEv(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZGVZN2P217isTrace1On_MWInfoEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_MWInfo()::sVal */
extern void* _ZGVZN2P217isTrace1On_MWInfoEvE4sVal;

/* Symbol: _ZN2P27MWFrame18releaseImageStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE */
/* Demangled: P2::MWFrame::releaseImageStream(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IImageStreamBuffer> const&, P2::IO_DIR, P2::IO_STATUS) */
int _ZN2P27MWFrame18releaseImageStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm */
/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm(void);

/* Symbol: _ZZN2P220isTrace1On_P2RequestEvE6sTrace */
/* Demangled: P2::isTrace1On_P2Request()::sTrace */
extern void* _ZZN2P220isTrace1On_P2RequestEvE6sTrace;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6configERKS2_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::config(P2::P2ConfigParam const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6configERKS2_(void);

/* Symbol: _ZTv0_n40_NK2P25MWImg11getStreamIDEv */
/* Demangled: virtual thunk to P2::MWImg::getStreamID() const */
int _ZTv0_n40_NK2P25MWImg11getStreamIDEv(void);

/* Symbol: _ZN2P27MWFrame13dispatchFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl */
/* Demangled: P2::MWFrame::dispatchFrame(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IPipelineFrame> const&, long const&) */
int _ZN2P27MWFrame13dispatchFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl(void);

/* Symbol: _ZN2P218StreamingProcessor14PartialPayloadD1Ev */
/* Demangled: P2::StreamingProcessor::PartialPayload::~PartialPayload() */
int _ZN2P218StreamingProcessor14PartialPayloadD1Ev(void);

/* Symbol: _ZN11JpegBufPool10putBufHeapEli */
/* Demangled: JpegBufPool::putBufHeap(long, int) */
int _ZN11JpegBufPool10putBufHeapEli(void);

/* Symbol: _ZThn40_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: non-virtual thunk to JpegNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZThn40_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZNK2P25MWImg13processPluginEv */
/* Demangled: P2::MWImg::processPlugin() const */
int _ZNK2P25MWImg13processPluginEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> const&>(unsigned int const&, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp29updateCustomMetaInBypassFrameERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::updateCustomMetaInBypassFrame(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp29updateCustomMetaInBypassFrameERNS1_8P1QueActE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node16P1RegisterNotifyE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1RegisterNotify */
extern void* _ZTVN5NSCam2v38NSP1Node16P1RegisterNotifyE;

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrlD0Ev */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrlD0Ev(void);

/* Symbol: _ZN2P212MDPProcessorC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: P2::MDPProcessor::MDPProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P212MDPProcessorC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN2P218P2StreamingNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE */
/* Demangled: P2::P2StreamingNodeImp::updateConfigInfo(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<P2::MWInfo> const&) */
int _ZN2P218P2StreamingNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm(void);

/* Symbol: _ZTVN7android12SortedVectorIlEE */
/* Demangled: vtable for android::SortedVector<long> */
extern void* _ZTVN7android12SortedVectorIlEE;

/* Symbol: _ZN2P210isTrace2OnEv */
/* Demangled: P2::isTrace2On() */
int _ZN2P210isTrace2OnEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node16TimingCheckerMgrE */
/* Demangled: vtable for NSCam::v3::NSP1Node::TimingCheckerMgr */
extern void* _ZTVN5NSCam2v38NSP1Node16TimingCheckerMgrE;

/* Symbol: _ZTv0_n56_NK2P26MWMeta6getDirEv */
/* Demangled: virtual thunk to P2::MWMeta::getDir() const */
int _ZTv0_n56_NK2P26MWMeta6getDirEv(void);

/* Symbol: _ZZ18isTrace1On_MWFramevE4sVal */
/* Demangled: isTrace1On_MWFrame()::sVal */
extern void* _ZZ18isTrace1On_MWFramevE4sVal;

/* Symbol: _ZTCN5NSCam2v39DummyNodeE0_NS0_13IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-NSCam::v3::DummyNode */
extern void* _ZTCN5NSCam2v39DummyNodeE0_NS0_13IPipelineNodeE;

/* Symbol: _ZTv0_n24_N5NSCam2v37JpgPackD0Ev */
/* Demangled: virtual thunk to NSCam::v3::JpgPack::~JpgPack() */
int _ZTv0_n24_N5NSCam2v37JpgPackD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN2P218StreamingProcessor14PartialPayloadD2Ev */
/* Demangled: P2::StreamingProcessor::PartialPayload::~PartialPayload() */
int _ZN2P218StreamingProcessor14PartialPayloadD2Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor7isEIS12Ev */
/* Demangled: P2::StreamingProcessor::isEIS12() const */
int _ZNK2P218StreamingProcessor7isEIS12Ev(void);

/* Symbol: _ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD0Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::PartialPayload::~PartialPayload() */
int _ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl15isLegacyStandbyEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::isLegacyStandby() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl15isLegacyStandbyEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr10threadLoopEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::threadLoop() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10threadLoopEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node13TimingChecker6ClientE */
/* Demangled: vtable for NSCam::v3::NSP1Node::TimingChecker::Client */
extern void* _ZTVN5NSCam2v38NSP1Node13TimingChecker6ClientE;

/* Symbol: _ZTv0_n48_N2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: virtual thunk to P2::CaptureRequestCallback::onRestored(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZTv0_n48_N2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZTv0_n72_N2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE */
/* Demangled: virtual thunk to P2::DispatchProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
int _ZTv0_n72_N2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrlD1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrlD1Ev(void);

/* Symbol: _ZTC10PDENodeImp0_N5NSCam2v38BaseNodeE */
/* Demangled: construction vtable for NSCam::v3::BaseNode-in-PDENodeImp */
extern void* _ZTC10PDENodeImp0_N5NSCam2v38BaseNodeE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE4initERKS1_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::init(P2::P2InitParam const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE4initERKS1_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N2P27MWFrameD0Ev */
/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
int _ZTv0_n24_N2P27MWFrameD0Ev(void);

/* Symbol: _ZN2P28IMG_INFOC1Ev */
/* Demangled: P2::IMG_INFO::IMG_INFO() */
int _ZN2P28IMG_INFOC1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector8queryActERNS1_8P1QueActEj */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::queryAct(NSCam::v3::NSP1Node::P1QueAct&, unsigned int) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector8queryActERNS1_8P1QueActEj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo5clearEv */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::clear() */
int _ZN5NSCam2v38NSP1Node7LogInfo5clearEv(void);

/* Symbol: _ZTC11JpegNodeImp0_N5NSCam2v38BaseNodeE */
/* Demangled: construction vtable for NSCam::v3::BaseNode-in-JpegNodeImp */
extern void* _ZTC11JpegNodeImp0_N5NSCam2v38BaseNodeE;

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE5clearEv(void);

/* Symbol: _ZN2P213releaseStreamERKN5NSCam7Feature4ILogERKlRNS0_2v316IStreamBufferSetERKN7android2spIKNS7_14IStreamInfoSetEEE */
/* Demangled: P2::releaseStream(NSCam::Feature::ILog const&, long const&, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IStreamInfoSet const> const&) */
int _ZN2P213releaseStreamERKN5NSCam7Feature4ILogERKlRNS0_2v316IStreamBufferSetERKN7android2spIKNS7_14IStreamInfoSetEEE(void);

/* Symbol: _ZN2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: P2::P2StreamingNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN2P29SMVRQueue8SMVRDataC1EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_ */
/* Demangled: P2::SMVRQueue::SMVRData::SMVRData(int, android::sp<P2::P2Request> const&, android::sp<P2::P2Img> const&, android::sp<P2::P2Img> const&) */
int _ZN2P29SMVRQueue8SMVRDataC1EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_(void);

/* Symbol: _ZTv0_n72_N2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE */
/* Demangled: virtual thunk to P2::StreamingProcessor::onEnque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
int _ZTv0_n72_N2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR2CropEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyYuvR2Crop() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR2CropEv(void);

/* Symbol: _ZTv0_n24_N5NSCam2v37JpgPackD1Ev */
/* Demangled: virtual thunk to NSCam::v3::JpgPack::~JpgPack() */
int _ZTv0_n24_N5NSCam2v37JpgPackD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__push_back_slow_path<android::sp<NSCam::IImageBuffer> const&>(android::sp<NSCam::IImageBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD1Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::PartialPayload::~PartialPayload() */
int _ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD1Ev(void);

/* Symbol: _ZTv0_n80_N2P216CaptureProcessor13onNotifyFlushEv */
/* Demangled: virtual thunk to P2::CaptureProcessor::onNotifyFlush() */
int _ZTv0_n80_N2P216CaptureProcessor13onNotifyFlushEv(void);

/* Symbol: _ZN2P29P2Cropper10prepareLMVEv */
/* Demangled: P2::P2Cropper::prepareLMV() */
int _ZN2P29P2Cropper10prepareLMVEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrlD2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrlD2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp16processRedoFrameERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::processRedoFrame(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp16processRedoFrameERNS1_8P1QueActE(void);

/* Symbol: _ZN11JpegNodeImp12returnBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE */
/* Demangled: JpegNodeImp::returnBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&) */
int _ZN11JpegNodeImp12returnBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE(void);

/* Symbol: _ZTv0_n24_N2P27MWFrameD1Ev */
/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
int _ZTv0_n24_N2P27MWFrameD1Ev(void);

/* Symbol: _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAENS_6IO_DIRE */
/* Demangled: P2::MWFrameRequest::addP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, P2::ID_META, P2::IO_DIR) */
int _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAENS_6IO_DIRE(void);

/* Symbol: _ZN2P28IMG_INFOC2Ev */
/* Demangled: P2::IMG_INFO::IMG_INFO() */
int _ZN2P28IMG_INFOC2Ev(void);

/* Symbol: _ZTv0_n48_N2P216CaptureProcessor13onThreadStartEv */
/* Demangled: virtual thunk to P2::CaptureProcessor::onThreadStart() */
int _ZTv0_n48_N2P216CaptureProcessor13onThreadStartEv(void);

/* Symbol: _ZTTN2P217DispatchProcessorE */
/* Demangled: VTT for P2::DispatchProcessor */
extern void* _ZTTN2P217DispatchProcessorE;

/* Symbol: _ZTv0_n24_N2P212MDPProcessorD0Ev */
/* Demangled: virtual thunk to P2::MDPProcessor::~MDPProcessor() */
int _ZTv0_n24_N2P212MDPProcessorD0Ev(void);

/* Symbol: _ZNK2P27MWFrame16createBlobImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERKNS2_INS3_2v318IImageStreamBufferEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENSD_9allocatorISG_EEEE */
/* Demangled: P2::MWFrame::createBlobImages(android::sp<NSCam::IImageBufferHeap> const&, android::sp<NSCam::v3::IImageStreamBuffer> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >&) const */
int _ZNK2P27MWFrame16createBlobImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERKNS2_INS3_2v318IImageStreamBufferEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENSD_9allocatorISG_EEEE(void);

/* Symbol: _ZN2P218StreamingProcessor15initFeaturePipeERKN5NSCam7Feature6P2Util12P2ConfigInfoE */
/* Demangled: P2::StreamingProcessor::initFeaturePipe(NSCam::Feature::P2Util::P2ConfigInfo const&) */
int _ZN2P218StreamingProcessor15initFeaturePipeERKN5NSCam7Feature6P2Util12P2ConfigInfoE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr6configEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::config() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr6configEv(void);

/* Symbol: _ZNK5NSCam2v38NSP1Node9P1NodeAct8getFlushENS1_10FLUSH_TYPEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getFlush(NSCam::v3::NSP1Node::FLUSH_TYPE) const */
int _ZNK5NSCam2v38NSP1Node9P1NodeAct8getFlushENS1_10FLUSH_TYPEE(void);

/* Symbol: _ZN10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE */
/* Demangled: PDENodeImp::config(NSCam::v3::PDENode::ConfigParams const&) */
int _ZN10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE(void);

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE7camProp */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE7camProp;

/* Symbol: _ZTv0_n88_N2P216CaptureProcessor11onWaitFlushEv */
/* Demangled: virtual thunk to P2::CaptureProcessor::onWaitFlush() */
int _ZTv0_n88_N2P216CaptureProcessor11onWaitFlushEv(void);

/* Symbol: _ZNK2P212P2DumpPlugin8needDumpEPKNS_5P2ImgE */
/* Demangled: P2::P2DumpPlugin::needDump(P2::P2Img const*) const */
int _ZNK2P212P2DumpPlugin8needDumpEPKNS_5P2ImgE(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload13getAnyRequestEv */
/* Demangled: P2::StreamingProcessor::Payload::getAnyRequest() */
int _ZN2P218StreamingProcessor7Payload13getAnyRequestEv(void);

/* Symbol: _ZN2P218StreamingProcessor19updateSMVRTimestampERKN7android2spINS0_7PayloadEEEj */
/* Demangled: P2::StreamingProcessor::updateSMVRTimestamp(android::sp<P2::StreamingProcessor::Payload> const&, unsigned int) */
int _ZN2P218StreamingProcessor19updateSMVRTimestampERKN7android2spINS0_7PayloadEEEj(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSEPS5_ */
/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelper>::operator=(NSCam::v3::Utils::Imp::ISyncHelper*) */
int _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSEPS5_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6getMinEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::getMin() */
int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6getMinEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node13TimingChecker6RecordE */
/* Demangled: vtable for NSCam::v3::NSP1Node::TimingChecker::Record */
extern void* _ZTVN5NSCam2v38NSP1Node13TimingChecker6RecordE;

/* Symbol: _Z17parseBGPreReleaseRKN5NSCam2v38P2Common7Capture9UsageHintE */
/* Demangled: parseBGPreRelease(NSCam::v3::P2Common::Capture::UsageHint const&) */
int _Z17parseBGPreReleaseRKN5NSCam2v38P2Common7Capture9UsageHintE(void);

/* Symbol: _ZTVN2P214BasicProcessorE */
/* Demangled: vtable for P2::BasicProcessor */
extern void* _ZTVN2P214BasicProcessorE;

/* Symbol: _ZN2P216CaptureProcessor15waitRequestDoneEv */
/* Demangled: P2::CaptureProcessor::waitRequestDone() */
int _ZN2P216CaptureProcessor15waitRequestDoneEv(void);

/* Symbol: _ZN2P211P2InitParamC1ERKN5NSCam7Feature6P2Util6P2InfoE */
/* Demangled: P2::P2InitParam::P2InitParam(NSCam::Feature::P2Util::P2Info const&) */
int _ZN2P211P2InitParamC1ERKN5NSCam7Feature6P2Util6P2InfoE(void);

/* Symbol: _ZGVZN2P217isTrace1On_MWMetaEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_MWMeta()::sVal */
extern void* _ZGVZN2P217isTrace1On_MWMetaEvE4sVal;

/* Symbol: _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE7reserveEm */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE7reserveEm(void);

/* Symbol: _ZN10PDENodeImpD0Ev */
/* Demangled: PDENodeImp::~PDENodeImp() */
int _ZN10PDENodeImpD0Ev(void);

/* Symbol: _ZTv0_n40_N2P212MDPProcessor8onUninitEv */
/* Demangled: virtual thunk to P2::MDPProcessor::onUninit() */
int _ZTv0_n40_N2P212MDPProcessor8onUninitEv(void);

/* Symbol: _ZTv0_n24_N2P212MDPProcessorD1Ev */
/* Demangled: virtual thunk to P2::MDPProcessor::~MDPProcessor() */
int _ZTv0_n24_N2P212MDPProcessorD1Ev(void);

/* Symbol: _ZNK2P29P2Request10isValidImgENS_6ID_IMGEj */
/* Demangled: P2::P2Request::isValidImg(P2::ID_IMG, unsigned int) const */
int _ZNK2P29P2Request10isValidImgENS_6ID_IMGEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void);

/* Symbol: _ZTVN2P214P2FrameRequestE */
/* Demangled: vtable for P2::P2FrameRequest */
extern void* _ZTVN2P214P2FrameRequestE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_(void);

/* Symbol: _ZTv0_n32_N2P216CaptureProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: virtual thunk to P2::CaptureProcessor::onInit(P2::P2InitParam const&) */
int _ZTv0_n32_N2P216CaptureProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZNK2P212P2DumpPlugin10needDumpInENS0_7DUMP_INE */
/* Demangled: P2::P2DumpPlugin::needDumpIn(P2::P2DumpPlugin::DUMP_IN) const */
int _ZNK2P212P2DumpPlugin10needDumpInENS0_7DUMP_INE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P26P2MetaEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long, android::sp<P2::P2Meta> >, std::__1::__map_value_compare<long, std::__1::__value_type<long, android::sp<P2::P2Meta> >, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, android::sp<P2::P2Meta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, android::sp<P2::P2Meta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P26P2MetaEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZTv0_n136_N2P218P2StreamingNodeImpD0Ev */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZTv0_n136_N2P218P2StreamingNodeImpD0Ev(void);

/* Symbol: _ZN2P29P2Request14updateSensorIDEv */
/* Demangled: P2::P2Request::updateSensorID() */
int _ZN2P29P2Request14updateSensorIDEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9FrameNote3setEi */
/* Demangled: NSCam::v3::NSP1Node::FrameNote::set(int) */
int _ZN5NSCam2v38NSP1Node9FrameNote3setEi(void);

/* Symbol: _ZTCN5NSCam2v38NSP1Node9P1NodeImpE56_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::NSP1Node::P1NodeImp */
extern void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE56_N7android6ThreadE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_(void);

/* Symbol: _ZN10PDENodeImpD1Ev */
/* Demangled: PDENodeImp::~PDENodeImp() */
int _ZN10PDENodeImpD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor13P2RequestPackEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > >::__push_back_slow_path<android::sp<P2::StreamingProcessor::P2RequestPack> const&>(android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
int _ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor13P2RequestPackEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNK2P29P2Cropper8toActiveERKN5NSCam5MRectEi */
/* Demangled: P2::P2Cropper::toActive(NSCam::MRect const&, int) const */
int _ZNK2P29P2Cropper8toActiveERKN5NSCam5MRectEi(void);

/* Symbol: _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6insertINS_21__list_const_iteratorIS5_PvEEEENS_15__list_iteratorIS5_SB_EESC_T_SF_PNS_9enable_ifIXsr19__is_input_iteratorISF_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6insertINS_21__list_const_iteratorIS5_PvEEEENS_15__list_iteratorIS5_SB_EESC_T_SF_PNS_9enable_ifIXsr19__is_input_iteratorISF_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6insertINS_21__list_const_iteratorIS5_PvEEEENS_15__list_iteratorIS5_SB_EESC_T_SF_PNS_9enable_ifIXsr19__is_input_iteratorISF_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node15P1TaskCollectorE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1TaskCollector */
extern void* _ZTVN5NSCam2v38NSP1Node15P1TaskCollectorE;

/* Symbol: _ZNK2P26MWInfo14findStreamInfoENS_6ID_IMGE */
/* Demangled: P2::MWInfo::findStreamInfo(P2::ID_IMG) const */
int _ZNK2P26MWInfo14findStreamInfoENS_6ID_IMGE(void);

/* Symbol: _ZN2P29P2RequestC1ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE */
/* Demangled: P2::P2Request::P2Request(NSCam::Feature::ILog const&, android::sp<P2::IP2Frame> const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::P2InIDMap> const&) */
int _ZN2P29P2RequestC1ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE(void);

/* Symbol: _ZTv0_n48_N2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE */
/* Demangled: virtual thunk to P2::P2DrawIDPlugin::onPlugin(P2::P2Img const*) */
int _ZTv0_n48_N2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE(void);

/* Symbol: _ZNK2P26P2Util9SimpleOut8isRecordEv */
/* Demangled: P2::P2Util::SimpleOut::isRecord() const */
int _ZNK2P26P2Util9SimpleOut8isRecordEv(void);

/* Symbol: _ZTv0_n136_N2P218P2StreamingNodeImpD1Ev */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
int _ZTv0_n136_N2P218P2StreamingNodeImpD1Ev(void);

/* Symbol: _ZZN2P229isTrace1On_StreamingProcessorEvE6sTrace */
/* Demangled: P2::isTrace1On_StreamingProcessor()::sTrace */
extern void* _ZZN2P229isTrace1On_StreamingProcessorEvE6sTrace;

/* Symbol: _ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::IHal3A*, std::__1::allocator<NS3Av3::IHal3A*> >::__push_back_slow_path<NS3Av3::IHal3A* const&>(NS3Av3::IHal3A* const&) */
int _ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZGVZN2P224isTrace1On_ReleaseBundleEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_ReleaseBundle()::sVal */
extern void* _ZGVZN2P224isTrace1On_ReleaseBundleEvE4sVal;

/* Symbol: _ZNK2P29P2Request10isValidImgENS_6ID_IMGE */
/* Demangled: P2::P2Request::isValidImg(P2::ID_IMG) const */
int _ZNK2P29P2Request10isValidImgENS_6ID_IMGE(void);

/* Symbol: _ZGVZ20isTrace1On_VRGrallocvE6sTrace */
/* Demangled: guard variable for isTrace1On_VRGralloc()::sTrace */
extern void* _ZGVZ20isTrace1On_VRGrallocvE6sTrace;

/* Symbol: _ZGVZ17isTrace1On_P2UtilvE4sVal */
/* Demangled: guard variable for isTrace1On_P2Util()::sVal */
extern void* _ZGVZ17isTrace1On_P2UtilvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify4initEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::init() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify4initEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE(void);

/* Symbol: _ZN10PDENodeImpD2Ev */
/* Demangled: PDENodeImp::~PDENodeImp() */
int _ZN10PDENodeImpD2Ev(void);

/* Symbol: _ZZN2P224isTrace1On_ReleaseBundleEvE4sVal */
/* Demangled: P2::isTrace1On_ReleaseBundle()::sVal */
extern void* _ZZN2P224isTrace1On_ReleaseBundleEvE4sVal;

/* Symbol: _ZTCN2P29P2RequestE336_NS_13P2FrameHolderE */
/* Demangled: construction vtable for P2::P2FrameHolder-in-P2::P2Request */
extern void* _ZTCN2P29P2RequestE336_NS_13P2FrameHolderE;

/* Symbol: _ZNSt3__112__deque_baseINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::clear() */
int _ZNSt3__112__deque_baseINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE5clearEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector6configEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::config() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector6configEv(void);

/* Symbol: _ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEj */
/* Demangled: P2::P2Cropper::calcViewAngle(NSCam::Feature::ILog const&, NSCam::MSize const&, unsigned int) const */
int _ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEj(void);

/* Symbol: _ZGVZN2P229isTrace1On_StreamingProcessorEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_StreamingProcessor()::sTrace */
extern void* _ZGVZN2P229isTrace1On_StreamingProcessorEvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node18LongExposureStatus3setEil */
/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::set(int, long) */
int _ZN5NSCam2v38NSP1Node18LongExposureStatus3setEil(void);

/* Symbol: _ZN11JpegNodeImpD0Ev */
/* Demangled: JpegNodeImp::~JpegNodeImp() */
int _ZN11JpegNodeImpD0Ev(void);

/* Symbol: _ZNK12RAW16NodeImp14isInMetaStreamEl */
/* Demangled: RAW16NodeImp::isInMetaStream(long) const */
int _ZNK12RAW16NodeImp14isInMetaStreamEl(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNK7android12SortedVectorIlE12do_constructEPvm */
/* Demangled: android::SortedVector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorIlE12do_constructEPvm(void);

/* Symbol: _ZN2P216CaptureProcessor18addYUVOutputBufferERKN7android2spINS_9P2RequestEEERNS2_IN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: P2::CaptureProcessor::addYUVOutputBuffer(android::sp<P2::P2Request> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>&) */
int _ZN2P216CaptureProcessor18addYUVOutputBufferERKN7android2spINS_9P2RequestEEERNS2_IN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZTv0_n32_N2P213P2FrameHolderD0Ev */
/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
int _ZTv0_n32_N2P213P2FrameHolderD0Ev(void);

/* Symbol: _ZN12RAW16NodeImp21waitForRequestDrainedEv */
/* Demangled: RAW16NodeImp::waitForRequestDrained() */
int _ZN12RAW16NodeImp21waitForRequestDrainedEv(void);

/* Symbol: _ZTv0_n176_NK2P25MWImg10getImgTypeEv */
/* Demangled: virtual thunk to P2::MWImg::getImgType() const */
int _ZTv0_n176_NK2P25MWImg10getImgTypeEv(void);

/* Symbol: _ZN11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: JpegNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P26MWMetaC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE */
/* Demangled: P2::MWMeta::MWMeta(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, P2::META_INFO const&) */
int _ZN2P26MWMetaC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE(void);

/* Symbol: _ZNK2P218StreamingProcessor14PartialPayload5printEv */
/* Demangled: P2::StreamingProcessor::PartialPayload::print() const */
int _ZNK2P218StreamingProcessor14PartialPayload5printEv(void);

/* Symbol: _ZN11JpegNodeImpD1Ev */
/* Demangled: JpegNodeImp::~JpegNodeImp() */
int _ZN11JpegNodeImpD1Ev(void);

/* Symbol: _ZNK2P26MWInfo11getBurstNumEv */
/* Demangled: P2::MWInfo::getBurstNum() const */
int _ZNK2P26MWInfo11getBurstNumEv(void);

/* Symbol: _ZN2P214P2FrameRequest5mapIDEjNS_6ID_IMGE */
/* Demangled: P2::P2FrameRequest::mapID(unsigned int, P2::ID_IMG) */
int _ZN2P214P2FrameRequest5mapIDEjNS_6ID_IMGE(void);

/* Symbol: _ZTVN2P218StreamingProcessor13P2RequestPackE */
/* Demangled: vtable for P2::StreamingProcessor::P2RequestPack */
extern void* _ZTVN2P218StreamingProcessor13P2RequestPackE;

/* Symbol: _ZN2P214BasicProcessor8P2CookieC2EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE */
/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
int _ZN2P214BasicProcessor8P2CookieC2EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v38BaseNodeE0_NS0_13IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-NSCam::v3::BaseNode */
extern void* _ZTCN5NSCam2v38BaseNodeE0_NS0_13IPipelineNodeE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN2P214P2DrawIDPluginC1Ev */
/* Demangled: P2::P2DrawIDPlugin::P2DrawIDPlugin() */
int _ZN2P214P2DrawIDPluginC1Ev(void);

/* Symbol: _ZTv0_n96_N2P26MWMeta6detachEv */
/* Demangled: virtual thunk to P2::MWMeta::detach() */
int _ZTv0_n96_N2P26MWMeta6detachEv(void);

/* Symbol: _ZTv0_n32_N2P213P2FrameHolderD1Ev */
/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
int _ZTv0_n32_N2P213P2FrameHolderD1Ev(void);

/* Symbol: _ZN2P218StreamingProcessor13onNotifyFlushEv */
/* Demangled: P2::StreamingProcessor::onNotifyFlush() */
int _ZN2P218StreamingProcessor13onNotifyFlushEv(void);

/* Symbol: _ZN2P211P2ImgPlugin8onPluginERKN7android2spINS_5P2ImgEEE */
/* Demangled: P2::P2ImgPlugin::onPlugin(android::sp<P2::P2Img> const&) */
int _ZN2P211P2ImgPlugin8onPluginERKN7android2spINS_5P2ImgEEE(void);

/* Symbol: _ZNK2P25P2Img10dumpBufferEv */
/* Demangled: P2::P2Img::dumpBuffer() const */
int _ZNK2P25P2Img10dumpBufferEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgrC1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::P1DeliverMgr() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgrC1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15syncHelperStartEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::syncHelperStart() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15syncHelperStartEv(void);

/* Symbol: _ZN10PDENodeImp21waitForRequestDrainedEv */
/* Demangled: PDENodeImp::waitForRequestDrained() */
int _ZN10PDENodeImp21waitForRequestDrainedEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE12do_constructEPvm(void);

/* Symbol: _ZN11JpegNodeImpD2Ev */
/* Demangled: JpegNodeImp::~JpegNodeImp() */
int _ZN11JpegNodeImpD2Ev(void);

/* Symbol: _ZN2P27MWFrame13notifyReleaseEv */
/* Demangled: P2::MWFrame::notifyRelease() */
int _ZN2P27MWFrame13notifyReleaseEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17setCurrentBinSizeENS_5MSizeE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setCurrentBinSize(NSCam::MSize) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17setCurrentBinSizeENS_5MSizeE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::IHalSensor::ConfigParam, std::__1::allocator<NSCam::IHalSensor::ConfigParam> >::__push_back_slow_path<NSCam::IHalSensor::ConfigParam const&>(NSCam::IHalSensor::ConfigParam const&) */
int _ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTv0_n56_NK2P25MWImg6getDirEv */
/* Demangled: virtual thunk to P2::MWImg::getDir() const */
int _ZTv0_n56_NK2P25MWImg6getDirEv(void);

/* Symbol: _ZN2P214MWFrameRequest17configInputBufferEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEERKNSt3__16vectorIlNSA_9allocatorIlEEEE */
/* Demangled: P2::MWFrameRequest::configInputBuffer(unsigned int, android::sp<NSCam::Feature::P2Util::Cropper> const&, std::__1::vector<long, std::__1::allocator<long> > const&) */
int _ZN2P214MWFrameRequest17configInputBufferEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEERKNSt3__16vectorIlNSA_9allocatorIlEEEE(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node16P1RegisterNotifyEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1RegisterNotify>::operator=(NSCam::v3::NSP1Node::P1RegisterNotify*) */
int _ZN7android2spIN5NSCam2v38NSP1Node16P1RegisterNotifyEEaSEPS4_(void);

/* Symbol: _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::readyToRun() */
int _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZN2P214P2DrawIDPluginC2Ev */
/* Demangled: P2::P2DrawIDPlugin::P2DrawIDPlugin() */
int _ZN2P214P2DrawIDPluginC2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1FrameAct, std::__1::allocator<NSCam::v3::NSP1Node::P1FrameAct> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1FrameAct const&>(NSCam::v3::NSP1Node::P1FrameAct const&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl11registerActERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::registerAct(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl11registerActERNS1_8P1QueActE(void);

/* Symbol: _ZNK2P29P2Cropper13getActiveCropEv */
/* Demangled: P2::P2Cropper::getActiveCrop() const */
int _ZNK2P29P2Cropper13getActiveCropEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgrC2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::P1DeliverMgr() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgrC2Ev(void);

/* Symbol: _ZNK2P26MWInfo8toMetaIDEl */
/* Demangled: P2::MWInfo::toMetaID(long) const */
int _ZNK2P26MWInfo8toMetaIDEl(void);

/* Symbol: _ZNK2P214MWFrameRequest17queryInputImgSizeENS_6ID_IMGERKN7android2spIN5NSCam7Feature6P2Util7CropperEEE */
/* Demangled: P2::MWFrameRequest::queryInputImgSize(P2::ID_IMG, android::sp<NSCam::Feature::P2Util::Cropper> const&) const */
int _ZNK2P214MWFrameRequest17queryInputImgSizeENS_6ID_IMGERKN7android2spIN5NSCam7Feature6P2Util7CropperEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node27calculateCropInfoYuvResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_ii */
/* Demangled: NSCam::v3::NSP1Node::calculateCropInfoYuvResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect const&, NSCam::MRect&, NSCam::MSize&, int, int) */
int _ZN5NSCam2v38NSP1Node27calculateCropInfoYuvResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_ii(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo7inspectENS2_11InspectTypeEPKc */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::inspect(NSCam::v3::NSP1Node::LogInfo::InspectType, char const*) */
int _ZN5NSCam2v38NSP1Node7LogInfo7inspectENS2_11InspectTypeEPKc(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE8__appendEmRKS6_ */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__append(unsigned long, android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE8__appendEmRKS6_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN2P218StreamingProcessorC1Ev */
/* Demangled: P2::StreamingProcessor::StreamingProcessor() */
int _ZN2P218StreamingProcessorC1Ev(void);

/* Symbol: _ZZ25isTrace1On_MWFrameRequestvE4sVal */
/* Demangled: isTrace1On_MWFrameRequest()::sVal */
extern void* _ZZ25isTrace1On_MWFrameRequestvE4sVal;

/* Symbol: _ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<android::sp<P2::P2Request>, std::__1::less<android::sp<P2::P2Request> >, std::__1::allocator<android::sp<P2::P2Request> > >::destroy(std::__1::__tree_node<android::sp<P2::P2Request>, void*>*) */
int _ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTv0_n120_N5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: virtual thunk to NSCam::v3::DummyNode::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_back(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN2P27MWFrame20preReleaseMetaStreamERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE */
/* Demangled: P2::MWFrame::preReleaseMetaStream(android::sp<NSCam::v3::IMetaStreamBuffer> const&, P2::IO_DIR) */
int _ZN2P27MWFrame20preReleaseMetaStreamERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE(void);

/* Symbol: _ZTv0_n24_N2P26MWInfoD0Ev */
/* Demangled: virtual thunk to P2::MWInfo::~MWInfo() */
int _ZTv0_n24_N2P26MWInfoD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_enqueERNS1_8P1QueJobENS1_8ENQ_TYPEEilNS1_12ENQ_ISP_TYPEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_enque(NSCam::v3::NSP1Node::P1QueJob&, NSCam::v3::NSP1Node::ENQ_TYPE, int, long, NSCam::v3::NSP1Node::ENQ_ISP_TYPE) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_enqueERNS1_8P1QueJobENS1_8ENQ_TYPEEilNS1_12ENQ_ISP_TYPEE(void);

/* Symbol: _ZTTN10PDENodeImp13ExtractThreadE */
/* Demangled: VTT for PDENodeImp::ExtractThread */
extern void* _ZTTN10PDENodeImp13ExtractThreadE;

/* Symbol: _ZTTN2P213ReleaseBundleE */
/* Demangled: VTT for P2::ReleaseBundle */
extern void* _ZTTN2P213ReleaseBundleE;

/* Symbol: _ZN2P214extractLMVInfoERKN5NSCam7Feature4ILogEPKNS0_9IMetadataE */
/* Demangled: P2::extractLMVInfo(NSCam::Feature::ILog const&, NSCam::IMetadata const*) */
int _ZN2P214extractLMVInfoERKN5NSCam7Feature4ILogEPKNS0_9IMetadataE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void);

/* Symbol: _ZTv0_n40_N2P217DispatchProcessor8onUninitEv */
/* Demangled: virtual thunk to P2::DispatchProcessor::onUninit() */
int _ZTv0_n40_N2P217DispatchProcessor8onUninitEv(void);

/* Symbol: _ZNK2P218StreamingProcessor19get3DNRIsoThresholdEjh */
/* Demangled: P2::StreamingProcessor::get3DNRIsoThreshold(unsigned int, unsigned char) const */
int _ZNK2P218StreamingProcessor19get3DNRIsoThresholdEjh(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp12createActionERNS1_8P1QueActEN7android2spINS0_14IPipelineFrameEEENS1_8REQ_TYPEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::createAction(NSCam::v3::NSP1Node::P1QueAct&, android::sp<NSCam::v3::IPipelineFrame>, NSCam::v3::NSP1Node::REQ_TYPE) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp12createActionERNS1_8P1QueActEN7android2spINS0_14IPipelineFrameEEENS1_8REQ_TYPEE(void);

/* Symbol: _ZN10PDENodeImp13threadSettingEv */
/* Demangled: PDENodeImp::threadSetting() */
int _ZN10PDENodeImp13threadSettingEv(void);

/* Symbol: _ZN2P29SMVRQueue3popEj */
/* Demangled: P2::SMVRQueue::pop(unsigned int) */
int _ZN2P29SMVRQueue3popEj(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack10dropRecordEv */
/* Demangled: P2::StreamingProcessor::P2RequestPack::dropRecord() */
int _ZN2P218StreamingProcessor13P2RequestPack10dropRecordEv(void);

/* Symbol: _ZN2P218StreamingProcessorC2Ev */
/* Demangled: P2::StreamingProcessor::StreamingProcessor() */
int _ZN2P218StreamingProcessorC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void);

/* Symbol: _ZN2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE */
/* Demangled: P2::MWImg::registerPlugin(std::__1::list<android::sp<P2::P2ImgPlugin>, std::__1::allocator<android::sp<P2::P2ImgPlugin> > > const&) */
int _ZN2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE(void);

/* Symbol: _ZTv0_n24_N2P26MWInfoD1Ev */
/* Demangled: virtual thunk to P2::MWInfo::~MWInfo() */
int _ZTv0_n24_N2P26MWInfoD1Ev(void);

/* Symbol: _ZN2P29P2RequestC1ERKN7android2spIS0_EEj */
/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P29P2RequestC1ERKN7android2spIS0_EEj(void);

/* Symbol: _ZTv0_n24_N2P216P2ScanlinePluginD0Ev */
/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZTv0_n24_N2P216P2ScanlinePluginD0Ev(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::IHal3A*, std::__1::allocator<NS3Av3::IHal3A*> >::__push_back_slow_path<NS3Av3::IHal3A*>(NS3Av3::IHal3A*&&) */
int _ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR1CropEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyYuvR1Crop(void*, void*) */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR1CropEPvS3_(void);

/* Symbol: _ZTVN2P29ProcessorIjjNS_8MDPParamEEE */
/* Demangled: vtable for P2::Processor<unsigned int, unsigned int, P2::MDPParam> */
extern void* _ZTVN2P29ProcessorIjjNS_8MDPParamEEE;

/* Symbol: _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_7ID_METAENS_6IO_DIRERKNS_9META_INFOE */
/* Demangled: P2::MWFrameRequest::addP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, long const&, P2::ID_META, P2::IO_DIR, P2::META_INFO const&) */
int _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_7ID_METAENS_6IO_DIRERKNS_9META_INFOE(void);

/* Symbol: _ZNK2P29P2Request10getMetaPtrENS_7ID_METAEj */
/* Demangled: P2::P2Request::getMetaPtr(P2::ID_META, unsigned int) const */
int _ZNK2P29P2Request10getMetaPtrENS_7ID_METAEj(void);

/* Symbol: _ZNK2P26P2Util9SimpleOut4isFDEv */
/* Demangled: P2::P2Util::SimpleOut::isFD() const */
int _ZNK2P26P2Util9SimpleOut4isFDEv(void);

/* Symbol: _ZTv0_n152_N2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::config(NSCam::v3::P2CaptureNode::ConfigParams const&) */
int _ZTv0_n152_N2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void);

/* Symbol: _ZN5NSCam2v38BaseNode27ensureImageBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_18IImageStreamBufferEEEi */
/* Demangled: NSCam::v3::BaseNode::ensureImageBufferAvailable_(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IImageStreamBuffer>&, int) */
int _ZN5NSCam2v38BaseNode27ensureImageBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_18IImageStreamBufferEEEi(void);

/* Symbol: _ZNK2P218P2StreamingNodeImp13toP2UsageHintERKN5NSCam2v38P2Common9UsageHintE */
/* Demangled: P2::P2StreamingNodeImp::toP2UsageHint(NSCam::v3::P2Common::UsageHint const&) const */
int _ZNK2P218P2StreamingNodeImp13toP2UsageHintERKN5NSCam2v38P2Common9UsageHintE(void);

/* Symbol: _ZTv0_n136_N2P216P2CaptureNodeImpD0Ev */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZTv0_n136_N2P216P2CaptureNodeImpD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorIlE10do_compareEPKvS3_ */
/* Demangled: android::SortedVector<long>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIlE10do_compareEPKvS3_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE */
/* Demangled: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE4initERKS1_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::init(P2::P2InitParam const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE4initERKS1_(void);

/* Symbol: _ZTv0_n88_N2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE */
/* Demangled: virtual thunk to P2::MWMeta::setEntry(unsigned int, NSCam::IMetadata::IEntry const&) */
int _ZTv0_n88_N2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE(void);

/* Symbol: _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6ID_IMGENS_6IO_DIRERKNS_8IMG_INFOE */
/* Demangled: P2::MWFrameRequest::addP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > >&, long const&, P2::ID_IMG, P2::IO_DIR, P2::IMG_INFO const&) */
int _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6ID_IMGENS_6IO_DIRERKNS_8IMG_INFOE(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyE */
/* Demangled: vtable for NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy */
extern void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyE;

/* Symbol: _ZTv0_n120_N10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to PDENodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr9waitFlushEi */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::waitFlush(int) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr9waitFlushEi(void);

/* Symbol: _ZN11JpegNodeImp20checkBufferAvailableERKN7android2spIN5NSCam2v314IPipelineFrameEEEl */
/* Demangled: JpegNodeImp::checkBufferAvailable(android::sp<NSCam::v3::IPipelineFrame> const&, long) */
int _ZN11JpegNodeImp20checkBufferAvailableERKN7android2spIN5NSCam2v314IPipelineFrameEEEl(void);

/* Symbol: _ZN7Request14updateMetadataER11jpeg_params */
/* Demangled: Request::updateMetadata(jpeg_params&) */
int _ZN7Request14updateMetadataER11jpeg_params(void);

/* Symbol: _ZN7Request17returnImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEENS1_INS2_12IImageBufferEEESC_ */
/* Demangled: Request::returnImageBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>, android::sp<NSCam::IImageBuffer>) */
int _ZN7Request17returnImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEENS1_INS2_12IImageBufferEEESC_(void);

/* Symbol: _ZTv0_n24_N2P216P2ScanlinePluginD1Ev */
/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZTv0_n24_N2P216P2ScanlinePluginD1Ev(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread14waitEnqueParamERS1_ */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::waitEnqueParam(P2::MDPParam&) */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread14waitEnqueParamERS1_(void);

/* Symbol: _ZTv0_n32_N2P25MWImgD0Ev */
/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
int _ZTv0_n32_N2P25MWImgD0Ev(void);

/* Symbol: _ZTVN2P216P2ScanlinePluginE */
/* Demangled: vtable for P2::P2ScanlinePlugin */
extern void* _ZTVN2P216P2ScanlinePluginE;

/* Symbol: _ZGVZ24isTrace1On_Streaming_EISvE6sTrace */
/* Demangled: guard variable for isTrace1On_Streaming_EIS()::sTrace */
extern void* _ZGVZ24isTrace1On_Streaming_EISvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct13poolImageInitENS1_10STREAM_IMGE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImageInit(NSCam::v3::NSP1Node::STREAM_IMG) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct13poolImageInitENS1_10STREAM_IMGE(void);

/* Symbol: _ZN2P214BasicProcessor7MyTimer6setFPSEd */
/* Demangled: P2::BasicProcessor::MyTimer::setFPS(double) */
int _ZN2P214BasicProcessor7MyTimer6setFPSEd(void);

/* Symbol: _ZTTN2P27MWFrameE */
/* Demangled: VTT for P2::MWFrame */
extern void* _ZTTN2P27MWFrameE;

/* Symbol: _ZTv0_n88_N2P218P2StreamingNodeImp5flushEv */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::flush() */
int _ZTv0_n88_N2P218P2StreamingNodeImp5flushEv(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack9addOutputERKN7android2spINS_9P2RequestEEEj */
/* Demangled: P2::StreamingProcessor::P2RequestPack::addOutput(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P218StreamingProcessor13P2RequestPack9addOutputERKN7android2spINS_9P2RequestEEEj(void);

/* Symbol: _ZTv0_n136_N2P216P2CaptureNodeImpD1Ev */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZTv0_n136_N2P216P2CaptureNodeImpD1Ev(void);

/* Symbol: _ZTVN2P27MWFrame12ReleaseTokenE */
/* Demangled: vtable for P2::MWFrame::ReleaseToken */
extern void* _ZTVN2P27MWFrame12ReleaseTokenE;

/* Symbol: _ZN2P218P2StreamingNodeImpC1EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE */
/* Demangled: P2::P2StreamingNodeImp::P2StreamingNodeImp(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint const&) */
int _ZN2P218P2StreamingNodeImpC1EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl11dumpActPoolEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::dumpActPool() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl11dumpActPoolEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node10P1TaskCtrlE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1TaskCtrl */
extern void* _ZTVN5NSCam2v38NSP1Node10P1TaskCtrlE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEEE;

/* Symbol: _ZTTN2P212MDPProcessorE */
/* Demangled: VTT for P2::MDPProcessor */
extern void* _ZTTN2P212MDPProcessorE;

/* Symbol: _ZTv0_n120_N2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P218StreamingProcessor6onIdleEv */
/* Demangled: P2::StreamingProcessor::onIdle() */
int _ZN2P218StreamingProcessor6onIdleEv(void);

/* Symbol: _ZNK2P218StreamingProcessor13getEISExpTimeERiS1_RKN5NSCam7Feature6P2Util7LMVInfoERKN7android2spINS_6P2MetaEEE */
/* Demangled: P2::StreamingProcessor::getEISExpTime(int&, int&, NSCam::Feature::P2Util::LMVInfo const&, android::sp<P2::P2Meta> const&) const */
int _ZNK2P218StreamingProcessor13getEISExpTimeERiS1_RKN5NSCam7Feature6P2Util7LMVInfoERKN7android2spINS_6P2MetaEEE(void);

/* Symbol: _ZTv0_n24_N11JpegBufPoolD0Ev */
/* Demangled: virtual thunk to JpegBufPool::~JpegBufPool() */
int _ZTv0_n24_N11JpegBufPoolD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor10incPayloadERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::incPayload(android::sp<P2::StreamingProcessor::Payload> const&) */
int _ZN2P218StreamingProcessor10incPayloadERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node20HardwareStateControlE */
/* Demangled: vtable for NSCam::v3::NSP1Node::HardwareStateControl */
extern void* _ZTVN5NSCam2v38NSP1Node20HardwareStateControlE;

/* Symbol: _ZN9ExifUtils21updateDebugInfoToExifEPN5NSCam9IMetadataER7StdExifi */
/* Demangled: ExifUtils::updateDebugInfoToExif(NSCam::IMetadata*, StdExif&, int) */
int _ZN9ExifUtils21updateDebugInfoToExifEPN5NSCam9IMetadataER7StdExifi(void);

/* Symbol: _ZTv0_n72_N11JpegNodeImp6uninitEv */
/* Demangled: virtual thunk to JpegNodeImp::uninit() */
int _ZTv0_n72_N11JpegNodeImp6uninitEv(void);

/* Symbol: _ZN5NSCam2v37JpgPack6uninitEv */
/* Demangled: NSCam::v3::JpgPack::uninit() */
int _ZN5NSCam2v37JpgPack6uninitEv(void);

/* Symbol: _ZTv0_n32_N2P25MWImgD1Ev */
/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
int _ZTv0_n32_N2P25MWImgD1Ev(void);

/* Symbol: _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGENS_6IO_DIRE */
/* Demangled: P2::MWFrameRequest::addP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > >&, P2::ID_IMG, P2::IO_DIR) */
int _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGENS_6IO_DIRE(void);

/* Symbol: _ZN2P26tryGetIN5NSCam9IMetadata6MemoryEEEiRKS2_jRT_ */
/* Demangled: int P2::tryGet<NSCam::IMetadata::Memory>(NSCam::IMetadata const&, unsigned int, NSCam::IMetadata::Memory&) */
int _ZN2P26tryGetIN5NSCam9IMetadata6MemoryEEEiRKS2_jRT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImageGetENS1_10STREAM_IMGEaNS_5MSizeERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::stuffImageGet(NSCam::v3::NSP1Node::STREAM_IMG, signed char, NSCam::MSize, android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImageGetENS1_10STREAM_IMGEaNS_5MSizeERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZNK2P25MWImg16isPhysicalStreamEv */
/* Demangled: P2::MWImg::isPhysicalStream() const */
int _ZNK2P25MWImg16isPhysicalStreamEv(void);

/* Symbol: _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::threadLoop() */
int _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZN2P29META_INFOC1Ev */
/* Demangled: P2::META_INFO::META_INFO() */
int _ZN2P29META_INFOC1Ev(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node9FrameNoteE */
/* Demangled: vtable for NSCam::v3::NSP1Node::FrameNote */
extern void* _ZTVN5NSCam2v38NSP1Node9FrameNoteE;

/* Symbol: _ZTCN2P214P2BufferHandleE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle-in-P2::P2BufferHandle */
extern void* _ZTCN2P214P2BufferHandleE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleE;

/* Symbol: _ZN2P29P2InIDMap7MainImgE */
/* Demangled: P2::P2InIDMap::MainImg */
extern void* _ZN2P29P2InIDMap7MainImgE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_(void);

/* Symbol: _ZNK2P213P2FrameHolder11getIP2FrameEv */
/* Demangled: P2::P2FrameHolder::getIP2Frame() const */
int _ZNK2P213P2FrameHolder11getIP2FrameEv(void);

/* Symbol: _ZN5NSCam2v38BaseNode15getULogModuleIdEv */
/* Demangled: NSCam::v3::BaseNode::getULogModuleId() */
int _ZN5NSCam2v38BaseNode15getULogModuleIdEv(void);

/* Symbol: _ZTv0_n88_N11JpegNodeImp5flushEv */
/* Demangled: virtual thunk to JpegNodeImp::flush() */
int _ZTv0_n88_N11JpegNodeImp5flushEv(void);

/* Symbol: _ZN12RAW16NodeImp11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE */
/* Demangled: RAW16NodeImp::unlockImage(android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&) */
int _ZN12RAW16NodeImp11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE(void);

/* Symbol: _ZN2P214P2FrameRequest17registerImgPluginERKN7android2spINS_11P2ImgPluginEEEi */
/* Demangled: P2::P2FrameRequest::registerImgPlugin(android::sp<P2::P2ImgPlugin> const&, int) */
int _ZN2P214P2FrameRequest17registerImgPluginERKN7android2spINS_11P2ImgPluginEEEi(void);

/* Symbol: _ZN2P216P2CaptureNodeImp15getULogModuleIdEv */
/* Demangled: P2::P2CaptureNodeImp::getULogModuleId() */
int _ZN2P216P2CaptureNodeImp15getULogModuleIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1NotifyQuality14p1TuningNotifyEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1NotifyQuality::p1TuningNotify(void*, void*) */
int _ZN5NSCam2v38NSP1Node15P1NotifyQuality14p1TuningNotifyEPvS3_(void);

/* Symbol: _ZTv0_n24_N11JpegBufPoolD1Ev */
/* Demangled: virtual thunk to JpegBufPool::~JpegBufPool() */
int _ZTv0_n24_N11JpegBufPoolD1Ev(void);

/* Symbol: _ZTv0_n56_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv */
/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::readyToRun() */
int _ZTv0_n56_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZN2P29P2Request19makeDetachP2RequestEv */
/* Demangled: P2::P2Request::makeDetachP2Request() */
int _ZN2P29P2Request19makeDetachP2RequestEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZTTN2P218P2StreamingNodeImpE */
/* Demangled: VTT for P2::P2StreamingNodeImp */
extern void* _ZTTN2P218P2StreamingNodeImpE;

/* Symbol: _ZN2P25P2Img10setImgSizeERKN5NSCam5MSizeE */
/* Demangled: P2::P2Img::setImgSize(NSCam::MSize const&) */
int _ZN2P25P2Img10setImgSizeERKN5NSCam5MSizeE(void);

/* Symbol: _ZTTN2P218StreamingProcessor13P2RequestPackE */
/* Demangled: VTT for P2::StreamingProcessor::P2RequestPack */
extern void* _ZTTN2P218StreamingProcessor13P2RequestPackE;

/* Symbol: _ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE12do_constructEPvm */
/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE12do_constructEPvm(void);

/* Symbol: _ZN2P29META_INFOC2Ev */
/* Demangled: P2::META_INFO::META_INFO() */
int _ZN2P29META_INFOC2Ev(void);

/* Symbol: _ZTv0_n32_N2P214P2DrawIDPluginD0Ev */
/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZTv0_n32_N2P214P2DrawIDPluginD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack16updateMetaResultEi */
/* Demangled: P2::StreamingProcessor::P2RequestPack::updateMetaResult(int) */
int _ZN2P218StreamingProcessor13P2RequestPack16updateMetaResultEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSQ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::__unordered_map_hasher<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::hash<P2::P2Request*>, true>, std::__1::__unordered_map_equal<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::equal_to<P2::P2Request*>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > > > >::__emplace_unique_key_args<P2::P2Request*, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::P2Request*&&>, std::__1::tuple<> >(P2::P2Request* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::P2Request*&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSQ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P26toP2IOEN7android2spINS_5P2ImgEEE */
/* Demangled: P2::toP2IO(android::sp<P2::P2Img>) */
int _ZN2P26toP2IOEN7android2spINS_5P2ImgEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTTN12RAW16NodeImp12UnpackThreadE */
/* Demangled: VTT for RAW16NodeImp::UnpackThread */
extern void* _ZTTN12RAW16NodeImp12UnpackThreadE;

/* Symbol: _ZN2P218StreamingProcessor15clearRSSOHolderEv */
/* Demangled: P2::StreamingProcessor::clearRSSOHolder() */
int _ZN2P218StreamingProcessor15clearRSSOHolderEv(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5enqueERKS1_ */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::enque(P2::MDPParam const&) */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5enqueERKS1_(void);

/* Symbol: _ZTv0_n88_N2P212MDPProcessor11onWaitFlushEv */
/* Demangled: virtual thunk to P2::MDPProcessor::onWaitFlush() */
int _ZTv0_n88_N2P212MDPProcessor11onWaitFlushEv(void);

/* Symbol: _ZTVN2P25MWImgE */
/* Demangled: vtable for P2::MWImg */
extern void* _ZTVN2P25MWImgE;

/* Symbol: _ZN12RAW16NodeImp5flushEv */
/* Demangled: RAW16NodeImp::flush() */
int _ZN12RAW16NodeImp5flushEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZTCN5NSCam2v38NSP1Node9P1NodeImpE0_NS0_13IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-NSCam::v3::NSP1Node::P1NodeImp */
extern void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE0_NS0_13IPipelineNodeE;

/* Symbol: _ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE9push_backERKS2_ */
/* Demangled: std::__1::deque<P2::MDPParam, std::__1::allocator<P2::MDPParam> >::push_back(P2::MDPParam const&) */
int _ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE9push_backERKS2_(void);

/* Symbol: _ZTVN2P216P2MetadataHandleE */
/* Demangled: vtable for P2::P2MetadataHandle */
extern void* _ZTVN2P216P2MetadataHandleE;

/* Symbol: _ZTC12RAW16NodeImp0_N5NSCam2v38BaseNodeE */
/* Demangled: construction vtable for NSCam::v3::BaseNode-in-RAW16NodeImp */
extern void* _ZTC12RAW16NodeImp0_N5NSCam2v38BaseNodeE;

/* Symbol: _ZThn40_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: non-virtual thunk to PDENodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZThn40_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n40_N2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: virtual thunk to P2::CaptureRequestCallback::onAborted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZTv0_n40_N2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZZ25isTrace1On_MWFrameRequestvE6sTrace */
/* Demangled: isTrace1On_MWFrameRequest()::sTrace */
extern void* _ZZ25isTrace1On_MWFrameRequestvE6sTrace;

/* Symbol: _ZTv0_n32_N2P214P2DrawIDPluginD1Ev */
/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZTv0_n32_N2P214P2DrawIDPluginD1Ev(void);

/* Symbol: _ZTv0_n64_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZTv0_n64_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE(void);

/* Symbol: _ZN2P29P2Cropper7initLMVEv */
/* Demangled: P2::P2Cropper::initLMV() */
int _ZN2P29P2Cropper7initLMVEv(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEmRKS3_ */
/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__append(unsigned long, NSCam::IImageBuffer* const&) */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEmRKS3_(void);

/* Symbol: _ZN2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE */
/* Demangled: P2::P2StreamingNodeImp::config(NSCam::v3::P2StreamingNode::ConfigParams const&) */
int _ZN2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr8dumpInfoEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::dumpInfo() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr8dumpInfoEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6delMinEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::delMin() */
int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6delMinEv(void);

/* Symbol: _ZTv0_n24_N2P214BasicProcessorD0Ev */
/* Demangled: virtual thunk to P2::BasicProcessor::~BasicProcessor() */
int _ZTv0_n24_N2P214BasicProcessorD0Ev(void);

/* Symbol: _ZN2P216CaptureProcessor12onThreadStopEv */
/* Demangled: P2::CaptureProcessor::onThreadStop() */
int _ZN2P216CaptureProcessor12onThreadStopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTV12encode_frame */
/* Demangled: vtable for encode_frame */
extern void* _ZTV12encode_frame;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD2Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD2Ev(void);

/* Symbol: _ZN2P29P2InIDMap8getImgIDEjNS_6ID_IMGE */
/* Demangled: P2::P2InIDMap::getImgID(unsigned int, P2::ID_IMG) */
int _ZN2P29P2InIDMap8getImgIDEjNS_6ID_IMGE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::__unordered_map_hasher<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::hash<P2::P2Request*>, true>, std::__1::__unordered_map_equal<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::equal_to<P2::P2Request*>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_requestEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_request() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_requestEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp8isActiveEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::isActive() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp8isActiveEv(void);

/* Symbol: _ZN2P29SMVRQueue5clearEv */
/* Demangled: P2::SMVRQueue::clear() */
int _ZN2P29SMVRQueue5clearEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_5MRectEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::MRect> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_5MRectEEE;

/* Symbol: _ZGVZ25isTrace1On_Streaming_3DNRvE6sTrace */
/* Demangled: guard variable for isTrace1On_Streaming_3DNR()::sTrace */
extern void* _ZGVZ25isTrace1On_Streaming_3DNRvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl18initBufInfo_createEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::initBufInfo_create(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**) */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl18initBufInfo_createEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam16IImageBufferHeapEEENS_9allocatorIS5_EEE8__appendEmRKS5_ */
/* Demangled: std::__1::vector<android::sp<NSCam::IImageBufferHeap>, std::__1::allocator<android::sp<NSCam::IImageBufferHeap> > >::__append(unsigned long, android::sp<NSCam::IImageBufferHeap> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam16IImageBufferHeapEEENS_9allocatorIS5_EEE8__appendEmRKS5_(void);

/* Symbol: _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEE */
/* Demangled: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> > */
extern void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEE;

/* Symbol: _ZTv0_n24_N2P214BasicProcessorD1Ev */
/* Demangled: virtual thunk to P2::BasicProcessor::~BasicProcessor() */
int _ZTv0_n24_N2P214BasicProcessorD1Ev(void);

/* Symbol: _ZTv0_n88_NK2P25MWImg18getIImageBufferPtrEv */
/* Demangled: virtual thunk to P2::MWImg::getIImageBufferPtr() const */
int _ZTv0_n88_NK2P25MWImg18getIImageBufferPtrEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5enqueERKS6_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::enque(android::sp<P2::P2FrameRequest> const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5enqueERKS6_(void);

/* Symbol: _ZN2P29SMVRQueue8SMVRData7releaseEv */
/* Demangled: P2::SMVRQueue::SMVRData::release() */
int _ZN2P29SMVRQueue8SMVRData7releaseEv(void);

/* Symbol: _ZN11JpegNodeImp14encodeMainJpegERN7android2spI12encode_frameEE */
/* Demangled: JpegNodeImp::encodeMainJpeg(android::sp<encode_frame>&) */
int _ZN11JpegNodeImp14encodeMainJpegERN7android2spI12encode_frameEE(void);

/* Symbol: _ZN10PDENodeImp5flushEv */
/* Demangled: PDENodeImp::flush() */
int _ZN10PDENodeImp5flushEv(void);

/* Symbol: _ZN2P216CaptureProcessorD0Ev */
/* Demangled: P2::CaptureProcessor::~CaptureProcessor() */
int _ZN2P216CaptureProcessorD0Ev(void);

/* Symbol: _ZN2P27MWFrame10flushFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl */
/* Demangled: P2::MWFrame::flushFrame(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IPipelineFrame> const&, long const&) */
int _ZN2P27MWFrame10flushFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl(void);

/* Symbol: _ZNK11JpegNodeImp18verifyConfigParamsERKN5NSCam2v38JpegNode12ConfigParamsE */
/* Demangled: JpegNodeImp::verifyConfigParams(NSCam::v3::JpegNode::ConfigParams const&) const */
int _ZNK11JpegNodeImp18verifyConfigParamsERKN5NSCam2v38JpegNode12ConfigParamsE(void);

/* Symbol: _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6assignINS_21__list_const_iteratorIS5_PvEEEEvT_SD_PNS_9enable_ifIXsr19__is_input_iteratorISD_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6assignINS_21__list_const_iteratorIS5_PvEEEEvT_SD_PNS_9enable_ifIXsr19__is_input_iteratorISD_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6assignINS_21__list_const_iteratorIS5_PvEEEEvT_SD_PNS_9enable_ifIXsr19__is_input_iteratorISD_EE5valueEvE4typeE(void);

/* Symbol: _ZN2P214MWFrameRequest17extractP2RequestsEv */
/* Demangled: P2::MWFrameRequest::extractP2Requests() */
int _ZN2P214MWFrameRequest17extractP2RequestsEv(void);

/* Symbol: _ZNK2P29P2Request7getMetaENS_7ID_METAEj */
/* Demangled: P2::P2Request::getMeta(P2::ID_META, unsigned int) const */
int _ZNK2P29P2Request7getMetaENS_7ID_METAEj(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIN7android2spIN2P218StreamingProcessor7PayloadEEEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<android::sp<P2::StreamingProcessor::Payload> > */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIN7android2spIN2P218StreamingProcessor7PayloadEEEEE;

/* Symbol: _ZNSt3__16vectorI7RequestNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<Request, std::__1::allocator<Request> >::__push_back_slow_path<Request const&>(Request const&) */
int _ZNSt3__16vectorI7RequestNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZZN2P228isTrace1On_DispatchProcessorEvE4sVal */
/* Demangled: P2::isTrace1On_DispatchProcessor()::sVal */
extern void* _ZZN2P228isTrace1On_DispatchProcessorEvE4sVal;

/* Symbol: _ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame13MetaInfoIOMapERKNSt3__13mapIlNS2_INS_6P2MetaEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE */
/* Demangled: P2::MWFrameRequest::fillP2Meta(android::sp<P2::P2Request> const&, NSCam::v3::IPipelineFrame::MetaInfoIOMap const&, std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > > const&) */
int _ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame13MetaInfoIOMapERKNSt3__13mapIlNS2_INS_6P2MetaEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE(void);

/* Symbol: _ZTCN2P29P2RequestE0_NS_8IP2FrameE */
/* Demangled: construction vtable for P2::IP2Frame-in-P2::P2Request */
extern void* _ZTCN2P29P2RequestE0_NS_8IP2FrameE;

/* Symbol: _ZNK5NSCam2v38BaseNode9getOpenIdEv */
/* Demangled: NSCam::v3::BaseNode::getOpenId() const */
int _ZNK5NSCam2v38BaseNode9getOpenIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp7setInitEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setInit(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp7setInitEi(void);

/* Symbol: _ZTv0_n112_NK2P25MWImg12getTransformEv */
/* Demangled: virtual thunk to P2::MWImg::getTransform() const */
int _ZTv0_n112_NK2P25MWImg12getTransformEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV7supportEv */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::support() */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV7supportEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE7reserveEm */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1FrameAct, std::__1::allocator<NSCam::v3::NSP1Node::P1FrameAct> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE7reserveEm(void);

/* Symbol: _ZN2P216CaptureProcessor12releaseImageEN7android2spINS_9P2RequestEEENS_6ID_IMGE */
/* Demangled: P2::CaptureProcessor::releaseImage(android::sp<P2::P2Request>, P2::ID_IMG) */
int _ZN2P216CaptureProcessor12releaseImageEN7android2spINS_9P2RequestEEENS_6ID_IMGE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZN2P218P2StreamingNodeImp6sMutexE */
/* Demangled: P2::P2StreamingNodeImp::sMutex */
extern void* _ZN2P218P2StreamingNodeImp6sMutexE;

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector6settleEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::settle() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector6settleEv(void);

/* Symbol: _ZN2P216CaptureProcessorD1Ev */
/* Demangled: P2::CaptureProcessor::~CaptureProcessor() */
int _ZN2P216CaptureProcessorD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN2P218StreamingProcessor19prepareFeatureParamERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepareFeatureParam(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) */
int _ZN2P218StreamingProcessor19prepareFeatureParamERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node19getNormalPipeModuleEv */
/* Demangled: NSCam::v3::NSP1Node::getNormalPipeModule() */
int _ZN5NSCam2v38NSP1Node19getNormalPipeModuleEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19getQualitySwitchingEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getQualitySwitching() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19getQualitySwitchingEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node17P1NotifyYuvR2Crop14p1TuningNotifyEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1NotifyYuvR2Crop::p1TuningNotify(void*, void*) */
int _ZN5NSCam2v38NSP1Node17P1NotifyYuvR2Crop14p1TuningNotifyEPvS3_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote, std::__1::allocator<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote const&>(NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote const&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZThn40_N12RAW16NodeImpD0Ev */
/* Demangled: non-virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
int _ZThn40_N12RAW16NodeImpD0Ev(void);

/* Symbol: _ZN2P214MWFrameRequest18updateP2SensorDataEv */
/* Demangled: P2::MWFrameRequest::updateP2SensorData() */
int _ZN2P214MWFrameRequest18updateP2SensorDataEv(void);

/* Symbol: _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::readyToRun() */
int _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZN2P29P2Cropper11initHalInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE */
/* Demangled: P2::P2Cropper::initHalInfo(NSCam::Feature::P2Util::P2SensorData const*) */
int _ZN2P29P2Cropper11initHalInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE(void);

/* Symbol: _ZNK2P29P2Cropper12getP1OutSizeEv */
/* Demangled: P2::P2Cropper::getP1OutSize() const */
int _ZNK2P29P2Cropper12getP1OutSizeEv(void);

/* Symbol: _ZN2P218P2StreamingNodeImpC2EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE */
/* Demangled: P2::P2StreamingNodeImp::P2StreamingNodeImp(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint const&) */
int _ZN2P218P2StreamingNodeImpC2EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE(void);

/* Symbol: _ZN2P218StreamingProcessor8init3DNREv */
/* Demangled: P2::StreamingProcessor::init3DNR() */
int _ZN2P218StreamingProcessor8init3DNREv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe9SFPOutputENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe9SFPOutputENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe9SFPOutputENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp19isActiveButNotReadyEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::isActiveButNotReady() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp19isActiveButNotReadyEv(void);

/* Symbol: _ZN5NSCam2v37JpgPack7processEv */
/* Demangled: NSCam::v3::JpgPack::process() */
int _ZN5NSCam2v37JpgPack7processEv(void);

/* Symbol: _ZGVZ18isTrace1On_CroppervE6sTrace */
/* Demangled: guard variable for isTrace1On_Cropper()::sTrace */
extern void* _ZGVZ18isTrace1On_CroppervE6sTrace;

/* Symbol: _ZNK2P25P2Img5getIDEv */
/* Demangled: P2::P2Img::getID() const */
int _ZNK2P25P2Img5getIDEv(void);

/* Symbol: _ZTTN2P218StreamingProcessor14PartialPayloadE */
/* Demangled: VTT for P2::StreamingProcessor::PartialPayload */
extern void* _ZTTN2P218StreamingProcessor14PartialPayloadE;

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl14checkFirstSyncEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkFirstSync() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl14checkFirstSyncEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp7isReadyEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::isReady() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp7isReadyEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN2P218StreamingProcessor14PartialPayloadC1ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE */
/* Demangled: P2::StreamingProcessor::PartialPayload::PartialPayload(NSCam::Feature::ILog const&, android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
int _ZN2P218StreamingProcessor14PartialPayloadC1ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN2P214BasicProcessorD0Ev */
/* Demangled: P2::BasicProcessor::~BasicProcessor() */
int _ZN2P214BasicProcessorD0Ev(void);

/* Symbol: _ZN2P216CaptureProcessorD2Ev */
/* Demangled: P2::CaptureProcessor::~CaptureProcessor() */
int _ZN2P216CaptureProcessorD2Ev(void);

/* Symbol: _ZN2P26P2MetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_7ID_METAE */
/* Demangled: P2::P2Meta::P2Meta(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, P2::ID_META) */
int _ZN2P26P2MetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_7ID_METAE(void);

/* Symbol: _ZN2P27MWFrame11releaseMetaERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEEPNS7_9IMetadataE */
/* Demangled: P2::MWFrame::releaseMeta(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IMetaStreamBuffer> const&, NSCam::IMetadata*) */
int _ZN2P27MWFrame11releaseMetaERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEEPNS7_9IMetadataE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet>&>&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr11deliverLoopEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::deliverLoop() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr11deliverLoopEv(void);

/* Symbol: _ZThn40_N12RAW16NodeImpD1Ev */
/* Demangled: non-virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
int _ZThn40_N12RAW16NodeImpD1Ev(void);

/* Symbol: _ZN2P218P2StreamingNodeImp15generateFrameIDEv */
/* Demangled: P2::P2StreamingNodeImp::generateFrameID() */
int _ZN2P218P2StreamingNodeImp15generateFrameIDEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*> >::push_back(android::sp<P2::P2FrameRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZN2P216P2CaptureNodeImp6uninitEv */
/* Demangled: P2::P2CaptureNodeImp::uninit() */
int _ZN2P216P2CaptureNodeImp6uninitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector9verifyActERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::verifyAct(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector9verifyActERNS1_8P1QueActE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct12poolImagePutENS1_10STREAM_IMGEa */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImagePut(NSCam::v3::NSP1Node::STREAM_IMG, signed char) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct12poolImagePutENS1_10STREAM_IMGEa(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEjf */
/* Demangled: P2::P2Cropper::calcViewAngle(NSCam::Feature::ILog const&, NSCam::MSize const&, unsigned int, float) const */
int _ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEjf(void);

/* Symbol: _ZNK2P212P2DumpPlugin11needDumpOutENS0_8DUMP_OUTE */
/* Demangled: P2::P2DumpPlugin::needDumpOut(P2::P2DumpPlugin::DUMP_OUT) const */
int _ZNK2P212P2DumpPlugin11needDumpOutENS0_8DUMP_OUTE(void);

/* Symbol: _ZN12RAW16NodeImp12UnpackThread10threadLoopEv */
/* Demangled: RAW16NodeImp::UnpackThread::threadLoop() */
int _ZN12RAW16NodeImp12UnpackThread10threadLoopEv(void);

/* Symbol: _ZNK2P29P2Request10getMetaPtrENS_7ID_METAE */
/* Demangled: P2::P2Request::getMetaPtr(P2::ID_META) const */
int _ZNK2P29P2Request10getMetaPtrENS_7ID_METAE(void);

/* Symbol: _ZTCN2P218P2StreamingNodeImpE2232_N5NSCam2v38BaseNodeE */
/* Demangled: construction vtable for NSCam::v3::BaseNode-in-P2::P2StreamingNodeImp */
extern void* _ZTCN2P218P2StreamingNodeImpE2232_N5NSCam2v38BaseNodeE;

/* Symbol: _ZN5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::BaseNode::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp27getProcessingFrame_ByNumberEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getProcessingFrame_ByNumber(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp27getProcessingFrame_ByNumberEi(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::vector(std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node21ProcedureStageControl5resetEv */
/* Demangled: NSCam::v3::NSP1Node::ProcedureStageControl::reset() */
int _ZN5NSCam2v38NSP1Node21ProcedureStageControl5resetEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD2Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD2Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE4initERKS1_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::init(P2::P2InitParam const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE4initERKS1_(void);

/* Symbol: _ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android6VectorINS2_2spIN5NSCam2v315IMetaStreamInfoEEEEE */
/* Demangled: P2::MWInfo::initMetaInfo(P2::ID_META, android::Vector<android::sp<NSCam::v3::IMetaStreamInfo> > const&) */
int _ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android6VectorINS2_2spIN5NSCam2v315IMetaStreamInfoEEEEE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node18StuffBufferManagerE */
/* Demangled: vtable for NSCam::v3::NSP1Node::StuffBufferManager */
extern void* _ZTVN5NSCam2v38NSP1Node18StuffBufferManagerE;

/* Symbol: _ZN2P214BasicProcessorD1Ev */
/* Demangled: P2::BasicProcessor::~BasicProcessor() */
int _ZN2P214BasicProcessorD1Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread4stopEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::stop() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread4stopEv(void);

/* Symbol: _ZTTN2P212P2DumpPluginE */
/* Demangled: VTT for P2::P2DumpPlugin */
extern void* _ZTTN2P212P2DumpPluginE;

/* Symbol: _ZTVN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetE */
/* Demangled: vtable for NSCam::v3::NSP1Node::StuffBufferManager::InfoSet */
extern void* _ZTVN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetE;

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct10SubSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1NodeAct::SubSetting, std::__1::allocator<NSCam::v3::NSP1Node::P1NodeAct::SubSetting> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1NodeAct::SubSetting const&>(NSCam::v3::NSP1Node::P1NodeAct::SubSetting const&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct10SubSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZTTN2P26MWMetaE */
/* Demangled: VTT for P2::MWMeta */
extern void* _ZTTN2P26MWMetaE;

/* Symbol: _ZNK2P218P2StreamingNodeImp11getNodeNameEv */
/* Demangled: P2::P2StreamingNodeImp::getNodeName() const */
int _ZNK2P218P2StreamingNodeImp11getNodeNameEv(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE7reserveEm */
/* Demangled: std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::reserve(unsigned long) */
int _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE7reserveEm(void);

/* Symbol: _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::threadLoop() */
int _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::readyToRun() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm(void);

/* Symbol: _ZNK2P218StreamingProcessor8isAdvEISEv */
/* Demangled: P2::StreamingProcessor::isAdvEIS() const */
int _ZNK2P218StreamingProcessor8isAdvEISEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*> >::push_back(android::sp<P2::P2Request>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeActE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeAct */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeActE;

/* Symbol: _ZTVN2P222CaptureRequestCallbackE */
/* Demangled: vtable for P2::CaptureRequestCallback */
extern void* _ZTVN2P222CaptureRequestCallbackE;

/* Symbol: _ZN2P27MWFrame18releaseFrameStreamERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl */
/* Demangled: P2::MWFrame::releaseFrameStream(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IPipelineFrame> const&, long const&) */
int _ZN2P27MWFrame18releaseFrameStreamERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl(void);

/* Symbol: _ZTCN2P213P2FrameHolderE0_NS_8IP2FrameE */
/* Demangled: construction vtable for P2::IP2Frame-in-P2::P2FrameHolder */
extern void* _ZTCN2P213P2FrameHolderE0_NS_8IP2FrameE;

/* Symbol: _ZN2P216P2CaptureNodeImp9getStatusEv */
/* Demangled: P2::P2CaptureNodeImp::getStatus() */
int _ZN2P216P2CaptureNodeImp9getStatusEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl23checkReceiveRestreamingEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkReceiveRestreaming() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl23checkReceiveRestreamingEv(void);

/* Symbol: _ZN2P214BasicProcessorD2Ev */
/* Demangled: P2::BasicProcessor::~BasicProcessor() */
int _ZN2P214BasicProcessorD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_META>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_META> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeImpEEC2EPS4_ */
/* Demangled: android::sp<NSCam::v3::NSP1Node::P1NodeImp>::sp(NSCam::v3::NSP1Node::P1NodeImp*) */
int _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeImpEEC2EPS4_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollectorD0Ev */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::~P1TaskCollector() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollectorD0Ev(void);

/* Symbol: _ZNK2P26MWInfo11findImgInfoENS_6ID_IMGE */
/* Demangled: P2::MWInfo::findImgInfo(P2::ID_IMG) const */
int _ZNK2P26MWInfo11findImgInfoENS_6ID_IMGE(void);

/* Symbol: _ZTv0_n32_N2P27MWFrameD0Ev */
/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
int _ZTv0_n32_N2P27MWFrameD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp9onSyncEndEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onSyncEnd() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp9onSyncEndEv(void);

/* Symbol: _ZTCN5NSCam2v37JpgPackE0_NS0_10IJpgPluginE */
/* Demangled: construction vtable for NSCam::v3::IJpgPlugin-in-NSCam::v3::JpgPack */
extern void* _ZTCN5NSCam2v37JpgPackE0_NS0_10IJpgPluginE;

/* Symbol: _ZN2P27MWFrame15endBatchReleaseEv */
/* Demangled: P2::MWFrame::endBatchRelease() */
int _ZN2P27MWFrame15endBatchReleaseEv(void);

/* Symbol: _ZTTN5NSCam2v39DummyNodeE */
/* Demangled: VTT for NSCam::v3::DummyNode */
extern void* _ZTTN5NSCam2v39DummyNodeE;

/* Symbol: _ZN2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::BasicProcessor::onEnque(android::sp<P2::P2Request> const&) */
int _ZN2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void);

/* Symbol: _ZN2P216CaptureProcessor13notifyReleaseEii */
/* Demangled: P2::CaptureProcessor::notifyRelease(int, int) */
int _ZN2P216CaptureProcessor13notifyReleaseEii(void);

/* Symbol: _ZN2P222CaptureRequestCallbackC2EPNS_16CaptureProcessorE */
/* Demangled: P2::CaptureRequestCallback::CaptureRequestCallback(P2::CaptureProcessor*) */
int _ZN2P222CaptureRequestCallbackC2EPNS_16CaptureProcessorE(void);

/* Symbol: _ZN2P216P2ScanlinePluginC1Ev */
/* Demangled: P2::P2ScanlinePlugin::P2ScanlinePlugin() */
int _ZN2P216P2ScanlinePluginC1Ev(void);

/* Symbol: _ZTCN2P212P2DumpPluginE0_NS_11P2ImgPluginE */
/* Demangled: construction vtable for P2::P2ImgPlugin-in-P2::P2DumpPlugin */
extern void* _ZTCN2P212P2DumpPluginE0_NS_11P2ImgPluginE;

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkBufferStateEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkBufferState() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkBufferStateEv(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::threadLoop() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv(void);

/* Symbol: _ZGVZN2P216isTrace1On_MWImgEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_MWImg()::sTrace */
extern void* _ZGVZN2P216isTrace1On_MWImgEvE6sTrace;

/* Symbol: _ZN2P218P2StreamingNodeImp5flushEv */
/* Demangled: P2::P2StreamingNodeImp::flush() */
int _ZN2P218P2StreamingNodeImp5flushEv(void);

/* Symbol: _ZNK2P26MWInfo16supportClearZoomEv */
/* Demangled: P2::MWInfo::supportClearZoom() const */
int _ZNK2P26MWInfo16supportClearZoomEv(void);

/* Symbol: _ZNK2P26P2Util9SimpleOut11getSensorIdEv */
/* Demangled: P2::P2Util::SimpleOut::getSensorId() const */
int _ZNK2P26P2Util9SimpleOut11getSensorIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollectorD1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::~P1TaskCollector() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollectorD1Ev(void);

/* Symbol: _ZZ20isTrace1On_ProcessorvE6sTrace */
/* Demangled: isTrace1On_Processor()::sTrace */
extern void* _ZZ20isTrace1On_ProcessorvE6sTrace;

/* Symbol: _ZTv0_n32_N2P27MWFrameD1Ev */
/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
int _ZTv0_n32_N2P27MWFrameD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::portInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::portInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::portInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::portInfo const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo7getMemoENS2_10CheckPointEPN7android7String8E */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::getMemo(NSCam::v3::NSP1Node::LogInfo::CheckPoint, android::String8*) */
int _ZN5NSCam2v38NSP1Node7LogInfo7getMemoENS2_10CheckPointEPN7android7String8E(void);

/* Symbol: _ZN9ExifUtils18updateStdExifParamERKiRKN5NSCam5MSizeEPNS2_9IMetadataES7_RK11jpeg_paramsR10ExifParamsi */
/* Demangled: ExifUtils::updateStdExifParam(int const&, NSCam::MSize const&, NSCam::IMetadata*, NSCam::IMetadata*, jpeg_params const&, ExifParams&, int) */
int _ZN9ExifUtils18updateStdExifParamERKiRKN5NSCam5MSizeEPNS2_9IMetadataES7_RK11jpeg_paramsR10ExifParamsi(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE5enqueERKS1_ */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::enque(P2::MDPParam const&) */
int _ZN2P29ProcessorIjjNS_8MDPParamEE5enqueERKS1_(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::readyToRun() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZN2P27MWFrameC1ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE */
/* Demangled: P2::MWFrame::MWFrame(NSCam::Feature::ILog const&, long const&, android::String8 const&, android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN2P27MWFrameC1ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload15addRequestPacksERKNSt3__16vectorIN7android2spINS0_13P2RequestPackEEENS2_9allocatorIS7_EEEE */
/* Demangled: P2::StreamingProcessor::Payload::addRequestPacks(std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > > const&) */
int _ZN2P218StreamingProcessor7Payload15addRequestPacksERKNSt3__16vectorIN7android2spINS0_13P2RequestPackEEENS2_9allocatorIS7_EEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct8setFlushENS1_10FLUSH_TYPEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::setFlush(NSCam::v3::NSP1Node::FLUSH_TYPE) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct8setFlushENS1_10FLUSH_TYPEE(void);

/* Symbol: _ZN2P216P2ScanlinePluginC2Ev */
/* Demangled: P2::P2ScanlinePlugin::P2ScanlinePlugin() */
int _ZN2P216P2ScanlinePluginC2Ev(void);

/* Symbol: _ZN2P26P2Util9SimpleOutC2EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE */
/* Demangled: P2::P2Util::SimpleOut::SimpleOut(unsigned int, android::sp<P2::P2Request>, android::sp<P2::P2Img>&) */
int _ZN2P26P2Util9SimpleOutC2EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl17checkThreadWeakupEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkThreadWeakup() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl17checkThreadWeakupEv(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNK2P29P2Cropper8toActiveERKN5NSCam6MRectFEi */
/* Demangled: P2::P2Cropper::toActive(NSCam::MRectF const&, int) const */
int _ZNK2P29P2Cropper8toActiveERKN5NSCam6MRectFEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node17verifySizeResizerEjjRKNS_5MSizeES4_S4_RS2_i */
/* Demangled: NSCam::v3::NSP1Node::verifySizeResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize&, int) */
int _ZN5NSCam2v38NSP1Node17verifySizeResizerEjjRKNS_5MSizeES4_S4_RS2_i(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct15streamImageInitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::streamImageInit(NSCam::v3::NSP1Node::STREAM_IMG, NSCam::v3::NSP1Node::IMG_BUF_SRC) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct15streamImageInitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::doNotifyCb(int, long, long, long) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll(void);

/* Symbol: _ZN7android2spI6RssHalEaSEOS2_ */
/* Demangled: android::sp<RssHal>::operator=(android::sp<RssHal>&&) */
int _ZN7android2spI6RssHalEaSEOS2_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollectorD2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::~P1TaskCollector() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollectorD2Ev(void);

/* Symbol: _ZN5NSCam2v37PDENode14createInstanceEv */
/* Demangled: NSCam::v3::PDENode::createInstance() */
int _ZN5NSCam2v37PDENode14createInstanceEv(void);

/* Symbol: _ZN2P212MDPProcessor8onConfigERKj */
/* Demangled: P2::MDPProcessor::onConfig(unsigned int const&) */
int _ZN2P212MDPProcessor8onConfigERKj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: P2::P2CaptureNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp28requestMetadataEarlyCallbackERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::requestMetadataEarlyCallback(NSCam::v3::NSP1Node::P1QueAct&, NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp28requestMetadataEarlyCallbackERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV10processLMVEiPN6NS3Av36IHal3AEijjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjhlRNS_9IMetadataE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processLMV(int, NS3Av3::IHal3A*, int, unsigned int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, unsigned int, unsigned char, long, NSCam::IMetadata&) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV10processLMVEiPN6NS3Av36IHal3AEijjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjhlRNS_9IMetadataE(void);

/* Symbol: _ZN2P214BasicProcessor7MyTimerC1ERKN5NSCam7Feature4ILogEj */
/* Demangled: P2::BasicProcessor::MyTimer::MyTimer(NSCam::Feature::ILog const&, unsigned int) */
int _ZN2P214BasicProcessor7MyTimerC1ERKN5NSCam7Feature4ILogEj(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev(void);

/* Symbol: _ZN2P212MDPProcessor12onThreadStopEv */
/* Demangled: P2::MDPProcessor::onThreadStop() */
int _ZN2P212MDPProcessor12onThreadStopEv(void);

/* Symbol: _ZN2P218StreamingProcessor8uninit3AEv */
/* Demangled: P2::StreamingProcessor::uninit3A() */
int _ZN2P218StreamingProcessor8uninit3AEv(void);

/* Symbol: _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE7do_copyEPvPKvm */
/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN2P214P2DrawIDPluginE */
/* Demangled: vtable for P2::P2DrawIDPlugin */
extern void* _ZTVN2P214P2DrawIDPluginE;

/* Symbol: _ZZ20isTrace1On_SMVRQueuevE4sVal */
/* Demangled: isTrace1On_SMVRQueue()::sVal */
extern void* _ZZ20isTrace1On_SMVRQueuevE4sVal;

/* Symbol: _ZGVZN2P229isTrace1On_StreamingProcessorEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_StreamingProcessor()::sVal */
extern void* _ZGVZN2P229isTrace1On_StreamingProcessorEvE4sVal;

/* Symbol: _ZN2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: P2::P2CaptureNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n72_N2P216P2CaptureNodeImp6uninitEv */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::uninit() */
int _ZTv0_n72_N2P216P2CaptureNodeImp6uninitEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteE */
/* Demangled: vtable for NSCam::v3::NSP1Node::ProcedureStageControl::StageNote */
extern void* _ZTVN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteE;

/* Symbol: _ZNK2P218P2StreamingNodeImp12getP2PQIndexERKN5NSCam7Feature6P2Util11P2UsageHintENS3_6P2TypeE */
/* Demangled: P2::P2StreamingNodeImp::getP2PQIndex(NSCam::Feature::P2Util::P2UsageHint const&, NSCam::Feature::P2Util::P2Type) const */
int _ZNK2P218P2StreamingNodeImp12getP2PQIndexERKN5NSCam7Feature6P2Util11P2UsageHintENS3_6P2TypeE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18checkBufferDumpingERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::checkBufferDumping(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18checkBufferDumpingERNS1_8P1QueActE(void);

/* Symbol: _ZN7android2spI6FSCHalEaSEOS2_ */
/* Demangled: android::sp<FSCHal>::operator=(android::sp<FSCHal>&&) */
int _ZN7android2spI6FSCHalEaSEOS2_(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node15P1NotifyQualityE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NotifyQuality */
extern void* _ZTVN5NSCam2v38NSP1Node15P1NotifyQualityE;

/* Symbol: _ZTT10PDENodeImp */
/* Demangled: VTT for PDENodeImp */
extern void* _ZTT10PDENodeImp;

/* Symbol: _ZTv0_n152_NK2P25MWImg16isPhysicalStreamEv */
/* Demangled: virtual thunk to P2::MWImg::isPhysicalStream() const */
int _ZTv0_n152_NK2P25MWImg16isPhysicalStreamEv(void);

/* Symbol: _ZGVZ18isTrace1On_MWFramevE4sVal */
/* Demangled: guard variable for isTrace1On_MWFrame()::sVal */
extern void* _ZGVZ18isTrace1On_MWFramevE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node15StuffBufferPool13acquireBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::acquireBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node15StuffBufferPool13acquireBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN2P212P2DumpPlugin13needDumpFrameEi */
/* Demangled: P2::P2DumpPlugin::needDumpFrame(int) */
int _ZN2P212P2DumpPlugin13needDumpFrameEi(void);

/* Symbol: _ZZ22isTrace1On_CaptureNodevE4sVal */
/* Demangled: isTrace1On_CaptureNode()::sVal */
extern void* _ZZ22isTrace1On_CaptureNodevE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify6uninitEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::uninit() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify6uninitEv(void);

/* Symbol: _ZThn40_N10PDENodeImpD0Ev */
/* Demangled: non-virtual thunk to PDENodeImp::~PDENodeImp() */
int _ZThn40_N10PDENodeImpD0Ev(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD2Ev */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD2Ev(void);

/* Symbol: _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKNS1_2v314IPipelineFrame12InfoIOMapSetE */
/* Demangled: P2::MWFrame::print(NSCam::Feature::ILog const&, NSCam::v3::IPipelineFrame::InfoIOMapSet const&) */
int _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKNS1_2v314IPipelineFrame12InfoIOMapSetE(void);

/* Symbol: _ZN2P214P2FrameRequestD0Ev */
/* Demangled: P2::P2FrameRequest::~P2FrameRequest() */
int _ZN2P214P2FrameRequestD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor15decPayloadCountERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::decPayloadCount(NSCam::Feature::ILog const&) */
int _ZN2P218StreamingProcessor15decPayloadCountERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNK2P218StreamingProcessor16getEISRRZOMarginERNS_6P2Util8SimpleInE */
/* Demangled: P2::StreamingProcessor::getEISRRZOMargin(P2::P2Util::SimpleIn&) const */
int _ZNK2P218StreamingProcessor16getEISRRZOMarginERNS_6P2Util8SimpleInE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5enqueERKSB_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::enque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5enqueERKSB_(void);

/* Symbol: _ZNK2P26MWMeta15getIMetadataPtrEv */
/* Demangled: P2::MWMeta::getIMetadataPtr() const */
int _ZNK2P26MWMeta15getIMetadataPtrEv(void);

/* Symbol: _ZN2P29P2RequestC1ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE */
/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, android::sp<P2::IP2Frame> const&) */
int _ZN2P29P2RequestC1ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE(void);

/* Symbol: _ZTv0_n88_N2P218StreamingProcessor11onWaitFlushEv */
/* Demangled: virtual thunk to P2::StreamingProcessor::onWaitFlush() */
int _ZTv0_n88_N2P218StreamingProcessor11onWaitFlushEv(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadC1EPS2_i */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::ProcessThread(P2::Processor<unsigned int, unsigned int, P2::MDPParam>*, int) */
int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadC1EPS2_i(void);

/* Symbol: _ZN2P26MWInfoC2ERKN5NSCam2v313P2CaptureNode12ConfigParamsE */
/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2CaptureNode::ConfigParams const&) */
int _ZN2P26MWInfoC2ERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void);

/* Symbol: _ZN2P26P2Util8SimpleIn12addCropRatioEPKcf */
/* Demangled: P2::P2Util::SimpleIn::addCropRatio(char const*, float) */
int _ZN2P26P2Util8SimpleIn12addCropRatioEPKcf(void);

/* Symbol: _ZN5NSCam2v313P2CaptureNode14createInstanceENS1_10ePass2TypeERKNS0_8P2Common7Capture9UsageHintE */
/* Demangled: NSCam::v3::P2CaptureNode::createInstance(NSCam::v3::P2CaptureNode::ePass2Type, NSCam::v3::P2Common::Capture::UsageHint const&) */
int _ZN5NSCam2v313P2CaptureNode14createInstanceENS1_10ePass2TypeERKNS0_8P2Common7Capture9UsageHintE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15queryStartExpTsEjjRKlS3_Rli */
/* Demangled: NSCam::v3::NSP1Node::queryStartExpTs(unsigned int, unsigned int, long const&, long const&, long&, int) */
int _ZN5NSCam2v38NSP1Node15queryStartExpTsEjjRKlS3_Rli(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl15initBufInfo_getEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::initBufInfo_get(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**) */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl15initBufInfo_getEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSERKS7_ */
/* Demangled: android::sp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >::operator=(android::sp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> > const&) */
int _ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSERKS7_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker13doRequestExitEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::doRequestExit() */
int _ZN5NSCam2v38NSP1Node13TimingChecker13doRequestExitEv(void);

/* Symbol: _ZN9ExifUtils14makeExifHeaderEN7android2spI12encode_frameEEPaRm */
/* Demangled: ExifUtils::makeExifHeader(android::sp<encode_frame>, signed char*, unsigned long&) */
int _ZN9ExifUtils14makeExifHeaderEN7android2spI12encode_frameEEPaRm(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*>&>::push_front(P2::SMVRQueue::SMVRData* const&) */
int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZTCN2P216P2CaptureNodeImpE512_N5NSCam2v313IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-P2::P2CaptureNodeImp */
extern void* _ZTCN2P216P2CaptureNodeImpE512_N5NSCam2v313IPipelineNodeE;

/* Symbol: _ZTv0_n24_N2P216P2CaptureNodeImpD0Ev */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZTv0_n24_N2P216P2CaptureNodeImpD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::readyToRun() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv(void);

/* Symbol: _ZTv0_n112_N5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
int _ZTv0_n112_N5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void);

/* Symbol: _ZThn40_N10PDENodeImpD1Ev */
/* Demangled: non-virtual thunk to PDENodeImp::~PDENodeImp() */
int _ZThn40_N10PDENodeImpD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE10do_destroyEPvm(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread4stopEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::stop() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread4stopEv(void);

/* Symbol: _ZN2P214P2FrameRequestD1Ev */
/* Demangled: P2::P2FrameRequest::~P2FrameRequest() */
int _ZN2P214P2FrameRequestD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerification3exeEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::IndependentVerification::exe() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerification3exeEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15StuffBufferPool13releaseBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::releaseBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node15StuffBufferPool13releaseBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN2P218P2StreamingNodeImpE */
/* Demangled: vtable for P2::P2StreamingNodeImp */
extern void* _ZTVN2P218P2StreamingNodeImpE;

/* Symbol: _ZNSt3__16vectorIN2P26P2Util8SimpleInENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<P2::P2Util::SimpleIn, std::__1::allocator<P2::P2Util::SimpleIn> >::__push_back_slow_path<P2::P2Util::SimpleIn const&>(P2::P2Util::SimpleIn const&) */
int _ZNSt3__16vectorIN2P26P2Util8SimpleInENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam2v39DummyNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::DummyNode::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v39DummyNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN2P212MDPProcessor13onNotifyFlushEv */
/* Demangled: P2::MDPProcessor::onNotifyFlush() */
int _ZN2P212MDPProcessor13onNotifyFlushEv(void);

/* Symbol: _ZTv0_n80_NK2P26MWMeta8getEntryEj */
/* Demangled: virtual thunk to P2::MWMeta::getEntry(unsigned int) const */
int _ZTv0_n80_NK2P26MWMeta8getEntryEj(void);

/* Symbol: _ZN5NSCam2v38NSP1Node21ProcedureStageControl4waitEjRi */
/* Demangled: NSCam::v3::NSP1Node::ProcedureStageControl::wait(unsigned int, int&) */
int _ZN5NSCam2v38NSP1Node21ProcedureStageControl4waitEjRi(void);

/* Symbol: _ZN2P27MWFrame12ReleaseTokenD0Ev */
/* Demangled: P2::MWFrame::ReleaseToken::~ReleaseToken() */
int _ZN2P27MWFrame12ReleaseTokenD0Ev(void);

/* Symbol: _ZN2P29P2Request7moveImgENS_6ID_IMGEj */
/* Demangled: P2::P2Request::moveImg(P2::ID_IMG, unsigned int) */
int _ZN2P29P2Request7moveImgENS_6ID_IMGEj(void);

/* Symbol: _ZNK2P29P2Cropper4clipERKN5NSCam5MRectES4_ */
/* Demangled: P2::P2Cropper::clip(NSCam::MRect const&, NSCam::MRect const&) const */
int _ZNK2P29P2Cropper4clipERKN5NSCam5MRectES4_(void);

/* Symbol: _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*>&>::push_front(android::sp<P2::P2FrameRequest>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_(void);

/* Symbol: _ZTv0_n24_N2P216P2CaptureNodeImpD1Ev */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
int _ZTv0_n24_N2P216P2CaptureNodeImpD1Ev(void);

/* Symbol: _ZN2P214BasicProcessor16configVencStreamEiiN5NSCam5MSizeE */
/* Demangled: P2::BasicProcessor::configVencStream(int, int, NSCam::MSize) */
int _ZN2P214BasicProcessor16configVencStreamEiiN5NSCam5MSizeE(void);

/* Symbol: _ZN2P214P2FrameRequestD2Ev */
/* Demangled: P2::P2FrameRequest::~P2FrameRequest() */
int _ZN2P214P2FrameRequestD2Ev(void);

/* Symbol: _ZNK2P29P2Cropper12getP1BinCropEv */
/* Demangled: P2::P2Cropper::getP1BinCrop() const */
int _ZNK2P29P2Cropper12getP1BinCropEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_IMG> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZN2P214MWFrameRequest15initP2FrameDataEv */
/* Demangled: P2::MWFrameRequest::initP2FrameData() */
int _ZN2P214MWFrameRequest15initP2FrameDataEv(void);

/* Symbol: _ZN2P214P2FrameRequest5mapIDEjNS_7ID_METAE */
/* Demangled: P2::P2FrameRequest::mapID(unsigned int, P2::ID_META) */
int _ZN2P214P2FrameRequest5mapIDEjNS_7ID_METAE(void);

/* Symbol: _ZN2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE */
/* Demangled: P2::P2CaptureNodeImp::config(NSCam::v3::P2CaptureNode::ConfigParams const&) */
int _ZN2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void);

/* Symbol: _ZN11JpegNodeImp10mapRequestERN7android2spIN5NSCam2v314IPipelineFrameEEERNSt3__16vectorI7RequestNS7_9allocatorIS9_EEEER11static_info */
/* Demangled: JpegNodeImp::mapRequest(android::sp<NSCam::v3::IPipelineFrame>&, std::__1::vector<Request, std::__1::allocator<Request> >&, static_info&) */
int _ZN11JpegNodeImp10mapRequestERN7android2spIN5NSCam2v314IPipelineFrameEEERNSt3__16vectorI7RequestNS7_9allocatorIS9_EEEER11static_info(void);

/* Symbol: _ZN10PDENodeImp13ExtractThread10readyToRunEv */
/* Demangled: PDENodeImp::ExtractThread::readyToRun() */
int _ZN10PDENodeImp13ExtractThread10readyToRunEv(void);

/* Symbol: _ZZ20isTrace1On_SMVRQueuevE6sTrace */
/* Demangled: isTrace1On_SMVRQueue()::sTrace */
extern void* _ZZ20isTrace1On_SMVRQueuevE6sTrace;

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIfEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<float> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIfEE;

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker12createClientEPKcjNS2_10EVENT_TYPEE */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::createClient(char const*, unsigned int, NSCam::v3::NSP1Node::TimingChecker::EVENT_TYPE) */
int _ZN5NSCam2v38NSP1Node13TimingChecker12createClientEPKcjNS2_10EVENT_TYPEE(void);

/* Symbol: _ZTv0_n24_N2P25MWImgD0Ev */
/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
int _ZTv0_n24_N2P25MWImgD0Ev(void);

/* Symbol: _ZN2P27MWFrame12ReleaseTokenD1Ev */
/* Demangled: P2::MWFrame::ReleaseToken::~ReleaseToken() */
int _ZN2P27MWFrame12ReleaseTokenD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam20IResourceConcurrencyEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IResourceConcurrency>::operator=(NSCam::IResourceConcurrency*) */
int _ZN7android2spIN5NSCam20IResourceConcurrencyEEaSEPS2_(void);

/* Symbol: _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v315IMetaStreamInfoEEEljjPKc */
/* Demangled: P2::MWFrame::print(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IMetaStreamInfo> const&, long, unsigned int, unsigned int, char const*) */
int _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v315IMetaStreamInfoEEEljjPKc(void);

/* Symbol: _ZN5NSCam2v38NSP1Node18LongExposureStatus3getEv */
/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::get() */
int _ZN5NSCam2v38NSP1Node18LongExposureStatus3getEv(void);

/* Symbol: _ZTv0_n40_N2P214BasicProcessor8onUninitEv */
/* Demangled: virtual thunk to P2::BasicProcessor::onUninit() */
int _ZTv0_n40_N2P214BasicProcessor8onUninitEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN2P25MWImg6detachEv */
/* Demangled: P2::MWImg::detach() */
int _ZN2P25MWImg6detachEv(void);

/* Symbol: _ZTVN2P29P2InIDMapE */
/* Demangled: vtable for P2::P2InIDMap */
extern void* _ZTVN2P29P2InIDMapE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE7reserveEm */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1QueAct, std::__1::allocator<NSCam::v3::NSP1Node::P1QueAct> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE7reserveEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipWaitEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkSkipWait() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipWaitEv(void);

/* Symbol: _ZTv0_n64_N2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: virtual thunk to P2::DispatchProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZTv0_n64_N2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZThn40_N11JpegNodeImpD0Ev */
/* Demangled: non-virtual thunk to JpegNodeImp::~JpegNodeImp() */
int _ZThn40_N11JpegNodeImpD0Ev(void);

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp;

/* Symbol: _ZN2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE */
/* Demangled: P2::CaptureRequestCallback::onContinue(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZN2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvm */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIiE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n24_N2P25MWImgD1Ev */
/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
int _ZTv0_n24_N2P25MWImgD1Ev(void);

/* Symbol: _ZN2P27MWFrame12ReleaseTokenD2Ev */
/* Demangled: P2::MWFrame::ReleaseToken::~ReleaseToken() */
int _ZN2P27MWFrame12ReleaseTokenD2Ev(void);

/* Symbol: _ZN2P214MWFrameRequest14createRequestsERN5NSCam2v314IPipelineFrame12InfoIOMapSetE */
/* Demangled: P2::MWFrameRequest::createRequests(NSCam::v3::IPipelineFrame::InfoIOMapSet&) */
int _ZN2P214MWFrameRequest14createRequestsERN5NSCam2v314IPipelineFrame12InfoIOMapSetE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node17P1NotifyYuvR1Crop14p1TuningNotifyEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1NotifyYuvR1Crop::p1TuningNotify(void*, void*) */
int _ZN5NSCam2v38NSP1Node17P1NotifyYuvR1Crop14p1TuningNotifyEPvS3_(void);

/* Symbol: _ZN11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: JpegNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZN2P28IMG_INFOC2ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj */
/* Demangled: P2::IMG_INFO::IMG_INFO(P2::ID_IMG, P2::ID_IMG, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN2P28IMG_INFOC2ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::__emplace_unique_key_args<P2::StreamingProcessor::ERequestPath, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath&&>, std::__1::tuple<> >(P2::StreamingProcessor::ERequestPath const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE */
/* Demangled: NSCam::v3::BaseNode::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
int _ZN5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp13onReturnFrameERNS1_8P1QueActENS1_10FLUSH_TYPEEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onReturnFrame(NSCam::v3::NSP1Node::P1QueAct&, NSCam::v3::NSP1Node::FLUSH_TYPE, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp13onReturnFrameERNS1_8P1QueActENS1_10FLUSH_TYPEEi(void);

/* Symbol: _ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN2P220updateGralloc_VRInfoERKN5NSCam7Feature4ILogERKPK13native_handleNSt3__16vectorIPNS0_12IImageBufferENSA_9allocatorISD_EEEEjRKl */
/* Demangled: P2::updateGralloc_VRInfo(NSCam::Feature::ILog const&, native_handle const* const&, std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >, unsigned int, long const&) */
int _ZN2P220updateGralloc_VRInfoERKN5NSCam7Feature4ILogERKPK13native_handleNSt3__16vectorIPNS0_12IImageBufferENSA_9allocatorISD_EEEEjRKl(void);

/* Symbol: _ZTv0_n120_NK2P25MWImg8getUsageEv */
/* Demangled: virtual thunk to P2::MWImg::getUsage() const */
int _ZTv0_n120_NK2P25MWImg8getUsageEv(void);

/* Symbol: _ZN2P214MWFrameRequest16doRegisterPluginEv */
/* Demangled: P2::MWFrameRequest::doRegisterPlugin() */
int _ZN2P214MWFrameRequest16doRegisterPluginEv(void);

/* Symbol: _ZNK5NSCam2v38NSP1Node9P1NodeAct11getNodeNameEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getNodeName() const */
int _ZNK5NSCam2v38NSP1Node9P1NodeAct11getNodeNameEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node17P1NotifyYuvR2CropE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NotifyYuvR2Crop */
extern void* _ZTVN5NSCam2v38NSP1Node17P1NotifyYuvR2CropE;

/* Symbol: _ZThn40_N11JpegNodeImpD1Ev */
/* Demangled: non-virtual thunk to JpegNodeImp::~JpegNodeImp() */
int _ZThn40_N11JpegNodeImpD1Ev(void);

/* Symbol: _ZZ18isTrace1On_LMVInfovE6sTrace */
/* Demangled: isTrace1On_LMVInfo()::sTrace */
extern void* _ZZ18isTrace1On_LMVInfovE6sTrace;

/* Symbol: _ZNK2P26MWInfo10supportHFGEv */
/* Demangled: P2::MWInfo::supportHFG() const */
int _ZNK2P26MWInfo10supportHFGEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector10requireActERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::requireAct(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector10requireActERNS1_8P1QueActE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node7LogInfoE */
/* Demangled: vtable for NSCam::v3::NSP1Node::LogInfo */
extern void* _ZTVN5NSCam2v38NSP1Node7LogInfoE;

/* Symbol: _ZNK2P29P2Request8hasInputEv */
/* Demangled: P2::P2Request::hasInput() const */
int _ZNK2P29P2Request8hasInputEv(void);

/* Symbol: _ZNK2P218StreamingProcessor13makeSFPIOOutsERKN7android2spINS0_7PayloadEEERKNS0_12ERequestPathERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE */
/* Demangled: P2::StreamingProcessor::makeSFPIOOuts(android::sp<P2::StreamingProcessor::Payload> const&, P2::StreamingProcessor::ERequestPath const&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) const */
int _ZNK2P218StreamingProcessor13makeSFPIOOutsERKN7android2spINS0_7PayloadEEERKNS0_12ERequestPathERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN2P27MWFrame17beginBatchReleaseEv */
/* Demangled: P2::MWFrame::beginBatchRelease() */
int _ZN2P27MWFrame17beginBatchReleaseEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> const&>(unsigned int const&, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P26P2Util10extractOutERKN7android2spINS_9P2RequestEEEj */
/* Demangled: P2::P2Util::extractOut(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P26P2Util10extractOutERKN7android2spINS_9P2RequestEEEj(void);

/* Symbol: _ZTv0_n56_N2P216P2CaptureNodeImp15getULogModuleIdEv */
/* Demangled: virtual thunk to P2::P2CaptureNodeImp::getULogModuleId() */
int _ZTv0_n56_N2P216P2CaptureNodeImp15getULogModuleIdEv(void);

/* Symbol: _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9pop_frontEv */
/* Demangled: std::__1::deque<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::pop_front() */
int _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9pop_frontEv(void);

/* Symbol: _ZTVN2P26MWMetaE */
/* Demangled: vtable for P2::MWMeta */
extern void* _ZTVN2P26MWMetaE;

/* Symbol: _ZTv0_n72_NK2P26MWMeta15getIMetadataPtrEv */
/* Demangled: virtual thunk to P2::MWMeta::getIMetadataPtr() const */
int _ZTv0_n72_NK2P26MWMeta15getIMetadataPtrEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl13sessionUnLockEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::sessionUnLock() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl13sessionUnLockEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIiEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<int> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIiEE;

/* Symbol: _ZZ24isTrace1On_Streaming_FSCvE4sVal */
/* Demangled: isTrace1On_Streaming_FSC()::sVal */
extern void* _ZZ24isTrace1On_Streaming_FSCvE4sVal;

/* Symbol: _ZN2P214BasicProcessor12waitP2CBDoneEv */
/* Demangled: P2::BasicProcessor::waitP2CBDone() */
int _ZN2P214BasicProcessor12waitP2CBDoneEv(void);

/* Symbol: _ZN2P218StreamingProcessor13onThreadStartEv */
/* Demangled: P2::StreamingProcessor::onThreadStart() */
int _ZN2P218StreamingProcessor13onThreadStartEv(void);

/* Symbol: _ZNK2P212P2DumpPlugin9isNddModeEv */
/* Demangled: P2::P2DumpPlugin::isNddMode() const */
int _ZNK2P212P2DumpPlugin9isNddModeEv(void);

/* Symbol: _ZN2P26P2Util14xmakeDpPqParamERKN5NSCam7Feature6P2Util6P2PackERKNS0_9SimpleOutERP18MTKFDContainerInfo */
/* Demangled: P2::P2Util::xmakeDpPqParam(NSCam::Feature::P2Util::P2Pack const&, P2::P2Util::SimpleOut const&, MTKFDContainerInfo*&) */
int _ZN2P26P2Util14xmakeDpPqParamERKN5NSCam7Feature6P2Util6P2PackERKNS0_9SimpleOutERP18MTKFDContainerInfo(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_(void);

/* Symbol: _ZNK2P26MWInfo14findStreamInfoENS_7ID_METAE */
/* Demangled: P2::MWInfo::findStreamInfo(P2::ID_META) const */
int _ZNK2P26MWInfo14findStreamInfoENS_7ID_METAE(void);

/* Symbol: _ZN2P26P2Util8SimpleIO12earlyReleaseEji */
/* Demangled: P2::P2Util::SimpleIO::earlyRelease(unsigned int, int) */
int _ZN2P26P2Util8SimpleIO12earlyReleaseEji(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp8recoveryEh */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::recovery(unsigned char) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp8recoveryEh(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV9getOpenIdEv */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::getOpenId() */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV9getOpenIdEv(void);

/* Symbol: _ZN2P218StreamingProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: P2::StreamingProcessor::onInit(P2::P2InitParam const&) */
int _ZN2P218StreamingProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIjEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<unsigned int> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIjEE;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14abandonRequestEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::abandonRequest(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14abandonRequestEi(void);

/* Symbol: _ZN10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: PDENodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZZN2P225isTrace1On_BasicProcessorEvE4sVal */
/* Demangled: P2::isTrace1On_BasicProcessor()::sVal */
extern void* _ZZN2P225isTrace1On_BasicProcessorEvE4sVal;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::readyToRun() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9push_backERKS9_ */
/* Demangled: std::__1::deque<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::push_back(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
int _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9push_backERKS9_(void);

/* Symbol: _ZN2P29SMVRQueueC1Ev */
/* Demangled: P2::SMVRQueue::SMVRQueue() */
int _ZN2P29SMVRQueueC1Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor10isNeedRSSOERNS_6P2Util8SimpleInE */
/* Demangled: P2::StreamingProcessor::isNeedRSSO(P2::P2Util::SimpleIn&) const */
int _ZNK2P218StreamingProcessor10isNeedRSSOERNS_6P2Util8SimpleInE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38BaseNode21onNextCaptureCallBackERKN7android2spINS0_14IPipelineFrameEEEji */
/* Demangled: NSCam::v3::BaseNode::onNextCaptureCallBack(android::sp<NSCam::v3::IPipelineFrame> const&, unsigned int, int) */
int _ZN5NSCam2v38BaseNode21onNextCaptureCallBackERKN7android2spINS0_14IPipelineFrameEEEji(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14getLaunchStateEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getLaunchState() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14getLaunchStateEv(void);

/* Symbol: _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE */
/* Demangled: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread */
extern void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE;

/* Symbol: _ZGVZ24isTrace1On_StreamingNodevE4sVal */
/* Demangled: guard variable for isTrace1On_StreamingNode()::sVal */
extern void* _ZGVZ24isTrace1On_StreamingNodevE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV14adjustCropInfoEPNS_9IMetadataES4_RNS_5MRectENS_5MSizeEii */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::adjustCropInfo(NSCam::IMetadata*, NSCam::IMetadata*, NSCam::MRect&, NSCam::MSize, int, int) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV14adjustCropInfoEPNS_9IMetadataES4_RNS_5MRectENS_5MSizeEii(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerificationE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeImp::IndependentVerification */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerificationE;

/* Symbol: _ZTC10PDENodeImp40_N5NSCam2v37PDENodeE */
/* Demangled: construction vtable for NSCam::v3::PDENode-in-PDENodeImp */
extern void* _ZTC10PDENodeImp40_N5NSCam2v37PDENodeE;

/* Symbol: _ZN2P214BasicProcessor11processVencERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::BasicProcessor::processVenc(android::sp<P2::P2Request> const&) */
int _ZN2P214BasicProcessor11processVencERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZN2P29P2RequestC2ERKN7android2spIS0_EEj */
/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P29P2RequestC2ERKN7android2spIS0_EEj(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO10dropRecordEv */
/* Demangled: P2::P2Util::SimpleIO::dropRecord() const */
int _ZNK2P26P2Util8SimpleIO10dropRecordEv(void);

/* Symbol: _ZZ17isTrace1On_P2UtilvE4sVal */
/* Demangled: isTrace1On_P2Util()::sVal */
extern void* _ZZ17isTrace1On_P2UtilvE4sVal;

/* Symbol: _ZN7Request21getOutJpegImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_I12encode_frameEERNS1_INS2_16IImageBufferHeapEEE */
/* Demangled: Request::getOutJpegImageBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&, android::sp<encode_frame>&, android::sp<NSCam::IImageBufferHeap>&) */
int _ZN7Request21getOutJpegImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_I12encode_frameEERNS1_INS2_16IImageBufferHeapEEE(void);

/* Symbol: _ZN2P26P2Util13releaseTuningERN6NS3Av311TuningParamE */
/* Demangled: P2::P2Util::releaseTuning(NS3Av3::TuningParam&) */
int _ZN2P26P2Util13releaseTuningERN6NS3Av311TuningParamE(void);

/* Symbol: _ZN2P29P2CropperC1ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE */
/* Demangled: P2::P2Cropper::P2Cropper(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2SensorInfo const*, NSCam::Feature::P2Util::P2SensorData const*, NSCam::Feature::P2Util::LMVInfo const&) */
int _ZN2P29P2CropperC1ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE(void);

/* Symbol: _ZN2P26MWInfoC1ERKN5NSCam2v315P2StreamingNode12ConfigParamsE */
/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2StreamingNode::ConfigParams const&) */
int _ZN2P26MWInfoC1ERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void);

/* Symbol: _ZTv0_n24_N2P214P2FrameRequestD0Ev */
/* Demangled: virtual thunk to P2::P2FrameRequest::~P2FrameRequest() */
int _ZTv0_n24_N2P214P2FrameRequestD0Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED0Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::~Processor() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlMetaENS0_21IPipelineNodeCallback9eCtrlTypeERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataES7_S9_Ri */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::notifyCtrlMeta(NSCam::v3::IPipelineNodeCallback::eCtrlType, NSCam::v3::NSP1Node::P1QueAct&, NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*, NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*, int&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlMetaENS0_21IPipelineNodeCallback9eCtrlTypeERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataES7_S9_Ri(void);

/* Symbol: _ZTv0_n24_N10PDENodeImpD0Ev */
/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
int _ZTv0_n24_N10PDENodeImpD0Ev(void);

/* Symbol: _ZN2P214BasicProcessor10freeCookieEPNS0_8P2CookieEi */
/* Demangled: P2::BasicProcessor::freeCookie(P2::BasicProcessor::P2Cookie*, int) */
int _ZN2P214BasicProcessor10freeCookieEPNS0_8P2CookieEi(void);

/* Symbol: _ZN2P214BasicProcessor12processBurstERKN7android2spINS0_9P2PayloadEEE */
/* Demangled: P2::BasicProcessor::processBurst(android::sp<P2::BasicProcessor::P2Payload> const&) */
int _ZN2P214BasicProcessor12processBurstERKN7android2spINS0_9P2PayloadEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void);

/* Symbol: _ZTTN2P29P2CropperE */
/* Demangled: VTT for P2::P2Cropper */
extern void* _ZTTN2P29P2CropperE;

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo7extractEv */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::extract() */
int _ZN5NSCam2v38NSP1Node7LogInfo7extractEv(void);

/* Symbol: _ZN2P28IMG_INFOC1ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj */
/* Demangled: P2::IMG_INFO::IMG_INFO(P2::ID_IMG, P2::ID_IMG, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN2P28IMG_INFOC1ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void);

/* Symbol: _ZN2P29SMVRQueueC2Ev */
/* Demangled: P2::SMVRQueue::SMVRQueue() */
int _ZN2P29SMVRQueueC2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl5resetEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::reset() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl5resetEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp25getProcessingFrame_ByAddrEPNS_12IImageBufferEiRNS1_8P1QueJobE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getProcessingFrame_ByAddr(NSCam::IImageBuffer*, int, NSCam::v3::NSP1Node::P1QueJob&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp25getProcessingFrame_ByAddrEPNS_12IImageBufferEiRNS1_8P1QueJobE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN2P217DispatchProcessor13onNotifyFlushEv */
/* Demangled: P2::DispatchProcessor::onNotifyFlush() */
int _ZN2P217DispatchProcessor13onNotifyFlushEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14setLaunchStateEh */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setLaunchState(unsigned char) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14setLaunchStateEh(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct17streamImageUninitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::streamImageUninit(NSCam::v3::NSP1Node::STREAM_IMG, NSCam::v3::NSP1Node::IMG_BUF_SRC) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct17streamImageUninitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE(void);

/* Symbol: _ZGVZN2P220isTrace1On_P2RequestEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_P2Request()::sTrace */
extern void* _ZGVZN2P220isTrace1On_P2RequestEvE6sTrace;

/* Symbol: _ZNK2P218StreamingProcessor11prepare3DNRERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepare3DNR(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor11prepare3DNRERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO7getLcsoEv */
/* Demangled: P2::P2Util::SimpleIO::getLcso() const */
int _ZNK2P26P2Util8SimpleIO7getLcsoEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkNotePassEi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkNotePass(int) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkNotePassEi(void);

/* Symbol: _ZTv0_n24_N2P214P2FrameRequestD1Ev */
/* Demangled: virtual thunk to P2::P2FrameRequest::~P2FrameRequest() */
int _ZTv0_n24_N2P214P2FrameRequestD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct15checkImgBufAddrEPNS_12IImageBufferE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::checkImgBufAddr(NSCam::IImageBuffer*) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct15checkImgBufAddrEPNS_12IImageBufferE(void);

/* Symbol: _ZN7Request17acquireMetaBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_17IMetaStreamBufferEEEi */
/* Demangled: Request::acquireMetaBuffer(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IMetaStreamBuffer>&, int) */
int _ZN7Request17acquireMetaBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_17IMetaStreamBufferEEEi(void);

/* Symbol: _ZNK7Request15isInImageStreamEl */
/* Demangled: Request::isInImageStream(long) const */
int _ZNK7Request15isInImageStreamEl(void);

/* Symbol: _ZTv0_n120_N12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to RAW16NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n24_N10PDENodeImpD1Ev */
/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
int _ZTv0_n24_N10PDENodeImpD1Ev(void);

/* Symbol: _ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKNS2_INS_5P2ImgEEE */
/* Demangled: P2::MWFrameRequest::fillP2Img(android::sp<P2::P2Request> const&, android::sp<P2::P2Img> const&) */
int _ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKNS2_INS_5P2ImgEEE(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack18updateBufferResultEi */
/* Demangled: P2::StreamingProcessor::P2RequestPack::updateBufferResult(int) */
int _ZN2P218StreamingProcessor13P2RequestPack18updateBufferResultEi(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIlEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<long> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIlEE;

/* Symbol: _ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD0Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
int _ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD0Ev(void);

/* Symbol: _ZN2P29P2CropperC2ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE */
/* Demangled: P2::P2Cropper::P2Cropper(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2SensorInfo const*, NSCam::Feature::P2Util::P2SensorData const*, NSCam::Feature::P2Util::LMVInfo const&) */
int _ZN2P29P2CropperC2ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE(void);

/* Symbol: _ZNK2P29P2Request6getImgENS_6ID_IMGEj */
/* Demangled: P2::P2Request::getImg(P2::ID_IMG, unsigned int) const */
int _ZNK2P29P2Request6getImgENS_6ID_IMGEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify16getNotifyQualityEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyQuality() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify16getNotifyQualityEv(void);

/* Symbol: _ZTC10PDENodeImp0_N5NSCam2v313IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-PDENodeImp */
extern void* _ZTC10PDENodeImp0_N5NSCam2v313IPipelineNodeE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread4stopEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::stop() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread4stopEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED2Ev */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::~Processor() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED2Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor10prepareFSCERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepareFSC(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor10prepareFSCERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNK2P218StreamingProcessor11makePayLoadERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERKNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE */
/* Demangled: P2::StreamingProcessor::makePayLoad(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&, std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > > const&) const */
int _ZNK2P218StreamingProcessor11makePayLoadERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERKNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE(void);

/* Symbol: _ZNK2P26MWInfo9supportPQEv */
/* Demangled: P2::MWInfo::supportPQ() const */
int _ZNK2P26MWInfo9supportPQEv(void);

/* Symbol: _ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD1Ev */
/* Demangled: virtual thunk to P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
int _ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD1Ev(void);

/* Symbol: _ZGVZ25isTrace1On_Streaming_3DNRvE4sVal */
/* Demangled: guard variable for isTrace1On_Streaming_3DNR()::sVal */
extern void* _ZGVZ25isTrace1On_Streaming_3DNRvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR2CropEPvS3_ */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyYuvR2Crop(void*, void*) */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR2CropEPvS3_(void);

/* Symbol: _ZTV10PDENodeImp */
/* Demangled: vtable for PDENodeImp */
extern void* _ZTV10PDENodeImp;

/* Symbol: _ZN2P214BasicProcessor8P2Cookie7getILogEv */
/* Demangled: P2::BasicProcessor::P2Cookie::getILog() */
int _ZN2P214BasicProcessor8P2Cookie7getILogEv(void);

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEE6uninitEv */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::uninit() */
int _ZN2P29ProcessorIjjNS_8MDPParamEE6uninitEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl6configEiiiihPNS_8NSIoPipe11NSCamIOPipe11INormalPipeEPN6NS3Av36IHal3AEi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::config(int, int, int, int, unsigned char, NSCam::NSIoPipe::NSCamIOPipe::INormalPipe*, NS3Av3::IHal3A*, int) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl6configEiiiihPNS_8NSIoPipe11NSCamIOPipe11INormalPipeEPN6NS3Av36IHal3AEi(void);

/* Symbol: _ZTv0_n160_NK2P25MWImg13getPhysicalIDEv */
/* Demangled: virtual thunk to P2::MWImg::getPhysicalID() const */
int _ZTv0_n160_NK2P25MWImg13getPhysicalIDEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningGetEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::runningGet() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningGetEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollector9remainderEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::remainder() */
int _ZN5NSCam2v38NSP1Node15P1TaskCollector9remainderEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoUpdateEii */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::lastFrameRequestInfoUpdate(int, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoUpdateEii(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo5writeENS2_10CheckPointEllll */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::write(NSCam::v3::NSP1Node::LogInfo::CheckPoint, long, long, long, long) */
int _ZN5NSCam2v38NSP1Node7LogInfo5writeENS2_10CheckPointEllll(void);

/* Symbol: _ZNK2P29P2Request10getMetaSetEv */
/* Demangled: P2::P2Request::getMetaSet() const */
int _ZNK2P29P2Request10getMetaSetEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadC1EPSC_i */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::ProcessThread(P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >*, int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadC1EPSC_i(void);

/* Symbol: _ZGVZ25isTrace1On_ScanlinePluginvE4sVal */
/* Demangled: guard variable for isTrace1On_ScanlinePlugin()::sVal */
extern void* _ZGVZ25isTrace1On_ScanlinePluginvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlSettingERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlSetting(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlSettingERNS1_8P1QueActE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteE;

/* Symbol: _ZN12RAW16NodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: RAW16NodeImp::onProcessFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN12RAW16NodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n80_N2P214BasicProcessor13onNotifyFlushEv */
/* Demangled: virtual thunk to P2::BasicProcessor::onNotifyFlush() */
int _ZTv0_n80_N2P214BasicProcessor13onNotifyFlushEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK2P27MWFrame18createNormalImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE */
/* Demangled: P2::MWFrame::createNormalImages(android::sp<NSCam::IImageBufferHeap> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >&) const */
int _ZNK2P27MWFrame18createNormalImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE(void);

/* Symbol: _ZTv0_n72_N2P218P2StreamingNodeImp6uninitEv */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::uninit() */
int _ZTv0_n72_N2P218P2StreamingNodeImp6uninitEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9getEnableEv */
/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::getEnable() */
int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9getEnableEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<P2::P2Img>, std::__1::allocator<android::sp<P2::P2Img> > >::__push_back_slow_path<android::sp<P2::P2Img> const&>(android::sp<P2::P2Img> const&) */
int _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN2P212P2DumpPluginC1Ev */
/* Demangled: P2::P2DumpPlugin::P2DumpPlugin() */
int _ZN2P212P2DumpPluginC1Ev(void);

/* Symbol: _ZTCN2P218P2StreamingNodeImpE0_N5NSCam2v315P2StreamingNodeE */
/* Demangled: construction vtable for NSCam::v3::P2StreamingNode-in-P2::P2StreamingNodeImp */
extern void* _ZTCN2P218P2StreamingNodeImpE0_N5NSCam2v315P2StreamingNodeE;

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeAct10SubSettingE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeAct::SubSetting */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct10SubSettingE;

/* Symbol: _ZNK2P29P2Request9hasOutputEv */
/* Demangled: P2::P2Request::hasOutput() const */
int _ZNK2P29P2Request9hasOutputEv(void);

/* Symbol: _ZTv0_n56_N2P212MDPProcessor12onThreadStopEv */
/* Demangled: virtual thunk to P2::MDPProcessor::onThreadStop() */
int _ZTv0_n56_N2P212MDPProcessor12onThreadStopEv(void);

/* Symbol: _ZNK2P25MWImg10getImgTypeEv */
/* Demangled: P2::MWImg::getImgType() const */
int _ZNK2P25MWImg10getImgTypeEv(void);

/* Symbol: _ZTTN2P214MWFrameRequestE */
/* Demangled: VTT for P2::MWFrameRequest */
extern void* _ZTTN2P214MWFrameRequestE;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEC2ERKNS3_12basic_stringIcNS3_11char_traitsIcEENS9_IcEEEE */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEC2ERKNS3_12basic_stringIcNS3_11char_traitsIcEENS9_IcEEEE(void);

/* Symbol: _ZTv0_n88_N12RAW16NodeImp5flushEv */
/* Demangled: virtual thunk to RAW16NodeImp::flush() */
int _ZTv0_n88_N12RAW16NodeImp5flushEv(void);

/* Symbol: _ZTVN10PDENodeImp13ExtractThreadE */
/* Demangled: vtable for PDENodeImp::ExtractThread */
extern void* _ZTVN10PDENodeImp13ExtractThreadE;

/* Symbol: _ZTVN2P216CaptureProcessorE */
/* Demangled: vtable for P2::CaptureProcessor */
extern void* _ZTVN2P216CaptureProcessorE;

/* Symbol: _ZTv0_n64_N2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: virtual thunk to P2::CaptureProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZTv0_n64_N2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZZN2P217isTrace1On_MWInfoEvE6sTrace */
/* Demangled: P2::isTrace1On_MWInfo()::sTrace */
extern void* _ZZN2P217isTrace1On_MWInfoEvE6sTrace;

/* Symbol: _ZN2P27MWFrame12ReleaseTokenC1ERKN5NSCam7Feature4ILogERKN7android7String8ERKl */
/* Demangled: P2::MWFrame::ReleaseToken::ReleaseToken(NSCam::Feature::ILog const&, android::String8 const&, long const&) */
int _ZN2P27MWFrame12ReleaseTokenC1ERKN5NSCam7Feature4ILogERKN7android7String8ERKl(void);

/* Symbol: _ZZ23isTrace1On_DrawIDPluginvE4sVal */
/* Demangled: isTrace1On_DrawIDPlugin()::sVal */
extern void* _ZZ23isTrace1On_DrawIDPluginvE4sVal;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK2P25MWImg6getDirEv */
/* Demangled: P2::MWImg::getDir() const */
int _ZNK2P25MWImg6getDirEv(void);

/* Symbol: _ZTv0_n72_N2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE */
/* Demangled: virtual thunk to P2::CaptureProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
int _ZTv0_n72_N2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void);

/* Symbol: _ZN2P212P2DumpPluginC2Ev */
/* Demangled: P2::P2DumpPlugin::P2DumpPlugin() */
int _ZN2P212P2DumpPluginC2Ev(void);

/* Symbol: _ZN2P214MWFrameRequest17beginBatchReleaseEv */
/* Demangled: P2::MWFrameRequest::beginBatchRelease() */
int _ZN2P214MWFrameRequest17beginBatchReleaseEv(void);

/* Symbol: _ZTv0_n32_NK2P218P2StreamingNodeImp9getOpenIdEv */
/* Demangled: virtual thunk to P2::P2StreamingNodeImp::getOpenId() const */
int _ZTv0_n32_NK2P218P2StreamingNodeImp9getOpenIdEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13setNeedThreadEi */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::setNeedThread(int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13setNeedThreadEi(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSEPS6_ */
/* Demangled: android::sp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >::operator=(NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer>*) */
int _ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSEPS6_(void);

/* Symbol: _ZN2P214P2FrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_9P2InIDMapEEE */
/* Demangled: P2::P2FrameRequest::P2FrameRequest(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::P2InIDMap> const&) */
int _ZN2P214P2FrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_9P2InIDMapEEE(void);

/* Symbol: _ZTv0_n24_N2P214P2DrawIDPluginD0Ev */
/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZTv0_n24_N2P214P2DrawIDPluginD0Ev(void);

/* Symbol: _ZZ24isTrace1On_Streaming_FSCvE6sTrace */
/* Demangled: isTrace1On_Streaming_FSC()::sTrace */
extern void* _ZZ24isTrace1On_Streaming_FSCvE6sTrace;

/* Symbol: _ZN2P214BasicProcessor9P2PayloadC1ERKN7android2spINS_9P2RequestEEEj */
/* Demangled: P2::BasicProcessor::P2Payload::P2Payload(android::sp<P2::P2Request> const&, unsigned int) */
int _ZN2P214BasicProcessor9P2PayloadC1ERKN7android2spINS_9P2RequestEEEj(void);

/* Symbol: _ZNK2P29P2Cropper14calcViewAngleFERKN5NSCam7Feature4ILogERKNS1_5MSizeEjffj */
/* Demangled: P2::P2Cropper::calcViewAngleF(NSCam::Feature::ILog const&, NSCam::MSize const&, unsigned int, float, float, unsigned int) const */
int _ZNK2P29P2Cropper14calcViewAngleFERKN5NSCam7Feature4ILogERKNS1_5MSizeEjffj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE7reserveEm */
/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote, std::__1::allocator<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE7reserveEm(void);

/* Symbol: _ZTv0_n96_N12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to RAW16NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZNK2P26P2Util8SimpleIO8hasInputEv */
/* Demangled: P2::P2Util::SimpleIO::hasInput() const */
int _ZNK2P26P2Util8SimpleIO8hasInputEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1ConnectLMV6getBufERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::getBuf(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node12P1ConnectLMV6getBufERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> > >::__push_back_slow_path<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> const&>(android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZN2P27MWFrame17acquireMetaStreamERKl */
/* Demangled: P2::MWFrame::acquireMetaStream(long const&) */
int _ZN2P27MWFrame17acquireMetaStreamERKl(void);

/* Symbol: _ZN2P27MWFrame17releaseMetaStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE */
/* Demangled: P2::MWFrame::releaseMetaStream(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IMetaStreamBuffer> const&, P2::IO_DIR, P2::IO_STATUS) */
int _ZN2P27MWFrame17releaseMetaStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE(void);

/* Symbol: _ZNK2P26MWInfo11isCaptureInEl */
/* Demangled: P2::MWInfo::isCaptureIn(long) const */
int _ZNK2P26MWInfo11isCaptureInEl(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZN11JpegNodeImp19encodeThumbnailJpegERN7android2spI12encode_frameEE */
/* Demangled: JpegNodeImp::encodeThumbnailJpeg(android::sp<encode_frame>&) */
int _ZN11JpegNodeImp19encodeThumbnailJpegERN7android2spI12encode_frameEE(void);

/* Symbol: _ZN2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE */
/* Demangled: P2::BasicProcessor::onConfig(P2::P2ConfigParam const&) */
int _ZN2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE(void);

/* Symbol: _ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame14ImageInfoIOMapERKNSt3__13mapIlNS2_INS_5P2ImgEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE */
/* Demangled: P2::MWFrameRequest::fillP2Img(android::sp<P2::P2Request> const&, NSCam::v3::IPipelineFrame::ImageInfoIOMap const&, std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > > const&) */
int _ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame14ImageInfoIOMapERKNSt3__13mapIlNS2_INS_5P2ImgEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE(void);

/* Symbol: _ZNK2P26P2Util9SimpleOut9isDisplayEv */
/* Demangled: P2::P2Util::SimpleOut::isDisplay() const */
int _ZNK2P26P2Util9SimpleOut9isDisplayEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZTv0_n24_N2P214P2DrawIDPluginD1Ev */
/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZTv0_n24_N2P214P2DrawIDPluginD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm(void);

/* Symbol: _ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node7LogInfo7analyzeEi */
/* Demangled: NSCam::v3::NSP1Node::LogInfo::analyze(int) */
int _ZN5NSCam2v38NSP1Node7LogInfo7analyzeEi(void);

/* Symbol: _ZN2P29P2Request23releaseResourceWithLockEj */
/* Demangled: P2::P2Request::releaseResourceWithLock(unsigned int) */
int _ZN2P29P2Request23releaseResourceWithLockEj(void);

/* Symbol: _ZTTN5NSCam2v38NSP1Node15StuffBufferPoolE */
/* Demangled: VTT for NSCam::v3::NSP1Node::StuffBufferPool */
extern void* _ZTTN5NSCam2v38NSP1Node15StuffBufferPoolE;

/* Symbol: _ZN2P29P2CropperC1Ev */
/* Demangled: P2::P2Cropper::P2Cropper() */
int _ZN2P29P2CropperC1Ev(void);

/* Symbol: _ZZN2P220isTrace1On_P2RequestEvE4sVal */
/* Demangled: P2::isTrace1On_P2Request()::sVal */
extern void* _ZZN2P220isTrace1On_P2RequestEvE4sVal;

/* Symbol: _ZN5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::DummyNode::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17attemptCtrlResizeERNS1_8P1QueActERi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlResize(NSCam::v3::NSP1Node::P1QueAct&, int&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17attemptCtrlResizeERNS1_8P1QueActERi(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*>&>::push_back(P2::SMVRQueue::SMVRData*&&) */
int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZTv0_n32_N2P214BasicProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: virtual thunk to P2::BasicProcessor::onInit(P2::P2InitParam const&) */
int _ZTv0_n32_N2P214BasicProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6uninitEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::uninit() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6uninitEv(void);

/* Symbol: _ZTv0_n112_N5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
int _ZTv0_n112_N5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvR11JpegNodeImpR7RequestENS_17reference_wrapperIS7_EENSD_IS9_EEEEEEEPvSH_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (*)(JpegNodeImp&, Request&), std::__1::reference_wrapper<JpegNodeImp>, std::__1::reference_wrapper<Request> > >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvR11JpegNodeImpR7RequestENS_17reference_wrapperIS7_EENSD_IS9_EEEEEEEPvSH_(void);

/* Symbol: _ZZN2P227isTrace1On_P2MetadataHandleEvE4sVal */
/* Demangled: P2::isTrace1On_P2MetadataHandle()::sVal */
extern void* _ZZN2P227isTrace1On_P2MetadataHandleEvE4sVal;

/* Symbol: _ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >::__push_back_slow_path<android::sp<P2::P2Request> const&>(android::sp<P2::P2Request> const&) */
int _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1QueJob const&>(NSCam::v3::NSP1Node::P1QueJob const&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN11JpegNodeImp19finalizeEncodeFrameERN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: JpegNodeImp::finalizeEncodeFrame(android::sp<NSCam::v3::IPipelineFrame>&) */
int _ZN11JpegNodeImp19finalizeEncodeFrameERN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvm */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n104_N2P216CaptureProcessor11onGetStatusEv */
/* Demangled: virtual thunk to P2::CaptureProcessor::onGetStatus() */
int _ZTv0_n104_N2P216CaptureProcessor11onGetStatusEv(void);

/* Symbol: _ZN2P29P2CropperC2Ev */
/* Demangled: P2::P2Cropper::P2Cropper() */
int _ZN2P29P2CropperC2Ev(void);

/* Symbol: _ZNK2P29P2Cropper9getP1CropEv */
/* Demangled: P2::P2Cropper::getP1Crop() const */
int _ZNK2P29P2Cropper9getP1CropEv(void);

/* Symbol: _ZNK2P212P2DumpPlugin11isFrameModeEv */
/* Demangled: P2::P2DumpPlugin::isFrameMode() const */
int _ZNK2P212P2DumpPlugin11isFrameModeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm(void);

/* Symbol: _ZN2P29META_INFOC1ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj */
/* Demangled: P2::META_INFO::META_INFO(P2::ID_META, P2::ID_META, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN2P29META_INFOC1ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void);

/* Symbol: _ZTv0_n40_N2P218StreamingProcessor8onUninitEv */
/* Demangled: virtual thunk to P2::StreamingProcessor::onUninit() */
int _ZTv0_n40_N2P218StreamingProcessor8onUninitEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr7triggerEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::trigger() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr7triggerEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::destroyBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN2P214BasicProcessor9processP2INSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEiT_ */
/* Demangled: int P2::BasicProcessor::processP2<std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > >(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >) */
int _ZN2P214BasicProcessor9processP2INSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEiT_(void);

/* Symbol: _ZN2P213P2ConfigParamC2ERKN5NSCam7Feature6P2Util6P2InfoE */
/* Demangled: P2::P2ConfigParam::P2ConfigParam(NSCam::Feature::P2Util::P2Info const&) */
int _ZN2P213P2ConfigParamC2ERKN5NSCam7Feature6P2Util6P2InfoE(void);

/* Symbol: _ZTv0_n48_N2P27MWFrame15endBatchReleaseEv */
/* Demangled: virtual thunk to P2::MWFrame::endBatchRelease() */
int _ZTv0_n48_N2P27MWFrame15endBatchReleaseEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamInfo> const&>(android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZGVZN2P225isTrace1On_BasicProcessorEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_BasicProcessor()::sVal */
extern void* _ZGVZN2P225isTrace1On_BasicProcessorEvE4sVal;

/* Symbol: _ZGVZ22isTrace1On_CaptureNodevE6sTrace */
/* Demangled: guard variable for isTrace1On_CaptureNode()::sTrace */
extern void* _ZGVZ22isTrace1On_CaptureNodevE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node18ConcurrenceControl11getAidUsageEv */
/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::getAidUsage() */
int _ZN5NSCam2v38NSP1Node18ConcurrenceControl11getAidUsageEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node15P1TaskCollectorC2EN7android2spINS1_10P1TaskCtrlEEE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::P1TaskCollector(android::sp<NSCam::v3::NSP1Node::P1TaskCtrl>) */
int _ZN5NSCam2v38NSP1Node15P1TaskCollectorC2EN7android2spINS1_10P1TaskCtrlEEE(void);

/* Symbol: _ZN2P214BasicProcessor19prepareEnqueQParamsENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE */
/* Demangled: P2::BasicProcessor::prepareEnqueQParams(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >) */
int _ZN2P214BasicProcessor19prepareEnqueQParamsENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr10readyToRunEv */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::readyToRun() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10readyToRunEv(void);

/* Symbol: _ZN2P216CaptureProcessor8onUninitEv */
/* Demangled: P2::CaptureProcessor::onUninit() */
int _ZN2P216CaptureProcessor8onUninitEv(void);

/* Symbol: _ZN2P214P2DrawIDPluginD0Ev */
/* Demangled: P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZN2P214P2DrawIDPluginD0Ev(void);

/* Symbol: _ZZ20isTrace1On_VRGrallocvE4sVal */
/* Demangled: isTrace1On_VRGralloc()::sVal */
extern void* _ZZ20isTrace1On_VRGrallocvE4sVal;

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgrD0Ev */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgrD0Ev(void);

/* Symbol: _ZN7Request22getOutThumbImageBufferElRKN7android2spI12encode_frameEERKNS1_IN5NSCam16IImageBufferHeapEEERNS1_INS6_12IImageBufferEEE */
/* Demangled: Request::getOutThumbImageBuffer(long, android::sp<encode_frame> const&, android::sp<NSCam::IImageBufferHeap> const&, android::sp<NSCam::IImageBuffer>&) */
int _ZN7Request22getOutThumbImageBufferElRKN7android2spI12encode_frameEERKNS1_IN5NSCam16IImageBufferHeapEEERNS1_INS6_12IImageBufferEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n96_N10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to PDENodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN2P25P2Img8Fmt2NameEi */
/* Demangled: P2::P2Img::Fmt2Name(int) */
int _ZN2P25P2Img8Fmt2NameEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16TimingCheckerMgr7onCheckEv */
/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::onCheck() */
int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr7onCheckEv(void);

/* Symbol: _ZN2P29transformERKN5NSCam2v315simpleTransformERKNS0_8NSIoPipe9MCropRectE */
/* Demangled: P2::transform(NSCam::v3::simpleTransform const&, NSCam::NSIoPipe::MCropRect const&) */
int _ZN2P29transformERKN5NSCam2v315simpleTransformERKNS0_8NSIoPipe9MCropRectE(void);

/* Symbol: _ZTTN2P214BasicProcessorE */
/* Demangled: VTT for P2::BasicProcessor */
extern void* _ZTTN2P214BasicProcessorE;

/* Symbol: _ZTv0_n72_N2P25MWImg12updateResultEi */
/* Demangled: virtual thunk to P2::MWImg::updateResult(int) */
int _ZTv0_n72_N2P25MWImg12updateResultEi(void);

/* Symbol: _ZZ23isTrace1On_DrawIDPluginvE6sTrace */
/* Demangled: isTrace1On_DrawIDPlugin()::sTrace */
extern void* _ZZ23isTrace1On_DrawIDPluginvE6sTrace;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp12releaseFrameERNS1_10P1FrameActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::releaseFrame(NSCam::v3::NSP1Node::P1FrameAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp12releaseFrameERNS1_10P1FrameActE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp17doNotifyDropframeEjPv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::doNotifyDropframe(unsigned int, void*) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp17doNotifyDropframeEjPv(void);

/* Symbol: _ZN5NSCam2v38JpegNode14createInstanceEv */
/* Demangled: NSCam::v3::JpegNode::createInstance() */
int _ZN5NSCam2v38JpegNode14createInstanceEv(void);

/* Symbol: _ZNK2P214BasicProcessor7MyTimer5printEv */
/* Demangled: P2::BasicProcessor::MyTimer::print() const */
int _ZNK2P214BasicProcessor7MyTimer5printEv(void);

/* Symbol: _ZN2P214P2DrawIDPluginD1Ev */
/* Demangled: P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZN2P214P2DrawIDPluginD1Ev(void);

/* Symbol: _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp11requestExitEv */
/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::requestExit() */
int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp11requestExitEv(void);

/* Symbol: _ZTV12RAW16NodeImp */
/* Demangled: vtable for RAW16NodeImp */
extern void* _ZTV12RAW16NodeImp;

/* Symbol: _ZNK2P212P2DumpPlugin11isDebugModeEv */
/* Demangled: P2::P2DumpPlugin::isDebugMode() const */
int _ZNK2P212P2DumpPlugin11isDebugModeEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5enqueERKS6_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::enque(android::sp<P2::P2FrameRequest> const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5enqueERKS6_(void);

/* Symbol: _ZN2P218toIImageBufferPtrsERKN7android2spINS_5P2ImgEEE */
/* Demangled: P2::toIImageBufferPtrs(android::sp<P2::P2Img> const&) */
int _ZN2P218toIImageBufferPtrsERKN7android2spINS_5P2ImgEEE(void);

/* Symbol: _ZNK2P25P2Img10getMagic3AEv */
/* Demangled: P2::P2Img::getMagic3A() const */
int _ZNK2P25P2Img10getMagic3AEv(void);

/* Symbol: _ZN2P213P2FrameHolder15endBatchReleaseEv */
/* Demangled: P2::P2FrameHolder::endBatchRelease() */
int _ZN2P213P2FrameHolder15endBatchReleaseEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgrD1Ev */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgrD1Ev(void);

/* Symbol: _ZTTN5NSCam2v38NSP1Node16P1RegisterNotifyE */
/* Demangled: VTT for NSCam::v3::NSP1Node::P1RegisterNotify */
extern void* _ZTTN5NSCam2v38NSP1Node16P1RegisterNotifyE;

/* Symbol: _ZZN2P227isTrace1On_CaptureProcessorEvE4sVal */
/* Demangled: P2::isTrace1On_CaptureProcessor()::sVal */
extern void* _ZZN2P227isTrace1On_CaptureProcessorEvE4sVal;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPackC2ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE */
/* Demangled: P2::StreamingProcessor::P2RequestPack::P2RequestPack(NSCam::Feature::ILog const&, android::sp<P2::P2Request> const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
int _ZN2P218StreamingProcessor13P2RequestPackC2ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_3FSC23FSC_WARPING_DATA_STRUCTEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::FSC::FSC_WARPING_DATA_STRUCT> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_3FSC23FSC_WARPING_DATA_STRUCTEEE;

/* Symbol: _ZN2P218StreamingProcessorD0Ev */
/* Demangled: P2::StreamingProcessor::~StreamingProcessor() */
int _ZN2P218StreamingProcessorD0Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5flushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::flush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5flushEv(void);

/* Symbol: _ZTCN2P218P2StreamingNodeImpE2232_N5NSCam2v313IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-P2::P2StreamingNodeImp */
extern void* _ZTCN2P218P2StreamingNodeImpE2232_N5NSCam2v313IPipelineNodeE;

/* Symbol: _ZN2P214BasicProcessor12updateResultEN7android2spINS0_9P2PayloadEEEi */
/* Demangled: P2::BasicProcessor::updateResult(android::sp<P2::BasicProcessor::P2Payload>, int) */
int _ZN2P214BasicProcessor12updateResultEN7android2spINS0_9P2PayloadEEEi(void);

/* Symbol: _ZN2P29getVectorIlEEvRKN5NSCam9IMetadataEjRNSt3__16vectorIT_NS5_9allocatorIS7_EEEE */
/* Demangled: void P2::getVector<long>(NSCam::IMetadata const&, unsigned int, std::__1::vector<long, std::__1::allocator<long> >&) */
int _ZN2P29getVectorIlEEvRKN5NSCam9IMetadataEjRNSt3__16vectorIT_NS5_9allocatorIS7_EEEE(void);

/* Symbol: _ZN2P214P2DrawIDPluginD2Ev */
/* Demangled: P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
int _ZN2P214P2DrawIDPluginD2Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor12makeSFPIOMgrERKN7android2spINS0_7PayloadEEE */
/* Demangled: P2::StreamingProcessor::makeSFPIOMgr(android::sp<P2::StreamingProcessor::Payload> const&) const */
int _ZNK2P218StreamingProcessor12makeSFPIOMgrERKN7android2spINS0_7PayloadEEE(void);

/* Symbol: _ZTv0_n40_N5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::TimingChecker::Client::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv(void);

/* Symbol: _ZNK2P27MWFrame12acquireFenceERKN7android2spIN5NSCam2v313IStreamBufferEEE */
/* Demangled: P2::MWFrame::acquireFence(android::sp<NSCam::v3::IStreamBuffer> const&) const */
int _ZNK2P27MWFrame12acquireFenceERKN7android2spIN5NSCam2v313IStreamBufferEEE(void);

/* Symbol: _ZN5NSCam2v36FdNode14createInstanceEv */
/* Demangled: NSCam::v3::FdNode::createInstance() */
int _ZN5NSCam2v36FdNode14createInstanceEv(void);

/* Symbol: _ZTv0_n96_N5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZTv0_n96_N5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgrD2Ev */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgrD2Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor13prepareCommonERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepareCommon(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
int _ZNK2P218StreamingProcessor13prepareCommonERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(android::sp<NSCam::IImageBuffer> const&) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem18SubscriberSpecificINS0_17StrictIoPipeEventILNS0_13IoPipeEventIdE1EEENS_2v38NSP1Node9P1NodeImpEEE */
/* Demangled: vtable for NSCam::NSIoPipe::IoPipeEventSystem::SubscriberSpecific<NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)1>, NSCam::v3::NSP1Node::P1NodeImp> */
extern void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem18SubscriberSpecificINS0_17StrictIoPipeEventILNS0_13IoPipeEventIdE1EEENS_2v38NSP1Node9P1NodeImpEEE;

/* Symbol: _ZTCN2P222CaptureRequestCallbackE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback-in-P2::CaptureRequestCallback */
extern void* _ZTCN2P222CaptureRequestCallbackE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackE;

/* Symbol: _ZN2P218StreamingProcessorD1Ev */
/* Demangled: P2::StreamingProcessor::~StreamingProcessor() */
int _ZN2P218StreamingProcessorD1Ev(void);

/* Symbol: _ZNK2P25MWImg9isCaptureEv */
/* Demangled: P2::MWImg::isCapture() const */
int _ZNK2P25MWImg9isCaptureEv(void);

/* Symbol: _ZTv0_n48_N2P218StreamingProcessor13onThreadStartEv */
/* Demangled: virtual thunk to P2::StreamingProcessor::onThreadStart() */
int _ZTv0_n48_N2P218StreamingProcessor13onThreadStartEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp13onHandleFlushEii */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onHandleFlush(int, int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp13onHandleFlushEii(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp7getInitEv */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getInit() */
int _ZN5NSCam2v38NSP1Node9P1NodeImp7getInitEv(void);

/* Symbol: _ZN11JpegNodeImp21waitForRequestDrainedEv */
/* Demangled: JpegNodeImp::waitForRequestDrained() */
int _ZN11JpegNodeImp21waitForRequestDrainedEv(void);

/* Symbol: _ZGVZN2P217isTrace1On_MWMetaEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_MWMeta()::sTrace */
extern void* _ZGVZN2P217isTrace1On_MWMetaEvE6sTrace;

/* Symbol: _ZN2P26P2Util9SimpleOut7setIsFDEi */
/* Demangled: P2::P2Util::SimpleOut::setIsFD(int) */
int _ZN2P26P2Util9SimpleOut7setIsFDEi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4dumpEPKc */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::dump(char const*) */
int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4dumpEPKc(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void);

/* Symbol: _ZN2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE */
/* Demangled: P2::MWMeta::setEntry(unsigned int, NSCam::IMetadata::IEntry const&) */
int _ZN2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15attemptCtrlSyncERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlSync(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15attemptCtrlSyncERNS1_8P1QueActE(void);

/* Symbol: _ZGVZ20isTrace1On_ProcessorvE6sTrace */
/* Demangled: guard variable for isTrace1On_Processor()::sTrace */
extern void* _ZGVZ20isTrace1On_ProcessorvE6sTrace;

/* Symbol: _ZN2P216CaptureProcessor18waitRequestAbortedEv */
/* Demangled: P2::CaptureProcessor::waitRequestAborted() */
int _ZN2P216CaptureProcessor18waitRequestAbortedEv(void);

/* Symbol: _ZN2P26P2Util8SimpleIn12addCropRatioEPKcff */
/* Demangled: P2::P2Util::SimpleIn::addCropRatio(char const*, float, float) */
int _ZN2P26P2Util8SimpleIn12addCropRatioEPKcff(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem18SubscriberSpecificINS0_17StrictIoPipeEventILNS0_13IoPipeEventIdE2EEENS_2v38NSP1Node9P1NodeImpEEE */
/* Demangled: vtable for NSCam::NSIoPipe::IoPipeEventSystem::SubscriberSpecific<NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)2>, NSCam::v3::NSP1Node::P1NodeImp> */
extern void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem18SubscriberSpecificINS0_17StrictIoPipeEventILNS0_13IoPipeEventIdE2EEENS_2v38NSP1Node9P1NodeImpEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*>&>::push_front(P2::MDPParam* const&) */
int _ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm(void);

/* Symbol: _ZTv0_n32_N2P29P2RequestD0Ev */
/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
int _ZTv0_n32_N2P29P2RequestD0Ev(void);

/* Symbol: _ZN2P218StreamingProcessor11prepareSMVRERKN7android2spINS0_13P2RequestPackEEERKN5NSCam7Feature4ILogE */
/* Demangled: P2::StreamingProcessor::prepareSMVR(android::sp<P2::StreamingProcessor::P2RequestPack> const&, NSCam::Feature::ILog const&) */
int _ZN2P218StreamingProcessor11prepareSMVRERKN7android2spINS0_13P2RequestPackEEERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZN2P218StreamingProcessorD2Ev */
/* Demangled: P2::StreamingProcessor::~StreamingProcessor() */
int _ZN2P218StreamingProcessorD2Ev(void);

/* Symbol: _ZTT12encode_frame */
/* Demangled: VTT for encode_frame */
extern void* _ZTT12encode_frame;

/* Symbol: _ZTCN12RAW16NodeImp12UnpackThreadE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-RAW16NodeImp::UnpackThread */
extern void* _ZTCN12RAW16NodeImp12UnpackThreadE0_N7android6ThreadE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIlN2P27MWFrame12ReleaseToken8MWStreamEEENS_19__map_value_compareIlS6_NS_4lessIlEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream>, std::__1::__map_value_compare<long, std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream> > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIlN2P27MWFrame12ReleaseToken8MWStreamEEENS_19__map_value_compareIlS6_NS_4lessIlEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN2P29P2RequestD0Ev */
/* Demangled: P2::P2Request::~P2Request() */
int _ZN2P29P2RequestD0Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp10setRequestEi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setRequest(int) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp10setRequestEi(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node12P1DeliverMgrE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1DeliverMgr */
extern void* _ZTVN5NSCam2v38NSP1Node12P1DeliverMgrE;

/* Symbol: _ZNK7Request13getJpegParamsEPN5NSCam9IMetadataER11jpeg_params */
/* Demangled: Request::getJpegParams(NSCam::IMetadata*, jpeg_params&) const */
int _ZNK7Request13getJpegParamsEPN5NSCam9IMetadataER11jpeg_params(void);

/* Symbol: _ZN2P26XiaoMi19getMiOutputMetadataERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::XiaoMi::getMiOutputMetadata(android::sp<P2::P2Request> const&) */
int _ZN2P26XiaoMi19getMiOutputMetadataERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZTv0_n32_N2P217DispatchProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: virtual thunk to P2::DispatchProcessor::onInit(P2::P2InitParam const&) */
int _ZTv0_n32_N2P217DispatchProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZGVZ17isTrace1On_P2UtilvE6sTrace */
/* Demangled: guard variable for isTrace1On_P2Util()::sTrace */
extern void* _ZGVZ17isTrace1On_P2UtilvE6sTrace;

/* Symbol: _ZN5NSCam2v38NSP1Node18StuffBufferManager18acquireStoreBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEhhhiiNS_7SecTypeE */
/* Demangled: NSCam::v3::NSP1Node::StuffBufferManager::acquireStoreBuffer(android::sp<NSCam::IImageBuffer>&, char const*, int, NSCam::MSize, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, unsigned char, unsigned char, unsigned char, int, int, NSCam::SecType) */
int _ZN5NSCam2v38NSP1Node18StuffBufferManager18acquireStoreBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEhhhiiNS_7SecTypeE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlReadoutERNS1_8P1QueActEPNS_9IMetadataES6_Ri */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlReadout(NSCam::v3::NSP1Node::P1QueAct&, NSCam::IMetadata*, NSCam::IMetadata*, int&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlReadoutERNS1_8P1QueActEPNS_9IMetadataES6_Ri(void);

/* Symbol: _ZGVZN2P227isTrace1On_P2MetadataHandleEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_P2MetadataHandle()::sVal */
extern void* _ZGVZN2P227isTrace1On_P2MetadataHandleEvE4sVal;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5flushEv */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::flush() */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5flushEv(void);

/* Symbol: _ZTv0_n32_N2P29P2RequestD1Ev */
/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
int _ZTv0_n32_N2P29P2RequestD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9setEnableEi */
/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::setEnable(int) */
int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9setEnableEi(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node8P1QueJobE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1QueJob */
extern void* _ZTVN5NSCam2v38NSP1Node8P1QueJobE;

/* Symbol: _ZN2P26XiaoMi16miOutputMetadataEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEERKNS2_INS_9P2RequestEEE */
/* Demangled: P2::XiaoMi::miOutputMetadata(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>, android::sp<P2::P2Request> const&) */
int _ZN2P26XiaoMi16miOutputMetadataEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEERKNS2_INS_9P2RequestEEE(void);

/* Symbol: _ZN2P29P2RequestD1Ev */
/* Demangled: P2::P2Request::~P2Request() */
int _ZN2P29P2RequestD1Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify6configEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::config() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify6configEv(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node18LongExposureStatusE */
/* Demangled: vtable for NSCam::v3::NSP1Node::LongExposureStatus */
extern void* _ZTVN5NSCam2v38NSP1Node18LongExposureStatusE;

/* Symbol: _ZN5NSCam2v38NSP1Node12P1DeliverMgr11dumpNumListEi */
/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::dumpNumList(int) */
int _ZN5NSCam2v38NSP1Node12P1DeliverMgr11dumpNumListEi(void);

/* Symbol: _ZTCN2P216P2MetadataHandleE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle-in-P2::P2MetadataHandle */
extern void* _ZTCN2P216P2MetadataHandleE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleE;

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEED0Ev */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::~Processor() */
int _ZN2P29ProcessorIjjNS_8MDPParamEED0Ev(void);

/* Symbol: _ZN2P27MWFrame12releaseImageERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEERKNSt3__16vectorINS2_INS7_12IImageBufferEEENSD_9allocatorISG_EEEE */
/* Demangled: P2::MWFrame::releaseImage(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IImageStreamBuffer> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > > const&) */
int _ZN2P27MWFrame12releaseImageERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEERKNSt3__16vectorINS2_INS7_12IImageBufferEEENSD_9allocatorISG_EEEE(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<P2::P2FrameRequest>, std::__1::allocator<android::sp<P2::P2FrameRequest> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK2P218StreamingProcessor12setLMVOParamERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEE */
/* Demangled: P2::StreamingProcessor::setLMVOParam(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::P2Request> const&) const */
int _ZNK2P218StreamingProcessor12setLMVOParamERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct15poolImageUninitENS1_10STREAM_IMGE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImageUninit(NSCam::v3::NSP1Node::STREAM_IMG) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct15poolImageUninitENS1_10STREAM_IMGE(void);

/* Symbol: _ZTv0_n120_N11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: virtual thunk to JpegNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZTv0_n120_N11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv */
/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::readyToRun() */
int _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::reserve(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm(void);

/* Symbol: _ZNK2P29P2Cropper14refineBoundaryERKN5NSCam7Feature4ILogERKNS1_5MSizeERNS1_8NSIoPipe9MCropRectE */
/* Demangled: P2::P2Cropper::refineBoundary(NSCam::Feature::ILog const&, NSCam::MSize const&, NSCam::NSIoPipe::MCropRect&) const */
int _ZNK2P29P2Cropper14refineBoundaryERKN5NSCam7Feature4ILogERKNS1_5MSizeERNS1_8NSIoPipe9MCropRectE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor14PartialPayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<P2::StreamingProcessor::PartialPayload>, std::__1::allocator<android::sp<P2::StreamingProcessor::PartialPayload> > >::__push_back_slow_path<android::sp<P2::StreamingProcessor::PartialPayload> const&>(android::sp<P2::StreamingProcessor::PartialPayload> const&) */
int _ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor14PartialPayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZGVZ22isTrace1On_CaptureNodevE4sVal */
/* Demangled: guard variable for isTrace1On_CaptureNode()::sVal */
extern void* _ZGVZ22isTrace1On_CaptureNodevE4sVal;

/* Symbol: _ZNK5NSCam2v38BaseNode9getNodeIdEv */
/* Demangled: NSCam::v3::BaseNode::getNodeId() const */
int _ZNK5NSCam2v38BaseNode9getNodeIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp12check_configERKNS0_6P1Node12ConfigParamsE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::check_config(NSCam::v3::P1Node::ConfigParams const&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp12check_configERKNS0_6P1Node12ConfigParamsE(void);

/* Symbol: _ZNK2P218P2StreamingNodeImp9getOpenIdEv */
/* Demangled: P2::P2StreamingNodeImp::getOpenId() const */
int _ZNK2P218P2StreamingNodeImp9getOpenIdEv(void);

/* Symbol: _ZN2P29P2RequestD2Ev */
/* Demangled: P2::P2Request::~P2Request() */
int _ZN2P29P2RequestD2Ev(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrl11sessionLockEv */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::sessionLock() */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrl11sessionLockEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEaSERKS4_ */
/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::operator=(android::sp<NSCam::v3::IMetaStreamInfo> const&) */
int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEaSERKS4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZTVN2P213P2FrameHolderE */
/* Demangled: vtable for P2::P2FrameHolder */
extern void* _ZTVN2P213P2FrameHolderE;

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotifyC1EN7android2spINS1_9P1NodeImpEEE */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::P1RegisterNotify(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyC1EN7android2spINS1_9P1NodeImpEEE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore7isEmptyEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::isEmpty() */
int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore7isEmptyEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK2P26P2Util8SimpleIn12getCropRatioEv */
/* Demangled: P2::P2Util::SimpleIn::getCropRatio() const */
int _ZNK2P26P2Util8SimpleIn12getCropRatioEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZTVN7android6VectorIN2P216CaptureProcessor11RequestPairEEE */
/* Demangled: vtable for android::Vector<P2::CaptureProcessor::RequestPair> */
extern void* _ZTVN7android6VectorIN2P216CaptureProcessor11RequestPairEEE;

/* Symbol: _ZN2P211P2InitParamC2ERKN5NSCam7Feature6P2Util6P2InfoE */
/* Demangled: P2::P2InitParam::P2InitParam(NSCam::Feature::P2Util::P2Info const&) */
int _ZN2P211P2InitParamC2ERKN5NSCam7Feature6P2Util6P2InfoE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG&&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeAct13frameImagePutENS1_10STREAM_IMGEa */
/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImagePut(NSCam::v3::NSP1Node::STREAM_IMG, signed char) */
int _ZN5NSCam2v38NSP1Node9P1NodeAct13frameImagePutENS1_10STREAM_IMGEa(void);

/* Symbol: _ZTVN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE */
/* Demangled: vtable for P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread */
extern void* _ZTVN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE;

/* Symbol: _ZGVZN2P227isTrace1On_CaptureProcessorEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_CaptureProcessor()::sTrace */
extern void* _ZGVZN2P227isTrace1On_CaptureProcessorEvE6sTrace;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE(void);

/* Symbol: _ZN2P213P2FrameHolder17notifyNextCaptureEii */
/* Demangled: P2::P2FrameHolder::notifyNextCapture(int, int) */
int _ZN2P213P2FrameHolder17notifyNextCaptureEii(void);

/* Symbol: _ZTv0_n24_N11JpegNodeImpD0Ev */
/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
int _ZTv0_n24_N11JpegNodeImpD0Ev(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE7camProp */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE7camProp;

/* Symbol: _ZN2P29ProcessorIjjNS_8MDPParamEED2Ev */
/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::~Processor() */
int _ZN2P29ProcessorIjjNS_8MDPParamEED2Ev(void);

/* Symbol: _ZNK2P25MWImg8getUsageEv */
/* Demangled: P2::MWImg::getUsage() const */
int _ZNK2P25MWImg8getUsageEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotifyC2EN7android2spINS1_9P1NodeImpEEE */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::P1RegisterNotify(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyC2EN7android2spINS1_9P1NodeImpEEE(void);

/* Symbol: _ZN7Request11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE */
/* Demangled: Request::unlockImage(android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&) */
int _ZN7Request11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE(void);

/* Symbol: _ZGVZN2P227isTrace1On_CaptureProcessorEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_CaptureProcessor()::sVal */
extern void* _ZGVZN2P227isTrace1On_CaptureProcessorEvE4sVal;

/* Symbol: _ZN2P26MWMetaD0Ev */
/* Demangled: P2::MWMeta::~MWMeta() */
int _ZN2P26MWMetaD0Ev(void);

/* Symbol: _ZGVZ24isTrace1On_Streaming_EISvE4sVal */
/* Demangled: guard variable for isTrace1On_Streaming_EIS()::sVal */
extern void* _ZGVZ24isTrace1On_Streaming_EISvE4sVal;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::__emplace_unique_key_args<P2::StreamingProcessor::ERequestPath, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath const&>, std::__1::tuple<> >(P2::StreamingProcessor::ERequestPath const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZZ17isTrace1On_P2UtilvE6sTrace */
/* Demangled: isTrace1On_P2Util()::sTrace */
extern void* _ZZ17isTrace1On_P2UtilvE6sTrace;

/* Symbol: _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEEE;

/* Symbol: _ZN5NSCam2v38NSP1Node16P1RegisterNotify13getNotifyCropEv */
/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyCrop() */
int _ZN5NSCam2v38NSP1Node16P1RegisterNotify13getNotifyCropEv(void);

/* Symbol: _ZN7Request20returnMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi */
/* Demangled: Request::returnMetadataBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>, NSCam::IMetadata*, int) */
int _ZN7Request20returnMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::__push_back_slow_path<NS3Av3::MetaSet_T*>(NS3Av3::MetaSet_T*&&) */
int _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void);

/* Symbol: _ZN2P218StreamingProcessor7PayloadD0Ev */
/* Demangled: P2::StreamingProcessor::Payload::~Payload() */
int _ZN2P218StreamingProcessor7PayloadD0Ev(void);

/* Symbol: _ZTv0_n24_N11JpegNodeImpD1Ev */
/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
int _ZTv0_n24_N11JpegNodeImpD1Ev(void);

/* Symbol: _ZNK2P26MWInfo12findMetaInfoENS_7ID_METAE */
/* Demangled: P2::MWInfo::findMetaInfo(P2::ID_META) const */
int _ZNK2P26MWInfo12findMetaInfoENS_7ID_METAE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIPNS_12IImageBufferEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::IImageBuffer*> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIPNS_12IImageBufferEEE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlSyncERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::notifyCtrlSync(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlSyncERNS1_8P1QueActE(void);

/* Symbol: _ZNK2P29P2Request7getMetaENS_7ID_METAE */
/* Demangled: P2::P2Request::getMeta(P2::ID_META) const */
int _ZNK2P29P2Request7getMetaENS_7ID_METAE(void);

/* Symbol: _ZN2P26MWMetaD1Ev */
/* Demangled: P2::MWMeta::~MWMeta() */
int _ZN2P26MWMetaD1Ev(void);

/* Symbol: _ZN2P27MWFrameC2ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE */
/* Demangled: P2::MWFrame::MWFrame(NSCam::Feature::ILog const&, long const&, android::String8 const&, android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN2P27MWFrameC2ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE(void);

/* Symbol: _ZGVZ25isTrace1On_MWFrameRequestvE6sTrace */
/* Demangled: guard variable for isTrace1On_MWFrameRequest()::sTrace */
extern void* _ZGVZ25isTrace1On_MWFrameRequestvE6sTrace;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm(void);

/* Symbol: _ZGVZ20isTrace1On_SMVRQueuevE4sVal */
/* Demangled: guard variable for isTrace1On_SMVRQueue()::sVal */
extern void* _ZGVZ20isTrace1On_SMVRQueuevE4sVal;

/* Symbol: _ZN2P218StreamingProcessor7Payload11addRequestsERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS2_9allocatorIS7_EEEE */
/* Demangled: P2::StreamingProcessor::Payload::addRequests(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
int _ZN2P218StreamingProcessor7Payload11addRequestsERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS2_9allocatorIS7_EEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE9push_backEOSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*>&>::push_back(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*&&) */
int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE9push_backEOSA_(void);

/* Symbol: _ZN2P25P2ImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_6ID_IMGEj */
/* Demangled: P2::P2Img::P2Img(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, P2::ID_IMG, unsigned int) */
int _ZN2P25P2ImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_6ID_IMGEj(void);

/* Symbol: _ZN2P218StreamingProcessor7Payload23getMainFeaturePipeParamEv */
/* Demangled: P2::StreamingProcessor::Payload::getMainFeaturePipeParam() */
int _ZN2P218StreamingProcessor7Payload23getMainFeaturePipeParamEv(void);

/* Symbol: _ZTCN2P214MWFrameRequestE0_NS_8IP2FrameE */
/* Demangled: construction vtable for P2::IP2Frame-in-P2::MWFrameRequest */
extern void* _ZTCN2P214MWFrameRequestE0_NS_8IP2FrameE;

/* Symbol: _ZNK2P26P2Util8SimpleIO9hasOutputEv */
/* Demangled: P2::P2Util::SimpleIO::hasOutput() const */
int _ZNK2P26P2Util8SimpleIO9hasOutputEv(void);

/* Symbol: _ZN2P212MDPProcessor13onThreadStartEv */
/* Demangled: P2::MDPProcessor::onThreadStart() */
int _ZN2P212MDPProcessor13onThreadStartEv(void);

/* Symbol: _ZN2P218StreamingProcessor7PayloadD1Ev */
/* Demangled: P2::StreamingProcessor::Payload::~Payload() */
int _ZN2P218StreamingProcessor7PayloadD1Ev(void);

/* Symbol: _ZN12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE */
/* Demangled: RAW16NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
int _ZN12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void);

/* Symbol: _ZTv0_n72_N12RAW16NodeImp6uninitEv */
/* Demangled: virtual thunk to RAW16NodeImp::uninit() */
int _ZTv0_n72_N12RAW16NodeImp6uninitEv(void);

/* Symbol: _ZTv0_n80_N2P217DispatchProcessor13onNotifyFlushEv */
/* Demangled: virtual thunk to P2::DispatchProcessor::onNotifyFlush() */
int _ZTv0_n80_N2P217DispatchProcessor13onNotifyFlushEv(void);

/* Symbol: _ZTv0_n32_N2P216P2ScanlinePluginD0Ev */
/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZTv0_n32_N2P216P2ScanlinePluginD0Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor10getSMVRFPSERKN5NSCam7Feature4ILogERKN7android2spINS_6P2MetaEEE */
/* Demangled: P2::StreamingProcessor::getSMVRFPS(NSCam::Feature::ILog const&, android::sp<P2::P2Meta> const&) const */
int _ZNK2P218StreamingProcessor10getSMVRFPSERKN5NSCam7Feature4ILogERKN7android2spINS_6P2MetaEEE(void);

/* Symbol: _ZN11JpegNodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: JpegNodeImp::errorHandle(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN11JpegNodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE */
/* Demangled: JpegNodeImp::config(NSCam::v3::JpegNode::ConfigParams const&) */
int _ZN11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE(void);

/* Symbol: _ZTV11JpegNodeImp */
/* Demangled: vtable for JpegNodeImp */
extern void* _ZTV11JpegNodeImp;

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5enqueERKS6_ */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::enque(android::sp<P2::P2Request> const&) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5enqueERKS6_(void);

/* Symbol: _ZN2P26MWMetaD2Ev */
/* Demangled: P2::MWMeta::~MWMeta() */
int _ZN2P26MWMetaD2Ev(void);

/* Symbol: _ZTCN2P25MWImgE152_NS_5P2ImgE */
/* Demangled: construction vtable for P2::P2Img-in-P2::MWImg */
extern void* _ZTCN2P25MWImgE152_NS_5P2ImgE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZGVZN2P216isTrace1On_MWImgEvE4sVal */
/* Demangled: guard variable for P2::isTrace1On_MWImg()::sVal */
extern void* _ZGVZN2P216isTrace1On_MWImgEvE4sVal;

/* Symbol: _ZNK2P214MWFrameRequest10findP2MetaERKNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE */
/* Demangled: P2::MWFrameRequest::findP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > > const&, P2::ID_META) const */
int _ZNK2P214MWFrameRequest10findP2MetaERKNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE(void);

/* Symbol: _ZN2P216CaptureProcessor13onNotifyFlushEv */
/* Demangled: P2::CaptureProcessor::onNotifyFlush() */
int _ZN2P216CaptureProcessor13onNotifyFlushEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node13TimingChecker6Client6actionEv */
/* Demangled: NSCam::v3::NSP1Node::TimingChecker::Client::action() */
int _ZN5NSCam2v38NSP1Node13TimingChecker6Client6actionEv(void);

/* Symbol: _ZThn40_N10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE */
/* Demangled: non-virtual thunk to PDENodeImp::config(NSCam::v3::PDENode::ConfigParams const&) */
int _ZThn40_N10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE(void);

/* Symbol: _ZN2P218StreamingProcessor7PayloadD2Ev */
/* Demangled: P2::StreamingProcessor::Payload::~Payload() */
int _ZN2P218StreamingProcessor7PayloadD2Ev(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13setIdleWaitMSEj */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::setIdleWaitMS(unsigned int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13setIdleWaitMSEj(void);

/* Symbol: _ZTC11JpegNodeImp0_N5NSCam2v313IPipelineNodeE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNode-in-JpegNodeImp */
extern void* _ZTC11JpegNodeImp0_N5NSCam2v313IPipelineNodeE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*>&>::push_front(android::sp<P2::P2Request>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZTv0_n32_N2P216P2ScanlinePluginD1Ev */
/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
int _ZTv0_n32_N2P216P2ScanlinePluginD1Ev(void);

/* Symbol: _ZNK2P218StreamingProcessor7Payload5printEv */
/* Demangled: P2::StreamingProcessor::Payload::print() const */
int _ZNK2P218StreamingProcessor7Payload5printEv(void);

/* Symbol: _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9setEnableEi */
/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::setEnable(int) */
int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9setEnableEi(void);

/* Symbol: _ZTTN2P26MWInfoE */
/* Demangled: VTT for P2::MWInfo */
extern void* _ZTTN2P26MWInfoE;

/* Symbol: _ZN2P25P2Img10getImgInfoENS_6ID_IMGE */
/* Demangled: P2::P2Img::getImgInfo(P2::ID_IMG) */
int _ZN2P25P2Img10getImgInfoENS_6ID_IMGE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp12setupSubInfoERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERN7android7String8Eh */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setupSubInfo(NSCam::v3::NSP1Node::P1QueAct&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, android::String8&, unsigned char) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp12setupSubInfoERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERN7android7String8Eh(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp15prepareCropInfoERNS1_8P1QueActEPNS_9IMetadataES6_NS1_18PREPARE_CROP_PHASEEPi */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::prepareCropInfo(NSCam::v3::NSP1Node::P1QueAct&, NSCam::IMetadata*, NSCam::IMetadata*, NSCam::v3::NSP1Node::PREPARE_CROP_PHASE, int*) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp15prepareCropInfoERNS1_8P1QueActEPNS_9IMetadataES6_NS1_18PREPARE_CROP_PHASEEPi(void);

/* Symbol: _ZNK2P26MWInfo7isValidERKN5NSCam7Feature4ILogE */
/* Demangled: P2::MWInfo::isValid(NSCam::Feature::ILog const&) const */
int _ZNK2P26MWInfo7isValidERKN5NSCam7Feature4ILogE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp18processReprocFrameERNS1_8P1QueActE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::processReprocFrame(NSCam::v3::NSP1Node::P1QueAct&) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp18processReprocFrameERNS1_8P1QueActE(void);

/* Symbol: _ZTv0_n56_N2P214BasicProcessor12onThreadStopEv */
/* Demangled: virtual thunk to P2::BasicProcessor::onThreadStop() */
int _ZTv0_n56_N2P214BasicProcessor12onThreadStopEv(void);

/* Symbol: _ZZN2P224isTrace1On_ReleaseBundleEvE6sTrace */
/* Demangled: P2::isTrace1On_ReleaseBundle()::sTrace */
extern void* _ZZN2P224isTrace1On_ReleaseBundleEvE6sTrace;

/* Symbol: _ZN2P218StreamingProcessor10uninit3DNREv */
/* Demangled: P2::StreamingProcessor::uninit3DNR() */
int _ZN2P218StreamingProcessor10uninit3DNREv(void);

/* Symbol: _ZTv0_n48_N2P213P2FrameHolder15endBatchReleaseEv */
/* Demangled: virtual thunk to P2::P2FrameHolder::endBatchRelease() */
int _ZTv0_n48_N2P213P2FrameHolder15endBatchReleaseEv(void);

/* Symbol: _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::__add_back_capacity() */
int _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::IHalISP*, std::__1::allocator<NS3Av3::IHalISP*> >::__push_back_slow_path<NS3Av3::IHalISP* const&>(NS3Av3::IHalISP* const&) */
int _ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl19checkRestreamingNumEi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkRestreamingNum(int) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl19checkRestreamingNumEi(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZTCN2P214P2DrawIDPluginE0_NS_11P2ImgPluginE */
/* Demangled: construction vtable for P2::P2ImgPlugin-in-P2::P2DrawIDPlugin */
extern void* _ZTCN2P214P2DrawIDPluginE0_NS_11P2ImgPluginE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE15__emplace_multiIJRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__emplace_multi<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, android::sp<NSCam::NSCamFeature::VarHolderBase> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, android::sp<NSCam::NSCamFeature::VarHolderBase> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE15__emplace_multiIJRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEEDpOT_(void);

/* Symbol: _ZN5NSCam2v38BaseNode12onCtrlResizeERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri */
/* Demangled: NSCam::v3::BaseNode::onCtrlResize(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZN5NSCam2v38BaseNode12onCtrlResizeERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri(void);

/* Symbol: _ZN5NSCam2v37JpgPackC1Ev */
/* Demangled: NSCam::v3::JpgPack::JpgPack() */
int _ZN5NSCam2v37JpgPackC1Ev(void);

/* Symbol: _ZN2P218StreamingProcessor6getTSQERKN7android2spINS0_7PayloadEEERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE */
/* Demangled: P2::StreamingProcessor::getTSQ(android::sp<P2::StreamingProcessor::Payload> const&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam const&) */
int _ZN2P218StreamingProcessor6getTSQERKN7android2spINS0_7PayloadEEERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void);

/* Symbol: _ZTv0_n56_N5NSCam2v38BaseNode15getULogModuleIdEv */
/* Demangled: virtual thunk to NSCam::v3::BaseNode::getULogModuleId() */
int _ZTv0_n56_N5NSCam2v38BaseNode15getULogModuleIdEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node10P1TaskCtrlC1EN7android2spINS1_9P1NodeImpEEE */
/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::P1TaskCtrl(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
int _ZN5NSCam2v38NSP1Node10P1TaskCtrlC1EN7android2spINS1_9P1NodeImpEEE(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeImpE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeImp */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeImpE;

/* Symbol: _ZN2P27MWFrame21preReleaseImageStreamERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRE */
/* Demangled: P2::MWFrame::preReleaseImageStream(android::sp<NSCam::v3::IImageStreamBuffer> const&, P2::IO_DIR) */
int _ZN2P27MWFrame21preReleaseImageStreamERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRE(void);

/* Symbol: _ZTTN2P214P2FrameRequestE */
/* Demangled: VTT for P2::P2FrameRequest */
extern void* _ZTTN2P214P2FrameRequestE;

/* Symbol: _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> >::__push_back_slow_path<P2::P2Util::SimpleOut const&>(P2::P2Util::SimpleOut const&) */
int _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38BaseNode10needCtrlCbERKN7android2spINS0_14IPipelineFrameEEENS0_21IPipelineNodeCallback9eCtrlTypeE */
/* Demangled: NSCam::v3::BaseNode::needCtrlCb(android::sp<NSCam::v3::IPipelineFrame> const&, NSCam::v3::IPipelineNodeCallback::eCtrlType) */
int _ZN5NSCam2v38BaseNode10needCtrlCbERKN7android2spINS0_14IPipelineFrameEEENS0_21IPipelineNodeCallback9eCtrlTypeE(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl10getDropNumEv */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::getDropNum() */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl10getDropNumEv(void);

/* Symbol: _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkShutterTimeERi */
/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkShutterTime(int&) */
int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkShutterTimeERi(void);

/* Symbol: _ZN5NSCam2v38NSP1Node9P1NodeImp8dispatchEN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::dispatch(android::sp<NSCam::v3::IPipelineFrame>) */
int _ZN5NSCam2v38NSP1Node9P1NodeImp8dispatchEN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE12do_constructEPvm(void);

/* Symbol: _ZN2P29META_INFOC2ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj */
/* Demangled: P2::META_INFO::META_INFO(P2::ID_META, P2::ID_META, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN2P29META_INFOC2ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void);

/* Symbol: _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::thread, std::__1::allocator<std::__1::thread> >::__push_back_slow_path<std::__1::thread>(std::__1::thread&&) */
int _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE */
/* Demangled: vtable for NSCam::v3::IPipelineFrame::ImageInfoIOMapSet */
extern void* _ZTVN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE;

/* Symbol: _ZN5NSCam2v37JpgPackC2Ev */
/* Demangled: NSCam::v3::JpgPack::JpgPack() */
int _ZN5NSCam2v37JpgPackC2Ev(void);

/* Symbol: _ZN12RAW16NodeImpC1Ev */
/* Demangled: RAW16NodeImp::RAW16NodeImp() */
int _ZN12RAW16NodeImpC1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_front(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node10P1FrameActE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1FrameAct */
extern void* _ZTVN5NSCam2v38NSP1Node10P1FrameActE;

/* Symbol: _ZN2P214BasicProcessor6onInitERKNS_11P2InitParamE */
/* Demangled: P2::BasicProcessor::onInit(P2::P2InitParam const&) */
int _ZN2P214BasicProcessor6onInitERKNS_11P2InitParamE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE10push_frontEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*> >::push_front(android::sp<P2::P2Request>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE10push_frontEOS6_(void);

/* Symbol: _ZNK2P27MWFrame12acquireImageERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIREii */
/* Demangled: P2::MWFrame::acquireImage(android::sp<NSCam::v3::IImageStreamBuffer> const&, P2::IO_DIR, int, int) const */
int _ZNK2P27MWFrame12acquireImageERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIREii(void);

/* Symbol: _ZN2P218StreamingProcessor13P2RequestPack8getInputEj */
/* Demangled: P2::StreamingProcessor::P2RequestPack::getInput(unsigned int) */
int _ZN2P218StreamingProcessor13P2RequestPack8getInputEj(void);

/* Symbol: _ZNK2P218StreamingProcessor13prepareEISVarERNS_6P2Util8SimpleInERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEERKNSA_INS4_7Feature6P2Util7CropperEEERKNS4_6MRectFE */
/* Demangled: P2::StreamingProcessor::prepareEISVar(P2::P2Util::SimpleIn&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::P2Request> const&, android::sp<NSCam::Feature::P2Util::Cropper> const&, NSCam::MRectF const&) const */
int _ZNK2P218StreamingProcessor13prepareEISVarERNS_6P2Util8SimpleInERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEERKNSA_INS4_7Feature6P2Util7CropperEEERKNS4_6MRectFE(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
int _ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void);

/* Symbol: _ZTVN5NSCam2v38NSP1Node9P1NodeAct12ActStreamImgE */
/* Demangled: vtable for NSCam::v3::NSP1Node::P1NodeAct::ActStreamImg */
extern void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct12ActStreamImgE;

/* Symbol: _ZN7Request6unlockEv */
/* Demangled: Request::unlock() */
int _ZN7Request6unlockEv(void);

/* Symbol: _ZN2P214MWFrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd */
/* Demangled: P2::MWFrameRequest::MWFrameRequest(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&, android::sp<P2::MWInfo> const&, android::sp<P2::MWFrame> const&, android::sp<P2::P2InIDMap> const&, double) */
int _ZN2P214MWFrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd(void);

/* Symbol: _ZN2P26P2Util8SimpleIn13releaseAllImgEv */
/* Demangled: P2::P2Util::SimpleIn::releaseAllImg() */
int _ZN2P26P2Util8SimpleIn13releaseAllImgEv(void);

/* Symbol: _ZN2P211P2InitParamC1Ev */
/* Demangled: P2::P2InitParam::P2InitParam() */
int _ZN2P211P2InitParamC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, P2::ID_IMG>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_IMG> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_META>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_META> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1QueAct, std::__1::allocator<NSCam::v3::NSP1Node::P1QueAct> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1QueAct const&>(NSCam::v3::NSP1Node::P1QueAct const&) */
int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZTVN2P217DispatchProcessorE */
/* Demangled: vtable for P2::DispatchProcessor */
extern void* _ZTVN2P217DispatchProcessorE;

/* Symbol: _ZN2P26P2Meta7InfoMapE */
/* Demangled: P2::P2Meta::InfoMap */
extern void* _ZN2P26P2Meta7InfoMapE;

/* Symbol: _ZTv0_n104_NK2P25MWImg24getIImageBufferPtrsCountEv */
/* Demangled: virtual thunk to P2::MWImg::getIImageBufferPtrsCount() const */
int _ZTv0_n104_NK2P25MWImg24getIImageBufferPtrsCountEv(void);

/* Symbol: _ZNK2P26P2Util9SimpleOut11isMDPOutputEv */
/* Demangled: P2::P2Util::SimpleOut::isMDPOutput() const */
int _ZNK2P26P2Util9SimpleOut11isMDPOutputEv(void);

/* Symbol: _ZN2P216P2CaptureNodeImpC1EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE */
/* Demangled: P2::P2CaptureNodeImp::P2CaptureNodeImp(NSCam::v3::P2CaptureNode::ePass2Type, NSCam::v3::P2Common::Capture::UsageHint const&) */
int _ZN2P216P2CaptureNodeImpC1EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE(void);

/* Symbol: _ZN12RAW16NodeImpC2Ev */
/* Demangled: RAW16NodeImp::RAW16NodeImp() */
int _ZN12RAW16NodeImpC2Ev(void);

/* Symbol: _ZN2P218StreamingProcessor14PartialPayloadC2ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE */
/* Demangled: P2::StreamingProcessor::PartialPayload::PartialPayload(NSCam::Feature::ILog const&, android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
int _ZN2P218StreamingProcessor14PartialPayloadC2ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE(void);

/* Symbol: _ZTCN5NSCam2v38NSP1Node9P1NodeImpE40_NS0_6P1NodeE */
/* Demangled: construction vtable for NSCam::v3::P1Node-in-NSCam::v3::NSP1Node::P1NodeImp */
extern void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE40_NS0_6P1NodeE;

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp;

/* Symbol: _ZGVZN2P227isTrace1On_P2MetadataHandleEvE6sTrace */
/* Demangled: guard variable for P2::isTrace1On_P2MetadataHandle()::sTrace */
extern void* _ZGVZN2P227isTrace1On_P2MetadataHandleEvE6sTrace;

/* Symbol: _ZTv0_n56_N2P216CaptureProcessor12onThreadStopEv */
/* Demangled: virtual thunk to P2::CaptureProcessor::onThreadStop() */
int _ZTv0_n56_N2P216CaptureProcessor12onThreadStopEv(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_HWNODE_H */
