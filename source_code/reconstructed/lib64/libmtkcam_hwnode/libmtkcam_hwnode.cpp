/*
 * Reverse-Engineered Source for: libmtkcam_hwnode.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_hwnode"

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
#include "libmtkcam_hwnode.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::BaseNode::getNodeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38BaseNode11getNodeNameEv(void) {
    ALOGD("_ZNK5NSCam2v38BaseNode11getNodeNameEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::destroyBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferEm(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferEm() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_LMVInfo()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ18isTrace1On_LMVInfovE6sTrace = NULL;

/* Demangled: P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2ScanlinePluginD0Ev(void) {
    ALOGD("_ZN2P216P2ScanlinePluginD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::P2InitParam::P2InitParam() */
extern "C" __attribute__((visibility("default"))) int _ZN2P211P2InitParamC2Ev(void) {
    ALOGD("_ZN2P211P2InitParamC2Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: RAW16NodeImp::onDequeRequest(android::sp<NSCam::v3::IPipelineFrame>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN12RAW16NodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE200_NS3_6ThreadE = NULL;

/* Demangled: P2::MWFrameRequest::findP2Img(P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214MWFrameRequest9findP2ImgENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P214MWFrameRequest9findP2ImgENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: P2::P2InIDMap::P2InIDMap(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2InIDMapC1ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj(void) {
    ALOGD("_ZN2P29P2InIDMapC1ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Streaming_SMVR()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_Streaming_SMVRvE4sVal = NULL;

/* Exported Object: VTT for P2::P2CaptureNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P216P2CaptureNodeImpE = NULL;

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9threshold = NULL;

/* Demangled: P2::MWFrameRequest::createP2MetaMap(NSCam::v3::IPipelineFrame::MetaInfoIOMapSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest15createP2MetaMapERN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE(void) {
    ALOGD("_ZN2P214MWFrameRequest15createP2MetaMapERN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1ConnectLMV */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node12P1ConnectLMVE = NULL;

/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::createBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15StuffBufferPool12createBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15StuffBufferPool12createBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: P2::toIMetadataPtr(android::sp<P2::P2Meta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214toIMetadataPtrERKN7android2spINS_6P2MetaEEE(void) {
    ALOGD("_ZN2P214toIMetadataPtrERKN7android2spINS_6P2MetaEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::refreshStreamStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseToken19refreshStreamStatusEv(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseToken19refreshStreamStatusEv() called");
    return 0;
}

/* Demangled: P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2ScanlinePluginD1Ev(void) {
    ALOGD("_ZN2P216P2ScanlinePluginD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::queryRollingSkew(unsigned int, unsigned int, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16queryRollingSkewEjjRji(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16queryRollingSkewEjjRji() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkSkipBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl14checkSkipBlockEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl14checkSkipBlockEv() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPack4initEv(void) {
    ALOGD("_ZN5NSCam2v37JpgPack4initEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__tree_node<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const&>(int const&, std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS9_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS9_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P212MDPProcessor13onThreadStartEv(void) {
    ALOGD("_ZTv0_n48_N2P212MDPProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::incPayloadCount(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor15incPayloadCountERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZN2P218StreamingProcessor15incPayloadCountERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::P2Request::getImg(P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request6getImgENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P29P2Request6getImgENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZN2P214BasicProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::findDisplayAndRelease(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIO21findDisplayAndReleaseEi(void) {
    ALOGD("_ZN2P26P2Util8SimpleIO21findDisplayAndReleaseEi() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::updateResult(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO12updateResultEi(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO12updateResultEi() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor13onThreadStartEv(void) {
    ALOGD("_ZN2P217DispatchProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::update(long const&, P2::MWFrame::ReleaseToken::StreamState const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseToken6updateERKlRKNS1_11StreamStateE(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseToken6updateERKlRKNS1_11StreamStateE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateAppTagIndex(NSCam::IMetadata&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19generateAppTagIndexERNS_9IMetadataES4_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19generateAppTagIndexERNS_9IMetadataES4_() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE200_N7android6ThreadE = NULL;

/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_() called");
    return 0;
}

/* Demangled: P2::MWFrame::acquireMeta(android::sp<NSCam::v3::IMetaStreamBuffer> const&, P2::IO_DIR) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame11acquireMetaERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE(void) {
    ALOGD("_ZNK2P27MWFrame11acquireMetaERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_MWImg()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P216isTrace1On_MWImgEvE4sVal = NULL;

/* Demangled: P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2ScanlinePluginD2Ev(void) {
    ALOGD("_ZN2P216P2ScanlinePluginD2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::P2RequestPack(NSCam::Feature::ILog const&, android::sp<P2::P2Request> const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPackC1ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPackC1ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD2Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD2Ev() called");
    return 0;
}

/* Demangled: P2::P2Img::getName(P2::ID_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2Img7getNameENS_6ID_IMGE(void) {
    ALOGD("_ZN2P25P2Img7getNameENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IResourceConcurrency>::operator=(android::sp<NSCam::IResourceConcurrency> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam20IResourceConcurrencyEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam20IResourceConcurrencyEEaSERKS3_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getIImageBufferPtrs() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_NK2P25MWImg19getIImageBufferPtrsEv(void) {
    ALOGD("_ZTv0_n96_NK2P25MWImg19getIImageBufferPtrsEv() called");
    return 0;
}

/* Exported Object: construction vtable for P2::IP2Frame-in-P2::MWFrame */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P27MWFrameE0_NS_8IP2FrameE = NULL;

/* Demangled: P2::P2Util::SimpleIn::isResized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn9isResizedEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn9isResizedEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P26MWMetaD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P26MWMetaD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::calcEISRatio(NSCam::MSize const&, std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor12calcEISRatioERKN5NSCam5MSizeERKNSt3__16vectorINS1_7Feature6P2Util15P2AppStreamInfoENS5_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor12calcEISRatioERKN5NSCam5MSizeERKNSt3__16vectorINS1_7Feature6P2Util15P2AppStreamInfoENS5_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processDropFrame(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV16processDropFrameERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV16processDropFrameERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: P2::CaptureRequestCallback::onCompleted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi(void) {
    ALOGD("_ZN2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::generateMetaInfoStr(NSCam::IMetadata::IEntry const&, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node19generateMetaInfoStrERKNS_9IMetadata6IEntryERN7android7String8E(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node19generateMetaInfoStrERKNS_9IMetadata6IEntryERN7android7String8E() called");
    return 0;
}

/* Demangled: Request::prepareMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7Request11prepareMetaEv(void) {
    ALOGD("_ZN7Request11prepareMetaEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N11JpegNodeImpD0Ev(void) {
    ALOGD("_ZTv0_n136_N11JpegNodeImpD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::MWImg::updateResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImg12updateResultEi(void) {
    ALOGD("_ZN2P25MWImg12updateResultEi() called");
    return 0;
}

/* Demangled: P2::MWImg::getBufferHandle(native_handle const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg15getBufferHandleERPK13native_handle(void) {
    ALOGD("_ZNK2P25MWImg15getBufferHandleERPK13native_handle() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::findP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > > const&, P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214MWFrameRequest9findP2ImgERKNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P214MWFrameRequest9findP2ImgERKNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGE() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_StreamingProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P229isTrace1On_StreamingProcessorEvE4sVal = NULL;

/* Demangled: P2::P2Request::initIOInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request10initIOInfoEv(void) {
    ALOGD("_ZN2P29P2Request10initIOInfoEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEEvT_SL_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEEvT_SL_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessDropFrame(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18onProcessDropFrameEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18onProcessDropFrameEi() called");
    return 0;
}

/* Exported Object: isTrace1On_MWFrame()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ18isTrace1On_MWFramevE6sTrace = NULL;

/* Demangled: P2::P2Img::setImgInfo(NSCam::MSize const&, std::__1::vector<long, std::__1::allocator<long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2Img10setImgInfoERKN5NSCam5MSizeERKNSt3__16vectorIlNS5_9allocatorIlEEEE(void) {
    ALOGD("_ZN2P25P2Img10setImgInfoERKN5NSCam5MSizeERKNSt3__16vectorIlNS5_9allocatorIlEEEE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv(void) {
    ALOGD("_ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::kick() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_N5NSCam2v38NSP1Node9P1NodeImp4kickEv(void) {
    ALOGD("_ZTv0_n104_N5NSCam2v38NSP1Node9P1NodeImp4kickEv() called");
    return 0;
}

/* Demangled: P2::P2Util::extractSimpleIO(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util15extractSimpleIOERKN7android2spINS_9P2RequestEEEj(void) {
    ALOGD("_ZN2P26P2Util15extractSimpleIOERKN7android2spINS_9P2RequestEEEj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P26MWMetaD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P26MWMetaD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for P2::P2FrameRequest-in-P2::MWFrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P214MWFrameRequestE0_NS_14P2FrameRequestE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*> >::push_front(android::sp<P2::P2FrameRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE10push_frontEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE10push_frontEOS6_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp5flushEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp5flushEv() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N11JpegNodeImpD1Ev(void) {
    ALOGD("_ZTv0_n136_N11JpegNodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getP1BinSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper12getP1BinSizeEv(void) {
    ALOGD("_ZNK2P29P2Cropper12getP1BinSizeEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N2P218StreamingProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZTv0_n80_N2P218StreamingProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::BaseNode-in-NSCam::v3::NSP1Node::P1NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE0_NS0_8BaseNodeE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::waitEnqueParam(android::sp<P2::P2Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread14waitEnqueParamERS6_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread14waitEnqueParamERS6_() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::createP2ImgMap(NSCam::v3::IPipelineFrame::ImageInfoIOMapSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest14createP2ImgMapERN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE(void) {
    ALOGD("_ZN2P214MWFrameRequest14createP2ImgMapERN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE() called");
    return 0;
}

/* Exported Object: P2::P2StreamingNodeImp::sCondition */
extern "C" __attribute__((visibility("default"))) void* _ZN2P218P2StreamingNodeImp10sConditionE = NULL;

/* Demangled: P2::StreamingProcessor::waitFeaturePipeDone() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor19waitFeaturePipeDoneEv(void) {
    ALOGD("_ZN2P218StreamingProcessor19waitFeaturePipeDoneEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processResult(int, int, int, NSCam::IMetadata*, NSCam::IMetadata*, NS3Av3::MetaSet_T&, NS3Av3::IHal3A*, int, unsigned int, unsigned int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, unsigned int, unsigned int, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV13processResultEiiiPNS_9IMetadataES4_RN6NS3Av39MetaSet_TEPNS5_6IHal3AEijjjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjjRS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV13processResultEiiiPNS_9IMetadataES4_RN6NS3Av39MetaSet_TEPNS5_6IHal3AEijjjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjjRS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getOpenId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38NSP1Node9P1NodeAct9getOpenIdEv(void) {
    ALOGD("_ZNK5NSCam2v38NSP1Node9P1NodeAct9getOpenIdEv() called");
    return 0;
}

/* Demangled: JpegBufPool::commitPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegBufPool10commitPoolEv(void) {
    ALOGD("_ZN11JpegBufPool10commitPoolEv() called");
    return 0;
}

/* Demangled: RAW16NodeImp::UnpackThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp12UnpackThread10readyToRunEv(void) {
    ALOGD("_ZN12RAW16NodeImp12UnpackThread10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::isValidCrop(NSCam::MRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P211isValidCropERKN5NSCam5MRectE(void) {
    ALOGD("_ZN2P211isValidCropERKN5NSCam5MRectE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareTP(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor9prepareTPERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor9prepareTPERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::useCropRatio() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn12useCropRatioEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn12useCropRatioEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_ready() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_readyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_readyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NotifyCrop::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1NotifyCrop14p1TuningNotifyEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1NotifyCrop14p1TuningNotifyEPvS3_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::earlyRelease(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack12earlyReleaseEj(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack12earlyReleaseEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::isActListEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr14isActListEmptyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr14isActListEmptyEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::waitEnqueParam(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread14waitEnqueParamERSB_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread14waitEnqueParamERSB_() called");
    return 0;
}

/* Demangled: P2::MWFrame::createOpaqueImages(android::sp<NSCam::IImageBufferHeap> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame18createOpaqueImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE(void) {
    ALOGD("_ZNK2P27MWFrame18createOpaqueImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::updateP2FrameData() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest17updateP2FrameDataEv(void) {
    ALOGD("_ZN2P214MWFrameRequest17updateP2FrameDataEv() called");
    return 0;
}

/* Demangled: P2::isValid(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27isValidEPKNS_5P2ImgE(void) {
    ALOGD("_ZN2P27isValidEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::updateSMVRMeta(android::sp<P2::StreamingProcessor::Payload> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor14updateSMVRMetaERKN7android2spINS0_7PayloadEEEj(void) {
    ALOGD("_ZN2P218StreamingProcessor14updateSMVRMetaERKN7android2spINS0_7PayloadEEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::initBufInfo_clean() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl17initBufInfo_cleanEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl17initBufInfo_cleanEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_DispatchProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P228isTrace1On_DispatchProcessorEvE4sVal = NULL;

/* Demangled: _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Exported Object: isTrace1On_LMVInfo()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ18isTrace1On_LMVInfovE4sVal = NULL;

/* Exported Object: guard variable for isTrace1On_SMVRQueue()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20isTrace1On_SMVRQueuevE6sTrace = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::waitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9waitFlushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9waitFlushEv() called");
    return 0;
}

/* Demangled: P2::P2Request::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request4dumpEv(void) {
    ALOGD("_ZNK2P29P2Request4dumpEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::getPathRequest(P2::StreamingProcessor::ERequestPath, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload14getPathRequestENS0_12ERequestPathERKj(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload14getPathRequestENS0_12ERequestPathERKj() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::P2ScanlinePlugin::isEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P216P2ScanlinePlugin9isEnabledEv(void) {
    ALOGD("_ZNK2P216P2ScanlinePlugin9isEnabledEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> const&>(unsigned int const&, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::onPlugin(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE(void) {
    ALOGD("_ZN2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor8onUninitEv(void) {
    ALOGD("_ZN2P212MDPProcessor8onUninitEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE200_NS3_6ThreadE = NULL;

/* Exported Object: VTT for P2::P2Request */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29P2RequestE = NULL;

/* Demangled: P2::BasicProcessor::MyTimer::getFPS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214BasicProcessor7MyTimer6getFPSEv(void) {
    ALOGD("_ZNK2P214BasicProcessor7MyTimer6getFPSEv() called");
    return 0;
}

/* Demangled: P2::MWFrame::toUserStatus(NSCam::Feature::ILog const&, P2::IO_STATUS) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12toUserStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE(void) {
    ALOGD("_ZN2P27MWFrame12toUserStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPackD0Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPackD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV6uninitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setQualitySwitching(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19setQualitySwitchingEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19setQualitySwitchingEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::StuffBufferPool::BufNote */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node15StuffBufferPool7BufNoteE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getSMVRCount(NSCam::Feature::ILog const&, android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor12getSMVRCountERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor12getSMVRCountERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::eventStreamingInform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp20eventStreamingInformEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp20eventStreamingInformEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5flushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5flushEv() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::push(unsigned int, P2::P2Util::SimpleIn const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue4pushEjRKNS_6P2Util8SimpleInE(void) {
    ALOGD("_ZN2P29SMVRQueue4pushEjRKNS_6P2Util8SimpleInE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::init3A() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor6init3AEv(void) {
    ALOGD("_ZN2P218StreamingProcessor6init3AEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::initAppInfo(NSCam::Feature::P2Util::P2SensorData const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Cropper11initAppInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE(void) {
    ALOGD("_ZN2P29P2Cropper11initAppInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::notifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE11notifyFlushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE11notifyFlushEv() called");
    return 0;
}

/* Exported Object: vtable for P2::MWInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P26MWInfoE = NULL;

/* Demangled: virtual thunk to P2::StreamingProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P218StreamingProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZTv0_n32_N2P218StreamingProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::getLcso() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn7getLcsoEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn7getLcsoEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::MWImg::MWImg(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, NSCam::Feature::P2Util::IMG_TYPE, P2::IMG_INFO const&, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji(void) {
    ALOGD("_ZN2P25MWImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::cleanAidStage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl13cleanAidStageEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl13cleanAidStageEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessResult(NSCam::v3::NSP1Node::P1QueAct&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NS3Av3::MetaSet_T const&, NSCam::IMetadata const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15onProcessResultERNS1_8P1QueActERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKN6NS3Av39MetaSet_TERKNS_9IMetadataEj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15onProcessResultERNS1_8P1QueActERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKN6NS3Av39MetaSet_TERKNS_9IMetadataEj() called");
    return 0;
}

/* Demangled: P2::MWInfo::initImgInfo(P2::ID_IMG, android::Vector<android::sp<NSCam::v3::IImageStreamInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android6VectorINS2_2spIN5NSCam2v316IImageStreamInfoEEEEE(void) {
    ALOGD("_ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android6VectorINS2_2spIN5NSCam2v316IImageStreamInfoEEEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPackD1Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPackD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: VTT for JpegNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTT11JpegNodeImp = NULL;

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::setISResized(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIn12setISResizedEi(void) {
    ALOGD("_ZN2P26P2Util8SimpleIn12setISResizedEi() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::P2CaptureNodeImp(NSCam::v3::P2CaptureNode::ePass2Type, NSCam::v3::P2Common::Capture::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImpC2EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImpC2EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp = NULL;

/* Demangled: P2::MWImg::isRecord() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg8isRecordEv(void) {
    ALOGD("_ZNK2P25MWImg8isRecordEv() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29SMVRQueue4sizeEv(void) {
    ALOGD("_ZNK2P29SMVRQueue4sizeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getPowerNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14getPowerNotifyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14getPowerNotifyEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: P2::P2InIDMap::getMetaID(unsigned int, P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2InIDMap9getMetaIDEjNS_7ID_METAE(void) {
    ALOGD("_ZN2P29P2InIDMap9getMetaIDEjNS_7ID_METAE() called");
    return 0;
}

/* Exported Object: VTT for P2::P2DrawIDPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P214P2DrawIDPluginE = NULL;

/* Demangled: NSCam::v3::BaseNode::onCtrlSync(android::sp<NSCam::v3::IPipelineFrame> const&, unsigned int, unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode10onCtrlSyncERKN7android2spINS0_14IPipelineFrameEEEjjl(void) {
    ALOGD("_ZN5NSCam2v38BaseNode10onCtrlSyncERKN7android2spINS0_14IPipelineFrameEEEjjl() called");
    return 0;
}

/* Demangled: P2::MWImg::getIImageBufferPtrs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg19getIImageBufferPtrsEv(void) {
    ALOGD("_ZNK2P25MWImg19getIImageBufferPtrsEv() called");
    return 0;
}

/* Demangled: P2::P2Img::getImgSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img10getImgSizeEv(void) {
    ALOGD("_ZNK2P25P2Img10getImgSizeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::buildInitItem() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp13buildInitItemEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp13buildInitItemEv() called");
    return 0;
}

/* Demangled: JpegBufPool::getBufHeap(long) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegBufPool10getBufHeapEl(void) {
    ALOGD("_ZN11JpegBufPool10getBufHeapEl() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: P2::MWMeta::updateResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMeta12updateResultEi(void) {
    ALOGD("_ZN2P26MWMeta12updateResultEi() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPackD2Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPackD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<EIS_STATISTIC_STRUCT> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderI20EIS_STATISTIC_STRUCTEE = NULL;

/* Exported Object: VTT for NSCam::v3::NSP1Node::TimingChecker::Client */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node13TimingChecker6ClientE = NULL;

/* Demangled: P2::StreamingProcessor::P2RequestPack::getVRTimestamp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack14getVRTimestampEv(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack14getVRTimestampEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: P2::MWFrameRequest::endBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest15endBatchReleaseEv(void) {
    ALOGD("_ZN2P214MWFrameRequest15endBatchReleaseEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_() called");
    return 0;
}

/* Demangled: Request::getMetadataBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>&, NSCam::IMetadata*&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request17getMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE(void) {
    ALOGD("_ZN7Request17getMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureRequestCallback::onContinue(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n32_N2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: isTrace1On_Streaming_SMVR()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_Streaming_SMVRvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::P1TaskCtrl(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrlC2EN7android2spINS1_9P1NodeImpEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrlC2EN7android2spINS1_9P1NodeImpEEE() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::BaseNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNodeC2Ev(void) {
    ALOGD("_ZN5NSCam2v38BaseNodeC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkCtrlStandby(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkCtrlStandbyEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl16checkCtrlStandbyEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::clean() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl5cleanEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl5cleanEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<NSCam::v3::IPipelineFrame> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN5NSCam2v314IPipelineFrameEEEEE = NULL;

/* Demangled: P2::MWFrame::print(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IImageStreamInfo> const&, long, unsigned int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v316IImageStreamInfoEEEljjPKc(void) {
    ALOGD("_ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v316IImageStreamInfoEEEljjPKc() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameHolder::notifyNextCapture(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P213P2FrameHolder17notifyNextCaptureEii(void) {
    ALOGD("_ZTv0_n56_N2P213P2FrameHolder17notifyNextCaptureEii() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::enableOIS(NS3Av3::IHal3A*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV9enableOISEPN6NS3Av36IHal3AE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV9enableOISEPN6NS3Av36IHal3AE() called");
    return 0;
}

/* Demangled: P2::P2Cropper::applyViewRatio(NSCam::Feature::ILog const&, NSCam::MRectF const&, NSCam::MSize const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper14applyViewRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFERKNS1_5MSizeE(void) {
    ALOGD("_ZNK2P29P2Cropper14applyViewRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFERKNS1_5MSizeE() called");
    return 0;
}

/* Demangled: P2::MWImg::getIImageBufferPtrsCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg24getIImageBufferPtrsCountEv(void) {
    ALOGD("_ZNK2P25MWImg24getIImageBufferPtrsCountEv() called");
    return 0;
}

/* Demangled: P2::MWMeta::getDir() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWMeta6getDirEv(void) {
    ALOGD("_ZNK2P26MWMeta6getDirEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onEvtCtrlAcquiring(NSCam::v3::NSP1Node::P1NodeImp*, NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)1>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlAcquiringEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE1EEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlAcquiringEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE1EEE() called");
    return 0;
}

/* Exported Object: VTT for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE = NULL;

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> >::__vdeallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE13__vdeallocateEv(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE13__vdeallocateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::P1Node::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v36P1Node14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v36P1Node14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setupAction(NSCam::v3::NSP1Node::P1QueAct&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp11setupActionERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp11setupActionERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, android::sp<P2::BasicProcessor::P2Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2CookieC2EPS0_RKN7android2spINS0_9P2PayloadEEE(void) {
    ALOGD("_ZN2P214BasicProcessor8P2CookieC2EPS0_RKN7android2spINS0_9P2PayloadEEE() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_P2BufferHandle()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P225isTrace1On_P2BufferHandleEvE6sTrace = NULL;

/* Exported Object: VTT for P2::P2FrameHolder */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P213P2FrameHolderE = NULL;

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::Client::dump(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker6Client4dumpEPKc(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker6Client4dumpEPKc() called");
    return 0;
}

/* Demangled: P2::P2Request::isResized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request9isResizedEv(void) {
    ALOGD("_ZNK2P29P2Request9isResizedEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::updateVRTimestamp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack17updateVRTimestampEj(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack17updateVRTimestampEj() called");
    return 0;
}

/* Demangled: P2::MWMeta::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWMeta7isValidEv(void) {
    ALOGD("_ZNK2P26MWMeta7isValidEv() called");
    return 0;
}

/* Demangled: RAW16NodeImp::getImageBufferAndLock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp21getImageBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_16IImageStreamInfoEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEEi(void) {
    ALOGD("_ZN12RAW16NodeImp21getImageBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_16IImageStreamInfoEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::getOpenId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5NSCam2v38BaseNode9getOpenIdEv(void) {
    ALOGD("_ZTv0_n32_NK5NSCam2v38BaseNode9getOpenIdEv() called");
    return 0;
}

/* Demangled: RAW16NodeImp::unpackRaw10(android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp11unpackRaw10ERN7android2spIN5NSCam12IImageBufferEEES5_(void) {
    ALOGD("_ZN12RAW16NodeImp11unpackRaw10ERN7android2spIN5NSCam12IImageBufferEEES5_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::processTSQ(android::sp<P2::P2Request> const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10processTSQERKN7android2spINS_9P2RequestEEEl(void) {
    ALOGD("_ZN2P218StreamingProcessor10processTSQERKN7android2spINS_9P2RequestEEEl() called");
    return 0;
}

/* Demangled: P2::MWImg::getStreamID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg11getStreamIDEv(void) {
    ALOGD("_ZNK2P25MWImg11getStreamIDEv() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::addP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > >&, long const&, P2::IO_DIR) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE(void) {
    ALOGD("_ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE() called");
    return 0;
}

/* Demangled: P2::P2Util::xmakeQParams(NSCam::Feature::P2Util::P2Pack const&, P2::P2Util::SimpleIO const&, NS3Av3::TuningParam const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util12xmakeQParamsERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOERKN6NS3Av311TuningParamERKNS3_8P2ObjPtrE(void) {
    ALOGD("_ZN2P26P2Util12xmakeQParamsERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOERKN6NS3Av311TuningParamERKNS3_8P2ObjPtrE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImpC1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImpC1Ev() called");
    return 0;
}

/* Demangled: Request::isInMetaStream(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7Request14isInMetaStreamEl(void) {
    ALOGD("_ZNK7Request14isInMetaStreamEl() called");
    return 0;
}

/* Exported Object: vtable for JpegBufPool */
extern "C" __attribute__((visibility("default"))) void* _ZTV11JpegBufPool = NULL;

/* Demangled: PDENodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::MWInfo::print(NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo5printERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P26MWInfo5printERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::MWFrame::getMWFrameRequestID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame19getMWFrameRequestIDEv(void) {
    ALOGD("_ZNK2P27MWFrame19getMWFrameRequestIDEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::acceptRequest(android::sp<NSCam::v3::IPipelineFrame>, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp13acceptRequestEN7android2spINS0_14IPipelineFrameEEERj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp13acceptRequestEN7android2spINS0_14IPipelineFrameEEERj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::JpgPack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v37JpgPackE = NULL;

/* Demangled: P2::BasicProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8onUninitEv(void) {
    ALOGD("_ZN2P214BasicProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for P2::P2BufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P214P2BufferHandleE = NULL;

/* Demangled: P2::toIImageBufferPtr(android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P217toIImageBufferPtrERKN7android2spINS_5P2ImgEEE(void) {
    ALOGD("_ZN2P217toIImageBufferPtrERKN7android2spINS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: std::__1::deque<P2::MDPParam, std::__1::allocator<P2::MDPParam> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor8onUninitEv(void) {
    ALOGD("_ZN2P217DispatchProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: P2::MWMeta::getEntry(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWMeta8getEntryEj(void) {
    ALOGD("_ZNK2P26MWMeta8getEntryEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_IMG> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: isTrace1On_StreamingNode()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ24isTrace1On_StreamingNodevE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateAppMeta(NSCam::v3::NSP1Node::P1QueAct&, NS3Av3::MetaSet_T const&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NSCam::IMetadata&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15generateAppMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9IMetadataEj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15generateAppMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9IMetadataEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp(NSCam::IImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: P2::MWInfo::hasImg(P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo6hasImgENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P26MWInfo6hasImgENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(NSCam::Feature::ILog const&, android::sp<P2::IP2Frame> const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::P2InIDMap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC2ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE(void) {
    ALOGD("_ZN2P29P2RequestC2ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImpC2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImpC2Ev() called");
    return 0;
}

/* Demangled: P2::P2ConfigParam::P2ConfigParam() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2ConfigParamC1Ev(void) {
    ALOGD("_ZN2P213P2ConfigParamC1Ev() called");
    return 0;
}

/* Demangled: std::__1::map<long, P2::MWFrame::ReleaseToken::MWStream, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, P2::MWFrame::ReleaseToken::MWStream> > >::operator[](long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIlN2P27MWFrame12ReleaseToken8MWStreamENS_4lessIlEENS_9allocatorINS_4pairIKlS4_EEEEEixERS9_(void) {
    ALOGD("_ZNSt3__13mapIlN2P27MWFrame12ReleaseToken8MWStreamENS_4lessIlEENS_9allocatorINS_4pairIKlS4_EEEEEixERS9_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::setMemo(NSCam::v3::NSP1Node::LogInfo::CheckPoint, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo7setMemoENS2_10CheckPointEllll(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo7setMemoENS2_10CheckPointEllll() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::P2Payload::~P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214BasicProcessor9P2PayloadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P214BasicProcessor9P2PayloadD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N2P212MDPProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZTv0_n80_N2P212MDPProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::ConcurrenceControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node18ConcurrenceControlE = NULL;

/* Demangled: NSCam::v3::NSP1Node::FrameNote::get(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9FrameNote3getEPN7android7String8E(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9FrameNote3getEPN7android7String8E() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::updateMetaSet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct13updateMetaSetEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct13updateMetaSetEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::setEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE9setEnableEi(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE9setEnableEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::getResizeMaxRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node17getResizeMaxRatioEj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node17getResizeMaxRatioEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::sendActQueue(NSCam::v3::NSP1Node::P1QueAct&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr12sendActQueueERNS1_8P1QueActEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr12sendActQueueERNS1_8P1QueActEi() called");
    return 0;
}

/* Exported Object: VTT for P2::BasicProcessor::P2Payload */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P214BasicProcessor9P2PayloadE = NULL;

/* Demangled: P2::CaptureProcessor::onGetStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor11onGetStatusEv(void) {
    ALOGD("_ZN2P216CaptureProcessor11onGetStatusEv() called");
    return 0;
}

/* Demangled: P2::P2ConfigParam::P2ConfigParam() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2ConfigParamC2Ev(void) {
    ALOGD("_ZN2P213P2ConfigParamC2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::getReleaseToken() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame15getReleaseTokenEv(void) {
    ALOGD("_ZN2P27MWFrame15getReleaseTokenEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12onThreadStopEv(void) {
    ALOGD("_ZN2P214BasicProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::P2Payload::~P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214BasicProcessor9P2PayloadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P214BasicProcessor9P2PayloadD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_ReleaseBundle()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P224isTrace1On_ReleaseBundleEvE6sTrace = NULL;

/* Demangled: P2::P2FrameHolder::P2FrameHolder(android::sp<P2::IP2Frame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolderC1ERKN7android2spINS_8IP2FrameEEE(void) {
    ALOGD("_ZN2P213P2FrameHolderC1ERKN7android2spINS_8IP2FrameEEE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::waitEnqueParam(android::sp<P2::P2FrameRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread14waitEnqueParamERS6_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread14waitEnqueParamERS6_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::processP2CB(NSCam::NSIoPipe::QParams const&, P2::BasicProcessor::P2Cookie*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor11processP2CBERKN5NSCam8NSIoPipe7QParamsEPNS0_8P2CookieE(void) {
    ALOGD("_ZN2P214BasicProcessor11processP2CBERKN5NSCam8NSIoPipe7QParamsEPNS0_8P2CookieE() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_DispatchProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P228isTrace1On_DispatchProcessorEvE6sTrace = NULL;

/* Demangled: P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPluginD0Ev(void) {
    ALOGD("_ZN2P212P2DumpPluginD0Ev() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onEnque(P2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor7onEnqueERKNS_8MDPParamE(void) {
    ALOGD("_ZN2P212MDPProcessor7onEnqueERKNS_8MDPParamE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE(void) {
    ALOGD("_ZThn40_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor11onWaitFlushEv(void) {
    ALOGD("_ZN2P216CaptureProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: P2::MWInfo::getCustomOption() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo15getCustomOptionEv(void) {
    ALOGD("_ZNK2P26MWInfo15getCustomOptionEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::registerPlugin(std::__1::list<android::sp<P2::P2ImgPlugin>, std::__1::allocator<android::sp<P2::P2ImgPlugin> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE(void) {
    ALOGD("_ZTv0_n64_N2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::parseConfigParam(NSCam::v3::P2StreamingNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp16parseConfigParamERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp16parseConfigParamERKN5NSCam2v315P2StreamingNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::ReleaseToken(NSCam::Feature::ILog const&, android::String8 const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseTokenC2ERKN5NSCam7Feature4ILogERKN7android7String8ERKl(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseTokenC2ERKN5NSCam7Feature4ILogERKN7android7String8ERKl() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_P2BufferHandle()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P225isTrace1On_P2BufferHandleEvE6sTrace = NULL;

/* Demangled: P2::StreamingProcessor::prepareEIS(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor10prepareEISERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor10prepareEISERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::init3A() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor6init3AEv(void) {
    ALOGD("_ZN2P214BasicProcessor6init3AEv() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPluginD1Ev(void) {
    ALOGD("_ZN2P212P2DumpPluginD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::~MWFrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequestD0Ev(void) {
    ALOGD("_ZN2P214MWFrameRequestD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Meta::getMetaInfo(P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Meta11getMetaInfoENS_7ID_METAE(void) {
    ALOGD("_ZN2P26P2Meta11getMetaInfoENS_7ID_METAE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::dumpActQueue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr12dumpActQueueEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr12dumpActQueueEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to RAW16NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZThn40_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9threshold = NULL;

/* Demangled: P2::StreamingProcessor::onFPipeCB(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam::MSG_TYPE, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor9onFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_RKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor9onFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_RKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Exported Object: vtable for P2::BasicProcessor::P2Payload */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P214BasicProcessor9P2PayloadE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Exported Object: vtable for P2::P2Cropper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29P2CropperE = NULL;

/* Demangled: NSCam::v3::P2StreamingNode::createInstance(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315P2StreamingNode14createInstanceENS1_10ePass2TypeENS0_8P2Common9UsageHintE(void) {
    ALOGD("_ZN5NSCam2v315P2StreamingNode14createInstanceENS1_10ePass2TypeENS0_8P2Common9UsageHintE() called");
    return 0;
}

/* Demangled: P2::P2Request::updateDummyAppResult(P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request20updateDummyAppResultENS_7ID_METAE(void) {
    ALOGD("_ZN2P29P2Request20updateDummyAppResultENS_7ID_METAE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void) {
    ALOGD("_ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD0Ev() called");
    return 0;
}

/* Exported Object: VTT for RAW16NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTT12RAW16NodeImp = NULL;

/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*> >::push_back(P2::SMVRQueue::SMVRData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n128_N2P216P2CaptureNodeImp9getStatusEv(void) {
    ALOGD("_ZTv0_n128_N2P216P2CaptureNodeImp9getStatusEv() called");
    return 0;
}

/* Demangled: Request::getInImageBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::v3::IImageStreamInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request16getInImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_INS3_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN7Request16getInImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_INS3_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Payload::P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadC1Ev(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadC1Ev() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPluginD2Ev(void) {
    ALOGD("_ZN2P212P2DumpPluginD2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::~MWFrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequestD1Ev(void) {
    ALOGD("_ZN2P214MWFrameRequestD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P216CaptureProcessor8onUninitEv(void) {
    ALOGD("_ZTv0_n40_N2P216CaptureProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getLMVInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper10getLMVInfoEv(void) {
    ALOGD("_ZNK2P29P2Cropper10getLMVInfoEv() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::onPlugin(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE(void) {
    ALOGD("_ZN2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::SimpleOut(unsigned int, android::sp<P2::P2Request>, android::sp<P2::P2Img>&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util9SimpleOutC1EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE(void) {
    ALOGD("_ZN2P26P2Util9SimpleOutC1EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::isSubPixelEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor17isSubPixelEnabledEv(void) {
    ALOGD("_ZNK2P218StreamingProcessor17isSubPixelEnabledEv() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::toP2Type(NSCam::v3::P2CaptureNode::ePass2Type) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P216P2CaptureNodeImp8toP2TypeEN5NSCam2v313P2CaptureNode10ePass2TypeE(void) {
    ALOGD("_ZNK2P216P2CaptureNodeImp8toP2TypeEN5NSCam2v313P2CaptureNode10ePass2TypeE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::BaseNode-in-P2::P2CaptureNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P216P2CaptureNodeImpE512_N5NSCam2v38BaseNodeE = NULL;

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkSkipSync() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipSyncEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipSyncEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrame::beginBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P27MWFrame17beginBatchReleaseEv(void) {
    ALOGD("_ZTv0_n40_N2P27MWFrame17beginBatchReleaseEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::getNodeName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK5NSCam2v38BaseNode11getNodeNameEv(void) {
    ALOGD("_ZTv0_n48_NK5NSCam2v38BaseNode11getNodeNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameMetadataGet(NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataGetENS1_11STREAM_METAEPNS_9IMetadataEiS5_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataGetENS1_11STREAM_METAEPNS_9IMetadataEiS5_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::isEISAppOn() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper10isEISAppOnEv(void) {
    ALOGD("_ZNK2P29P2Cropper10isEISAppOnEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1NodeAct>::operator=(android::sp<NSCam::v3::NSP1Node::P1NodeAct>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSEOS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSEOS5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void) {
    ALOGD("_ZThn48_N5NSCam2v38NSP1Node9P1NodeImpD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: P2::P2Cropper::~P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperD0Ev(void) {
    ALOGD("_ZN2P29P2CropperD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::~DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P217DispatchProcessorD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P217DispatchProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::MWMeta::detach() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMeta6detachEv(void) {
    ALOGD("_ZN2P26MWMeta6detachEv() called");
    return 0;
}

/* Demangled: P2::P2MetaSet::P2MetaSet() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2MetaSetC1Ev(void) {
    ALOGD("_ZN2P29P2MetaSetC1Ev() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::hasCropRatio() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn12hasCropRatioEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn12hasCropRatioEv() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::onEarlyCallback(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode15onEarlyCallbackERKN7android2spINS0_14IPipelineFrameEEElRKNS_9IMetadataEi(void) {
    ALOGD("_ZN5NSCam2v38BaseNode15onEarlyCallbackERKN7android2spINS0_14IPipelineFrameEEElRKNS_9IMetadataEi() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Payload::P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadC2Ev(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadC2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::~MWFrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequestD2Ev(void) {
    ALOGD("_ZN2P214MWFrameRequestD2Ev() called");
    return 0;
}

/* Demangled: P2::P2FrameHolder::beginBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolder17beginBatchReleaseEv(void) {
    ALOGD("_ZN2P213P2FrameHolder17beginBatchReleaseEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::checkFeaturePipeParamValid(android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor26checkFeaturePipeParamValidERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor26checkFeaturePipeParamValidERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::syncHelperStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14syncHelperStopEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14syncHelperStopEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::read(NSCam::v3::NSP1Node::LogInfo::CheckPoint, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo4readENS2_10CheckPointEPN7android7String8E(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo4readENS2_10CheckPointEPN7android7String8E() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::enque(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE5enqueERKS6_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE5enqueERKS6_() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEEC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEEC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareSMVRQueue(NSCam::Feature::ILog const&, P2::P2Util::SimpleIn const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor16prepareSMVRQueueERKN5NSCam7Feature4ILogERKNS_6P2Util8SimpleInEj(void) {
    ALOGD("_ZN2P218StreamingProcessor16prepareSMVRQueueERKN5NSCam7Feature4ILogERKNS_6P2Util8SimpleInEj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P212P2DumpPluginD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P212P2DumpPluginD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::isDisplay() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n128_NK2P25MWImg9isDisplayEv(void) {
    ALOGD("_ZTv0_n128_NK2P25MWImg9isDisplayEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::isCapture() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n144_NK2P25MWImg9isCaptureEv(void) {
    ALOGD("_ZTv0_n144_NK2P25MWImg9isCaptureEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::sFPipeCB(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam::MSG_TYPE, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor8sFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_(void) {
    ALOGD("_ZN2P218StreamingProcessor8sFPipeCBEN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParam8MSG_TYPEERS4_() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Cookie* P2::BasicProcessor::createCookie<android::sp<P2::BasicProcessor::P2Payload> >(NSCam::Feature::ILog const&, android::sp<P2::BasicProcessor::P2Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12createCookieIN7android2spINS0_9P2PayloadEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_(void) {
    ALOGD("_ZN2P214BasicProcessor12createCookieIN7android2spINS0_9P2PayloadEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::getNumDisplay() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13P2RequestPack13getNumDisplayEv(void) {
    ALOGD("_ZNK2P218StreamingProcessor13P2RequestPack13getNumDisplayEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::waitReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9waitReadyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16TimingCheckerMgr9waitReadyEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1ConnectLMV>::operator=(NSCam::v3::NSP1Node::P1ConnectLMV*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node12P1ConnectLMVEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node12P1ConnectLMVEEaSEPS4_() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (JpegNodeImp::*)(android::sp<encode_frame>&), JpegNodeImp*, std::__1::reference_wrapper<android::sp<encode_frame> > > >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEM11JpegNodeImpFvRN7android2spI12encode_frameEEEPS7_NS_17reference_wrapperISB_EEEEEEEPvSJ_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEM11JpegNodeImpFvRN7android2spI12encode_frameEEEPS7_NS_17reference_wrapperISB_EEEEEEEPvSJ_() called");
    return 0;
}

/* Demangled: P2::P2Cropper::~P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperD1Ev(void) {
    ALOGD("_ZN2P29P2CropperD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::~DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P217DispatchProcessorD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P217DispatchProcessorD1Ev() called");
    return 0;
}

/* Demangled: P2::P2MetaSet::P2MetaSet() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2MetaSetC2Ev(void) {
    ALOGD("_ZN2P29P2MetaSetC2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1QueAct */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node8P1QueActE = NULL;

/* Demangled: P2::BasicProcessor::P2Cookie::~P2Cookie() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2CookieD1Ev(void) {
    ALOGD("_ZN2P214BasicProcessor8P2CookieD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_MWFrameRequest()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_MWFrameRequestvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::StuffBufferManager::releaseStoreBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18StuffBufferManager18releaseStoreBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18StuffBufferManager18releaseStoreBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: isTrace1On_ScanlinePlugin()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_ScanlinePluginvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::mapFrameStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct14mapFrameStreamEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct14mapFrameStreamEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P212P2DumpPluginD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P212P2DumpPluginD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::notifyNextCapture(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame17notifyNextCaptureEii(void) {
    ALOGD("_ZN2P27MWFrame17notifyNextCaptureEii() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getCurrentBinSize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17getCurrentBinSizeEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17getCurrentBinSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::~CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P216CaptureProcessorD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P216CaptureProcessorD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor13onThreadStartEv(void) {
    ALOGD("_ZN2P216CaptureProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::~P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperD2Ev(void) {
    ALOGD("_ZN2P29P2CropperD2Ev() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Cookie::~P2Cookie() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2CookieD2Ev(void) {
    ALOGD("_ZN2P214BasicProcessor8P2CookieD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZTv0_n64_N2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Exported Object: VTT for P2::P2ScanlinePlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P216P2ScanlinePluginE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateHalMeta(NSCam::v3::NSP1Node::P1QueAct&, NS3Av3::MetaSet_T const&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NSCam::IMetadata const&, NSCam::IMetadata const&, NSCam::IMetadata&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15generateHalMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKNS_9IMetadataESG_RSE_j(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15generateHalMetaERNS1_8P1QueActERKN6NS3Av39MetaSet_TERKNS_8NSIoPipe11NSCamIOPipe8QBufInfoERKNS_9IMetadataESG_RSE_j() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessorC1Ev(void) {
    ALOGD("_ZN2P217DispatchProcessorC1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, P2::ID_META>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_META>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_META> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::isBatchSMVR() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor11isBatchSMVREv(void) {
    ALOGD("_ZNK2P218StreamingProcessor11isBatchSMVREv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: JpegNodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp6uninitEv(void) {
    ALOGD("_ZN11JpegNodeImp6uninitEv() called");
    return 0;
}

/* Demangled: P2::P2Util::xmakeTuning(NSCam::Feature::P2Util::P2Pack const&, P2::P2Util::SimpleIO const&, NS3Av3::IHalISP*, P2::P2MetaSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util11xmakeTuningERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOEPN6NS3Av37IHalISPERNS_9P2MetaSetE(void) {
    ALOGD("_ZN2P26P2Util11xmakeTuningERKN5NSCam7Feature6P2Util6P2PackERKNS0_8SimpleIOEPN6NS3Av37IHalISPERNS_9P2MetaSetE() called");
    return 0;
}

/* Demangled: P2::MWInfo::toImgID(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo7toImgIDEl(void) {
    ALOGD("_ZNK2P26MWInfo7toImgIDEl() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P26MWMetaD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P26MWMetaD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setPowerNotify(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14setPowerNotifyEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14setPowerNotifyEi() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::~CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P216CaptureProcessorD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P216CaptureProcessorD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::LogInfo::Data */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node7LogInfo4DataE = NULL;

/* Demangled: P2::MWInfo::initMetaInfo(P2::ID_META, android::sp<NSCam::v3::IMetaStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android2spIN5NSCam2v315IMetaStreamInfoEEE(void) {
    ALOGD("_ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android2spIN5NSCam2v315IMetaStreamInfoEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::StuffBufferManager::collectBufferInfo(unsigned int, int, int, NSCam::MSize, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18StuffBufferManager17collectBufferInfoEjiiNS_5MSizeERNSt3__16vectorIjNS4_9allocatorIjEEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18StuffBufferManager17collectBufferInfoEjiiNS_5MSizeERNSt3__16vectorIjNS4_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor12onThreadStopEv(void) {
    ALOGD("_ZN2P217DispatchProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: P2::DispatchProcessor::DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessorC2Ev(void) {
    ALOGD("_ZN2P217DispatchProcessorC2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::getNodeName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK2P218P2StreamingNodeImp11getNodeNameEv(void) {
    ALOGD("_ZTv0_n48_NK2P218P2StreamingNodeImp11getNodeNameEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1NodeAct>::operator=(android::sp<NSCam::v3::NSP1Node::P1NodeAct> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSERKS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEaSERKS5_() called");
    return 0;
}

/* Demangled: JpegNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P26MWMetaD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P26MWMetaD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29P2RequestD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P29P2RequestD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Exported Object: P2::P2InIDMap::SubMeta */
extern "C" __attribute__((visibility("default"))) void* _ZN2P29P2InIDMap7SubMetaE = NULL;

/* Demangled: P2::StreamingProcessor::Payload::Payload(P2::StreamingProcessor*, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7PayloadC1EPS0_RKN5NSCam7Feature4ILogEj(void) {
    ALOGD("_ZN2P218StreamingProcessor7PayloadC1EPS0_RKN5NSCam7Feature4ILogEj() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE14__assign_multiINS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEEEEvT_SS_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE14__assign_multiINS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEEEEvT_SS_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessEnqueFrame(NSCam::v3::NSP1Node::P1QueJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessEnqueFrameERNS1_8P1QueJobE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessEnqueFrameERNS1_8P1QueJobE() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::getNodeId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218P2StreamingNodeImp9getNodeIdEv(void) {
    ALOGD("_ZNK2P218P2StreamingNodeImp9getNodeIdEv() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::SMVRData::SMVRData() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue8SMVRDataC1Ev(void) {
    ALOGD("_ZN2P29SMVRQueue8SMVRDataC1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelper>::operator=(android::sp<NSCam::v3::Utils::Imp::ISyncHelper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSERKS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSERKS6_() called");
    return 0;
}

/* Demangled: non-virtual thunk to RAW16NodeImp::config(NSCam::v3::RAW16Node::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE(void) {
    ALOGD("_ZThn40_N12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::MWImg::updateVRTimestamp(unsigned int, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImg17updateVRTimestampEjRKl(void) {
    ALOGD("_ZN2P25MWImg17updateVRTimestampEjRKl() called");
    return 0;
}

/* Demangled: P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrameD0Ev(void) {
    ALOGD("_ZN2P27MWFrameD0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::getMWFrameID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame12getMWFrameIDEv(void) {
    ALOGD("_ZNK2P27MWFrame12getMWFrameIDEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::BaseNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38BaseNodeE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::checkConstraint() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15checkConstraintEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15checkConstraintEv() called");
    return 0;
}

/* Demangled: Request::acquireImageBuffer(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IImageStreamBuffer>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request18acquireImageBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_18IImageStreamBufferEEEi(void) {
    ALOGD("_ZN7Request18acquireImageBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_18IImageStreamBufferEEEi() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZN2P216CaptureProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Demangled: P2::P2Request::isValidMeta(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request11isValidMetaENS_7ID_METAE(void) {
    ALOGD("_ZNK2P29P2Request11isValidMetaENS_7ID_METAE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29P2RequestD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P29P2RequestD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_VRGralloc()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20isTrace1On_VRGrallocvE4sVal = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureRequestCallback::onCompleted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi(void) {
    ALOGD("_ZTv0_n56_N2P222CaptureRequestCallback11onCompletedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::kick() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode4kickEv(void) {
    ALOGD("_ZN5NSCam2v38BaseNode4kickEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::DurationProfile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v315DurationProfileE = NULL;

/* Demangled: void std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> >::__push_back_slow_path<JpegBufPool::BufLot const&>(JpegBufPool::BufLot const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11JpegBufPool6BufLotENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN11JpegBufPool6BufLotENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-RAW16NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC12RAW16NodeImp0_N5NSCam2v313IPipelineNodeE = NULL;

/* Demangled: P2::P2Request::releaseImageWithLock(P2::ID_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request20releaseImageWithLockENS_6ID_IMGE(void) {
    ALOGD("_ZN2P29P2Request20releaseImageWithLockENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::printIOMap(NSCam::v3::IPipelineFrame::InfoIOMapSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest10printIOMapERKN5NSCam2v314IPipelineFrame12InfoIOMapSetE(void) {
    ALOGD("_ZN2P214MWFrameRequest10printIOMapERKN5NSCam2v314IPipelineFrame12InfoIOMapSetE() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::SMVRData::SMVRData() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue8SMVRDataC2Ev(void) {
    ALOGD("_ZN2P29SMVRQueue8SMVRDataC2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::updateRSSO(NSCam::Feature::ILog const&, android::sp<P2::P2Img> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10updateRSSOERKN5NSCam7Feature4ILogERKN7android2spINS_5P2ImgEEEj(void) {
    ALOGD("_ZN2P218StreamingProcessor10updateRSSOERKN5NSCam7Feature4ILogERKN7android2spINS_5P2ImgEEEj() called");
    return 0;
}

/* Exported Object: VTT for P2::P2MetadataHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P216P2MetadataHandleE = NULL;

/* Demangled: P2::BasicProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor11onWaitFlushEv(void) {
    ALOGD("_ZN2P214BasicProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::p2CB(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor4p2CBERN5NSCam8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN2P214BasicProcessor4p2CBERN5NSCam8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrameD1Ev(void) {
    ALOGD("_ZN2P27MWFrameD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrameRequest::~MWFrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214MWFrameRequestD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P214MWFrameRequestD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkThreadStandby() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl18checkThreadStandbyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl18checkThreadStandbyEv() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N10PDENodeImp6uninitEv(void) {
    ALOGD("_ZTv0_n72_N10PDENodeImp6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for P2::StreamingProcessor::PartialPayload */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P218StreamingProcessor14PartialPayloadE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: non-virtual thunk to JpegNodeImp::config(NSCam::v3::JpegNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE(void) {
    ALOGD("_ZThn40_N11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P214BasicProcessor13onThreadStartEv(void) {
    ALOGD("_ZTv0_n48_N2P214BasicProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::setAidUsage(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl11setAidUsageEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl11setAidUsageEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::findPortBufIndex(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::v3::NSP1Node::P1QueJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp16findPortBufIndexERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS1_8P1QueJobE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp16findPortBufIndexERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERNS1_8P1QueJobE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZN2P217DispatchProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Exported Object: VTT for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE = NULL;

/* Demangled: P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrameD2Ev(void) {
    ALOGD("_ZN2P27MWFrameD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrameRequest::~MWFrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214MWFrameRequestD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P214MWFrameRequestD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<P2::P2FrameRequest>, std::__1::allocator<android::sp<P2::P2FrameRequest> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE5clearEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getFeatureUsageHint(NSCam::Feature::P2Util::P2ConfigInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor19getFeatureUsageHintERKN5NSCam7Feature6P2Util12P2ConfigInfoE(void) {
    ALOGD("_ZN2P218StreamingProcessor19getFeatureUsageHintERKN5NSCam7Feature6P2Util12P2ConfigInfoE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::setDropNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl10setDropNumEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl10setDropNumEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*> >::push_front(P2::MDPParam*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*> >::push_back(P2::MDPParam*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P28MDPParamENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImpD0Ev(void) {
    ALOGD("_ZN2P218P2StreamingNodeImpD0Ev() called");
    return 0;
}

/* Exported Object: P2::P2InIDMap::MainMeta */
extern "C" __attribute__((visibility("default"))) void* _ZN2P29P2InIDMap8MainMetaE = NULL;

/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, android::sp<P2::IP2Frame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC2ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE(void) {
    ALOGD("_ZN2P29P2RequestC2ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZTv0_n64_N2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__push_back_slow_path<NSCam::NSIoPipe::PortID const&>(NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::doWaitReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker11doWaitReadyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker11doWaitReadyEv() called");
    return 0;
}

/* Demangled: P2::P2Request::updateResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request12updateResultEi(void) {
    ALOGD("_ZN2P29P2Request12updateResultEi() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::makeRequestPacks(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&, std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor16makeRequestPacksERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor16makeRequestPacksERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::getInputSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn12getInputSizeEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn12getInputSizeEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::isResized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO9isResizedEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO9isResizedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::createClient(char const*, unsigned int, NSCam::v3::NSP1Node::TimingChecker::EVENT_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr12createClientEPKcjNS1_13TimingChecker10EVENT_TYPEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16TimingCheckerMgr12createClientEPKcjNS1_13TimingChecker10EVENT_TYPEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > > >::__emplace_unique_key_args<long, std::__1::pair<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > >(long const&, std::__1::pair<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor12onThreadStopEv(void) {
    ALOGD("_ZN2P218StreamingProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBufferHeap>::operator=(NSCam::IImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IImageBufferHeapEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IImageBufferHeapEEaSEPS2_() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Streaming_FSC()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24isTrace1On_Streaming_FSCvE6sTrace = NULL;

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::MRectF> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_6MRectFEEE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onEvtCtrlReleasing(NSCam::v3::NSP1Node::P1NodeImp*, NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)2>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlReleasingEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE2EEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18onEvtCtrlReleasingEPS2_RNS_8NSIoPipe17StrictIoPipeEventILNS4_13IoPipeEventIdE2EEE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor13onThreadStartEv(void) {
    ALOGD("_ZN2P214BasicProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImpD1Ev(void) {
    ALOGD("_ZN2P218P2StreamingNodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::SimpleIn(unsigned int, android::sp<P2::P2Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleInC1EjN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P26P2Util8SimpleInC1EjN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Exported Object: vtable for P2::StreamingProcessor::Payload */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P218StreamingProcessor7PayloadE = NULL;

/* Exported Object: vtable for RAW16NodeImp::UnpackThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN12RAW16NodeImp12UnpackThreadE = NULL;

/* Demangled: P2::P2Request::updateMetaResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request16updateMetaResultEi(void) {
    ALOGD("_ZN2P29P2Request16updateMetaResultEi() called");
    return 0;
}

/* Demangled: P2::P2Cropper::toActive(NSCam::NSIoPipe::MCropRect const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper8toActiveERKN5NSCam8NSIoPipe9MCropRectEi(void) {
    ALOGD("_ZNK2P29P2Cropper8toActiveERKN5NSCam8NSIoPipe9MCropRectEi() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::~StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessorD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessorD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onIdle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N2P218StreamingProcessor6onIdleEv(void) {
    ALOGD("_ZTv0_n96_N2P218StreamingProcessor6onIdleEv() called");
    return 0;
}

/* Exported Object: isTrace1On_Processor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ20isTrace1On_ProcessorvE4sVal = NULL;

/* Demangled: P2::MWInfo::supportDRE() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo10supportDREEv(void) {
    ALOGD("_ZNK2P26MWInfo10supportDREEv() called");
    return 0;
}

/* Exported Object: VTT for P2::P2Img */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P25P2ImgE = NULL;

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::eventStreamingOn() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp16eventStreamingOnEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp16eventStreamingOnEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::~P1NodeAct() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeActD0Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeActD0Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for P2::P2ImgPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P211P2ImgPluginE = NULL;

/* Demangled: P2::P2FrameHolder::P2FrameHolder(android::sp<P2::IP2Frame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolderC2ERKN7android2spINS_8IP2FrameEEE(void) {
    ALOGD("_ZN2P213P2FrameHolderC2ERKN7android2spINS_8IP2FrameEEE() called");
    return 0;
}

/* Demangled: P2::P2Img::getTransformSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img16getTransformSizeEv(void) {
    ALOGD("_ZNK2P25P2Img16getTransformSizeEv() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImpD2Ev(void) {
    ALOGD("_ZN2P218P2StreamingNodeImpD2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareEISMask(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor14prepareEISMaskERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void) {
    ALOGD("_ZNK2P218StreamingProcessor14prepareEISMaskERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::SimpleIn(unsigned int, android::sp<P2::P2Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleInC2EjN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P26P2Util8SimpleInC2EjN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImpD0Ev(void) {
    ALOGD("_ZN2P216P2CaptureNodeImpD0Ev() called");
    return 0;
}

/* Demangled: JpegNodeImp::getBufferAndLock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBufferHeap>&, android::sp<NSCam::IImageBuffer>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp16getBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_16IImageBufferHeapEEERNS1_INS2_12IImageBufferEEEi(void) {
    ALOGD("_ZN11JpegNodeImp16getBufferAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_16IImageBufferHeapEEERNS1_INS2_12IImageBufferEEEi() called");
    return 0;
}

/* Demangled: P2::MWInfo::initImgInfo(P2::ID_IMG, android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android2spIN5NSCam2v316IImageStreamInfoEEE(void) {
    ALOGD("_ZN2P26MWInfo11initImgInfoENS_6ID_IMGERKN7android2spIN5NSCam2v316IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::findP2Meta(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214MWFrameRequest10findP2MetaENS_7ID_METAE(void) {
    ALOGD("_ZNK2P214MWFrameRequest10findP2MetaENS_7ID_METAE() called");
    return 0;
}

/* Exported Object: isTrace1On_StreamingNode()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ24isTrace1On_StreamingNodevE4sVal = NULL;

/* Demangled: virtual thunk to P2::StreamingProcessor::~StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessorD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessorD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P216P2CaptureNodeImp5flushEv(void) {
    ALOGD("_ZTv0_n88_N2P216P2CaptureNodeImp5flushEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_META, P2::ID_META, std::__1::hash<P2::ID_META>, std::__1::equal_to<P2::ID_META>, std::__1::allocator<std::__1::pair<P2::ID_META const, P2::ID_META> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P27ID_METAES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_CaptureProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P227isTrace1On_CaptureProcessorEvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::requireJob(NSCam::v3::NSP1Node::P1QueJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector10requireJobERNS1_8P1QueJobE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector10requireJobERNS1_8P1QueJobE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::~P1NodeAct() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeActD1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeActD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkReceiveFrame(NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl17checkReceiveFrameEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl17checkReceiveFrameEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE200_NS5_6ThreadE = NULL;

/* Exported Object: isTrace1On_Streaming_EIS()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ24isTrace1On_Streaming_EISvE6sTrace = NULL;

/* Demangled: P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImpD1Ev(void) {
    ALOGD("_ZN2P216P2CaptureNodeImpD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataProvider>::sp(NSCam::IMetadataProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::ProcedureStageControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node21ProcedureStageControlE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::ProcessThread(P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadC1EPS7_i(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadC1EPS7_i() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__push_back_slow_path<android::sp<NSCam::IImageBuffer> >(android::sp<NSCam::IImageBuffer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::prepareFrameRequest(NSCam::Feature::ILog const&, android::sp<P2::P2FrameRequest>&, android::sp<P2::MWFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp19prepareFrameRequestERKN5NSCam7Feature4ILogERN7android2spINS_14P2FrameRequestEEERKNS7_INS_7MWFrameEEE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp19prepareFrameRequestERKN5NSCam7Feature4ILogERN7android2spINS_14P2FrameRequestEEERKNS7_INS_7MWFrameEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: PDENodeImp::PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImpC1Ev(void) {
    ALOGD("_ZN10PDENodeImpC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<P2::MDPParam, std::__1::allocator<P2::MDPParam> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN2P28MDPParamENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN2P28MDPParamENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >::__push_back_slow_path<android::sp<P2::BasicProcessor::P2Payload> const&>(android::sp<P2::BasicProcessor::P2Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P214BasicProcessor9P2PayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P214BasicProcessor9P2PayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::detach() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n168_N2P25MWImg6detachEv(void) {
    ALOGD("_ZTv0_n168_N2P25MWImg6detachEv() called");
    return 0;
}

/* Exported Object: construction vtable for P2::P2ImgPlugin-in-P2::P2ScanlinePlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P216P2ScanlinePluginE0_NS_11P2ImgPluginE = NULL;

/* Demangled: Request::lockOutImg() */
extern "C" __attribute__((visibility("default"))) int _ZN7Request10lockOutImgEv(void) {
    ALOGD("_ZN7Request10lockOutImgEv() called");
    return 0;
}

/* Exported Object: VTT for P2::StreamingProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P218StreamingProcessorE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::~P1NodeAct() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeActD2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeActD2Ev() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::abortRequest(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor12abortRequestEi(void) {
    ALOGD("_ZN2P216CaptureProcessor12abortRequestEi() called");
    return 0;
}

/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZN2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC2ERKN7android2spIS0_EE(void) {
    ALOGD("_ZN2P29P2RequestC2ERKN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::releaseMeta(android::sp<P2::P2Request>, P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor11releaseMetaEN7android2spINS_9P2RequestEEENS_7ID_METAE(void) {
    ALOGD("_ZN2P216CaptureProcessor11releaseMetaEN7android2spINS_9P2RequestEEENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::registerStream(long const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseToken14registerStreamERKlRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseToken14registerStreamERKlRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImpD2Ev(void) {
    ALOGD("_ZN2P216P2CaptureNodeImpD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::config(NSCam::v3::P2StreamingNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n152_N2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void) {
    ALOGD("_ZTv0_n152_N2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NotifyYuvR1Crop */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node17P1NotifyYuvR1CropE = NULL;

/* Exported Object: VTT for JpegNodeImp::jpeg_frame */
extern "C" __attribute__((visibility("default"))) void* _ZTTN11JpegNodeImp10jpeg_frameE = NULL;

/* Demangled: PDENodeImp::PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImpC2Ev(void) {
    ALOGD("_ZN10PDENodeImpC2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P214BasicProcessor11onWaitFlushEv(void) {
    ALOGD("_ZTv0_n88_N2P214BasicProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > > >::__assign_unique<std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const*>(std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const*, std::__1::pair<int const, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE15__assign_uniqueIPKNS_4pairIKiS9_EEEEvT_SO_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE15__assign_uniqueIPKNS_4pairIKiS9_EEEEvT_SO_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_MWFrame()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ18isTrace1On_MWFramevE6sTrace = NULL;

/* Exported Object: vtable for android::List<android::sp<JpegNodeImp::jpeg_frame> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN11JpegNodeImp10jpeg_frameEEEEE = NULL;

/* Exported Object: P2::isTrace1On_MWImg()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P216isTrace1On_MWImgEvE6sTrace = NULL;

/* Demangled: P2::MWFrameRequest::notifyNextCapture(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest17notifyNextCaptureEii(void) {
    ALOGD("_ZN2P214MWFrameRequest17notifyNextCaptureEii() called");
    return 0;
}

/* Exported Object: isTrace1On_ScanlinePlugin()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_ScanlinePluginvE4sVal = NULL;

/* Demangled: P2::StreamingProcessor::Payload::Payload(P2::StreamingProcessor*, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7PayloadC2EPS0_RKN5NSCam7Feature4ILogEj(void) {
    ALOGD("_ZN2P218StreamingProcessor7PayloadC2EPS0_RKN5NSCam7Feature4ILogEj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::BaseNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38BaseNodeE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::eventStreamingOff() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17eventStreamingOffEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17eventStreamingOffEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::doThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker12doThreadLoopEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker12doThreadLoopEv() called");
    return 0;
}

/* Demangled: int P2::BasicProcessor::processP2<android::sp<P2::BasicProcessor::P2Payload> >(android::sp<P2::BasicProcessor::P2Payload>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9processP2IN7android2spINS0_9P2PayloadEEEEEiT_(void) {
    ALOGD("_ZN2P214BasicProcessor9processP2IN7android2spINS0_9P2PayloadEEEEEiT_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_LMVInfo()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ18isTrace1On_LMVInfovE4sVal = NULL;

/* Demangled: virtual thunk to P2::MDPProcessor::onEnque(P2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P212MDPProcessor7onEnqueERKNS_8MDPParamE(void) {
    ALOGD("_ZTv0_n72_N2P212MDPProcessor7onEnqueERKNS_8MDPParamE() called");
    return 0;
}

/* Exported Object: P2::P2Img::InfoMap */
extern "C" __attribute__((visibility("default"))) void* _ZN2P25P2Img7InfoMapE = NULL;

/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2CaptureNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoC1ERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void) {
    ALOGD("_ZN2P26MWInfoC1ERKN5NSCam2v313P2CaptureNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::getMainRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload14getMainRequestEv(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload14getMainRequestEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadE = NULL;

/* Demangled: virtual thunk to P2::StreamingProcessor::Payload::~Payload() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessor7PayloadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessor7PayloadD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::calculateCropInfoResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect const&, NSCam::MRect&, NSCam::MSize&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node24calculateCropInfoResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node24calculateCropInfoResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i() called");
    return 0;
}

/* Demangled: RAW16NodeImp::returnMetadataAndUnlock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>, NSCam::IMetadata*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp23returnMetadataAndUnlockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi(void) {
    ALOGD("_ZN12RAW16NodeImp23returnMetadataAndUnlockERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::config(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6configERKS2_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6configERKS2_() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::initNormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor16initNormalStreamEv(void) {
    ALOGD("_ZN2P214BasicProcessor16initNormalStreamEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::refineBoundaryF(NSCam::Feature::ILog const&, NSCam::MSizeF const&, NSCam::MRectF&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper15refineBoundaryFERKN5NSCam7Feature4ILogERKNS1_6MSizeFERNS1_6MRectFE(void) {
    ALOGD("_ZNK2P29P2Cropper15refineBoundaryFERKN5NSCam7Feature4ILogERKNS1_6MSizeFERNS1_6MRectFE() called");
    return 0;
}

/* Demangled: P2::P2InIDMap::isEmpty(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2InIDMap7isEmptyEj(void) {
    ALOGD("_ZN2P29P2InIDMap7isEmptyEj() called");
    return 0;
}

/* Demangled: P2::P2ScanlinePlugin::onPlugin(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE(void) {
    ALOGD("_ZN2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: JpegNodeImp::JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImpC1Ev(void) {
    ALOGD("_ZN11JpegNodeImpC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::IHalISP*, std::__1::allocator<NS3Av3::IHalISP*> >::__push_back_slow_path<NS3Av3::IHalISP*>(NS3Av3::IHalISP*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::config(NSCam::v3::JpgPack::ConfigJpgParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPack6configERKNS1_15ConfigJpgParamsE(void) {
    ALOGD("_ZN5NSCam2v37JpgPack6configERKNS1_15ConfigJpgParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::~JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPackD0Ev(void) {
    ALOGD("_ZN5NSCam2v37JpgPackD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::Payload::~Payload() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessor7PayloadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessor7PayloadD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::P2Request::updateMetaSet(P2::P2MetaSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request13updateMetaSetERKNS_9P2MetaSetE(void) {
    ALOGD("_ZN2P29P2Request13updateMetaSetERKNS_9P2MetaSetE() called");
    return 0;
}

/* Demangled: P2::P2Request::detachResourceWithLock(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request22detachResourceWithLockEj(void) {
    ALOGD("_ZN2P29P2Request22detachResourceWithLockEj() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::fillP2Meta(android::sp<P2::P2Request> const&, android::sp<P2::P2Meta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKNS2_INS_6P2MetaEEE(void) {
    ALOGD("_ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKNS2_INS_6P2MetaEEE() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::init(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE4initERKj(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE4initERKj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrame::notifyNextCapture(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P27MWFrame17notifyNextCaptureEii(void) {
    ALOGD("_ZTv0_n56_N2P27MWFrame17notifyNextCaptureEii() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO> > >::__emplace_unique_key_args<P2::ID_META, std::__1::pair<P2::ID_META const, P2::META_INFO> const&>(P2::ID_META const&, std::__1::pair<P2::ID_META const, P2::META_INFO> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode9getStatusEv(void) {
    ALOGD("_ZN5NSCam2v38BaseNode9getStatusEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::SimpleIO() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIOC1Ev(void) {
    ALOGD("_ZN2P26P2Util8SimpleIOC1Ev() called");
    return 0;
}

/* Demangled: P2::MWImg::isDisplay() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg9isDisplayEv(void) {
    ALOGD("_ZNK2P25MWImg9isDisplayEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long, android::sp<P2::P2Img> >, std::__1::__map_value_compare<long, std::__1::__value_type<long, android::sp<P2::P2Img> >, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, android::sp<P2::P2Img> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, android::sp<P2::P2Img> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P25P2ImgEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P25P2ImgEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::processP2(android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor9processP2ERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor9processP2ERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::useLMV() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn6useLMVEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn6useLMVEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::NSCamFeature::NSFeaturePipe::IStreamingFeaturePipe::eAppMode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS0_13NSFeaturePipe21IStreamingFeaturePipe8eAppModeEEE = NULL;

/* Demangled: P2::P2Util::SimpleIO::toP2IOPack() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO10toP2IOPackEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO10toP2IOPackEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImageUninit(NSCam::v3::NSP1Node::STREAM_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct16frameImageUninitENS1_10STREAM_IMGE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct16frameImageUninitENS1_10STREAM_IMGE() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::v3::NSP1Node::StuffBufferPool>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::StuffBufferPool> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE7reserveEm() called");
    return 0;
}

/* Demangled: JpegNodeImp::JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImpC2Ev(void) {
    ALOGD("_ZN11JpegNodeImpC2Ev() called");
    return 0;
}

/* Exported Object: vtable for JpegNodeImp::jpeg_frame */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11JpegNodeImp10jpeg_frameE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyQuality(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify15doNotifyQualityEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify15doNotifyQualityEPvS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::~JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPackD1Ev(void) {
    ALOGD("_ZN5NSCam2v37JpgPackD1Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::threadSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp13threadSettingEv(void) {
    ALOGD("_ZN12RAW16NodeImp13threadSettingEv() called");
    return 0;
}

/* Demangled: RAW16NodeImp::updateDNGMeta(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp13updateDNGMetaERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN12RAW16NodeImp13updateDNGMetaERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImpD0Ev(void) {
    ALOGD("_ZN12RAW16NodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor11onWaitFlushEv(void) {
    ALOGD("_ZN2P217DispatchProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: P2::P2Request::getCropper(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10getCropperEj(void) {
    ALOGD("_ZNK2P29P2Request10getCropperEj() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::parseConfigParam(NSCam::v3::P2CaptureNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp16parseConfigParamERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp16parseConfigParamERKN5NSCam2v313P2CaptureNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll(void) {
    ALOGD("_ZThn48_N5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: RAW16NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N10PDENodeImpD0Ev(void) {
    ALOGD("_ZTv0_n136_N10PDENodeImpD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META&&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_DrawIDPlugin()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ23isTrace1On_DrawIDPluginvE4sVal = NULL;

/* Exported Object: VTT for NSCam::v3::NSP1Node::ProcedureStageControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node21ProcedureStageControlE = NULL;

/* Demangled: virtual thunk to P2::MDPProcessor::onInit(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P212MDPProcessor6onInitERKj(void) {
    ALOGD("_ZTv0_n32_N2P212MDPProcessor6onInitERKj() called");
    return 0;
}

/* Demangled: P2::P2Img::getImgType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img10getImgTypeEv(void) {
    ALOGD("_ZNK2P25P2Img10getImgTypeEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::removeP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest12removeP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE(void) {
    ALOGD("_ZN2P214MWFrameRequest12removeP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::SimpleIO() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIOC2Ev(void) {
    ALOGD("_ZN2P26P2Util8SimpleIOC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl5resetEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl5resetEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ProcedureStageControl::done(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node21ProcedureStageControl4doneEji(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node21ProcedureStageControl4doneEji() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::kick() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp4kickEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp4kickEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::updateResult(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12updateResultENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEEi(void) {
    ALOGD("_ZN2P214BasicProcessor12updateResultENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEEi() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::~MDPProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessorD0Ev(void) {
    ALOGD("_ZN2P212MDPProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::printIO(NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO7printIOERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO7printIOERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSP1Node::P1DeliverMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node12P1DeliverMgrE = NULL;

/* Demangled: NSCam::v3::JpgPack::~JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPackD2Ev(void) {
    ALOGD("_ZN5NSCam2v37JpgPackD2Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImpD1Ev(void) {
    ALOGD("_ZN12RAW16NodeImpD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::__unordered_map_hasher<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::hash<P2::P2Request*>, true>, std::__1::__unordered_map_equal<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::equal_to<P2::P2Request*>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_BasicProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P225isTrace1On_BasicProcessorEvE6sTrace = NULL;

/* Demangled: P2::P2StreamingNodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp6uninitEv(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp6uninitEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyYuvR1Crop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR1CropEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR1CropEv() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N10PDENodeImpD1Ev(void) {
    ALOGD("_ZTv0_n136_N10PDENodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void) {
    ALOGD("_ZN2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE() called");
    return 0;
}

/* Demangled: P2::MWInfo::getAppStreamInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo16getAppStreamInfoEv(void) {
    ALOGD("_ZNK2P26MWInfo16getAppStreamInfoEv() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::decideMasterID() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest14decideMasterIDEv(void) {
    ALOGD("_ZN2P214MWFrameRequest14decideMasterIDEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareRSSO(android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor11prepareRSSOERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor11prepareRSSOERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::~MDPProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessorD1Ev(void) {
    ALOGD("_ZN2P212MDPProcessorD1Ev() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_P2MetadataHandle()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P227isTrace1On_P2MetadataHandleEvE6sTrace = NULL;

/* Exported Object: construction vtable for NSCam::Feature::P2Util::Cropper-in-P2::P2Cropper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29P2CropperE0_N5NSCam7Feature6P2Util7CropperE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::dumpRoll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector8dumpRollEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector8dumpRollEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::P1NodeAct(NSCam::v3::NSP1Node::P1NodeImp*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeActC2EPNS1_9P1NodeImpEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeActC2EPNS1_9P1NodeImpEi() called");
    return 0;
}

/* Demangled: RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImpD2Ev(void) {
    ALOGD("_ZN12RAW16NodeImpD2Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6uninitEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE6uninitEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onEnque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getNodeId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38NSP1Node9P1NodeAct9getNodeIdEv(void) {
    ALOGD("_ZNK5NSCam2v38NSP1Node9P1NodeAct9getNodeIdEv() called");
    return 0;
}

/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor8onUninitEv(void) {
    ALOGD("_ZN2P218StreamingProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkDoneNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkDoneNumEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl12checkDoneNumEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::flushAct() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl8flushActEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl8flushActEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P218StreamingProcessor12onThreadStopEv(void) {
    ALOGD("_ZTv0_n56_N2P218StreamingProcessor12onThreadStopEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEEE = NULL;

/* Demangled: P2::P2Request::getCropper() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10getCropperEv(void) {
    ALOGD("_ZNK2P29P2Request10getCropperEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::setUseLMV(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIn9setUseLMVEi(void) {
    ALOGD("_ZN2P26P2Util8SimpleIn9setUseLMVEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::StuffBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node15StuffBufferPoolE = NULL;

/* Exported Object: VTT for JpegBufPool */
extern "C" __attribute__((visibility("default"))) void* _ZTT11JpegBufPool = NULL;

/* Demangled: P2::CaptureRequestCallback::onRestored(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::~MDPProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessorD2Ev(void) {
    ALOGD("_ZN2P212MDPProcessorD2Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_CaptureNode()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ22isTrace1On_CaptureNodevE6sTrace = NULL;

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD0Ev() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_MWInfo()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P217isTrace1On_MWInfoEvE4sVal = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE = NULL;

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::TimingChecker::Record*, std::__1::allocator<NSCam::v3::NSP1Node::TimingChecker::Record*> >::__push_back_slow_path<NSCam::v3::NSP1Node::TimingChecker::Record* const&>(NSCam::v3::NSP1Node::TimingChecker::Record* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam2v38NSP1Node13TimingChecker6RecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam2v38NSP1Node13TimingChecker6RecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: JpegNodeImp::hardwareOps_encode(JpegNodeImp::my_encode_params&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp18hardwareOps_encodeERNS_16my_encode_paramsE(void) {
    ALOGD("_ZN11JpegNodeImp18hardwareOps_encodeERNS_16my_encode_paramsE() called");
    return 0;
}

/* Exported Object: isTrace1On_Cropper()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ18isTrace1On_CroppervE4sVal = NULL;

/* Demangled: P2::MWImg::getTransform() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg12getTransformEv(void) {
    ALOGD("_ZNK2P25MWImg12getTransformEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE8__appendEm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::enableSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV12enableSensorEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV12enableSensorEv() called");
    return 0;
}

/* Demangled: P2::P2Request::releaseResource(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request15releaseResourceEj(void) {
    ALOGD("_ZN2P29P2Request15releaseResourceEj() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor11onWaitFlushEv(void) {
    ALOGD("_ZN2P218StreamingProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::init(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr4initEN7android2spINS1_9P1NodeImpEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr4initEN7android2spINS1_9P1NodeImpEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::getFrameID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214P2FrameRequest10getFrameIDEv(void) {
    ALOGD("_ZNK2P214P2FrameRequest10getFrameIDEv() called");
    return 0;
}

/* Demangled: P2::P2Request::isPhysic() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request8isPhysicEv(void) {
    ALOGD("_ZNK2P29P2Request8isPhysicEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::kick() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_N5NSCam2v38BaseNode4kickEv(void) {
    ALOGD("_ZTv0_n104_N5NSCam2v38BaseNode4kickEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkRequestEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl12checkRequestEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::verifySizeYuvResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize const&, int const&, NSCam::MSize&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20verifySizeYuvResizerEjjRKNS_5MSizeES4_S4_RKiRS2_i(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20verifySizeYuvResizerEjjRKNS_5MSizeES4_S4_RKiRS2_i() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node12P1DeliverMgrD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImageInit(NSCam::v3::NSP1Node::STREAM_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct14frameImageInitENS1_10STREAM_IMGE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct14frameImageInitENS1_10STREAM_IMGE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::Client::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::NSP1Node::StuffBufferPool>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::StuffBufferPool> > >::__push_back_slow_path<android::sp<NSCam::v3::NSP1Node::StuffBufferPool> const&>(android::sp<NSCam::v3::NSP1Node::StuffBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node15StuffBufferPoolEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE8__appendEm() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, android::sp<P2::BasicProcessor::P2Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2CookieC1EPS0_RKN7android2spINS0_9P2PayloadEEE(void) {
    ALOGD("_ZN2P214BasicProcessor8P2CookieC1EPS0_RKN7android2spINS0_9P2PayloadEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onInit(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor6onInitERKj(void) {
    ALOGD("_ZN2P212MDPProcessor6onInitERKj() called");
    return 0;
}

/* Demangled: P2::MWFrame::getFrameID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame10getFrameIDEv(void) {
    ALOGD("_ZNK2P27MWFrame10getFrameIDEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_startEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_startEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onProcessDequeFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessDequeFrameEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19onProcessDequeFrameEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::config(NSCam::v3::P1Node::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE(void) {
    ALOGD("_ZThn40_N5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Cookie* P2::BasicProcessor::createCookie<std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > >(NSCam::Feature::ILog const&, std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12createCookieINSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_(void) {
    ALOGD("_ZN2P214BasicProcessor12createCookieINSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEPNS0_8P2CookieERKN5NSCam7Feature4ILogERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P217DispatchProcessor12onThreadStopEv(void) {
    ALOGD("_ZTv0_n56_N2P217DispatchProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::parseInitParam(NSCam::Feature::ILog const&, NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp14parseInitParamERKN5NSCam7Feature4ILogERKNS1_2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp14parseInitParamERKN5NSCam7Feature4ILogERKNS1_2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::onCtrlReadout(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode13onCtrlReadoutERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri(void) {
    ALOGD("_ZN5NSCam2v38BaseNode13onCtrlReadoutERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZTv0_n64_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::isEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214P2DrawIDPlugin9isEnabledEv(void) {
    ALOGD("_ZNK2P214P2DrawIDPlugin9isEnabledEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::releaseResource(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor15releaseResourceERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEEj(void) {
    ALOGD("_ZNK2P218StreamingProcessor15releaseResourceERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::TimingCheckerMgr>::operator=(NSCam::v3::NSP1Node::TimingCheckerMgr*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node16TimingCheckerMgrEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node16TimingCheckerMgrEEaSEPS4_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_back(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::registerActList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr15registerActListEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr15registerActListEi() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread4stopEv(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread4stopEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::notifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE11notifyFlushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE11notifyFlushEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*> >::push_front(P2::SMVRQueue::SMVRData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::getNodeId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK5NSCam2v38BaseNode9getNodeIdEv(void) {
    ALOGD("_ZTv0_n40_NK5NSCam2v38BaseNode9getNodeIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_streaming() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp21hardwareOps_streamingEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp21hardwareOps_streamingEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<android::sp<P2::P2Request>, std::__1::__tree_node<android::sp<P2::P2Request>, void*>*, long>, bool> std::__1::__tree<android::sp<P2::P2Request>, std::__1::less<android::sp<P2::P2Request> >, std::__1::allocator<android::sp<P2::P2Request> > >::__emplace_unique_key_args<android::sp<P2::P2Request>, android::sp<P2::P2Request> const&>(android::sp<P2::P2Request> const&, android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS5_JRKS5_EEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS5_JRKS5_EEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::LogInfo::Slot */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node7LogInfo4SlotE = NULL;

/* Demangled: P2::MWImg::getPhysicalID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg13getPhysicalIDEv(void) {
    ALOGD("_ZNK2P25MWImg13getPhysicalIDEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::updateResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P26MWMeta12updateResultEi(void) {
    ALOGD("_ZTv0_n64_N2P26MWMeta12updateResultEi() called");
    return 0;
}

/* Demangled: P2::P2Img::setTimestamp(std::__1::vector<long, std::__1::allocator<long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2Img12setTimestampERKNSt3__16vectorIlNS1_9allocatorIlEEEE(void) {
    ALOGD("_ZN2P25P2Img12setTimestampERKNSt3__16vectorIlNS1_9allocatorIlEEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*>&>::push_back(android::sp<P2::P2FrameRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Exported Object: VTT for P2::StreamingProcessor::Payload */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P218StreamingProcessor7PayloadE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_MWMeta()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P217isTrace1On_MWMetaEvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::config() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV6configEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV6configEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::prepareEnqueQParams(android::sp<P2::BasicProcessor::P2Payload>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor19prepareEnqueQParamsEN7android2spINS0_9P2PayloadEEE(void) {
    ALOGD("_ZN2P214BasicProcessor19prepareEnqueQParamsEN7android2spINS0_9P2PayloadEEE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Payload::P2Payload(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadC2ERKN7android2spINS_9P2RequestEEEj(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadC2ERKN7android2spINS_9P2RequestEEEj() called");
    return 0;
}

/* Demangled: P2::P2Cropper::initTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Cropper13initTransformEv(void) {
    ALOGD("_ZN2P29P2Cropper13initTransformEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::getILog(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7getILogERKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN2P214BasicProcessor7getILogERKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6uninitEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::contains(android::sp<P2::P2Request> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13P2RequestPack8containsERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor13P2RequestPack8containsERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_MWMeta()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P217isTrace1On_MWMetaEvE4sVal = NULL;

/* Exported Object: vtable for NS3Av3::IHal3ACb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av38IHal3ACbE = NULL;

/* Demangled: JpegBufPool::~JpegBufPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegBufPoolD0Ev(void) {
    ALOGD("_ZN11JpegBufPoolD0Ev() called");
    return 0;
}

/* Demangled: PDENodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp6uninitEv(void) {
    ALOGD("_ZN10PDENodeImp6uninitEv() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_BasicProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P225isTrace1On_BasicProcessorEvE6sTrace = NULL;

/* Demangled: P2::MWFrameRequest::MWFrameRequest(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&, android::sp<P2::MWInfo> const&, android::sp<P2::MWFrame> const&, android::sp<P2::P2InIDMap> const&, double) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequestC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd(void) {
    ALOGD("_ZN2P214MWFrameRequestC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO> > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::pair<P2::ID_IMG const, P2::IMG_INFO> const&>(P2::ID_IMG const&, std::__1::pair<P2::ID_IMG const, P2::IMG_INFO> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: isTrace1On_Streaming_3DNR()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_Streaming_3DNRvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr6uninitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::enrollAct(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector9enrollActERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector9enrollActERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: ExifUtils::updateStdExifParam_3A(NSCam::IMetadata const&, NSCam::IMetadata const&, ExifParams&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils21updateStdExifParam_3AERKN5NSCam9IMetadataES3_R10ExifParamsi(void) {
    ALOGD("_ZN9ExifUtils21updateStdExifParam_3AERKN5NSCam9IMetadataES3_R10ExifParamsi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P217DispatchProcessor11onWaitFlushEv(void) {
    ALOGD("_ZTv0_n88_N2P217DispatchProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Streaming_FSC()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24isTrace1On_Streaming_FSCvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::calculateCropInfoFull(unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect const&, NSCam::MRect&, NSCam::MSize&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node21calculateCropInfoFullEjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node21calculateCropInfoFullEjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_i() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::destroyStuffBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18destroyStuffBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18destroyStuffBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::P1NodeAct(NSCam::v3::NSP1Node::P1NodeImp*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeActC1EPNS1_9P1NodeImpEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeActC1EPNS1_9P1NodeImpEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::P2Request::isReprocess() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request11isReprocessEv(void) {
    ALOGD("_ZNK2P29P2Request11isReprocessEv() called");
    return 0;
}

/* Exported Object: isTrace1On_Streaming_3DNR()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_Streaming_3DNRvE6sTrace = NULL;

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void) {
    ALOGD("_ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: P2::P2Meta::getID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Meta5getIDEv(void) {
    ALOGD("_ZNK2P26P2Meta5getIDEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*> >::push_back(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE9push_backEOSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE9push_backEOSA_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*>&>::push_front(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE10push_frontERKSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE10push_frontERKSA_() called");
    return 0;
}

/* Exported Object: VTT for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE = NULL;

/* Exported Object: P2::P2StreamingNodeImp::sRunning */
extern "C" __attribute__((visibility("default"))) void* _ZN2P218P2StreamingNodeImp8sRunningE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEEE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::runningSet(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningSetEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningSetEi() called");
    return 0;
}

/* Demangled: JpegBufPool::~JpegBufPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegBufPoolD1Ev(void) {
    ALOGD("_ZN11JpegBufPoolD1Ev() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::uninitNormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor18uninitNormalStreamEv(void) {
    ALOGD("_ZN2P214BasicProcessor18uninitNormalStreamEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::P2Cropper::applyEIS12(NSCam::Feature::ILog const&, NSCam::MRectF const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper10applyEIS12ERKN5NSCam7Feature4ILogERKNS1_6MRectFEi(void) {
    ALOGD("_ZNK2P29P2Cropper10applyEIS12ERKN5NSCam7Feature4ILogERKNS1_6MRectFEi() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::procedureAid_start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18procedureAid_startEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18procedureAid_startEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_capture() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_captureEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_captureEv() called");
    return 0;
}

/* Demangled: Request::lockMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7Request8lockMetaEv(void) {
    ALOGD("_ZN7Request8lockMetaEv() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_P2BufferHandle()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P225isTrace1On_P2BufferHandleEvE4sVal = NULL;

/* Demangled: P2::MWInfo::~MWInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoD0Ev(void) {
    ALOGD("_ZN2P26MWInfoD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for P2::P2Meta-in-P2::MWMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P26MWMetaE72_NS_6P2MetaE = NULL;

/* Exported Object: vtable for NSCam::v3::DummyNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v39DummyNodeE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onSyncBegin(int, NS3Av3::RequestSet_T*, unsigned int, NS3Av3::CapParam_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp11onSyncBeginEiPN6NS3Av312RequestSet_TEjPNS3_10CapParam_TE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp11onSyncBeginEiPN6NS3Av312RequestSet_TEjPNS3_10CapParam_TE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void) {
    ALOGD("_ZTv0_n136_N5NSCam2v38NSP1Node9P1NodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::MDPProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessorC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN2P212MDPProcessorC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::createFrameRequest(NSCam::Feature::ILog const&, android::sp<P2::MWFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp18createFrameRequestERKN5NSCam7Feature4ILogERKN7android2spINS_7MWFrameEEE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp18createFrameRequestERKN5NSCam7Feature4ILogERKN7android2spINS_7MWFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::isRecord() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_NK2P25MWImg8isRecordEv(void) {
    ALOGD("_ZTv0_n136_NK2P25MWImg8isRecordEv() called");
    return 0;
}

/* Exported Object: isTrace1On_VRGralloc()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ20isTrace1On_VRGrallocvE6sTrace = NULL;

/* Demangled: P2::StreamingProcessor::prepareInputs(android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13prepareInputsERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor13prepareInputsERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::lastFrameRequestInfoNotice(int&, int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoNoticeERiS3_i(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoNoticeERiS3_i() called");
    return 0;
}

/* Demangled: JpegBufPool::~JpegBufPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegBufPoolD2Ev(void) {
    ALOGD("_ZN11JpegBufPoolD2Ev() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessorC1Ev(void) {
    ALOGD("_ZN2P216CaptureProcessorC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::MWFrame::getInfoIOMapSet(NSCam::v3::IPipelineFrame::InfoIOMapSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame15getInfoIOMapSetERN5NSCam2v314IPipelineFrame12InfoIOMapSetE(void) {
    ALOGD("_ZN2P27MWFrame15getInfoIOMapSetERN5NSCam2v314IPipelineFrame12InfoIOMapSetE() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::isActive() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl8isActiveEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl8isActiveEv() called");
    return 0;
}

/* Demangled: P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImgD0Ev(void) {
    ALOGD("_ZN2P25MWImgD0Ev() called");
    return 0;
}

/* Exported Object: VTT for P2::MWImg */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P25MWImgE = NULL;

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1TaskCollector>::operator=(NSCam::v3::NSP1Node::P1TaskCollector*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node15P1TaskCollectorEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node15P1TaskCollectorEEaSEPS4_() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEE = NULL;

/* Demangled: P2::MWInfo::~MWInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoD1Ev(void) {
    ALOGD("_ZN2P26MWInfoD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::getInputSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO12getInputSizeEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO12getInputSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P212P2DumpPluginD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P212P2DumpPluginD0Ev() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::toP2Type(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218P2StreamingNodeImp8toP2TypeEN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE(void) {
    ALOGD("_ZNK2P218P2StreamingNodeImp8toP2TypeEN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC1ERKN7android2spIS0_EE(void) {
    ALOGD("_ZN2P29P2RequestC1ERKN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZTv0_n64_N2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: Request::lockInImg() */
extern "C" __attribute__((visibility("default"))) int _ZN7Request9lockInImgEv(void) {
    ALOGD("_ZN7Request9lockInImgEv() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N12RAW16NodeImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N12RAW16NodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessorC2Ev(void) {
    ALOGD("_ZN2P216CaptureProcessorC2Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getSensorSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper13getSensorSizeEv(void) {
    ALOGD("_ZNK2P29P2Cropper13getSensorSizeEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::v3::NSP1Node::P1NodeAct>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::P1NodeAct> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE7reserveEm() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::MyTimer::MyTimer(NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7MyTimerC2ERKN5NSCam7Feature4ILogEj(void) {
    ALOGD("_ZN2P214BasicProcessor7MyTimerC2ERKN5NSCam7Feature4ILogEj() called");
    return 0;
}

/* Demangled: P2::P2ConfigParam::P2ConfigParam(NSCam::Feature::P2Util::P2Info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2ConfigParamC1ERKN5NSCam7Feature6P2Util6P2InfoE(void) {
    ALOGD("_ZN2P213P2ConfigParamC1ERKN5NSCam7Feature6P2Util6P2InfoE() called");
    return 0;
}

/* Demangled: P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImgD1Ev(void) {
    ALOGD("_ZN2P25MWImgD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::checkReqCnt(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp11checkReqCntERi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp11checkReqCntERi() called");
    return 0;
}

/* Demangled: P2::MWInfo::~MWInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoD2Ev(void) {
    ALOGD("_ZN2P26MWInfoD2Ev() called");
    return 0;
}

/* Demangled: P2::MWInfo::hasMeta(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo7hasMetaENS_7ID_METAE(void) {
    ALOGD("_ZNK2P26MWInfo7hasMetaENS_7ID_METAE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK2P25MWImg7isValidEv(void) {
    ALOGD("_ZTv0_n48_NK2P25MWImg7isValidEv() called");
    return 0;
}

/* Demangled: P2::P2Util::p2PQIdx2String(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util14p2PQIdx2StringEj(void) {
    ALOGD("_ZN2P26P2Util14p2PQIdx2StringEj() called");
    return 0;
}

/* Exported Object: isTrace1On_Streaming_EIS()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ24isTrace1On_Streaming_EISvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::P1TaskCollector(android::sp<NSCam::v3::NSP1Node::P1TaskCtrl>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollectorC1EN7android2spINS1_10P1TaskCtrlEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollectorC1EN7android2spINS1_10P1TaskCtrlEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >::__emplace_back_slow_path<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > >(std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEE24__emplace_back_slow_pathIJS8_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEE24__emplace_back_slow_pathIJS8_EEEvDpOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node10P1TaskCtrlD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DumpPlugin::~P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P212P2DumpPluginD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P212P2DumpPluginD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamInfo> const&>(android::sp<NSCam::v3::IMetaStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: P2::P2Cropper::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper7isValidEv(void) {
    ALOGD("_ZNK2P29P2Cropper7isValidEv() called");
    return 0;
}

/* Demangled: P2::MWImg::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg7isValidEv(void) {
    ALOGD("_ZNK2P25MWImg7isValidEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::is3DNRFlowEnabled(int, NSCam::IMetadata*, NSCam::IMetadata*, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor17is3DNRFlowEnabledEiPN5NSCam9IMetadataES3_RKNS1_7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor17is3DNRFlowEnabledEiPN5NSCam9IMetadataES3_RKNS1_7Feature4ILogE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::config(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18LongExposureStatus6configEiii(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18LongExposureStatus6configEiii() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N12RAW16NodeImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N12RAW16NodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessorC1Ev(void) {
    ALOGD("_ZN2P214BasicProcessorC1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZTv0_n64_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: PDENodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImgD2Ev(void) {
    ALOGD("_ZN2P25MWImgD2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::getNumRecord() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13P2RequestPack12getNumRecordEv(void) {
    ALOGD("_ZNK2P218StreamingProcessor13P2RequestPack12getNumRecordEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processDequeFrame(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV17processDequeFrameERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV17processDequeFrameERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector5resetEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector5resetEv() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::getCaptureFeaturePipe(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor21getCaptureFeaturePipeEi(void) {
    ALOGD("_ZN2P216CaptureProcessor21getCaptureFeaturePipeEi() called");
    return 0;
}

/* Demangled: P2::MWMeta::MWMeta(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, P2::META_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE(void) {
    ALOGD("_ZN2P26MWMetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Streaming_SMVR()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_Streaming_SMVRvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImageGet(NSCam::v3::NSP1Node::STREAM_IMG, signed char, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct13frameImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct13frameImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv(void) {
    ALOGD("_ZThn56_N5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: P2::P2Cropper::dump(NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper4dumpERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P29P2Cropper4dumpERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::MyTimer::MyTimer() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7MyTimerC1Ev(void) {
    ALOGD("_ZN2P214BasicProcessor7MyTimerC1Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::setEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9setEnableEi(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9setEnableEi() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5flushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5flushEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSP1Node::P1NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node9P1NodeImpE = NULL;

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeAct::SubStreamImg */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct12SubStreamImgE = NULL;

/* Demangled: P2::BasicProcessor::BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessorC2Ev(void) {
    ALOGD("_ZN2P214BasicProcessorC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for P2::IP2Frame-in-P2::P2FrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P214P2FrameRequestE0_NS_8IP2FrameE = NULL;

/* Exported Object: vtable for P2::P2Request */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29P2RequestE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for P2::CaptureProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P216CaptureProcessorE = NULL;

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::fetchJob(NSCam::v3::NSP1Node::P1QueJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp8fetchJobERNS1_8P1QueJobE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp8fetchJobERNS1_8P1QueJobE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::getILog(android::sp<P2::BasicProcessor::P2Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7getILogERKN7android2spINS0_9P2PayloadEEE(void) {
    ALOGD("_ZN2P214BasicProcessor7getILogERKN7android2spINS0_9P2PayloadEEE() called");
    return 0;
}

/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2StreamingNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoC2ERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void) {
    ALOGD("_ZN2P26MWInfoC2ERKN5NSCam2v315P2StreamingNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::updateP1TS(android::sp<P2::P2Meta> const&, android::sp<P2::P2Meta> const&, NSCam::Feature::P2Util::P2SensorData&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest10updateP1TSERKN7android2spINS_6P2MetaEEES6_RN5NSCam7Feature6P2Util12P2SensorDataE(void) {
    ALOGD("_ZN2P214MWFrameRequest10updateP1TSERKN7android2spINS_6P2MetaEEES6_RN5NSCam7Feature6P2Util12P2SensorDataE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::MWInfo::getImgType(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo10getImgTypeEl(void) {
    ALOGD("_ZNK2P26MWInfo10getImgTypeEl() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> >::__push_back_slow_path<NSCam::Feature::P2Util::P2AppStreamInfo const&>(NSCam::Feature::P2Util::P2AppStreamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImpD0Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImpD0Ev() called");
    return 0;
}

/* Demangled: PDENodeImp::ExtractThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp13ExtractThread10threadLoopEv(void) {
    ALOGD("_ZN10PDENodeImp13ExtractThread10threadLoopEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::MyTimer::MyTimer() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7MyTimerC2Ev(void) {
    ALOGD("_ZN2P214BasicProcessor7MyTimerC2Ev() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void) {
    ALOGD("_ZN2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_MWInfo()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P217isTrace1On_MWInfoEvE6sTrace = NULL;

/* Demangled: P2::MWFrame::doRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame9doReleaseEv(void) {
    ALOGD("_ZN2P27MWFrame9doReleaseEv() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam2v38NSP1Node9P1NodeImp6uninitEv(void) {
    ALOGD("_ZTv0_n72_N5NSCam2v38NSP1Node9P1NodeImp6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZTv0_n64_N12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::setUseLMV(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIO9setUseLMVEi(void) {
    ALOGD("_ZN2P26P2Util8SimpleIO9setUseLMVEi() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::processVRQ(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam const&, android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10processVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor10processVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getInputCrop3DNR(int&, int&, NSCam::MRect&, P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor16getInputCrop3DNRERiS1_RN5NSCam5MRectERNS_6P2Util8SimpleInERKNS2_7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor16getInputCrop3DNRERiS1_RN5NSCam5MRectERNS_6P2Util8SimpleInERKNS2_7Feature4ILogE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n128_N5NSCam2v38BaseNode9getStatusEv(void) {
    ALOGD("_ZTv0_n128_N5NSCam2v38BaseNode9getStatusEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE7reserveEm() called");
    return 0;
}

/* Demangled: JpegNodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp5flushEv(void) {
    ALOGD("_ZN11JpegNodeImp5flushEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onCheckDropFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp16onCheckDropFrameEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp16onCheckDropFrameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkPausing() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl12checkPausingEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl12checkPausingEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::applyCropRatio(NSCam::Feature::ILog const&, NSCam::MRectF const&, float, float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper14applyCropRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFEff(void) {
    ALOGD("_ZNK2P29P2Cropper14applyCropRatioERKN5NSCam7Feature4ILogERKNS1_6MRectFEff() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImpD1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImpD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::JpgPack */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v37JpgPackE = NULL;

/* Demangled: P2::MWFrame::acquireImageStream(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame18acquireImageStreamERKl(void) {
    ALOGD("_ZN2P27MWFrame18acquireImageStreamERKl() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::flushSMVRQ() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10flushSMVRQEv(void) {
    ALOGD("_ZN2P218StreamingProcessor10flushSMVRQEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl4dumpEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::logMeta(int, NSCam::IMetadata const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7logMetaEiPKNS_9IMetadataEPKcj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7logMetaEiPKNS_9IMetadataEPKcj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::compareLayout(int, NSCam::MSize, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15StuffBufferPool13compareLayoutEiNS_5MSizeEjjj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15StuffBufferPool13compareLayoutEiNS_5MSizeEjjj() called");
    return 0;
}

/* Demangled: ExifUtils::updateStdExifParam_gps(NSCam::IMetadata::IEntry const&, NSCam::IMetadata::IEntry const&, NSCam::IMetadata::IEntry const&, ExifParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils22updateStdExifParam_gpsERKN5NSCam9IMetadata6IEntryES4_S4_R10ExifParams(void) {
    ALOGD("_ZN9ExifUtils22updateStdExifParam_gpsERKN5NSCam9IMetadata6IEntryES4_S4_R10ExifParams() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_front(timespec* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::NSP1Node::P1NodeAct>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::P1NodeAct> > >::__push_back_slow_path<android::sp<NSCam::v3::NSP1Node::P1NodeAct> >(android::sp<NSCam::v3::NSP1Node::P1NodeAct>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node9P1NodeActEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet> >::__push_back_slow_path<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet const&>(NSCam::v3::NSP1Node::StuffBufferManager::InfoSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P217DispatchProcessor13onThreadStartEv(void) {
    ALOGD("_ZTv0_n48_N2P217DispatchProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::P2Request::isLarge() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request7isLargeEv(void) {
    ALOGD("_ZNK2P29P2Request7isLargeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkOnExecuting() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkOnExecutingEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl16checkOnExecutingEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::isEISOn(NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV7isEISOnEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV7isEISOnEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getResizedCrop() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper14getResizedCropEv(void) {
    ALOGD("_ZNK2P29P2Cropper14getResizedCropEv() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadE = NULL;

/* Exported Object: vtable for P2::MDPProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P212MDPProcessorE = NULL;

/* Exported Object: vtable for P2::MWFrame */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P27MWFrameE = NULL;

/* Demangled: P2::StreamingProcessor::decPayload(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::StreamingProcessor::Payload> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10decPayloadERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEEi(void) {
    ALOGD("_ZN2P218StreamingProcessor10decPayloadERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEEi() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::uninitFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor17uninitFeaturePipeEv(void) {
    ALOGD("_ZN2P218StreamingProcessor17uninitFeaturePipeEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NotifyCrop */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node12P1NotifyCropE = NULL;

/* Demangled: RAW16NodeImp::getMetadataAndLock(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>&, NSCam::IMetadata*&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp18getMetadataAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE(void) {
    ALOGD("_ZN12RAW16NodeImp18getMetadataAndLockERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_17IMetaStreamBufferEEERPNS2_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImpD2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImpD2Ev() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::isFrameDump(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPlugin11isFrameDumpEi(void) {
    ALOGD("_ZN2P212P2DumpPlugin11isFrameDumpEi() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE = NULL;

/* Exported Object: VTT for NSCam::v3::NSP1Node::P1TaskCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node10P1TaskCtrlE = NULL;

/* Demangled: P2::StreamingProcessor::processSMVRQ(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam const&, android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor12processSMVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor12processSMVRQERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: Request::prepareExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7Request11prepareExifEv(void) {
    ALOGD("_ZN7Request11prepareExifEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZTv0_n64_N2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: P2::CaptureRequestCallback::onAborted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for P2::P2InIDMap */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29P2InIDMapE = NULL;

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v38BaseNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::releaseAct(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl10releaseActERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl10releaseActERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::needBasicProcess(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor16needBasicProcessERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P217DispatchProcessor16needBasicProcessERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor11onWaitFlushEv(void) {
    ALOGD("_ZN2P212MDPProcessor11onWaitFlushEv() called");
    return 0;
}

/* Exported Object: VTT for P2::P2ImgPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P211P2ImgPluginE = NULL;

/* Exported Object: vtable for NSCam::v3::IPipelineFrame::MetaInfoIOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::generateCtrlQueue(std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >&, NSCam::v3::NSP1Node::P1QueJob&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17generateCtrlQueueERNSt3__16vectorIPN6NS3Av39MetaSet_TENS3_9allocatorIS7_EEEERNS1_8P1QueJobEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17generateCtrlQueueERNSt3__16vectorIPN6NS3Av39MetaSet_TENS3_9allocatorIS7_EEEERNS1_8P1QueJobEi() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_P2Request()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P220isTrace1On_P2RequestEvE4sVal = NULL;

/* Demangled: virtual thunk to P2::P2FrameHolder::beginBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P213P2FrameHolder17beginBatchReleaseEv(void) {
    ALOGD("_ZTv0_n40_N2P213P2FrameHolder17beginBatchReleaseEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::triggerdb(NSCam::v3::IPipelineNode::TriggerDB const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE(void) {
    ALOGD("_ZTv0_n80_N5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE() called");
    return 0;
}

/* Demangled: std::__1::deque<timespec, std::__1::allocator<timespec> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2Cropper::~P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29P2CropperD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P29P2CropperD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::updateVRTimestamp(unsigned int, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N2P25MWImg17updateVRTimestampEjRKl(void) {
    ALOGD("_ZTv0_n80_N2P25MWImg17updateVRTimestampEjRKl() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::addP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, long const&, P2::IO_DIR) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE(void) {
    ALOGD("_ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6IO_DIRE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::exit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr4exitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr4exitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*>&>::push_back(P2::MDPParam*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Cropper()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ18isTrace1On_CroppervE4sVal = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*>&>::push_back(android::sp<P2::P2Request>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImageGet(NSCam::v3::NSP1Node::STREAM_IMG, signed char, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct12poolImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct12poolImageGetENS1_10STREAM_IMGEaRN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: RAW16NodeImp::UnpackThread::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp12UnpackThread11requestExitEv(void) {
    ALOGD("_ZN12RAW16NodeImp12UnpackThread11requestExitEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::uninit3A() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8uninit3AEv(void) {
    ALOGD("_ZN2P214BasicProcessor8uninit3AEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED0Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::updateP2Metadata(unsigned int, android::sp<NSCam::Feature::P2Util::Cropper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest16updateP2MetadataEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEE(void) {
    ALOGD("_ZN2P214MWFrameRequest16updateP2MetadataEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEE() called");
    return 0;
}

/* Exported Object: isTrace1On_Streaming_SMVR()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_Streaming_SMVRvE4sVal = NULL;

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp = NULL;

/* Exported Object: guard variable for P2::isTrace1On_P2BufferHandle()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P225isTrace1On_P2BufferHandleEvE4sVal = NULL;

/* Exported Object: vtable for P2::ReleaseBundle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P213ReleaseBundleE = NULL;

/* Exported Object: P2::isTrace1On_DispatchProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P228isTrace1On_DispatchProcessorEvE6sTrace = NULL;

/* Demangled: std::__1::deque<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp16hardwareOps_stopEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp16hardwareOps_stopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void) {
    ALOGD("_ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::drawCropRegion(android::sp<P2::StreamingProcessor::Payload> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor14drawCropRegionERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor14drawCropRegionERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::P2CaptureNode-in-P2::P2CaptureNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P216P2CaptureNodeImpE0_N5NSCam2v313P2CaptureNodeE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp11requestExitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp11requestExitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_deque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_dequeERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_dequeERNS_8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp6uninitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::addRec(NSCam::v3::NSP1Node::TimingChecker::Record*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6addRecEPNS2_6RecordE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6addRecEPNS2_6RecordE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::onP2CB(NSCam::NSIoPipe::QParams const&, android::sp<P2::BasicProcessor::P2Payload>&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor6onP2CBERKN5NSCam8NSIoPipe7QParamsERN7android2spINS0_9P2PayloadEEE(void) {
    ALOGD("_ZN2P214BasicProcessor6onP2CBERKN5NSCam8NSIoPipe7QParamsERN7android2spINS0_9P2PayloadEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2Cropper::~P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29P2CropperD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P29P2CropperD1Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Demangled: P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolderD0Ev(void) {
    ALOGD("_ZN2P213P2FrameHolderD0Ev() called");
    return 0;
}

/* Demangled: PDENodeImp::ExtractThread::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp13ExtractThread11requestExitEv(void) {
    ALOGD("_ZN10PDENodeImp13ExtractThread11requestExitEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Payload::~P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadD0Ev(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::inflightMonitoring(NSCam::v3::NSP1Node::INFLIGHT_MONITORING_TIMING) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18inflightMonitoringENS1_26INFLIGHT_MONITORING_TIMINGE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18inflightMonitoringENS1_26INFLIGHT_MONITORING_TIMINGE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N5NSCam2v38NSP1Node9P1NodeImp5flushEv(void) {
    ALOGD("_ZTv0_n88_N5NSCam2v38NSP1Node9P1NodeImp5flushEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: P2::isValid(android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27isValidERKN7android2spINS_5P2ImgEEE(void) {
    ALOGD("_ZN2P27isValidERKN7android2spINS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::getMDPSrc() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO9getMDPSrcEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO9getMDPSrcEv() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::kick() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp4kickEv(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp4kickEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::getSensorId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn11getSensorIdEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn11getSensorIdEv() called");
    return 0;
}

/* Demangled: P2::P2Request::releaseMetaWithLock(P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request19releaseMetaWithLockENS_7ID_METAE(void) {
    ALOGD("_ZN2P29P2Request19releaseMetaWithLockENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::MWImg::getIImageBufferPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg18getIImageBufferPtrEv(void) {
    ALOGD("_ZNK2P25MWImg18getIImageBufferPtrEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::needReConfig(NSCam::Feature::P2Util::P2ConfigInfo const&, NSCam::Feature::P2Util::P2ConfigInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor12needReConfigERKN5NSCam7Feature6P2Util12P2ConfigInfoES6_(void) {
    ALOGD("_ZN2P218StreamingProcessor12needReConfigERKN5NSCam7Feature6P2Util12P2ConfigInfoES6_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::init(android::sp<NSCam::IImageBuffer>&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV4initERN7android2spINS_12IImageBufferEEEjj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV4initERN7android2spINS_12IImageBufferEEEjj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void) {
    ALOGD("_ZThn56_N5NSCam2v38NSP1Node9P1NodeImpD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N10PDENodeImp5flushEv(void) {
    ALOGD("_ZTv0_n88_N10PDENodeImp5flushEv() called");
    return 0;
}

/* Exported Object: VTT for P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: vtable for P2::P2CaptureNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P216P2CaptureNodeImpE = NULL;

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE7reserveEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyCrop(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify12doNotifyCropEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify12doNotifyCropEPvS3_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::vector<JpegBufPool::BufLot, std::__1::allocator<JpegBufPool::BufLot> > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlNS_6vectorIN11JpegBufPool6BufLotENS_9allocatorIS4_EEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS5_IS8_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::RAW16Node-in-RAW16NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC12RAW16NodeImp40_N5NSCam2v39RAW16NodeE = NULL;

/* Demangled: P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolderD1Ev(void) {
    ALOGD("_ZN2P213P2FrameHolderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::ensureMetaBufferAvailable_(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IMetaStreamBuffer>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode26ensureMetaBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_17IMetaStreamBufferEEEi(void) {
    ALOGD("_ZN5NSCam2v38BaseNode26ensureMetaBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_17IMetaStreamBufferEEEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::releaseAction(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp13releaseActionERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp13releaseActionERNS1_8P1QueActE() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Processor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20isTrace1On_ProcessorvE4sVal = NULL;

/* Demangled: P2::BasicProcessor::P2Payload::~P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadD1Ev(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadD1Ev() called");
    return 0;
}

/* Exported Object: VTT for P2::P2BufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P214P2BufferHandleE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::config(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6configERKS2_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE6configERKS2_() called");
    return 0;
}

/* Demangled: P2::MWMeta::getStreamID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWMeta11getStreamIDEv(void) {
    ALOGD("_ZNK2P26MWMeta11getStreamIDEv() called");
    return 0;
}

/* Demangled: NSCam::v3::DummyNode::DummyNode(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v39DummyNodeC2ERKNS0_13IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN5NSCam2v39DummyNodeC2ERKNS0_13IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED2Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEED2Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_Cropper()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ18isTrace1On_CroppervE6sTrace = NULL;

/* Demangled: virtual thunk to P2::P2DumpPlugin::onPlugin(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE(void) {
    ALOGD("_ZTv0_n48_N2P212P2DumpPlugin8onPluginEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__emplace_unique_key_args<P2::ID_META, std::__1::pair<P2::ID_META const, P2::ID_META> const&>(P2::ID_META const&, std::__1::pair<P2::ID_META const, P2::ID_META> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_DrawIDPlugin()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ23isTrace1On_DrawIDPluginvE6sTrace = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1DeliverMgr>::operator=(NSCam::v3::NSP1Node::P1DeliverMgr*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node12P1DeliverMgrEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node12P1DeliverMgrEEaSEPS4_() called");
    return 0;
}

/* Demangled: RAW16NodeImp::config(NSCam::v3::RAW16Node::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE(void) {
    ALOGD("_ZN12RAW16NodeImp6configERKN5NSCam2v39RAW16Node12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED0Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218P2StreamingNodeImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P218P2StreamingNodeImpD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2ScanlinePlugin::onPlugin(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE(void) {
    ALOGD("_ZTv0_n48_N2P216P2ScanlinePlugin8onPluginEPKNS_5P2ImgE() called");
    return 0;
}

/* Exported Object: vtable for P2::StreamingProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P218StreamingProcessorE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::stuffImagePut(NSCam::v3::NSP1Node::STREAM_IMG, signed char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImagePutENS1_10STREAM_IMGEa(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImagePutENS1_10STREAM_IMGEa() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::NSP1Node::P1DeliverMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38NSP1Node12P1DeliverMgrE0_N7android6ThreadE = NULL;

/* Demangled: P2::BasicProcessor::checkBurst() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor10checkBurstEv(void) {
    ALOGD("_ZN2P214BasicProcessor10checkBurstEv() called");
    return 0;
}

/* Exported Object: VTT for P2::CaptureRequestCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P222CaptureRequestCallbackE = NULL;

/* Demangled: P2::StreamingProcessor::prepareSMVRVar(NSCam::Feature::ILog const&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor14prepareSMVRVarERKN5NSCam7Feature4ILogERNS1_12NSCamFeature13NSFeaturePipe16FeaturePipeParamEj(void) {
    ALOGD("_ZNK2P218StreamingProcessor14prepareSMVRVarERKN5NSCam7Feature4ILogERNS1_12NSCamFeature13NSFeaturePipe16FeaturePipeParamEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::is3DNROn(NSCam::IMetadata*, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV8is3DNROnEPNS_9IMetadataES4_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV8is3DNROnEPNS_9IMetadataES4_() called");
    return 0;
}

/* Demangled: P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolderD2Ev(void) {
    ALOGD("_ZN2P213P2FrameHolderD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Payload::~P2Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadD2Ev(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadD2Ev() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5flushEv(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5flushEv() called");
    return 0;
}

/* Demangled: P2::MWFrame::validateStream(long const&, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IStreamBuffer> const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame14validateStreamERKlRN5NSCam2v316IStreamBufferSetERKN7android2spINS4_13IStreamBufferEEEi(void) {
    ALOGD("_ZNK2P27MWFrame14validateStreamERKlRN5NSCam2v316IStreamBufferSetERKN7android2spINS4_13IStreamBufferEEEi() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N2P218P2StreamingNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::isValid(P2::P2Meta const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27isValidEPKNS_6P2MetaE(void) {
    ALOGD("_ZN2P27isValidEPKNS_6P2MetaE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::releaseSMVRQueue(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor16releaseSMVRQueueEjj(void) {
    ALOGD("_ZN2P218StreamingProcessor16releaseSMVRQueueEjj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N2P216P2CaptureNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZTv0_n64_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onEnque(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZTv0_n72_N2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218P2StreamingNodeImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P218P2StreamingNodeImpD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::getStageCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl12getStageCtrlEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl12getStageCtrlEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::reset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18LongExposureStatus5resetEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18LongExposureStatus5resetEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::ensureStartReady(unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp16ensureStartReadyEhi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp16ensureStartReadyEhi() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::enque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE5enqueERKSB_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE5enqueERKSB_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1TaskCtrl>::operator=(NSCam::v3::NSP1Node::P1TaskCtrl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node10P1TaskCtrlEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node10P1TaskCtrlEEaSEPS4_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::JpegNode-in-JpegNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC11JpegNodeImp40_N5NSCam2v38JpegNodeE = NULL;

/* Demangled: P2::isTrace1On() */
extern "C" __attribute__((visibility("default"))) int _ZN2P210isTrace1OnEv(void) {
    ALOGD("_ZN2P210isTrace1OnEv() called");
    return 0;
}

/* Demangled: P2::P2Img::dumpNddBuffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img13dumpNddBufferEv(void) {
    ALOGD("_ZNK2P25P2Img13dumpNddBufferEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::MSize> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_5MSizeEEE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::~DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessorD0Ev(void) {
    ALOGD("_ZN2P217DispatchProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::waitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9waitFlushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE9waitFlushEv() called");
    return 0;
}

/* Demangled: P2::MWImg::MWImg(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, NSCam::Feature::P2Util::IMG_TYPE, P2::IMG_INFO const&, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImgC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji(void) {
    ALOGD("_ZN2P25MWImgC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRENS6_8IMG_TYPEERKNS_8IMG_INFOEji() called");
    return 0;
}

/* Demangled: P2::isValid(android::sp<P2::P2Meta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27isValidERKN7android2spINS_6P2MetaEEE(void) {
    ALOGD("_ZN2P27isValidERKN7android2spINS_6P2MetaEEE() called");
    return 0;
}

/* Demangled: P2::P2Img::getHumanName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img12getHumanNameEv(void) {
    ALOGD("_ZNK2P25P2Img12getHumanNameEv() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_ScanlinePlugin()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_ScanlinePluginvE6sTrace = NULL;

/* Demangled: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED2Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEED2Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getCropRegion() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper13getCropRegionEv(void) {
    ALOGD("_ZNK2P29P2Cropper13getCropRegionEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: P2::CaptureRequestCallback::CaptureRequestCallback(P2::CaptureProcessor*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P222CaptureRequestCallbackC1EPNS_16CaptureProcessorE(void) {
    ALOGD("_ZN2P222CaptureRequestCallbackC1EPNS_16CaptureProcessorE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::onConfig(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P212MDPProcessor8onConfigERKj(void) {
    ALOGD("_ZTv0_n64_N2P212MDPProcessor8onConfigERKj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::kick() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_N2P218P2StreamingNodeImp4kickEv(void) {
    ALOGD("_ZTv0_n104_N2P218P2StreamingNodeImp4kickEv() called");
    return 0;
}

/* Demangled: P2::P2InIDMap::P2InIDMap(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2InIDMapC2ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj(void) {
    ALOGD("_ZN2P29P2InIDMapC2ERKNSt3__16vectorIjNS1_9allocatorIjEEEEj() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2CookieC1EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE(void) {
    ALOGD("_ZN2P214BasicProcessor8P2CookieC1EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEEE = NULL;

/* Demangled: virtual thunk to P2::MWMeta::getStreamID() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK2P26MWMeta11getStreamIDEv(void) {
    ALOGD("_ZTv0_n40_NK2P26MWMeta11getStreamIDEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P213P2FrameHolderD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P213P2FrameHolderD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: P2::P2InIDMap::SubImg */
extern "C" __attribute__((visibility("default"))) void* _ZN2P29P2InIDMap6SubImgE = NULL;

/* Demangled: P2::SMVRQueue::SMVRData::SMVRData(int, android::sp<P2::P2Request> const&, android::sp<P2::P2Img> const&, android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue8SMVRDataC2EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_(void) {
    ALOGD("_ZN2P29SMVRQueue8SMVRDataC2EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_() called");
    return 0;
}

/* Demangled: std::__1::deque<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::push_back(P2::SMVRQueue::SMVRData const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9push_backERKS3_(void) {
    ALOGD("_ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE9push_backERKS3_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepare3DNR_FeatureData(int, int, int, P2::P2Util::SimpleIn&, unsigned char, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor23prepare3DNR_FeatureDataEiiiRNS_6P2Util8SimpleInEhRKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor23prepare3DNR_FeatureDataEiiiRNS_6P2Util8SimpleInEhRKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameMetadataInit(NSCam::v3::NSP1Node::STREAM_META, android::sp<NSCam::v3::IMetaStreamBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct17frameMetadataInitENS1_11STREAM_METAERN7android2spINS0_17IMetaStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct17frameMetadataInitENS1_11STREAM_METAERN7android2spINS0_17IMetaStreamBufferEEE() called");
    return 0;
}

/* Demangled: RAW16NodeImp::errorHandle(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN12RAW16NodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: PDENodeImp::onDequeRequest(android::sp<NSCam::v3::IPipelineFrame>&) */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN10PDENodeImp14onDequeRequestERN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::~DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessorD1Ev(void) {
    ALOGD("_ZN2P217DispatchProcessorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::DummyNode::onProcessFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v39DummyNode14onProcessFrameERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v39DummyNode14onProcessFrameERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::config() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl6configEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl6configEv() called");
    return 0;
}

/* Exported Object: vtable for P2::P2DumpPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P212P2DumpPluginE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::ProcessThread(P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadC1EPS7_i(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThreadC1EPS7_i() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::updateConfigInfo(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<P2::MWInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38NSP1Node9P1NodeAct6getNumEv(void) {
    ALOGD("_ZNK5NSCam2v38NSP1Node9P1NodeAct6getNumEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE7reserveEm() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_StreamingNode()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24isTrace1On_StreamingNodevE6sTrace = NULL;

/* Demangled: P2::StreamingProcessor::prepareOutputs(android::sp<P2::StreamingProcessor::Payload> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor14prepareOutputsERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor14prepareOutputsERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-PDENodeImp::ExtractThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN10PDENodeImp13ExtractThreadE0_N7android6ThreadE = NULL;

/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P213P2FrameHolderD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P213P2FrameHolderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::beckonRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp13beckonRequestEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp13beckonRequestEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::createStuffBuffer(android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::v3::IImageStreamInfo> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEERKNS4_INS0_16IImageStreamInfoEEEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEERKNS4_INS0_16IImageStreamInfoEEEi() called");
    return 0;
}

/* Demangled: P2::toCapability(NSCam::Feature::P2Util::IMG_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212toCapabilityEN5NSCam7Feature6P2Util8IMG_TYPEE(void) {
    ALOGD("_ZN2P212toCapabilityEN5NSCam7Feature6P2Util8IMG_TYPEE() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::onCtrlSetting(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode13onCtrlSettingERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri(void) {
    ALOGD("_ZN5NSCam2v38BaseNode13onCtrlSettingERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::checkSwitchOut(NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV14checkSwitchOutEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV14checkSwitchOutEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::RAW16Node::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v39RAW16Node14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v39RAW16Node14createInstanceEv() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N12RAW16NodeImpD0Ev(void) {
    ALOGD("_ZTv0_n136_N12RAW16NodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::~DispatchProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessorD2Ev(void) {
    ALOGD("_ZN2P217DispatchProcessorD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::getNodeId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK2P218P2StreamingNodeImp9getNodeIdEv(void) {
    ALOGD("_ZTv0_n40_NK2P218P2StreamingNodeImp9getNodeIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::cleanAction(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp11cleanActionERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp11cleanActionERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: RAW16NodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp6uninitEv(void) {
    ALOGD("_ZN12RAW16NodeImp6uninitEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*> >::push_front(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE10push_frontEOSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_ISA_EEE10push_frontEOSA_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for P2::MWFrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P214MWFrameRequestE = NULL;

/* Demangled: NSCam::v3::BaseNode::triggerdb(NSCam::v3::IPipelineNode::TriggerDB const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE(void) {
    ALOGD("_ZN5NSCam2v38BaseNode9triggerdbERKNS0_13IPipelineNode9TriggerDBE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::checkList(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker9checkListEl(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker9checkListEl() called");
    return 0;
}

/* Demangled: JpegNodeImp::encodeExif(android::sp<encode_frame>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp10encodeExifERN7android2spI12encode_frameEE(void) {
    ALOGD("_ZN11JpegNodeImp10encodeExifERN7android2spI12encode_frameEE() called");
    return 0;
}

/* Demangled: P2::P2Meta::getName(P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Meta7getNameENS_7ID_METAE(void) {
    ALOGD("_ZN2P26P2Meta7getNameENS_7ID_METAE() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZN2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK2P26MWMeta7isValidEv(void) {
    ALOGD("_ZTv0_n48_NK2P26MWMeta7isValidEv() called");
    return 0;
}

/* Demangled: P2::P2Img::dumpBuffer(NSCam::IImageBuffer*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img10dumpBufferEPN5NSCam12IImageBufferEj(void) {
    ALOGD("_ZNK2P25P2Img10dumpBufferEPN5NSCam12IImageBufferEj() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::getRequestPack(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload14getRequestPackERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload14getRequestPackERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZN2P218StreamingProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp5flushEv(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp5flushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::size() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4sizeEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4sizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N12RAW16NodeImpD1Ev(void) {
    ALOGD("_ZTv0_n136_N12RAW16NodeImpD1Ev() called");
    return 0;
}

/* Demangled: PDENodeImp::onProcessFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN10PDENodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::PartialPayload::~PartialPayload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor14PartialPayloadD0Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor14PartialPayloadD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::prepareFdData(NSCam::Feature::P2Util::P2Info const&, NSCam::IFDContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload13prepareFdDataERKN5NSCam7Feature6P2Util6P2InfoEPNS2_12IFDContainerE(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload13prepareFdDataERKN5NSCam7Feature6P2Util6P2InfoEPNS2_12IFDContainerE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::createStuffBuffer(android::sp<NSCam::IImageBuffer>&, char const*, int, NSCam::MSize, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17createStuffBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEi() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38NSP1Node7LogInfo10CheckPointENS_9allocatorIS5_EEE6assignIPKS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node7LogInfo10CheckPointENS_9allocatorIS5_EEE6assignIPKS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node7LogInfo10CheckPointENS_9allocatorIS5_EEE6assignIPKS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_() called");
    return 0;
}

/* Exported Object: vtable for P2::P2Img */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P25P2ImgE = NULL;

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE5flushEv(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE5flushEv() called");
    return 0;
}

/* Demangled: P2::MWFrame::toStreamBufferStatus(NSCam::Feature::ILog const&, P2::IO_STATUS) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame20toStreamBufferStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE(void) {
    ALOGD("_ZN2P27MWFrame20toStreamBufferStatusERKN5NSCam7Feature4ILogENS_9IO_STATUSE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::pair<P2::ID_IMG const, P2::ID_IMG> const&>(P2::ID_IMG const&, std::__1::pair<P2::ID_IMG const, P2::ID_IMG> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_4pairIKS3_S3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameMetadataPut(NSCam::v3::NSP1Node::STREAM_META) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataPutENS1_11STREAM_METAE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct16frameMetadataPutENS1_11STREAM_METAE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::config(NSCam::v3::P1Node::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp6configERKNS0_6P1Node12ConfigParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38NSP1Node9P1NodeAct7getTypeEv(void) {
    ALOGD("_ZNK5NSCam2v38NSP1Node9P1NodeAct7getTypeEv() called");
    return 0;
}

/* Demangled: P2::P2Request::getSensorID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request11getSensorIDEv(void) {
    ALOGD("_ZNK2P29P2Request11getSensorIDEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_MWInfo()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P217isTrace1On_MWInfoEvE4sVal = NULL;

/* Demangled: P2::MWFrame::releaseImageStream(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IImageStreamBuffer> const&, P2::IO_DIR, P2::IO_STATUS) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame18releaseImageStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE(void) {
    ALOGD("_ZN2P27MWFrame18releaseImageStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE() called");
    return 0;
}

/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_P2Request()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P220isTrace1On_P2RequestEvE6sTrace = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::config(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6configERKS2_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6configERKS2_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getStreamID() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK2P25MWImg11getStreamIDEv(void) {
    ALOGD("_ZTv0_n40_NK2P25MWImg11getStreamIDEv() called");
    return 0;
}

/* Demangled: P2::MWFrame::dispatchFrame(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IPipelineFrame> const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame13dispatchFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl(void) {
    ALOGD("_ZN2P27MWFrame13dispatchFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::PartialPayload::~PartialPayload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor14PartialPayloadD1Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor14PartialPayloadD1Ev() called");
    return 0;
}

/* Demangled: JpegBufPool::putBufHeap(long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegBufPool10putBufHeapEli(void) {
    ALOGD("_ZN11JpegBufPool10putBufHeapEli() called");
    return 0;
}

/* Demangled: non-virtual thunk to JpegNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZThn40_N11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::MWImg::processPlugin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg13processPluginEv(void) {
    ALOGD("_ZNK2P25MWImg13processPluginEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> const&>(unsigned int const&, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::updateCustomMetaInBypassFrame(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp29updateCustomMetaInBypassFrameERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp29updateCustomMetaInBypassFrameERNS1_8P1QueActE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1RegisterNotify */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node16P1RegisterNotifyE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrlD0Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrlD0Ev() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::MDPProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessorC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN2P212MDPProcessorC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::updateConfigInfo(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<P2::MWInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp16updateConfigInfoERKN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEERKNS2_INS_6MWInfoEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::IMG_INFO> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS2_8IMG_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorIlEE = NULL;

/* Demangled: P2::isTrace2On() */
extern "C" __attribute__((visibility("default"))) int _ZN2P210isTrace2OnEv(void) {
    ALOGD("_ZN2P210isTrace2OnEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::TimingCheckerMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node16TimingCheckerMgrE = NULL;

/* Demangled: virtual thunk to P2::MWMeta::getDir() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_NK2P26MWMeta6getDirEv(void) {
    ALOGD("_ZTv0_n56_NK2P26MWMeta6getDirEv() called");
    return 0;
}

/* Exported Object: isTrace1On_MWFrame()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ18isTrace1On_MWFramevE4sVal = NULL;

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-NSCam::v3::DummyNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v39DummyNodeE0_NS0_13IPipelineNodeE = NULL;

/* Demangled: virtual thunk to NSCam::v3::JpgPack::~JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v37JpgPackD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v37JpgPackD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::PartialPayload::~PartialPayload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor14PartialPayloadD2Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor14PartialPayloadD2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::isEIS12() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor7isEIS12Ev(void) {
    ALOGD("_ZNK2P218StreamingProcessor7isEIS12Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::PartialPayload::~PartialPayload() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::isLegacyStandby() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl15isLegacyStandbyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl15isLegacyStandbyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr10threadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::TimingChecker::Client */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node13TimingChecker6ClientE = NULL;

/* Demangled: virtual thunk to P2::CaptureRequestCallback::onRestored(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n48_N2P222CaptureRequestCallback10onRestoredEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void) {
    ALOGD("_ZTv0_n72_N2P217DispatchProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrlD1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrlD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::BaseNode-in-PDENodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC10PDENodeImp0_N5NSCam2v38BaseNodeE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::init(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE4initERKS1_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE4initERKS1_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P27MWFrameD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P27MWFrameD0Ev() called");
    return 0;
}

/* Demangled: P2::IMG_INFO::IMG_INFO() */
extern "C" __attribute__((visibility("default"))) int _ZN2P28IMG_INFOC1Ev(void) {
    ALOGD("_ZN2P28IMG_INFOC1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::queryAct(NSCam::v3::NSP1Node::P1QueAct&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector8queryActERNS1_8P1QueActEj(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector8queryActERNS1_8P1QueActEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo5clearEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo5clearEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::BaseNode-in-JpegNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC11JpegNodeImp0_N5NSCam2v38BaseNodeE = NULL;

/* Demangled: std::__1::__deque_base<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE5clearEv() called");
    return 0;
}

/* Demangled: P2::releaseStream(NSCam::Feature::ILog const&, long const&, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IStreamInfoSet const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P213releaseStreamERKN5NSCam7Feature4ILogERKlRNS0_2v316IStreamBufferSetERKN7android2spIKNS7_14IStreamInfoSetEEE(void) {
    ALOGD("_ZN2P213releaseStreamERKN5NSCam7Feature4ILogERKlRNS0_2v316IStreamBufferSetERKN7android2spIKNS7_14IStreamInfoSetEEE() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::SMVRData::SMVRData(int, android::sp<P2::P2Request> const&, android::sp<P2::P2Img> const&, android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue8SMVRDataC1EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_(void) {
    ALOGD("_ZN2P29SMVRQueue8SMVRDataC1EiRKN7android2spINS_9P2RequestEEERKNS3_INS_5P2ImgEEESB_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onEnque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE(void) {
    ALOGD("_ZTv0_n72_N2P218StreamingProcessor7onEnqueERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyYuvR2Crop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR2CropEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify18getNotifyYuvR2CropEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::JpgPack::~JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v37JpgPackD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v37JpgPackD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__push_back_slow_path<android::sp<NSCam::IImageBuffer> const&>(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Img> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P25P2ImgEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::PartialPayload::~PartialPayload() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessor14PartialPayloadD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N2P216CaptureProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZTv0_n80_N2P216CaptureProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::prepareLMV() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Cropper10prepareLMVEv(void) {
    ALOGD("_ZN2P29P2Cropper10prepareLMVEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::~P1TaskCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrlD2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrlD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::processRedoFrame(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp16processRedoFrameERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp16processRedoFrameERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: JpegNodeImp::returnBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp12returnBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE(void) {
    ALOGD("_ZN11JpegNodeImp12returnBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEERNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P27MWFrameD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P27MWFrameD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::addP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, P2::ID_META, P2::IO_DIR) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAENS_6IO_DIRE(void) {
    ALOGD("_ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAENS_6IO_DIRE() called");
    return 0;
}

/* Demangled: P2::IMG_INFO::IMG_INFO() */
extern "C" __attribute__((visibility("default"))) int _ZN2P28IMG_INFOC2Ev(void) {
    ALOGD("_ZN2P28IMG_INFOC2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P216CaptureProcessor13onThreadStartEv(void) {
    ALOGD("_ZTv0_n48_N2P216CaptureProcessor13onThreadStartEv() called");
    return 0;
}

/* Exported Object: VTT for P2::DispatchProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P217DispatchProcessorE = NULL;

/* Demangled: virtual thunk to P2::MDPProcessor::~MDPProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P212MDPProcessorD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P212MDPProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::createBlobImages(android::sp<NSCam::IImageBufferHeap> const&, android::sp<NSCam::v3::IImageStreamBuffer> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame16createBlobImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERKNS2_INS3_2v318IImageStreamBufferEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENSD_9allocatorISG_EEEE(void) {
    ALOGD("_ZNK2P27MWFrame16createBlobImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERKNS2_INS3_2v318IImageStreamBufferEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENSD_9allocatorISG_EEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::initFeaturePipe(NSCam::Feature::P2Util::P2ConfigInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor15initFeaturePipeERKN5NSCam7Feature6P2Util12P2ConfigInfoE(void) {
    ALOGD("_ZN2P218StreamingProcessor15initFeaturePipeERKN5NSCam7Feature6P2Util12P2ConfigInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::config() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr6configEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr6configEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getFlush(NSCam::v3::NSP1Node::FLUSH_TYPE) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38NSP1Node9P1NodeAct8getFlushENS1_10FLUSH_TYPEE(void) {
    ALOGD("_ZNK5NSCam2v38NSP1Node9P1NodeAct8getFlushENS1_10FLUSH_TYPEE() called");
    return 0;
}

/* Demangled: PDENodeImp::config(NSCam::v3::PDENode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE(void) {
    ALOGD("_ZN10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE7camProp = NULL;

/* Demangled: virtual thunk to P2::CaptureProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P216CaptureProcessor11onWaitFlushEv(void) {
    ALOGD("_ZTv0_n88_N2P216CaptureProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::needDump(P2::P2Img const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P212P2DumpPlugin8needDumpEPKNS_5P2ImgE(void) {
    ALOGD("_ZNK2P212P2DumpPlugin8needDumpEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::getAnyRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload13getAnyRequestEv(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload13getAnyRequestEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::updateSMVRTimestamp(android::sp<P2::StreamingProcessor::Payload> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor19updateSMVRTimestampERKN7android2spINS0_7PayloadEEEj(void) {
    ALOGD("_ZN2P218StreamingProcessor19updateSMVRTimestampERKN7android2spINS0_7PayloadEEEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelper>::operator=(NSCam::v3::Utils::Imp::ISyncHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEaSEPS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::getMin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6getMinEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6getMinEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::TimingChecker::Record */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node13TimingChecker6RecordE = NULL;

/* Demangled: parseBGPreRelease(NSCam::v3::P2Common::Capture::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _Z17parseBGPreReleaseRKN5NSCam2v38P2Common7Capture9UsageHintE(void) {
    ALOGD("_Z17parseBGPreReleaseRKN5NSCam2v38P2Common7Capture9UsageHintE() called");
    return 0;
}

/* Exported Object: vtable for P2::BasicProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P214BasicProcessorE = NULL;

/* Demangled: P2::CaptureProcessor::waitRequestDone() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor15waitRequestDoneEv(void) {
    ALOGD("_ZN2P216CaptureProcessor15waitRequestDoneEv() called");
    return 0;
}

/* Demangled: P2::P2InitParam::P2InitParam(NSCam::Feature::P2Util::P2Info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P211P2InitParamC1ERKN5NSCam7Feature6P2Util6P2InfoE(void) {
    ALOGD("_ZN2P211P2InitParamC1ERKN5NSCam7Feature6P2Util6P2InfoE() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_MWMeta()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P217isTrace1On_MWMetaEvE4sVal = NULL;

/* Demangled: _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE7reserveEm() called");
    return 0;
}

/* Demangled: PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImpD0Ev(void) {
    ALOGD("_ZN10PDENodeImpD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P212MDPProcessor8onUninitEv(void) {
    ALOGD("_ZTv0_n40_N2P212MDPProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::~MDPProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P212MDPProcessorD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P212MDPProcessorD1Ev() called");
    return 0;
}

/* Demangled: P2::P2Request::isValidImg(P2::ID_IMG, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10isValidImgENS_6ID_IMGEj(void) {
    ALOGD("_ZNK2P29P2Request10isValidImgENS_6ID_IMGEj() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_() called");
    return 0;
}

/* Exported Object: vtable for P2::P2FrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P214P2FrameRequestE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P216CaptureProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZTv0_n32_N2P216CaptureProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::needDumpIn(P2::P2DumpPlugin::DUMP_IN) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P212P2DumpPlugin10needDumpInENS0_7DUMP_INE(void) {
    ALOGD("_ZNK2P212P2DumpPlugin10needDumpInENS0_7DUMP_INE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long, android::sp<P2::P2Meta> >, std::__1::__map_value_compare<long, std::__1::__value_type<long, android::sp<P2::P2Meta> >, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, android::sp<P2::P2Meta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, android::sp<P2::P2Meta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P26P2MetaEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIlN7android2spIN2P26P2MetaEEEEENS_19__map_value_compareIlS7_NS_4lessIlEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N2P218P2StreamingNodeImpD0Ev(void) {
    ALOGD("_ZTv0_n136_N2P218P2StreamingNodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Request::updateSensorID() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request14updateSensorIDEv(void) {
    ALOGD("_ZN2P29P2Request14updateSensorIDEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::FrameNote::set(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9FrameNote3setEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9FrameNote3setEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::NSP1Node::P1NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE56_N7android6ThreadE = NULL;

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_() called");
    return 0;
}

/* Demangled: PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImpD1Ev(void) {
    ALOGD("_ZN10PDENodeImpD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > >::__push_back_slow_path<android::sp<P2::StreamingProcessor::P2RequestPack> const&>(android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor13P2RequestPackEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor13P2RequestPackEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: P2::P2Cropper::toActive(NSCam::MRect const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper8toActiveERKN5NSCam5MRectEi(void) {
    ALOGD("_ZNK2P29P2Cropper8toActiveERKN5NSCam5MRectEi() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6insertINS_21__list_const_iteratorIS5_PvEEEENS_15__list_iteratorIS5_SB_EESC_T_SF_PNS_9enable_ifIXsr19__is_input_iteratorISF_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6insertINS_21__list_const_iteratorIS5_PvEEEENS_15__list_iteratorIS5_SB_EESC_T_SF_PNS_9enable_ifIXsr19__is_input_iteratorISF_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6insertINS_21__list_const_iteratorIS5_PvEEEENS_15__list_iteratorIS5_SB_EESC_T_SF_PNS_9enable_ifIXsr19__is_input_iteratorISF_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1TaskCollector */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node15P1TaskCollectorE = NULL;

/* Demangled: P2::MWInfo::findStreamInfo(P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo14findStreamInfoENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P26MWInfo14findStreamInfoENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(NSCam::Feature::ILog const&, android::sp<P2::IP2Frame> const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::P2InIDMap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC1ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE(void) {
    ALOGD("_ZN2P29P2RequestC1ERKN5NSCam7Feature4ILogERKN7android2spINS_8IP2FrameEEERKNS2_6P2Util6P2PackERKNS7_INS_9P2InIDMapEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DrawIDPlugin::onPlugin(P2::P2Img const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE(void) {
    ALOGD("_ZTv0_n48_N2P214P2DrawIDPlugin8onPluginEPKNS_5P2ImgE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::isRecord() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util9SimpleOut8isRecordEv(void) {
    ALOGD("_ZNK2P26P2Util9SimpleOut8isRecordEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::~P2StreamingNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N2P218P2StreamingNodeImpD1Ev(void) {
    ALOGD("_ZTv0_n136_N2P218P2StreamingNodeImpD1Ev() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_StreamingProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P229isTrace1On_StreamingProcessorEvE6sTrace = NULL;

/* Demangled: void std::__1::vector<NS3Av3::IHal3A*, std::__1::allocator<NS3Av3::IHal3A*> >::__push_back_slow_path<NS3Av3::IHal3A* const&>(NS3Av3::IHal3A* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_ReleaseBundle()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P224isTrace1On_ReleaseBundleEvE4sVal = NULL;

/* Demangled: P2::P2Request::isValidImg(P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10isValidImgENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P29P2Request10isValidImgENS_6ID_IMGE() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_VRGralloc()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20isTrace1On_VRGrallocvE6sTrace = NULL;

/* Exported Object: guard variable for isTrace1On_P2Util()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ17isTrace1On_P2UtilvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify4initEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify4initEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImpD2Ev(void) {
    ALOGD("_ZN10PDENodeImpD2Ev() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_ReleaseBundle()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P224isTrace1On_ReleaseBundleEvE4sVal = NULL;

/* Exported Object: construction vtable for P2::P2FrameHolder-in-P2::P2Request */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29P2RequestE336_NS_13P2FrameHolderE = NULL;

/* Demangled: std::__1::__deque_base<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::config() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector6configEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector6configEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::calcViewAngle(NSCam::Feature::ILog const&, NSCam::MSize const&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEj(void) {
    ALOGD("_ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEj() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_StreamingProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P229isTrace1On_StreamingProcessorEvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::set(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18LongExposureStatus3setEil(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18LongExposureStatus3setEil() called");
    return 0;
}

/* Demangled: JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImpD0Ev(void) {
    ALOGD("_ZN11JpegNodeImpD0Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::isInMetaStream(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12RAW16NodeImp14isInMetaStreamEl(void) {
    ALOGD("_ZNK12RAW16NodeImp14isInMetaStreamEl() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::addYUVOutputBuffer(android::sp<P2::P2Request> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor18addYUVOutputBufferERKN7android2spINS_9P2RequestEEERNS2_IN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN2P216CaptureProcessor18addYUVOutputBufferERKN7android2spINS_9P2RequestEEERNS2_IN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P213P2FrameHolderD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P213P2FrameHolderD0Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::waitForRequestDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp21waitForRequestDrainedEv(void) {
    ALOGD("_ZN12RAW16NodeImp21waitForRequestDrainedEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getImgType() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n176_NK2P25MWImg10getImgTypeEv(void) {
    ALOGD("_ZTv0_n176_NK2P25MWImg10getImgTypeEv() called");
    return 0;
}

/* Demangled: JpegNodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN11JpegNodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::MWMeta::MWMeta(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::MWFrame> const&, long const&, P2::IO_DIR, P2::META_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMetaC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE(void) {
    ALOGD("_ZN2P26MWMetaC1ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_7MWFrameEEERKlNS_6IO_DIRERKNS_9META_INFOE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::PartialPayload::print() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor14PartialPayload5printEv(void) {
    ALOGD("_ZNK2P218StreamingProcessor14PartialPayload5printEv() called");
    return 0;
}

/* Demangled: JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImpD1Ev(void) {
    ALOGD("_ZN11JpegNodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::MWInfo::getBurstNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo11getBurstNumEv(void) {
    ALOGD("_ZNK2P26MWInfo11getBurstNumEv() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::mapID(unsigned int, P2::ID_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequest5mapIDEjNS_6ID_IMGE(void) {
    ALOGD("_ZN2P214P2FrameRequest5mapIDEjNS_6ID_IMGE() called");
    return 0;
}

/* Exported Object: vtable for P2::StreamingProcessor::P2RequestPack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P218StreamingProcessor13P2RequestPackE = NULL;

/* Demangled: P2::BasicProcessor::P2Cookie::P2Cookie(P2::BasicProcessor*, std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2CookieC2EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE(void) {
    ALOGD("_ZN2P214BasicProcessor8P2CookieC2EPS0_RKNSt3__16vectorIN7android2spINS0_9P2PayloadEEENS3_9allocatorIS8_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-NSCam::v3::BaseNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38BaseNodeE0_NS0_13IPipelineNodeE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2DrawIDPluginC1Ev(void) {
    ALOGD("_ZN2P214P2DrawIDPluginC1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::detach() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N2P26MWMeta6detachEv(void) {
    ALOGD("_ZTv0_n96_N2P26MWMeta6detachEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameHolder::~P2FrameHolder() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P213P2FrameHolderD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P213P2FrameHolderD1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZN2P218StreamingProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: P2::P2ImgPlugin::onPlugin(android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P211P2ImgPlugin8onPluginERKN7android2spINS_5P2ImgEEE(void) {
    ALOGD("_ZN2P211P2ImgPlugin8onPluginERKN7android2spINS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: P2::P2Img::dumpBuffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img10dumpBufferEv(void) {
    ALOGD("_ZNK2P25P2Img10dumpBufferEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgrC1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgrC1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::syncHelperStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15syncHelperStartEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15syncHelperStartEv() called");
    return 0;
}

/* Demangled: PDENodeImp::waitForRequestDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp21waitForRequestDrainedEv(void) {
    ALOGD("_ZN10PDENodeImp21waitForRequestDrainedEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImpD2Ev(void) {
    ALOGD("_ZN11JpegNodeImpD2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::notifyRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame13notifyReleaseEv(void) {
    ALOGD("_ZN2P27MWFrame13notifyReleaseEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setCurrentBinSize(NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17setCurrentBinSizeENS_5MSizeE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17setCurrentBinSizeENS_5MSizeE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::IHalSensor::ConfigParam, std::__1::allocator<NSCam::IHalSensor::ConfigParam> >::__push_back_slow_path<NSCam::IHalSensor::ConfigParam const&>(NSCam::IHalSensor::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getDir() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_NK2P25MWImg6getDirEv(void) {
    ALOGD("_ZTv0_n56_NK2P25MWImg6getDirEv() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::configInputBuffer(unsigned int, android::sp<NSCam::Feature::P2Util::Cropper> const&, std::__1::vector<long, std::__1::allocator<long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest17configInputBufferEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEERKNSt3__16vectorIlNSA_9allocatorIlEEEE(void) {
    ALOGD("_ZN2P214MWFrameRequest17configInputBufferEjRKN7android2spIN5NSCam7Feature6P2Util7CropperEEERKNSt3__16vectorIlNSA_9allocatorIlEEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1RegisterNotify>::operator=(NSCam::v3::NSP1Node::P1RegisterNotify*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node16P1RegisterNotifyEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node16P1RegisterNotifyEEaSEPS4_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2DrawIDPluginC2Ev(void) {
    ALOGD("_ZN2P214P2DrawIDPluginC2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1FrameAct, std::__1::allocator<NSCam::v3::NSP1Node::P1FrameAct> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1FrameAct const&>(NSCam::v3::NSP1Node::P1FrameAct const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::registerAct(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl11registerActERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl11registerActERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getActiveCrop() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper13getActiveCropEv(void) {
    ALOGD("_ZNK2P29P2Cropper13getActiveCropEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgrC2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgrC2Ev() called");
    return 0;
}

/* Demangled: P2::MWInfo::toMetaID(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo8toMetaIDEl(void) {
    ALOGD("_ZNK2P26MWInfo8toMetaIDEl() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::queryInputImgSize(P2::ID_IMG, android::sp<NSCam::Feature::P2Util::Cropper> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214MWFrameRequest17queryInputImgSizeENS_6ID_IMGERKN7android2spIN5NSCam7Feature6P2Util7CropperEEE(void) {
    ALOGD("_ZNK2P214MWFrameRequest17queryInputImgSizeENS_6ID_IMGERKN7android2spIN5NSCam7Feature6P2Util7CropperEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::calculateCropInfoYuvResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect const&, NSCam::MRect&, NSCam::MSize&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node27calculateCropInfoYuvResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_ii(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node27calculateCropInfoYuvResizerEjjRKNS_5MSizeES4_RKNS_5MRectERS5_RS2_ii() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::inspect(NSCam::v3::NSP1Node::LogInfo::InspectType, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo7inspectENS2_11InspectTypeEPKc(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo7inspectENS2_11InspectTypeEPKc() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__append(unsigned long, android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE8__appendEmRKS6_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE8__appendEmRKS6_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessorC1Ev(void) {
    ALOGD("_ZN2P218StreamingProcessorC1Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_MWFrameRequest()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_MWFrameRequestvE4sVal = NULL;

/* Demangled: std::__1::__tree<android::sp<P2::P2Request>, std::__1::less<android::sp<P2::P2Request> >, std::__1::allocator<android::sp<P2::P2Request> > >::destroy(std::__1::__tree_node<android::sp<P2::P2Request>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN7android2spIN2P29P2RequestEEENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::DummyNode::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_back(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: P2::MWFrame::preReleaseMetaStream(android::sp<NSCam::v3::IMetaStreamBuffer> const&, P2::IO_DIR) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame20preReleaseMetaStreamERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE(void) {
    ALOGD("_ZN2P27MWFrame20preReleaseMetaStreamERKN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWInfo::~MWInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P26MWInfoD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P26MWInfoD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_enque(NSCam::v3::NSP1Node::P1QueJob&, NSCam::v3::NSP1Node::ENQ_TYPE, int, long, NSCam::v3::NSP1Node::ENQ_ISP_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_enqueERNS1_8P1QueJobENS1_8ENQ_TYPEEilNS1_12ENQ_ISP_TYPEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17hardwareOps_enqueERNS1_8P1QueJobENS1_8ENQ_TYPEEilNS1_12ENQ_ISP_TYPEE() called");
    return 0;
}

/* Exported Object: VTT for PDENodeImp::ExtractThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN10PDENodeImp13ExtractThreadE = NULL;

/* Exported Object: VTT for P2::ReleaseBundle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P213ReleaseBundleE = NULL;

/* Demangled: P2::extractLMVInfo(NSCam::Feature::ILog const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214extractLMVInfoERKN5NSCam7Feature4ILogEPKNS0_9IMetadataE(void) {
    ALOGD("_ZN2P214extractLMVInfoERKN5NSCam7Feature4ILogEPKNS0_9IMetadataE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P217DispatchProcessor8onUninitEv(void) {
    ALOGD("_ZTv0_n40_N2P217DispatchProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::get3DNRIsoThreshold(unsigned int, unsigned char) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor19get3DNRIsoThresholdEjh(void) {
    ALOGD("_ZNK2P218StreamingProcessor19get3DNRIsoThresholdEjh() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::createAction(NSCam::v3::NSP1Node::P1QueAct&, android::sp<NSCam::v3::IPipelineFrame>, NSCam::v3::NSP1Node::REQ_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp12createActionERNS1_8P1QueActEN7android2spINS0_14IPipelineFrameEEENS1_8REQ_TYPEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp12createActionERNS1_8P1QueActEN7android2spINS0_14IPipelineFrameEEENS1_8REQ_TYPEE() called");
    return 0;
}

/* Demangled: PDENodeImp::threadSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp13threadSettingEv(void) {
    ALOGD("_ZN10PDENodeImp13threadSettingEv() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::pop(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue3popEj(void) {
    ALOGD("_ZN2P29SMVRQueue3popEj() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::dropRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack10dropRecordEv(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack10dropRecordEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessorC2Ev(void) {
    ALOGD("_ZN2P218StreamingProcessorC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: P2::MWImg::registerPlugin(std::__1::list<android::sp<P2::P2ImgPlugin>, std::__1::allocator<android::sp<P2::P2ImgPlugin> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN2P25MWImg14registerPluginERKNSt3__14listIN7android2spINS_11P2ImgPluginEEENS1_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWInfo::~MWInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P26MWInfoD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P26MWInfoD1Ev() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC1ERKN7android2spIS0_EEj(void) {
    ALOGD("_ZN2P29P2RequestC1ERKN7android2spIS0_EEj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P216P2ScanlinePluginD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P216P2ScanlinePluginD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::IHal3A*, std::__1::allocator<NS3Av3::IHal3A*> >::__push_back_slow_path<NS3Av3::IHal3A*>(NS3Av3::IHal3A*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av36IHal3AENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyYuvR1Crop(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR1CropEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR1CropEPvS3_() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<unsigned int, unsigned int, P2::MDPParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorIjjNS_8MDPParamEEE = NULL;

/* Demangled: P2::MWFrameRequest::addP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > >&, long const&, P2::ID_META, P2::IO_DIR, P2::META_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_7ID_METAENS_6IO_DIRERKNS_9META_INFOE(void) {
    ALOGD("_ZN2P214MWFrameRequest9addP2MetaERNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_7ID_METAENS_6IO_DIRERKNS_9META_INFOE() called");
    return 0;
}

/* Demangled: P2::P2Request::getMetaPtr(P2::ID_META, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10getMetaPtrENS_7ID_METAEj(void) {
    ALOGD("_ZNK2P29P2Request10getMetaPtrENS_7ID_METAEj() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::isFD() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util9SimpleOut4isFDEv(void) {
    ALOGD("_ZNK2P26P2Util9SimpleOut4isFDEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::config(NSCam::v3::P2CaptureNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n152_N2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void) {
    ALOGD("_ZTv0_n152_N2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::ensureImageBufferAvailable_(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IImageStreamBuffer>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode27ensureImageBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_18IImageStreamBufferEEEi(void) {
    ALOGD("_ZN5NSCam2v38BaseNode27ensureImageBufferAvailable_EjlRNS0_16IStreamBufferSetERN7android2spINS0_18IImageStreamBufferEEEi() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::toP2UsageHint(NSCam::v3::P2Common::UsageHint const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218P2StreamingNodeImp13toP2UsageHintERKN5NSCam2v38P2Common9UsageHintE(void) {
    ALOGD("_ZNK2P218P2StreamingNodeImp13toP2UsageHintERKN5NSCam2v38P2Common9UsageHintE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N2P216P2CaptureNodeImpD0Ev(void) {
    ALOGD("_ZTv0_n136_N2P216P2CaptureNodeImpD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE10do_compareEPKvS3_(void) {
    ALOGD("_ZNK7android12SortedVectorIlE10do_compareEPKvS3_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::init(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE4initERKS1_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE4initERKS1_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::setEntry(unsigned int, NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE(void) {
    ALOGD("_ZTv0_n88_N2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::addP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > >&, long const&, P2::ID_IMG, P2::IO_DIR, P2::IMG_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6ID_IMGENS_6IO_DIRERKNS_8IMG_INFOE(void) {
    ALOGD("_ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEERSB_NS_6ID_IMGENS_6IO_DIRERKNS_8IMG_INFOE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyE = NULL;

/* Demangled: virtual thunk to PDENodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N10PDENodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::waitFlush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr9waitFlushEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr9waitFlushEi() called");
    return 0;
}

/* Demangled: JpegNodeImp::checkBufferAvailable(android::sp<NSCam::v3::IPipelineFrame> const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp20checkBufferAvailableERKN7android2spIN5NSCam2v314IPipelineFrameEEEl(void) {
    ALOGD("_ZN11JpegNodeImp20checkBufferAvailableERKN7android2spIN5NSCam2v314IPipelineFrameEEEl() called");
    return 0;
}

/* Demangled: Request::updateMetadata(jpeg_params&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request14updateMetadataER11jpeg_params(void) {
    ALOGD("_ZN7Request14updateMetadataER11jpeg_params() called");
    return 0;
}

/* Demangled: Request::returnImageBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>, android::sp<NSCam::IImageBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request17returnImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEENS1_INS2_12IImageBufferEEESC_(void) {
    ALOGD("_ZN7Request17returnImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEENS1_INS2_12IImageBufferEEESC_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P216P2ScanlinePluginD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P216P2ScanlinePluginD1Ev() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::waitEnqueParam(P2::MDPParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread14waitEnqueParamERS1_(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread14waitEnqueParamERS1_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P25MWImgD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P25MWImgD0Ev() called");
    return 0;
}

/* Exported Object: vtable for P2::P2ScanlinePlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P216P2ScanlinePluginE = NULL;

/* Exported Object: guard variable for isTrace1On_Streaming_EIS()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24isTrace1On_Streaming_EISvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImageInit(NSCam::v3::NSP1Node::STREAM_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct13poolImageInitENS1_10STREAM_IMGE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct13poolImageInitENS1_10STREAM_IMGE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::MyTimer::setFPS(double) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7MyTimer6setFPSEd(void) {
    ALOGD("_ZN2P214BasicProcessor7MyTimer6setFPSEd() called");
    return 0;
}

/* Exported Object: VTT for P2::MWFrame */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P27MWFrameE = NULL;

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P218P2StreamingNodeImp5flushEv(void) {
    ALOGD("_ZTv0_n88_N2P218P2StreamingNodeImp5flushEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::addOutput(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack9addOutputERKN7android2spINS_9P2RequestEEEj(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack9addOutputERKN7android2spINS_9P2RequestEEEj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N2P216P2CaptureNodeImpD1Ev(void) {
    ALOGD("_ZTv0_n136_N2P216P2CaptureNodeImpD1Ev() called");
    return 0;
}

/* Exported Object: vtable for P2::MWFrame::ReleaseToken */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P27MWFrame12ReleaseTokenE = NULL;

/* Demangled: P2::P2StreamingNodeImp::P2StreamingNodeImp(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImpC1EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImpC1EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::dumpActPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl11dumpActPoolEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl11dumpActPoolEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1TaskCtrl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node10P1TaskCtrlE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEEE = NULL;

/* Exported Object: VTT for P2::MDPProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P212MDPProcessorE = NULL;

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N2P218P2StreamingNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onIdle() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor6onIdleEv(void) {
    ALOGD("_ZN2P218StreamingProcessor6onIdleEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getEISExpTime(int&, int&, NSCam::Feature::P2Util::LMVInfo const&, android::sp<P2::P2Meta> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13getEISExpTimeERiS1_RKN5NSCam7Feature6P2Util7LMVInfoERKN7android2spINS_6P2MetaEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor13getEISExpTimeERiS1_RKN5NSCam7Feature6P2Util7LMVInfoERKN7android2spINS_6P2MetaEEE() called");
    return 0;
}

/* Demangled: virtual thunk to JpegBufPool::~JpegBufPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N11JpegBufPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N11JpegBufPoolD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::incPayload(android::sp<P2::StreamingProcessor::Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10incPayloadERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor10incPayloadERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::HardwareStateControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node20HardwareStateControlE = NULL;

/* Demangled: ExifUtils::updateDebugInfoToExif(NSCam::IMetadata*, StdExif&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils21updateDebugInfoToExifEPN5NSCam9IMetadataER7StdExifi(void) {
    ALOGD("_ZN9ExifUtils21updateDebugInfoToExifEPN5NSCam9IMetadataER7StdExifi() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N11JpegNodeImp6uninitEv(void) {
    ALOGD("_ZTv0_n72_N11JpegNodeImp6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPack6uninitEv(void) {
    ALOGD("_ZN5NSCam2v37JpgPack6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P25MWImgD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P25MWImgD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::addP2Img(std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > >&, P2::ID_IMG, P2::IO_DIR) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGENS_6IO_DIRE(void) {
    ALOGD("_ZN2P214MWFrameRequest8addP2ImgERNSt3__13mapIlN7android2spINS_5P2ImgEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_6ID_IMGENS_6IO_DIRE() called");
    return 0;
}

/* Demangled: int P2::tryGet<NSCam::IMetadata::Memory>(NSCam::IMetadata const&, unsigned int, NSCam::IMetadata::Memory&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26tryGetIN5NSCam9IMetadata6MemoryEEEiRKS2_jRT_(void) {
    ALOGD("_ZN2P26tryGetIN5NSCam9IMetadata6MemoryEEEiRKS2_jRT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::stuffImageGet(NSCam::v3::NSP1Node::STREAM_IMG, signed char, NSCam::MSize, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImageGetENS1_10STREAM_IMGEaNS_5MSizeERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct13stuffImageGetENS1_10STREAM_IMGEaNS_5MSizeERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: P2::MWImg::isPhysicalStream() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg16isPhysicalStreamEv(void) {
    ALOGD("_ZNK2P25MWImg16isPhysicalStreamEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Demangled: P2::META_INFO::META_INFO() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29META_INFOC1Ev(void) {
    ALOGD("_ZN2P29META_INFOC1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::FrameNote */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9FrameNoteE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle-in-P2::P2BufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P214P2BufferHandleE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleE = NULL;

/* Exported Object: P2::P2InIDMap::MainImg */
extern "C" __attribute__((visibility("default"))) void* _ZN2P29P2InIDMap7MainImgE = NULL;

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_() called");
    return 0;
}

/* Demangled: P2::P2FrameHolder::getIP2Frame() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P213P2FrameHolder11getIP2FrameEv(void) {
    ALOGD("_ZNK2P213P2FrameHolder11getIP2FrameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::getULogModuleId() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode15getULogModuleIdEv(void) {
    ALOGD("_ZN5NSCam2v38BaseNode15getULogModuleIdEv() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N11JpegNodeImp5flushEv(void) {
    ALOGD("_ZTv0_n88_N11JpegNodeImp5flushEv() called");
    return 0;
}

/* Demangled: RAW16NodeImp::unlockImage(android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE(void) {
    ALOGD("_ZN12RAW16NodeImp11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::registerImgPlugin(android::sp<P2::P2ImgPlugin> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequest17registerImgPluginERKN7android2spINS_11P2ImgPluginEEEi(void) {
    ALOGD("_ZN2P214P2FrameRequest17registerImgPluginERKN7android2spINS_11P2ImgPluginEEEi() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::getULogModuleId() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp15getULogModuleIdEv(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp15getULogModuleIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NotifyQuality::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1NotifyQuality14p1TuningNotifyEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1NotifyQuality14p1TuningNotifyEPvS3_() called");
    return 0;
}

/* Demangled: virtual thunk to JpegBufPool::~JpegBufPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N11JpegBufPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N11JpegBufPoolD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZTv0_n56_N2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::P2Request::makeDetachP2Request() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request19makeDetachP2RequestEv(void) {
    ALOGD("_ZN2P29P2Request19makeDetachP2RequestEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Exported Object: VTT for P2::P2StreamingNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P218P2StreamingNodeImpE = NULL;

/* Demangled: P2::P2Img::setImgSize(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2Img10setImgSizeERKN5NSCam5MSizeE(void) {
    ALOGD("_ZN2P25P2Img10setImgSizeERKN5NSCam5MSizeE() called");
    return 0;
}

/* Exported Object: VTT for P2::StreamingProcessor::P2RequestPack */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P218StreamingProcessor13P2RequestPackE = NULL;

/* Demangled: android::SortedVector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::META_INFO::META_INFO() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29META_INFOC2Ev(void) {
    ALOGD("_ZN2P29META_INFOC2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P214P2DrawIDPluginD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P214P2DrawIDPluginD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::updateMetaResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack16updateMetaResultEi(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack16updateMetaResultEi() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::__unordered_map_hasher<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::hash<P2::P2Request*>, true>, std::__1::__unordered_map_equal<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::equal_to<P2::P2Request*>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > > > >::__emplace_unique_key_args<P2::P2Request*, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::P2Request*&&>, std::__1::tuple<> >(P2::P2Request* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::P2Request*&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSQ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSQ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISB_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::toP2IO(android::sp<P2::P2Img>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26toP2IOEN7android2spINS_5P2ImgEEE(void) {
    ALOGD("_ZN2P26toP2IOEN7android2spINS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for RAW16NodeImp::UnpackThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN12RAW16NodeImp12UnpackThreadE = NULL;

/* Demangled: P2::StreamingProcessor::clearRSSOHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor15clearRSSOHolderEv(void) {
    ALOGD("_ZN2P218StreamingProcessor15clearRSSOHolderEv() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::enque(P2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5enqueERKS1_(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread5enqueERKS1_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P212MDPProcessor11onWaitFlushEv(void) {
    ALOGD("_ZTv0_n88_N2P212MDPProcessor11onWaitFlushEv() called");
    return 0;
}

/* Exported Object: vtable for P2::MWImg */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P25MWImgE = NULL;

/* Demangled: RAW16NodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp5flushEv(void) {
    ALOGD("_ZN12RAW16NodeImp5flushEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-NSCam::v3::NSP1Node::P1NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE0_NS0_13IPipelineNodeE = NULL;

/* Demangled: std::__1::deque<P2::MDPParam, std::__1::allocator<P2::MDPParam> >::push_back(P2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE9push_backERKS2_(void) {
    ALOGD("_ZNSt3__15dequeIN2P28MDPParamENS_9allocatorIS2_EEE9push_backERKS2_() called");
    return 0;
}

/* Exported Object: vtable for P2::P2MetadataHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P216P2MetadataHandleE = NULL;

/* Exported Object: construction vtable for NSCam::v3::BaseNode-in-RAW16NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC12RAW16NodeImp0_N5NSCam2v38BaseNodeE = NULL;

/* Demangled: non-virtual thunk to PDENodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZThn40_N10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureRequestCallback::onAborted(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n40_N2P222CaptureRequestCallback9onAbortedEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: isTrace1On_MWFrameRequest()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ25isTrace1On_MWFrameRequestvE6sTrace = NULL;

/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P214P2DrawIDPluginD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P214P2DrawIDPluginD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE(void) {
    ALOGD("_ZTv0_n64_N5NSCam2v38NSP1Node9P1NodeImp4initERKNS0_13IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::P2Cropper::initLMV() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Cropper7initLMVEv(void) {
    ALOGD("_ZN2P29P2Cropper7initLMVEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__append(unsigned long, NSCam::IImageBuffer* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEmRKS3_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEmRKS3_() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::config(NSCam::v3::P2StreamingNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp6configERKN5NSCam2v315P2StreamingNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::dumpInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr8dumpInfoEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr8dumpInfoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::delMin() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6delMinEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker8RecStore6delMinEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::~BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214BasicProcessorD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P214BasicProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor12onThreadStopEv(void) {
    ALOGD("_ZN2P216CaptureProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for encode_frame */
extern "C" __attribute__((visibility("default"))) void* _ZTV12encode_frame = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD2Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadD2Ev() called");
    return 0;
}

/* Demangled: P2::P2InIDMap::getImgID(unsigned int, P2::ID_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2InIDMap8getImgIDEjNS_6ID_IMGE(void) {
    ALOGD("_ZN2P29P2InIDMap8getImgIDEjNS_6ID_IMGE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::__unordered_map_hasher<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::hash<P2::P2Request*>, true>, std::__1::__unordered_map_equal<P2::P2Request*, std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > >, std::__1::equal_to<P2::P2Request*>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::P2Request*, std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPN2P29P2RequestENS_6vectorINS2_6P2Util9SimpleOutENS_9allocatorIS7_EEEEEENS_22__unordered_map_hasherIS4_SB_NS_4hashIS4_EELb1EEENS_21__unordered_map_equalIS4_SB_NS_8equal_toIS4_EELb1EEENS8_ISB_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::hardwareOps_request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_requestEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19hardwareOps_requestEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::isActive() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp8isActiveEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp8isActiveEv() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue5clearEv(void) {
    ALOGD("_ZN2P29SMVRQueue5clearEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::MRect> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_5MRectEEE = NULL;

/* Exported Object: guard variable for isTrace1On_Streaming_3DNR()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_Streaming_3DNRvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::initBufInfo_create(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl18initBufInfo_createEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl18initBufInfo_createEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::IImageBufferHeap>, std::__1::allocator<android::sp<NSCam::IImageBufferHeap> > >::__append(unsigned long, android::sp<NSCam::IImageBufferHeap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam16IImageBufferHeapEEENS_9allocatorIS5_EEE8__appendEmRKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam16IImageBufferHeapEEENS_9allocatorIS5_EEE8__appendEmRKS5_() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEEE = NULL;

/* Demangled: virtual thunk to P2::BasicProcessor::~BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214BasicProcessorD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P214BasicProcessorD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getIImageBufferPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_NK2P25MWImg18getIImageBufferPtrEv(void) {
    ALOGD("_ZTv0_n88_NK2P25MWImg18getIImageBufferPtrEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::enque(android::sp<P2::P2FrameRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5enqueERKS6_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread5enqueERKS6_() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::SMVRData::release() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueue8SMVRData7releaseEv(void) {
    ALOGD("_ZN2P29SMVRQueue8SMVRData7releaseEv() called");
    return 0;
}

/* Demangled: JpegNodeImp::encodeMainJpeg(android::sp<encode_frame>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp14encodeMainJpegERN7android2spI12encode_frameEE(void) {
    ALOGD("_ZN11JpegNodeImp14encodeMainJpegERN7android2spI12encode_frameEE() called");
    return 0;
}

/* Demangled: PDENodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp5flushEv(void) {
    ALOGD("_ZN10PDENodeImp5flushEv() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::~CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessorD0Ev(void) {
    ALOGD("_ZN2P216CaptureProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::flushFrame(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IPipelineFrame> const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame10flushFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl(void) {
    ALOGD("_ZN2P27MWFrame10flushFrameERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl() called");
    return 0;
}

/* Demangled: JpegNodeImp::verifyConfigParams(NSCam::v3::JpegNode::ConfigParams const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11JpegNodeImp18verifyConfigParamsERKN5NSCam2v38JpegNode12ConfigParamsE(void) {
    ALOGD("_ZNK11JpegNodeImp18verifyConfigParamsERKN5NSCam2v38JpegNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6assignINS_21__list_const_iteratorIS5_PvEEEEvT_SD_PNS_9enable_ifIXsr19__is_input_iteratorISD_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6assignINS_21__list_const_iteratorIS5_PvEEEEvT_SD_PNS_9enable_ifIXsr19__is_input_iteratorISD_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN2P211P2ImgPluginEEENS_9allocatorIS5_EEE6assignINS_21__list_const_iteratorIS5_PvEEEEvT_SD_PNS_9enable_ifIXsr19__is_input_iteratorISD_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::extractP2Requests() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest17extractP2RequestsEv(void) {
    ALOGD("_ZN2P214MWFrameRequest17extractP2RequestsEv() called");
    return 0;
}

/* Demangled: P2::P2Request::getMeta(P2::ID_META, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request7getMetaENS_7ID_METAEj(void) {
    ALOGD("_ZNK2P29P2Request7getMetaENS_7ID_METAEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<android::sp<P2::StreamingProcessor::Payload> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIN7android2spIN2P218StreamingProcessor7PayloadEEEEE = NULL;

/* Demangled: void std::__1::vector<Request, std::__1::allocator<Request> >::__push_back_slow_path<Request const&>(Request const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI7RequestNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI7RequestNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_DispatchProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P228isTrace1On_DispatchProcessorEvE4sVal = NULL;

/* Demangled: P2::MWFrameRequest::fillP2Meta(android::sp<P2::P2Request> const&, NSCam::v3::IPipelineFrame::MetaInfoIOMap const&, std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame13MetaInfoIOMapERKNSt3__13mapIlNS2_INS_6P2MetaEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE(void) {
    ALOGD("_ZN2P214MWFrameRequest10fillP2MetaERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame13MetaInfoIOMapERKNSt3__13mapIlNS2_INS_6P2MetaEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for P2::IP2Frame-in-P2::P2Request */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P29P2RequestE0_NS_8IP2FrameE = NULL;

/* Demangled: NSCam::v3::BaseNode::getOpenId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38BaseNode9getOpenIdEv(void) {
    ALOGD("_ZNK5NSCam2v38BaseNode9getOpenIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setInit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp7setInitEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp7setInitEi() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getTransform() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK2P25MWImg12getTransformEv(void) {
    ALOGD("_ZTv0_n112_NK2P25MWImg12getTransformEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::support() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV7supportEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV7supportEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1FrameAct, std::__1::allocator<NSCam::v3::NSP1Node::P1FrameAct> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node10P1FrameActENS_9allocatorIS4_EEE7reserveEm() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::releaseImage(android::sp<P2::P2Request>, P2::ID_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor12releaseImageEN7android2spINS_9P2RequestEEENS_6ID_IMGE(void) {
    ALOGD("_ZN2P216CaptureProcessor12releaseImageEN7android2spINS_9P2RequestEEENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Exported Object: P2::P2StreamingNodeImp::sMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN2P218P2StreamingNodeImp6sMutexE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::settle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector6settleEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector6settleEv() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::~CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessorD1Ev(void) {
    ALOGD("_ZN2P216CaptureProcessorD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareFeatureParam(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor19prepareFeatureParamERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZN2P218StreamingProcessor19prepareFeatureParamERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::getNormalPipeModule() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node19getNormalPipeModuleEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node19getNormalPipeModuleEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getQualitySwitching() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19getQualitySwitchingEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19getQualitySwitchingEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NotifyYuvR2Crop::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node17P1NotifyYuvR2Crop14p1TuningNotifyEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node17P1NotifyYuvR2Crop14p1TuningNotifyEPvS3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote, std::__1::allocator<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote const&>(NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N12RAW16NodeImpD0Ev(void) {
    ALOGD("_ZThn40_N12RAW16NodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::updateP2SensorData() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest18updateP2SensorDataEv(void) {
    ALOGD("_ZN2P214MWFrameRequest18updateP2SensorDataEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::initHalInfo(NSCam::Feature::P2Util::P2SensorData const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Cropper11initHalInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE(void) {
    ALOGD("_ZN2P29P2Cropper11initHalInfoEPKN5NSCam7Feature6P2Util12P2SensorDataE() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getP1OutSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper12getP1OutSizeEv(void) {
    ALOGD("_ZNK2P29P2Cropper12getP1OutSizeEv() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::P2StreamingNodeImp(NSCam::v3::P2StreamingNode::ePass2Type, NSCam::v3::P2Common::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImpC2EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE(void) {
    ALOGD("_ZN2P218P2StreamingNodeImpC2EN5NSCam2v315P2StreamingNode10ePass2TypeERKNS2_8P2Common9UsageHintE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::init3DNR() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor8init3DNREv(void) {
    ALOGD("_ZN2P218StreamingProcessor8init3DNREv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe9SFPOutputENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe9SFPOutputENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe9SFPOutputENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::isActiveButNotReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp19isActiveButNotReadyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp19isActiveButNotReadyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::process() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPack7processEv(void) {
    ALOGD("_ZN5NSCam2v37JpgPack7processEv() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Cropper()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ18isTrace1On_CroppervE6sTrace = NULL;

/* Demangled: P2::P2Img::getID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img5getIDEv(void) {
    ALOGD("_ZNK2P25P2Img5getIDEv() called");
    return 0;
}

/* Exported Object: VTT for P2::StreamingProcessor::PartialPayload */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P218StreamingProcessor14PartialPayloadE = NULL;

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkFirstSync() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl14checkFirstSyncEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl14checkFirstSyncEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::isReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp7isReadyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp7isReadyEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::PartialPayload::PartialPayload(NSCam::Feature::ILog const&, android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor14PartialPayloadC1ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor14PartialPayloadC1ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::~BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessorD0Ev(void) {
    ALOGD("_ZN2P214BasicProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::~CaptureProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessorD2Ev(void) {
    ALOGD("_ZN2P216CaptureProcessorD2Ev() called");
    return 0;
}

/* Demangled: P2::P2Meta::P2Meta(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2MetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_7ID_METAE(void) {
    ALOGD("_ZN2P26P2MetaC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::MWFrame::releaseMeta(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IMetaStreamBuffer> const&, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame11releaseMetaERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEEPNS7_9IMetadataE(void) {
    ALOGD("_ZN2P27MWFrame11releaseMetaERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEEPNS7_9IMetadataE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet, std::__1::allocator<NSCam::v3::NSP1Node::StuffBufferManager::InfoSet>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::deliverLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr11deliverLoopEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr11deliverLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to RAW16NodeImp::~RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N12RAW16NodeImpD1Ev(void) {
    ALOGD("_ZThn40_N12RAW16NodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::generateFrameID() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp15generateFrameIDEv(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp15generateFrameIDEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*> >::push_back(android::sp<P2::P2FrameRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp6uninitEv(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::verifyAct(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector9verifyActERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector9verifyActERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImagePut(NSCam::v3::NSP1Node::STREAM_IMG, signed char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct12poolImagePutENS1_10STREAM_IMGEa(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct12poolImagePutENS1_10STREAM_IMGEa() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::P2Cropper::calcViewAngle(NSCam::Feature::ILog const&, NSCam::MSize const&, unsigned int, float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEjf(void) {
    ALOGD("_ZNK2P29P2Cropper13calcViewAngleERKN5NSCam7Feature4ILogERKNS1_5MSizeEjf() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::needDumpOut(P2::P2DumpPlugin::DUMP_OUT) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P212P2DumpPlugin11needDumpOutENS0_8DUMP_OUTE(void) {
    ALOGD("_ZNK2P212P2DumpPlugin11needDumpOutENS0_8DUMP_OUTE() called");
    return 0;
}

/* Demangled: RAW16NodeImp::UnpackThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp12UnpackThread10threadLoopEv(void) {
    ALOGD("_ZN12RAW16NodeImp12UnpackThread10threadLoopEv() called");
    return 0;
}

/* Demangled: P2::P2Request::getMetaPtr(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10getMetaPtrENS_7ID_METAE(void) {
    ALOGD("_ZNK2P29P2Request10getMetaPtrENS_7ID_METAE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::BaseNode-in-P2::P2StreamingNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P218P2StreamingNodeImpE2232_N5NSCam2v38BaseNodeE = NULL;

/* Demangled: NSCam::v3::BaseNode::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v38BaseNode5flushERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getProcessingFrame_ByNumber(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp27getProcessingFrame_ByNumberEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp27getProcessingFrame_ByNumberEi() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::vector(std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ProcedureStageControl::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node21ProcedureStageControl5resetEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node21ProcedureStageControl5resetEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD2Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD2Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::init(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE4initERKS1_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE4initERKS1_() called");
    return 0;
}

/* Demangled: P2::MWInfo::initMetaInfo(P2::ID_META, android::Vector<android::sp<NSCam::v3::IMetaStreamInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android6VectorINS2_2spIN5NSCam2v315IMetaStreamInfoEEEEE(void) {
    ALOGD("_ZN2P26MWInfo12initMetaInfoENS_7ID_METAERKN7android6VectorINS2_2spIN5NSCam2v315IMetaStreamInfoEEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::StuffBufferManager */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node18StuffBufferManagerE = NULL;

/* Demangled: P2::BasicProcessor::~BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessorD1Ev(void) {
    ALOGD("_ZN2P214BasicProcessorD1Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread4stopEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread4stopEv() called");
    return 0;
}

/* Exported Object: VTT for P2::P2DumpPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P212P2DumpPluginE = NULL;

/* Exported Object: vtable for NSCam::v3::NSP1Node::StuffBufferManager::InfoSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node18StuffBufferManager7InfoSetE = NULL;

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1NodeAct::SubSetting, std::__1::allocator<NSCam::v3::NSP1Node::P1NodeAct::SubSetting> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1NodeAct::SubSetting const&>(NSCam::v3::NSP1Node::P1NodeAct::SubSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct10SubSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct10SubSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for P2::MWMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P26MWMetaE = NULL;

/* Demangled: P2::P2StreamingNodeImp::getNodeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218P2StreamingNodeImp11getNodeNameEv(void) {
    ALOGD("_ZNK2P218P2StreamingNodeImp11getNodeNameEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE7reserveEm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZTv0_n64_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::isAdvEIS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor8isAdvEISEv(void) {
    ALOGD("_ZNK2P218StreamingProcessor8isAdvEISEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*> >::push_back(android::sp<P2::P2Request>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeAct */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeActE = NULL;

/* Exported Object: vtable for P2::CaptureRequestCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P222CaptureRequestCallbackE = NULL;

/* Demangled: P2::MWFrame::releaseFrameStream(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IPipelineFrame> const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame18releaseFrameStreamERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl(void) {
    ALOGD("_ZN2P27MWFrame18releaseFrameStreamERKN5NSCam7Feature4ILogERKN7android2spINS1_2v314IPipelineFrameEEERKl() called");
    return 0;
}

/* Exported Object: construction vtable for P2::IP2Frame-in-P2::P2FrameHolder */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P213P2FrameHolderE0_NS_8IP2FrameE = NULL;

/* Demangled: P2::P2CaptureNodeImp::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp9getStatusEv(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp9getStatusEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkReceiveRestreaming() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl23checkReceiveRestreamingEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl23checkReceiveRestreamingEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::~BasicProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessorD2Ev(void) {
    ALOGD("_ZN2P214BasicProcessorD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_META>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_META> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSP1Node::P1NodeImp>::sp(NSCam::v3::NSP1Node::P1NodeImp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38NSP1Node9P1NodeImpEEC2EPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38NSP1Node9P1NodeImpEEC2EPS4_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::~P1TaskCollector() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollectorD0Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollectorD0Ev() called");
    return 0;
}

/* Demangled: P2::MWInfo::findImgInfo(P2::ID_IMG) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo11findImgInfoENS_6ID_IMGE(void) {
    ALOGD("_ZNK2P26MWInfo11findImgInfoENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P27MWFrameD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P27MWFrameD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onSyncEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp9onSyncEndEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp9onSyncEndEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IJpgPlugin-in-NSCam::v3::JpgPack */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v37JpgPackE0_NS0_10IJpgPluginE = NULL;

/* Demangled: P2::MWFrame::endBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame15endBatchReleaseEv(void) {
    ALOGD("_ZN2P27MWFrame15endBatchReleaseEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::DummyNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v39DummyNodeE = NULL;

/* Demangled: P2::BasicProcessor::onEnque(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P214BasicProcessor7onEnqueERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::notifyRelease(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor13notifyReleaseEii(void) {
    ALOGD("_ZN2P216CaptureProcessor13notifyReleaseEii() called");
    return 0;
}

/* Demangled: P2::CaptureRequestCallback::CaptureRequestCallback(P2::CaptureProcessor*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P222CaptureRequestCallbackC2EPNS_16CaptureProcessorE(void) {
    ALOGD("_ZN2P222CaptureRequestCallbackC2EPNS_16CaptureProcessorE() called");
    return 0;
}

/* Demangled: P2::P2ScanlinePlugin::P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2ScanlinePluginC1Ev(void) {
    ALOGD("_ZN2P216P2ScanlinePluginC1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for P2::P2ImgPlugin-in-P2::P2DumpPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P212P2DumpPluginE0_NS_11P2ImgPluginE = NULL;

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkBufferState() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkBufferStateEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl16checkBufferStateEv() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThread10threadLoopEv() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_MWImg()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P216isTrace1On_MWImgEvE6sTrace = NULL;

/* Demangled: P2::P2StreamingNodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218P2StreamingNodeImp5flushEv(void) {
    ALOGD("_ZN2P218P2StreamingNodeImp5flushEv() called");
    return 0;
}

/* Demangled: P2::MWInfo::supportClearZoom() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo16supportClearZoomEv(void) {
    ALOGD("_ZNK2P26MWInfo16supportClearZoomEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::getSensorId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util9SimpleOut11getSensorIdEv(void) {
    ALOGD("_ZNK2P26P2Util9SimpleOut11getSensorIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::~P1TaskCollector() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollectorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollectorD1Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_Processor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ20isTrace1On_ProcessorvE6sTrace = NULL;

/* Demangled: virtual thunk to P2::MWFrame::~MWFrame() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P27MWFrameD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P27MWFrameD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::portInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::portInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::portInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::portInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::getMemo(NSCam::v3::NSP1Node::LogInfo::CheckPoint, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo7getMemoENS2_10CheckPointEPN7android7String8E(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo7getMemoENS2_10CheckPointEPN7android7String8E() called");
    return 0;
}

/* Demangled: ExifUtils::updateStdExifParam(int const&, NSCam::MSize const&, NSCam::IMetadata*, NSCam::IMetadata*, jpeg_params const&, ExifParams&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils18updateStdExifParamERKiRKN5NSCam5MSizeEPNS2_9IMetadataES7_RK11jpeg_paramsR10ExifParamsi(void) {
    ALOGD("_ZN9ExifUtils18updateStdExifParamERKiRKN5NSCam5MSizeEPNS2_9IMetadataES7_RK11jpeg_paramsR10ExifParamsi() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::enque(P2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE5enqueERKS1_(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE5enqueERKS1_() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::MWFrame::MWFrame(NSCam::Feature::ILog const&, long const&, android::String8 const&, android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrameC1ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN2P27MWFrameC1ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::addRequestPacks(std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload15addRequestPacksERKNSt3__16vectorIN7android2spINS0_13P2RequestPackEEENS2_9allocatorIS7_EEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload15addRequestPacksERKNSt3__16vectorIN7android2spINS0_13P2RequestPackEEENS2_9allocatorIS7_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::setFlush(NSCam::v3::NSP1Node::FLUSH_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct8setFlushENS1_10FLUSH_TYPEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct8setFlushENS1_10FLUSH_TYPEE() called");
    return 0;
}

/* Demangled: P2::P2ScanlinePlugin::P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2ScanlinePluginC2Ev(void) {
    ALOGD("_ZN2P216P2ScanlinePluginC2Ev() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::SimpleOut(unsigned int, android::sp<P2::P2Request>, android::sp<P2::P2Img>&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util9SimpleOutC2EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE(void) {
    ALOGD("_ZN2P26P2Util9SimpleOutC2EjN7android2spINS_9P2RequestEEERNS3_INS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkThreadWeakup() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl17checkThreadWeakupEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl17checkThreadWeakupEv() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::toActive(NSCam::MRectF const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper8toActiveERKN5NSCam6MRectFEi(void) {
    ALOGD("_ZNK2P29P2Cropper8toActiveERKN5NSCam6MRectFEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, P2::ID_IMG> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::ID_META>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::ID_META> > >::__emplace_unique_key_args<P2::ID_META, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>, std::__1::tuple<> >(P2::ID_META const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_META const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAES3_EENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::verifySizeResizer(unsigned int, unsigned int, NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node17verifySizeResizerEjjRKNS_5MSizeES4_S4_RS2_i(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node17verifySizeResizerEjjRKNS_5MSizeES4_S4_RS2_i() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::streamImageInit(NSCam::v3::NSP1Node::STREAM_IMG, NSCam::v3::NSP1Node::IMG_BUF_SRC) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct15streamImageInitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct15streamImageInitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: android::sp<RssHal>::operator=(android::sp<RssHal>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI6RssHalEaSEOS2_(void) {
    ALOGD("_ZN7android2spI6RssHalEaSEOS2_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::~P1TaskCollector() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollectorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollectorD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::PDENode::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37PDENode14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v37PDENode14createInstanceEv() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onConfig(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor8onConfigERKj(void) {
    ALOGD("_ZN2P212MDPProcessor8onConfigERKj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::requestMetadataEarlyCallback(NSCam::v3::NSP1Node::P1QueAct&, NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp28requestMetadataEarlyCallbackERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp28requestMetadataEarlyCallbackERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::processLMV(int, NS3Av3::IHal3A*, int, unsigned int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, unsigned int, unsigned char, long, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV10processLMVEiPN6NS3Av36IHal3AEijjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjhlRNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV10processLMVEiPN6NS3Av36IHal3AEijjRKNS_8NSIoPipe11NSCamIOPipe8QBufInfoEjhlRNS_9IMetadataE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::MyTimer::MyTimer(NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor7MyTimerC1ERKN5NSCam7Feature4ILogEj(void) {
    ALOGD("_ZN2P214BasicProcessor7MyTimerC1ERKN5NSCam7Feature4ILogEj() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor12onThreadStopEv(void) {
    ALOGD("_ZN2P212MDPProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::uninit3A() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor8uninit3AEv(void) {
    ALOGD("_ZN2P218StreamingProcessor8uninit3AEv() called");
    return 0;
}

/* Demangled: android::Vector<P2::CaptureProcessor::RequestPair>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN2P216CaptureProcessor11RequestPairEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for P2::P2DrawIDPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P214P2DrawIDPluginE = NULL;

/* Exported Object: isTrace1On_SMVRQueue()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ20isTrace1On_SMVRQueuevE4sVal = NULL;

/* Exported Object: guard variable for P2::isTrace1On_StreamingProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P229isTrace1On_StreamingProcessorEvE4sVal = NULL;

/* Demangled: P2::P2CaptureNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P216P2CaptureNodeImp6uninitEv(void) {
    ALOGD("_ZTv0_n72_N2P216P2CaptureNodeImp6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::ProcedureStageControl::StageNote */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteE = NULL;

/* Demangled: P2::P2StreamingNodeImp::getP2PQIndex(NSCam::Feature::P2Util::P2UsageHint const&, NSCam::Feature::P2Util::P2Type) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218P2StreamingNodeImp12getP2PQIndexERKN5NSCam7Feature6P2Util11P2UsageHintENS3_6P2TypeE(void) {
    ALOGD("_ZNK2P218P2StreamingNodeImp12getP2PQIndexERKN5NSCam7Feature6P2Util11P2UsageHintENS3_6P2TypeE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::checkBufferDumping(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18checkBufferDumpingERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18checkBufferDumpingERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: android::sp<FSCHal>::operator=(android::sp<FSCHal>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI6FSCHalEaSEOS2_(void) {
    ALOGD("_ZN7android2spI6FSCHalEaSEOS2_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NotifyQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node15P1NotifyQualityE = NULL;

/* Exported Object: VTT for PDENodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTT10PDENodeImp = NULL;

/* Demangled: virtual thunk to P2::MWImg::isPhysicalStream() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n152_NK2P25MWImg16isPhysicalStreamEv(void) {
    ALOGD("_ZTv0_n152_NK2P25MWImg16isPhysicalStreamEv() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_MWFrame()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ18isTrace1On_MWFramevE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::acquireBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15StuffBufferPool13acquireBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15StuffBufferPool13acquireBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::needDumpFrame(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPlugin13needDumpFrameEi(void) {
    ALOGD("_ZN2P212P2DumpPlugin13needDumpFrameEi() called");
    return 0;
}

/* Exported Object: isTrace1On_CaptureNode()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ22isTrace1On_CaptureNodevE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify6uninitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify6uninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N10PDENodeImpD0Ev(void) {
    ALOGD("_ZThn40_N10PDENodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD2Ev(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadD2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::print(NSCam::Feature::ILog const&, NSCam::v3::IPipelineFrame::InfoIOMapSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKNS1_2v314IPipelineFrame12InfoIOMapSetE(void) {
    ALOGD("_ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKNS1_2v314IPipelineFrame12InfoIOMapSetE() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::~P2FrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequestD0Ev(void) {
    ALOGD("_ZN2P214P2FrameRequestD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::decPayloadCount(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor15decPayloadCountERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZN2P218StreamingProcessor15decPayloadCountERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getEISRRZOMargin(P2::P2Util::SimpleIn&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor16getEISRRZOMarginERNS_6P2Util8SimpleInE(void) {
    ALOGD("_ZNK2P218StreamingProcessor16getEISRRZOMarginERNS_6P2Util8SimpleInE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::enque(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5enqueERKSB_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread5enqueERKSB_() called");
    return 0;
}

/* Demangled: P2::MWMeta::getIMetadataPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWMeta15getIMetadataPtrEv(void) {
    ALOGD("_ZNK2P26MWMeta15getIMetadataPtrEv() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, android::sp<P2::IP2Frame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC1ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE(void) {
    ALOGD("_ZN2P29P2RequestC1ERKN7android2spIS0_EERKNS2_INS_8IP2FrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onWaitFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N2P218StreamingProcessor11onWaitFlushEv(void) {
    ALOGD("_ZTv0_n88_N2P218StreamingProcessor11onWaitFlushEv() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread::ProcessThread(P2::Processor<unsigned int, unsigned int, P2::MDPParam>*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadC1EPS2_i(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadC1EPS2_i() called");
    return 0;
}

/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2CaptureNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoC2ERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void) {
    ALOGD("_ZN2P26MWInfoC2ERKN5NSCam2v313P2CaptureNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::addCropRatio(char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIn12addCropRatioEPKcf(void) {
    ALOGD("_ZN2P26P2Util8SimpleIn12addCropRatioEPKcf() called");
    return 0;
}

/* Demangled: NSCam::v3::P2CaptureNode::createInstance(NSCam::v3::P2CaptureNode::ePass2Type, NSCam::v3::P2Common::Capture::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v313P2CaptureNode14createInstanceENS1_10ePass2TypeERKNS0_8P2Common7Capture9UsageHintE(void) {
    ALOGD("_ZN5NSCam2v313P2CaptureNode14createInstanceENS1_10ePass2TypeERKNS0_8P2Common7Capture9UsageHintE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::queryStartExpTs(unsigned int, unsigned int, long const&, long const&, long&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15queryStartExpTsEjjRKlS3_Rli(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15queryStartExpTsEjjRKlS3_Rli() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::initBufInfo_get(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl15initBufInfo_getEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl15initBufInfo_getEPPNS_8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >::operator=(android::sp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSERKS7_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSERKS7_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::doRequestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker13doRequestExitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker13doRequestExitEv() called");
    return 0;
}

/* Demangled: ExifUtils::makeExifHeader(android::sp<encode_frame>, signed char*, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils14makeExifHeaderEN7android2spI12encode_frameEEPaRm(void) {
    ALOGD("_ZN9ExifUtils14makeExifHeaderEN7android2spI12encode_frameEEPaRm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*>&>::push_front(P2::SMVRQueue::SMVRData* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-P2::P2CaptureNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P216P2CaptureNodeImpE512_N5NSCam2v313IPipelineNodeE = NULL;

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P216P2CaptureNodeImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P216P2CaptureNodeImpD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp10readyToRunEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38NSP1Node9P1NodeImp15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N10PDENodeImpD1Ev(void) {
    ALOGD("_ZThn40_N10PDENodeImpD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread4stopEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread4stopEv() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::~P2FrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequestD1Ev(void) {
    ALOGD("_ZN2P214P2FrameRequestD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::IndependentVerification::exe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerification3exeEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerification3exeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::releaseBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15StuffBufferPool13releaseBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15StuffBufferPool13releaseBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for P2::P2StreamingNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P218P2StreamingNodeImpE = NULL;

/* Demangled: void std::__1::vector<P2::P2Util::SimpleIn, std::__1::allocator<P2::P2Util::SimpleIn> >::__push_back_slow_path<P2::P2Util::SimpleIn const&>(P2::P2Util::SimpleIn const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN2P26P2Util8SimpleInENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN2P26P2Util8SimpleInENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::DummyNode::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v39DummyNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v39DummyNode15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZN2P212MDPProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWMeta::getEntry(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_NK2P26MWMeta8getEntryEj(void) {
    ALOGD("_ZTv0_n80_NK2P26MWMeta8getEntryEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::ProcedureStageControl::wait(unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node21ProcedureStageControl4waitEjRi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node21ProcedureStageControl4waitEjRi() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::~ReleaseToken() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseTokenD0Ev(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseTokenD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Request::moveImg(P2::ID_IMG, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request7moveImgENS_6ID_IMGEj(void) {
    ALOGD("_ZN2P29P2Request7moveImgENS_6ID_IMGEj() called");
    return 0;
}

/* Demangled: P2::P2Cropper::clip(NSCam::MRect const&, NSCam::MRect const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper4clipERKN5NSCam5MRectES4_(void) {
    ALOGD("_ZNK2P29P2Cropper4clipERKN5NSCam5MRectES4_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::~ProcessThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2FrameRequest>*, std::__1::allocator<android::sp<P2::P2FrameRequest>*>&>::push_front(android::sp<P2::P2FrameRequest>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P214P2FrameRequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::~P2CaptureNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P216P2CaptureNodeImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P216P2CaptureNodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::configVencStream(int, int, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor16configVencStreamEiiN5NSCam5MSizeE(void) {
    ALOGD("_ZN2P214BasicProcessor16configVencStreamEiiN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::~P2FrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequestD2Ev(void) {
    ALOGD("_ZN2P214P2FrameRequestD2Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getP1BinCrop() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper12getP1BinCropEv(void) {
    ALOGD("_ZNK2P29P2Cropper12getP1BinCropEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_IMG> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::initP2FrameData() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest15initP2FrameDataEv(void) {
    ALOGD("_ZN2P214MWFrameRequest15initP2FrameDataEv() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::mapID(unsigned int, P2::ID_META) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequest5mapIDEjNS_7ID_METAE(void) {
    ALOGD("_ZN2P214P2FrameRequest5mapIDEjNS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::config(NSCam::v3::P2CaptureNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImp6configERKN5NSCam2v313P2CaptureNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: JpegNodeImp::mapRequest(android::sp<NSCam::v3::IPipelineFrame>&, std::__1::vector<Request, std::__1::allocator<Request> >&, static_info&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp10mapRequestERN7android2spIN5NSCam2v314IPipelineFrameEEERNSt3__16vectorI7RequestNS7_9allocatorIS9_EEEER11static_info(void) {
    ALOGD("_ZN11JpegNodeImp10mapRequestERN7android2spIN5NSCam2v314IPipelineFrameEEERNSt3__16vectorI7RequestNS7_9allocatorIS9_EEEER11static_info() called");
    return 0;
}

/* Demangled: PDENodeImp::ExtractThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp13ExtractThread10readyToRunEv(void) {
    ALOGD("_ZN10PDENodeImp13ExtractThread10readyToRunEv() called");
    return 0;
}

/* Exported Object: isTrace1On_SMVRQueue()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ20isTrace1On_SMVRQueuevE6sTrace = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<float> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIfEE = NULL;

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::createClient(char const*, unsigned int, NSCam::v3::NSP1Node::TimingChecker::EVENT_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker12createClientEPKcjNS2_10EVENT_TYPEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker12createClientEPKcjNS2_10EVENT_TYPEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P25MWImgD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P25MWImgD0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::~ReleaseToken() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseTokenD1Ev(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseTokenD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IResourceConcurrency>::operator=(NSCam::IResourceConcurrency*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam20IResourceConcurrencyEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam20IResourceConcurrencyEEaSEPS2_() called");
    return 0;
}

/* Demangled: P2::MWFrame::print(NSCam::Feature::ILog const&, android::sp<NSCam::v3::IMetaStreamInfo> const&, long, unsigned int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v315IMetaStreamInfoEEEljjPKc(void) {
    ALOGD("_ZN2P27MWFrame5printERKN5NSCam7Feature4ILogERKN7android2spINS1_2v315IMetaStreamInfoEEEljjPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LongExposureStatus::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18LongExposureStatus3getEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18LongExposureStatus3getEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P214BasicProcessor8onUninitEv(void) {
    ALOGD("_ZTv0_n40_N2P214BasicProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipeEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: P2::MWImg::detach() */
extern "C" __attribute__((visibility("default"))) int _ZN2P25MWImg6detachEv(void) {
    ALOGD("_ZN2P25MWImg6detachEv() called");
    return 0;
}

/* Exported Object: vtable for P2::P2InIDMap */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29P2InIDMapE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<Util3dnr> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spI8Util3dnrEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1QueAct, std::__1::allocator<NSCam::v3::NSP1Node::P1QueAct> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE7reserveEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotifyD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkSkipWait() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipWaitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl13checkSkipWaitEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZTv0_n64_N2P217DispatchProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: non-virtual thunk to JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N11JpegNodeImpD0Ev(void) {
    ALOGD("_ZThn40_N11JpegNodeImpD0Ev() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp = NULL;

/* Demangled: P2::CaptureRequestCallback::onContinue(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN2P222CaptureRequestCallback10onContinueEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::~MWImg() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P25MWImgD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P25MWImgD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::ReleaseToken::~ReleaseToken() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseTokenD2Ev(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseTokenD2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::createRequests(NSCam::v3::IPipelineFrame::InfoIOMapSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest14createRequestsERN5NSCam2v314IPipelineFrame12InfoIOMapSetE(void) {
    ALOGD("_ZN2P214MWFrameRequest14createRequestsERN5NSCam2v314IPipelineFrame12InfoIOMapSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NotifyYuvR1Crop::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node17P1NotifyYuvR1Crop14p1TuningNotifyEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node17P1NotifyYuvR1Crop14p1TuningNotifyEPvS3_() called");
    return 0;
}

/* Demangled: JpegNodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN11JpegNodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: P2::IMG_INFO::IMG_INFO(P2::ID_IMG, P2::ID_IMG, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P28IMG_INFOC2ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void) {
    ALOGD("_ZN2P28IMG_INFOC2ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::__emplace_unique_key_args<P2::StreamingProcessor::ERequestPath, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath&&>, std::__1::tuple<> >(P2::StreamingProcessor::ERequestPath const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void) {
    ALOGD("_ZN5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onReturnFrame(NSCam::v3::NSP1Node::P1QueAct&, NSCam::v3::NSP1Node::FLUSH_TYPE, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp13onReturnFrameERNS1_8P1QueActENS1_10FLUSH_TYPEEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp13onReturnFrameERNS1_8P1QueActENS1_10FLUSH_TYPEEi() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: P2::updateGralloc_VRInfo(NSCam::Feature::ILog const&, native_handle const* const&, std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >, unsigned int, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P220updateGralloc_VRInfoERKN5NSCam7Feature4ILogERKPK13native_handleNSt3__16vectorIPNS0_12IImageBufferENSA_9allocatorISD_EEEEjRKl(void) {
    ALOGD("_ZN2P220updateGralloc_VRInfoERKN5NSCam7Feature4ILogERKPK13native_handleNSt3__16vectorIPNS0_12IImageBufferENSA_9allocatorISD_EEEEjRKl() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getUsage() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_NK2P25MWImg8getUsageEv(void) {
    ALOGD("_ZTv0_n120_NK2P25MWImg8getUsageEv() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::doRegisterPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest16doRegisterPluginEv(void) {
    ALOGD("_ZN2P214MWFrameRequest16doRegisterPluginEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::getNodeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38NSP1Node9P1NodeAct11getNodeNameEv(void) {
    ALOGD("_ZNK5NSCam2v38NSP1Node9P1NodeAct11getNodeNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotifyD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGENS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NotifyYuvR2Crop */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node17P1NotifyYuvR2CropE = NULL;

/* Demangled: non-virtual thunk to JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N11JpegNodeImpD1Ev(void) {
    ALOGD("_ZThn40_N11JpegNodeImpD1Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_LMVInfo()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ18isTrace1On_LMVInfovE6sTrace = NULL;

/* Demangled: P2::MWInfo::supportHFG() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo10supportHFGEv(void) {
    ALOGD("_ZNK2P26MWInfo10supportHFGEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::requireAct(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector10requireActERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector10requireActERNS1_8P1QueActE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::LogInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node7LogInfoE = NULL;

/* Demangled: P2::P2Request::hasInput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request8hasInputEv(void) {
    ALOGD("_ZNK2P29P2Request8hasInputEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::makeSFPIOOuts(android::sp<P2::StreamingProcessor::Payload> const&, P2::StreamingProcessor::ERequestPath const&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13makeSFPIOOutsERKN7android2spINS0_7PayloadEEERKNS0_12ERequestPathERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void) {
    ALOGD("_ZNK2P218StreamingProcessor13makeSFPIOOutsERKN7android2spINS0_7PayloadEEERKNS0_12ERequestPathERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: P2::MWFrame::beginBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame17beginBatchReleaseEv(void) {
    ALOGD("_ZN2P27MWFrame17beginBatchReleaseEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> const&>(unsigned int const&, std::__1::pair<unsigned int const, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::P2Util::extractOut(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util10extractOutERKN7android2spINS_9P2RequestEEEj(void) {
    ALOGD("_ZN2P26P2Util10extractOutERKN7android2spINS_9P2RequestEEEj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2CaptureNodeImp::getULogModuleId() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P216P2CaptureNodeImp15getULogModuleIdEv(void) {
    ALOGD("_ZTv0_n56_N2P216P2CaptureNodeImp15getULogModuleIdEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9pop_frontEv() called");
    return 0;
}

/* Exported Object: vtable for P2::MWMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P26MWMetaE = NULL;

/* Demangled: virtual thunk to P2::MWMeta::getIMetadataPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_NK2P26MWMeta15getIMetadataPtrEv(void) {
    ALOGD("_ZTv0_n72_NK2P26MWMeta15getIMetadataPtrEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::sessionUnLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl13sessionUnLockEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl13sessionUnLockEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::~P1RegisterNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyD2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotifyD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, P2::META_INFO>, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, P2::META_INFO> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS2_9META_INFOEEENS_22__unordered_map_hasherIS3_S5_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S5_NS_8equal_toIS3_EELb1EEENS_9allocatorIS5_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIiEE = NULL;

/* Exported Object: isTrace1On_Streaming_FSC()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ24isTrace1On_Streaming_FSCvE4sVal = NULL;

/* Demangled: P2::BasicProcessor::waitP2CBDone() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12waitP2CBDoneEv(void) {
    ALOGD("_ZN2P214BasicProcessor12waitP2CBDoneEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13onThreadStartEv(void) {
    ALOGD("_ZN2P218StreamingProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::isNddMode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P212P2DumpPlugin9isNddModeEv(void) {
    ALOGD("_ZNK2P212P2DumpPlugin9isNddModeEv() called");
    return 0;
}

/* Demangled: P2::P2Util::xmakeDpPqParam(NSCam::Feature::P2Util::P2Pack const&, P2::P2Util::SimpleOut const&, MTKFDContainerInfo*&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util14xmakeDpPqParamERKN5NSCam7Feature6P2Util6P2PackERKNS0_9SimpleOutERP18MTKFDContainerInfo(void) {
    ALOGD("_ZN2P26P2Util14xmakeDpPqParamERKN5NSCam7Feature6P2Util6P2PackERKNS0_9SimpleOutERP18MTKFDContainerInfo() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SP_() called");
    return 0;
}

/* Demangled: P2::MWInfo::findStreamInfo(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo14findStreamInfoENS_7ID_METAE(void) {
    ALOGD("_ZNK2P26MWInfo14findStreamInfoENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::earlyRelease(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIO12earlyReleaseEji(void) {
    ALOGD("_ZN2P26P2Util8SimpleIO12earlyReleaseEji() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::recovery(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp8recoveryEh(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp8recoveryEh() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::getOpenId() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV9getOpenIdEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV9getOpenIdEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZN2P218StreamingProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIjEE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::abandonRequest(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14abandonRequestEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14abandonRequestEi() called");
    return 0;
}

/* Demangled: PDENodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN10PDENodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_BasicProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P225isTrace1On_BasicProcessorEvE4sVal = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > > >::push_back(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9push_backERKS9_(void) {
    ALOGD("_ZNSt3__15dequeINS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEENS7_IS9_EEE9push_backERKS9_() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::SMVRQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueueC1Ev(void) {
    ALOGD("_ZN2P29SMVRQueueC1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::isNeedRSSO(P2::P2Util::SimpleIn&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor10isNeedRSSOERNS_6P2Util8SimpleInE(void) {
    ALOGD("_ZNK2P218StreamingProcessor10isNeedRSSOERNS_6P2Util8SimpleInE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::onNextCaptureCallBack(android::sp<NSCam::v3::IPipelineFrame> const&, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode21onNextCaptureCallBackERKN7android2spINS0_14IPipelineFrameEEEji(void) {
    ALOGD("_ZN5NSCam2v38BaseNode21onNextCaptureCallBackERKN7android2spINS0_14IPipelineFrameEEEji() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getLaunchState() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14getLaunchStateEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14getLaunchStateEv() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThreadE = NULL;

/* Exported Object: guard variable for isTrace1On_StreamingNode()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24isTrace1On_StreamingNodevE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::adjustCropInfo(NSCam::IMetadata*, NSCam::IMetadata*, NSCam::MRect&, NSCam::MSize, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV14adjustCropInfoEPNS_9IMetadataES4_RNS_5MRectENS_5MSizeEii(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV14adjustCropInfoEPNS_9IMetadataES4_RNS_5MRectENS_5MSizeEii() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeImp::IndependentVerification */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeImp23IndependentVerificationE = NULL;

/* Exported Object: construction vtable for NSCam::v3::PDENode-in-PDENodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC10PDENodeImp40_N5NSCam2v37PDENodeE = NULL;

/* Demangled: P2::BasicProcessor::processVenc(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor11processVencERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P214BasicProcessor11processVencERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: P2::P2Request::P2Request(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestC2ERKN7android2spIS0_EEj(void) {
    ALOGD("_ZN2P29P2RequestC2ERKN7android2spIS0_EEj() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::dropRecord() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO10dropRecordEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO10dropRecordEv() called");
    return 0;
}

/* Exported Object: isTrace1On_P2Util()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ17isTrace1On_P2UtilvE4sVal = NULL;

/* Demangled: Request::getOutJpegImageBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&, android::sp<encode_frame>&, android::sp<NSCam::IImageBufferHeap>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request21getOutJpegImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_I12encode_frameEERNS1_INS2_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN7Request21getOutJpegImageBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElRNS1_INS3_18IImageStreamBufferEEERNS1_INS2_12IImageBufferEEERNS1_I12encode_frameEERNS1_INS2_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: P2::P2Util::releaseTuning(NS3Av3::TuningParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util13releaseTuningERN6NS3Av311TuningParamE(void) {
    ALOGD("_ZN2P26P2Util13releaseTuningERN6NS3Av311TuningParamE() called");
    return 0;
}

/* Demangled: P2::P2Cropper::P2Cropper(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2SensorInfo const*, NSCam::Feature::P2Util::P2SensorData const*, NSCam::Feature::P2Util::LMVInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperC1ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE(void) {
    ALOGD("_ZN2P29P2CropperC1ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE() called");
    return 0;
}

/* Demangled: P2::MWInfo::MWInfo(NSCam::v3::P2StreamingNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWInfoC1ERKN5NSCam2v315P2StreamingNode12ConfigParamsE(void) {
    ALOGD("_ZN2P26MWInfoC1ERKN5NSCam2v315P2StreamingNode12ConfigParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameRequest::~P2FrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214P2FrameRequestD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P214P2FrameRequestD0Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED0Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::notifyCtrlMeta(NSCam::v3::IPipelineNodeCallback::eCtrlType, NSCam::v3::NSP1Node::P1QueAct&, NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*, NSCam::v3::NSP1Node::STREAM_META, NSCam::IMetadata*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlMetaENS0_21IPipelineNodeCallback9eCtrlTypeERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataES7_S9_Ri(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlMetaENS0_21IPipelineNodeCallback9eCtrlTypeERNS1_8P1QueActENS1_11STREAM_METAEPNS_9IMetadataES7_S9_Ri() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N10PDENodeImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N10PDENodeImpD0Ev() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::freeCookie(P2::BasicProcessor::P2Cookie*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor10freeCookieEPNS0_8P2CookieEi(void) {
    ALOGD("_ZN2P214BasicProcessor10freeCookieEPNS0_8P2CookieEi() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::processBurst(android::sp<P2::BasicProcessor::P2Payload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12processBurstERKN7android2spINS0_9P2PayloadEEE(void) {
    ALOGD("_ZN2P214BasicProcessor12processBurstERKN7android2spINS0_9P2PayloadEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for P2::P2Cropper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P29P2CropperE = NULL;

/* Demangled: NSCam::v3::NSP1Node::LogInfo::extract() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo7extractEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo7extractEv() called");
    return 0;
}

/* Demangled: P2::IMG_INFO::IMG_INFO(P2::ID_IMG, P2::ID_IMG, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P28IMG_INFOC1ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void) {
    ALOGD("_ZN2P28IMG_INFOC1ENS_6ID_IMGES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: P2::SMVRQueue::SMVRQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29SMVRQueueC2Ev(void) {
    ALOGD("_ZN2P29SMVRQueueC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl5resetEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl5resetEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getProcessingFrame_ByAddr(NSCam::IImageBuffer*, int, NSCam::v3::NSP1Node::P1QueJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp25getProcessingFrame_ByAddrEPNS_12IImageBufferEiRNS1_8P1QueJobE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp25getProcessingFrame_ByAddrEPNS_12IImageBufferEiRNS1_8P1QueJobE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: P2::DispatchProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P217DispatchProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZN2P217DispatchProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setLaunchState(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14setLaunchStateEh(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14setLaunchStateEh() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::streamImageUninit(NSCam::v3::NSP1Node::STREAM_IMG, NSCam::v3::NSP1Node::IMG_BUF_SRC) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct17streamImageUninitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct17streamImageUninitENS1_10STREAM_IMGENS1_11IMG_BUF_SRCE() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_P2Request()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P220isTrace1On_P2RequestEvE6sTrace = NULL;

/* Demangled: P2::StreamingProcessor::prepare3DNR(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor11prepare3DNRERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor11prepare3DNRERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::getLcso() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO7getLcsoEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO7getLcsoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkNotePass(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl13checkNotePassEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl13checkNotePassEi() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameRequest::~P2FrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214P2FrameRequestD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P214P2FrameRequestD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::checkImgBufAddr(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct15checkImgBufAddrEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct15checkImgBufAddrEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: Request::acquireMetaBuffer(unsigned int, long, NSCam::v3::IStreamBufferSet&, android::sp<NSCam::v3::IMetaStreamBuffer>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request17acquireMetaBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_17IMetaStreamBufferEEEi(void) {
    ALOGD("_ZN7Request17acquireMetaBufferEjlRN5NSCam2v316IStreamBufferSetERN7android2spINS1_17IMetaStreamBufferEEEi() called");
    return 0;
}

/* Demangled: Request::isInImageStream(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7Request15isInImageStreamEl(void) {
    ALOGD("_ZNK7Request15isInImageStreamEl() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N12RAW16NodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::~PDENodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N10PDENodeImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N10PDENodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::fillP2Img(android::sp<P2::P2Request> const&, android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKNS2_INS_5P2ImgEEE(void) {
    ALOGD("_ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKNS2_INS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::updateBufferResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack18updateBufferResultEi(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack18updateBufferResultEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIlEE = NULL;

/* Demangled: virtual thunk to P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD0Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::P2Cropper(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2SensorInfo const*, NSCam::Feature::P2Util::P2SensorData const*, NSCam::Feature::P2Util::LMVInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperC2ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE(void) {
    ALOGD("_ZN2P29P2CropperC2ERKN5NSCam7Feature4ILogEPKNS2_6P2Util12P2SensorInfoEPKNS6_12P2SensorDataERKNS6_7LMVInfoE() called");
    return 0;
}

/* Demangled: P2::P2Request::getImg(P2::ID_IMG, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request6getImgENS_6ID_IMGEj(void) {
    ALOGD("_ZNK2P29P2Request6getImgENS_6ID_IMGEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify16getNotifyQualityEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify16getNotifyQualityEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-PDENodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC10PDENodeImp0_N5NSCam2v313IPipelineNodeE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread4stopEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread4stopEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED2Ev(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEED2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareFSC(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor10prepareFSCERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor10prepareFSCERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::makePayLoad(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&, std::__1::vector<android::sp<P2::StreamingProcessor::P2RequestPack>, std::__1::allocator<android::sp<P2::StreamingProcessor::P2RequestPack> > > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor11makePayLoadERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERKNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor11makePayLoadERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS1_9allocatorIS6_EEEERKNS2_INS4_INS0_13P2RequestPackEEENS7_ISD_EEEE() called");
    return 0;
}

/* Demangled: P2::MWInfo::supportPQ() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo9supportPQEv(void) {
    ALOGD("_ZNK2P26MWInfo9supportPQEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::P2RequestPack::~P2RequestPack() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P218StreamingProcessor13P2RequestPackD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Streaming_3DNR()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_Streaming_3DNRvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::doNotifyYuvR2Crop(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR2CropEPvS3_(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify17doNotifyYuvR2CropEPvS3_() called");
    return 0;
}

/* Exported Object: vtable for PDENodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10PDENodeImp = NULL;

/* Demangled: P2::BasicProcessor::P2Cookie::getILog() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8P2Cookie7getILogEv(void) {
    ALOGD("_ZN2P214BasicProcessor8P2Cookie7getILogEv() called");
    return 0;
}

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEE6uninitEv(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEE6uninitEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::config(int, int, int, int, unsigned char, NSCam::NSIoPipe::NSCamIOPipe::INormalPipe*, NS3Av3::IHal3A*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl6configEiiiihPNS_8NSIoPipe11NSCamIOPipe11INormalPipeEPN6NS3Av36IHal3AEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl6configEiiiihPNS_8NSIoPipe11NSCamIOPipe11INormalPipeEPN6NS3Av36IHal3AEi() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWImg::getPhysicalID() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n160_NK2P25MWImg13getPhysicalIDEv(void) {
    ALOGD("_ZTv0_n160_NK2P25MWImg13getPhysicalIDEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::runningGet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningGetEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr10runningGetEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::remainder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollector9remainderEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollector9remainderEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::lastFrameRequestInfoUpdate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoUpdateEii(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp26lastFrameRequestInfoUpdateEii() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::write(NSCam::v3::NSP1Node::LogInfo::CheckPoint, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo5writeENS2_10CheckPointEllll(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo5writeENS2_10CheckPointEllll() called");
    return 0;
}

/* Demangled: P2::P2Request::getMetaSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request10getMetaSetEv(void) {
    ALOGD("_ZNK2P29P2Request10getMetaSetEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::ProcessThread(P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadC1EPSC_i(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThreadC1EPSC_i() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_ScanlinePlugin()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_ScanlinePluginvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlSetting(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlSettingERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlSettingERNS1_8P1QueActE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteE = NULL;

/* Demangled: RAW16NodeImp::onProcessFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN12RAW16NodeImp14onProcessFrameERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N2P214BasicProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZTv0_n80_N2P214BasicProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::MWFrame::createNormalImages(android::sp<NSCam::IImageBufferHeap> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame18createNormalImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE(void) {
    ALOGD("_ZNK2P27MWFrame18createNormalImagesERKN7android2spIN5NSCam16IImageBufferHeapEEERNSt3__16vectorINS2_INS3_12IImageBufferEEENS8_9allocatorISB_EEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P218P2StreamingNodeImp6uninitEv(void) {
    ALOGD("_ZTv0_n72_N2P218P2StreamingNodeImp6uninitEv() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_META, android::sp<P2::P2Meta> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAEN7android2spINS2_6P2MetaEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::getEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9getEnableEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16TimingCheckerMgr9getEnableEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<P2::P2Img>, std::__1::allocator<android::sp<P2::P2Img> > >::__push_back_slow_path<android::sp<P2::P2Img> const&>(android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P25P2ImgEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPluginC1Ev(void) {
    ALOGD("_ZN2P212P2DumpPluginC1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::P2StreamingNode-in-P2::P2StreamingNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P218P2StreamingNodeImpE0_N5NSCam2v315P2StreamingNodeE = NULL;

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeAct::SubSetting */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct10SubSettingE = NULL;

/* Demangled: P2::P2Request::hasOutput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request9hasOutputEv(void) {
    ALOGD("_ZNK2P29P2Request9hasOutputEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MDPProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P212MDPProcessor12onThreadStopEv(void) {
    ALOGD("_ZTv0_n56_N2P212MDPProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: P2::MWImg::getImgType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg10getImgTypeEv(void) {
    ALOGD("_ZNK2P25MWImg10getImgTypeEv() called");
    return 0;
}

/* Exported Object: VTT for P2::MWFrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P214MWFrameRequestE = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEC2ERKNS3_12basic_stringIcNS3_11char_traitsIcEENS9_IcEEEE(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEEC2ERKNS3_12basic_stringIcNS3_11char_traitsIcEENS9_IcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N12RAW16NodeImp5flushEv(void) {
    ALOGD("_ZTv0_n88_N12RAW16NodeImp5flushEv() called");
    return 0;
}

/* Exported Object: vtable for PDENodeImp::ExtractThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10PDENodeImp13ExtractThreadE = NULL;

/* Exported Object: vtable for P2::CaptureProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P216CaptureProcessorE = NULL;

/* Demangled: virtual thunk to P2::CaptureProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZTv0_n64_N2P216CaptureProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_MWInfo()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P217isTrace1On_MWInfoEvE6sTrace = NULL;

/* Demangled: P2::MWFrame::ReleaseToken::ReleaseToken(NSCam::Feature::ILog const&, android::String8 const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12ReleaseTokenC1ERKN5NSCam7Feature4ILogERKN7android7String8ERKl(void) {
    ALOGD("_ZN2P27MWFrame12ReleaseTokenC1ERKN5NSCam7Feature4ILogERKN7android7String8ERKl() called");
    return 0;
}

/* Exported Object: isTrace1On_DrawIDPlugin()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ23isTrace1On_DrawIDPluginvE4sVal = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<P2::P2Request> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN2P29P2RequestEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::MWImg::getDir() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg6getDirEv(void) {
    ALOGD("_ZNK2P25MWImg6getDirEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::onEnque(android::sp<P2::P2FrameRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE(void) {
    ALOGD("_ZTv0_n72_N2P216CaptureProcessor7onEnqueERKN7android2spINS_14P2FrameRequestEEE() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::P2DumpPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212P2DumpPluginC2Ev(void) {
    ALOGD("_ZN2P212P2DumpPluginC2Ev() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::beginBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest17beginBatchReleaseEv(void) {
    ALOGD("_ZN2P214MWFrameRequest17beginBatchReleaseEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2StreamingNodeImp::getOpenId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK2P218P2StreamingNodeImp9getOpenIdEv(void) {
    ALOGD("_ZTv0_n32_NK2P218P2StreamingNodeImp9getOpenIdEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::setNeedThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13setNeedThreadEi(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE13setNeedThreadEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >::operator=(NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils17IStreamBufferPoolINS2_18IImageStreamBufferEEEEaSEPS6_() called");
    return 0;
}

/* Demangled: P2::P2FrameRequest::P2FrameRequest(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<P2::P2InIDMap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2FrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_9P2InIDMapEEE(void) {
    ALOGD("_ZN2P214P2FrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS_9P2InIDMapEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214P2DrawIDPluginD0Ev(void) {
    ALOGD("_ZTv0_n24_N2P214P2DrawIDPluginD0Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_Streaming_FSC()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ24isTrace1On_Streaming_FSCvE6sTrace = NULL;

/* Demangled: P2::BasicProcessor::P2Payload::P2Payload(android::sp<P2::P2Request> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9P2PayloadC1ERKN7android2spINS_9P2RequestEEEj(void) {
    ALOGD("_ZN2P214BasicProcessor9P2PayloadC1ERKN7android2spINS_9P2RequestEEEj() called");
    return 0;
}

/* Demangled: P2::P2Cropper::calcViewAngleF(NSCam::Feature::ILog const&, NSCam::MSize const&, unsigned int, float, float, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper14calcViewAngleFERKN5NSCam7Feature4ILogERKNS1_5MSizeEjffj(void) {
    ALOGD("_ZNK2P29P2Cropper14calcViewAngleFERKN5NSCam7Feature4ILogERKNS1_5MSizeEjffj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote, std::__1::allocator<NSCam::v3::NSP1Node::P1NodeAct::BatchBuffer::SubNote> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node9P1NodeAct11BatchBuffer7SubNoteENS_9allocatorIS6_EEE7reserveEm() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N12RAW16NodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIO::hasInput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO8hasInputEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO8hasInputEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1ConnectLMV::getBuf(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1ConnectLMV6getBufERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1ConnectLMV6getBufERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote>, std::__1::allocator<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> > >::__push_back_slow_path<android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> const&>(android::sp<NSCam::v3::NSP1Node::ProcedureStageControl::StageNote> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38NSP1Node21ProcedureStageControl9StageNoteEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: P2::MWFrame::acquireMetaStream(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame17acquireMetaStreamERKl(void) {
    ALOGD("_ZN2P27MWFrame17acquireMetaStreamERKl() called");
    return 0;
}

/* Demangled: P2::MWFrame::releaseMetaStream(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IMetaStreamBuffer> const&, P2::IO_DIR, P2::IO_STATUS) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame17releaseMetaStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE(void) {
    ALOGD("_ZN2P27MWFrame17releaseMetaStreamERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v317IMetaStreamBufferEEENS_6IO_DIRENS_9IO_STATUSE() called");
    return 0;
}

/* Demangled: P2::MWInfo::isCaptureIn(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo11isCaptureInEl(void) {
    ALOGD("_ZNK2P26MWInfo11isCaptureInEl() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::Feature::P2Util::P2AppStreamInfo> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam7Feature6P2Util15P2AppStreamInfoEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: JpegNodeImp::encodeThumbnailJpeg(android::sp<encode_frame>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp19encodeThumbnailJpegERN7android2spI12encode_frameEE(void) {
    ALOGD("_ZN11JpegNodeImp19encodeThumbnailJpegERN7android2spI12encode_frameEE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::onConfig(P2::P2ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE(void) {
    ALOGD("_ZN2P214BasicProcessor8onConfigERKNS_13P2ConfigParamE() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::fillP2Img(android::sp<P2::P2Request> const&, NSCam::v3::IPipelineFrame::ImageInfoIOMap const&, std::__1::map<long, android::sp<P2::P2Img>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Img> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame14ImageInfoIOMapERKNSt3__13mapIlNS2_INS_5P2ImgEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE(void) {
    ALOGD("_ZN2P214MWFrameRequest9fillP2ImgERKN7android2spINS_9P2RequestEEERKN5NSCam2v314IPipelineFrame14ImageInfoIOMapERKNSt3__13mapIlNS2_INS_5P2ImgEEENSD_4lessIlEENSD_9allocatorINSD_4pairIKlSG_EEEEEE() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::isDisplay() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util9SimpleOut9isDisplayEv(void) {
    ALOGD("_ZNK2P26P2Util9SimpleOut9isDisplayEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N2P214P2DrawIDPluginD1Ev(void) {
    ALOGD("_ZTv0_n24_N2P214P2DrawIDPluginD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void) {
    ALOGD("_ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::LogInfo::analyze(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node7LogInfo7analyzeEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node7LogInfo7analyzeEi() called");
    return 0;
}

/* Demangled: P2::P2Request::releaseResourceWithLock(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2Request23releaseResourceWithLockEj(void) {
    ALOGD("_ZN2P29P2Request23releaseResourceWithLockEj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSP1Node::StuffBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node15StuffBufferPoolE = NULL;

/* Demangled: P2::P2Cropper::P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperC1Ev(void) {
    ALOGD("_ZN2P29P2CropperC1Ev() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_P2Request()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P220isTrace1On_P2RequestEvE4sVal = NULL;

/* Demangled: NSCam::v3::DummyNode::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v39DummyNode5queueEN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlResize(NSCam::v3::NSP1Node::P1QueAct&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17attemptCtrlResizeERNS1_8P1QueActERi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17attemptCtrlResizeERNS1_8P1QueActERi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<P2::SMVRQueue::SMVRData*, std::__1::allocator<P2::SMVRQueue::SMVRData*>&>::push_back(P2::SMVRQueue::SMVRData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P29SMVRQueue8SMVRDataERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P214BasicProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZTv0_n32_N2P214BasicProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6uninitEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::setNodeCallBack(android::wp<NSCam::v3::INodeCallbackToPipeline>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38BaseNode15setNodeCallBackEN7android2wpINS0_23INodeCallbackToPipelineEEE() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (*)(JpegNodeImp&, Request&), std::__1::reference_wrapper<JpegNodeImp>, std::__1::reference_wrapper<Request> > >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvR11JpegNodeImpR7RequestENS_17reference_wrapperIS7_EENSD_IS9_EEEEEEEPvSH_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvR11JpegNodeImpR7RequestENS_17reference_wrapperIS7_EENSD_IS9_EEEEEEEPvSH_() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_P2MetadataHandle()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P227isTrace1On_P2MetadataHandleEvE4sVal = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD1Ev(void) {
    ALOGD("_ZThn40_N5NSCam2v38NSP1Node9P1NodeImpD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >::__push_back_slow_path<android::sp<P2::P2Request> const&>(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1QueJob, std::__1::allocator<NSCam::v3::NSP1Node::P1QueJob> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1QueJob const&>(NSCam::v3::NSP1Node::P1QueJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueJobENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: JpegNodeImp::finalizeEncodeFrame(android::sp<NSCam::v3::IPipelineFrame>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp19finalizeEncodeFrameERN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN11JpegNodeImp19finalizeEncodeFrameERN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::CaptureProcessor::onGetStatus() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_N2P216CaptureProcessor11onGetStatusEv(void) {
    ALOGD("_ZTv0_n104_N2P216CaptureProcessor11onGetStatusEv() called");
    return 0;
}

/* Demangled: P2::P2Cropper::P2Cropper() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2CropperC2Ev(void) {
    ALOGD("_ZN2P29P2CropperC2Ev() called");
    return 0;
}

/* Demangled: P2::P2Cropper::getP1Crop() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper9getP1CropEv(void) {
    ALOGD("_ZNK2P29P2Cropper9getP1CropEv() called");
    return 0;
}

/* Demangled: P2::P2DumpPlugin::isFrameMode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P212P2DumpPlugin11isFrameModeEv(void) {
    ALOGD("_ZNK2P212P2DumpPlugin11isFrameModeEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE6rehashEm() called");
    return 0;
}

/* Demangled: P2::META_INFO::META_INFO(P2::ID_META, P2::ID_META, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29META_INFOC1ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void) {
    ALOGD("_ZN2P29META_INFOC1ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N2P218StreamingProcessor8onUninitEv(void) {
    ALOGD("_ZTv0_n40_N2P218StreamingProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::trigger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr7triggerEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr7triggerEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::StuffBufferPool::destroyBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15StuffBufferPool13destroyBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: int P2::BasicProcessor::processP2<std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > > >(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor9processP2INSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEiT_(void) {
    ALOGD("_ZN2P214BasicProcessor9processP2INSt3__16vectorIN7android2spINS0_9P2PayloadEEENS2_9allocatorIS7_EEEEEEiT_() called");
    return 0;
}

/* Demangled: P2::P2ConfigParam::P2ConfigParam(NSCam::Feature::P2Util::P2Info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2ConfigParamC2ERKN5NSCam7Feature6P2Util6P2InfoE(void) {
    ALOGD("_ZN2P213P2ConfigParamC2ERKN5NSCam7Feature6P2Util6P2InfoE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::MWFrame::endBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P27MWFrame15endBatchReleaseEv(void) {
    ALOGD("_ZTv0_n48_N2P27MWFrame15endBatchReleaseEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamInfo> const&>(android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_BasicProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P225isTrace1On_BasicProcessorEvE4sVal = NULL;

/* Exported Object: guard variable for isTrace1On_CaptureNode()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ22isTrace1On_CaptureNodevE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::ConcurrenceControl::getAidUsage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18ConcurrenceControl11getAidUsageEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18ConcurrenceControl11getAidUsageEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCollector::P1TaskCollector(android::sp<NSCam::v3::NSP1Node::P1TaskCtrl>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node15P1TaskCollectorC2EN7android2spINS1_10P1TaskCtrlEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node15P1TaskCollectorC2EN7android2spINS1_10P1TaskCtrlEEE() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::prepareEnqueQParams(std::__1::vector<android::sp<P2::BasicProcessor::P2Payload>, std::__1::allocator<android::sp<P2::BasicProcessor::P2Payload> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor19prepareEnqueQParamsENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN2P214BasicProcessor19prepareEnqueQParamsENSt3__16vectorIN7android2spINS0_9P2PayloadEEENS1_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr10readyToRunEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr10readyToRunEv() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor8onUninitEv(void) {
    ALOGD("_ZN2P216CaptureProcessor8onUninitEv() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2DrawIDPluginD0Ev(void) {
    ALOGD("_ZN2P214P2DrawIDPluginD0Ev() called");
    return 0;
}

/* Exported Object: isTrace1On_VRGralloc()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZ20isTrace1On_VRGrallocvE4sVal = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgrD0Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgrD0Ev() called");
    return 0;
}

/* Demangled: Request::getOutThumbImageBuffer(long, android::sp<encode_frame> const&, android::sp<NSCam::IImageBufferHeap> const&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request22getOutThumbImageBufferElRKN7android2spI12encode_frameEERKNS1_IN5NSCam16IImageBufferHeapEEERNS1_INS6_12IImageBufferEEE(void) {
    ALOGD("_ZN7Request22getOutThumbImageBufferElRKN7android2spI12encode_frameEERKNS1_IN5NSCam16IImageBufferHeapEEERNS1_INS6_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to PDENodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N10PDENodeImp5flushERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: P2::P2Img::Fmt2Name(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2Img8Fmt2NameEi(void) {
    ALOGD("_ZN2P25P2Img8Fmt2NameEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHalISP*> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av37IHalISPEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::onCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr7onCheckEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16TimingCheckerMgr7onCheckEv() called");
    return 0;
}

/* Demangled: P2::transform(NSCam::v3::simpleTransform const&, NSCam::NSIoPipe::MCropRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29transformERKN5NSCam2v315simpleTransformERKNS0_8NSIoPipe9MCropRectE(void) {
    ALOGD("_ZN2P29transformERKN5NSCam2v315simpleTransformERKNS0_8NSIoPipe9MCropRectE() called");
    return 0;
}

/* Exported Object: VTT for P2::BasicProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P214BasicProcessorE = NULL;

/* Demangled: virtual thunk to P2::MWImg::updateResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N2P25MWImg12updateResultEi(void) {
    ALOGD("_ZTv0_n72_N2P25MWImg12updateResultEi() called");
    return 0;
}

/* Exported Object: isTrace1On_DrawIDPlugin()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ23isTrace1On_DrawIDPluginvE6sTrace = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::releaseFrame(NSCam::v3::NSP1Node::P1FrameAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp12releaseFrameERNS1_10P1FrameActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp12releaseFrameERNS1_10P1FrameActE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::doNotifyDropframe(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp17doNotifyDropframeEjPv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp17doNotifyDropframeEjPv() called");
    return 0;
}

/* Demangled: NSCam::v3::JpegNode::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38JpegNode14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v38JpegNode14createInstanceEv() called");
    return 0;
}

/* Demangled: P2::BasicProcessor::MyTimer::print() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214BasicProcessor7MyTimer5printEv(void) {
    ALOGD("_ZNK2P214BasicProcessor7MyTimer5printEv() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2DrawIDPluginD1Ev(void) {
    ALOGD("_ZN2P214P2DrawIDPluginD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5NSCam2v38NSP1Node9P1NodeImp11requestExitEv(void) {
    ALOGD("_ZThn56_N5NSCam2v38NSP1Node9P1NodeImp11requestExitEv() called");
    return 0;
}

/* Exported Object: vtable for RAW16NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV12RAW16NodeImp = NULL;

/* Demangled: P2::P2DumpPlugin::isDebugMode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P212P2DumpPlugin11isDebugModeEv(void) {
    ALOGD("_ZNK2P212P2DumpPlugin11isDebugModeEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::enque(android::sp<P2::P2FrameRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5enqueERKS6_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5enqueERKS6_() called");
    return 0;
}

/* Demangled: P2::toIImageBufferPtrs(android::sp<P2::P2Img> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218toIImageBufferPtrsERKN7android2spINS_5P2ImgEEE(void) {
    ALOGD("_ZN2P218toIImageBufferPtrsERKN7android2spINS_5P2ImgEEE() called");
    return 0;
}

/* Demangled: P2::P2Img::getMagic3A() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25P2Img10getMagic3AEv(void) {
    ALOGD("_ZNK2P25P2Img10getMagic3AEv() called");
    return 0;
}

/* Demangled: P2::P2FrameHolder::endBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolder15endBatchReleaseEv(void) {
    ALOGD("_ZN2P213P2FrameHolder15endBatchReleaseEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgrD1Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgrD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSP1Node::P1RegisterNotify */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38NSP1Node16P1RegisterNotifyE = NULL;

/* Exported Object: P2::isTrace1On_CaptureProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P227isTrace1On_CaptureProcessorEvE4sVal = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSS_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::P2RequestPack(NSCam::Feature::ILog const&, android::sp<P2::P2Request> const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPackC2ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPackC2ERKN5NSCam7Feature4ILogERKN7android2spINS_9P2RequestEEERKNSt3__16vectorIjNSD_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorInput> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe14SFPSensorInputEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::FSC::FSC_WARPING_DATA_STRUCT> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_3FSC23FSC_WARPING_DATA_STRUCTEEE = NULL;

/* Demangled: P2::StreamingProcessor::~StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessorD0Ev(void) {
    ALOGD("_ZN2P218StreamingProcessorD0Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5flushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEE5flushEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-P2::P2StreamingNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P218P2StreamingNodeImpE2232_N5NSCam2v313IPipelineNodeE = NULL;

/* Demangled: P2::BasicProcessor::updateResult(android::sp<P2::BasicProcessor::P2Payload>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor12updateResultEN7android2spINS0_9P2PayloadEEEi(void) {
    ALOGD("_ZN2P214BasicProcessor12updateResultEN7android2spINS0_9P2PayloadEEEi() called");
    return 0;
}

/* Demangled: void P2::getVector<long>(NSCam::IMetadata const&, unsigned int, std::__1::vector<long, std::__1::allocator<long> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29getVectorIlEEvRKN5NSCam9IMetadataEjRNSt3__16vectorIT_NS5_9allocatorIS7_EEEE(void) {
    ALOGD("_ZN2P29getVectorIlEEvRKN5NSCam9IMetadataEjRNSt3__16vectorIT_NS5_9allocatorIS7_EEEE() called");
    return 0;
}

/* Demangled: P2::P2DrawIDPlugin::~P2DrawIDPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN2P214P2DrawIDPluginD2Ev(void) {
    ALOGD("_ZN2P214P2DrawIDPluginD2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::makeSFPIOMgr(android::sp<P2::StreamingProcessor::Payload> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor12makeSFPIOMgrERKN7android2spINS0_7PayloadEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor12makeSFPIOMgrERKN7android2spINS0_7PayloadEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::TimingChecker::Client::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v38NSP1Node13TimingChecker6Client15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: P2::MWFrame::acquireFence(android::sp<NSCam::v3::IStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame12acquireFenceERKN7android2spIN5NSCam2v313IStreamBufferEEE(void) {
    ALOGD("_ZNK2P27MWFrame12acquireFenceERKN7android2spIN5NSCam2v313IStreamBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::FdNode::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v36FdNode14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v36FdNode14createInstanceEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::flush(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n96_N5NSCam2v38NSP1Node9P1NodeImp5flushERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::~P1DeliverMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgrD2Ev(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgrD2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareCommon(P2::P2Util::SimpleIn&, NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13prepareCommonERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P218StreamingProcessor13prepareCommonERNS_6P2Util8SimpleInERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::IoPipeEventSystem::SubscriberSpecific<NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)1>, NSCam::v3::NSP1Node::P1NodeImp> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem18SubscriberSpecificINS0_17StrictIoPipeEventILNS0_13IoPipeEventIdE1EEENS_2v38NSP1Node9P1NodeImpEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback-in-P2::CaptureRequestCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P222CaptureRequestCallbackE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackE = NULL;

/* Demangled: P2::StreamingProcessor::~StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessorD1Ev(void) {
    ALOGD("_ZN2P218StreamingProcessorD1Ev() called");
    return 0;
}

/* Demangled: P2::MWImg::isCapture() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg9isCaptureEv(void) {
    ALOGD("_ZNK2P25MWImg9isCaptureEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::StreamingProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P218StreamingProcessor13onThreadStartEv(void) {
    ALOGD("_ZTv0_n48_N2P218StreamingProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::onHandleFlush(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp13onHandleFlushEii(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp13onHandleFlushEii() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::getInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp7getInitEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp7getInitEv() called");
    return 0;
}

/* Demangled: JpegNodeImp::waitForRequestDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp21waitForRequestDrainedEv(void) {
    ALOGD("_ZN11JpegNodeImp21waitForRequestDrainedEv() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_MWMeta()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P217isTrace1On_MWMetaEvE6sTrace = NULL;

/* Demangled: P2::P2Util::SimpleOut::setIsFD(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util9SimpleOut7setIsFDEi(void) {
    ALOGD("_ZN2P26P2Util9SimpleOut7setIsFDEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::dump(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4dumpEPKc(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker8RecStore4dumpEPKc() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: P2::MWMeta::setEntry(unsigned int, NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE(void) {
    ALOGD("_ZN2P26MWMeta8setEntryEjRKN5NSCam9IMetadata6IEntryE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlSync(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15attemptCtrlSyncERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15attemptCtrlSyncERNS1_8P1QueActE() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Processor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20isTrace1On_ProcessorvE6sTrace = NULL;

/* Demangled: P2::CaptureProcessor::waitRequestAborted() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor18waitRequestAbortedEv(void) {
    ALOGD("_ZN2P216CaptureProcessor18waitRequestAbortedEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::addCropRatio(char const*, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIn12addCropRatioEPKcff(void) {
    ALOGD("_ZN2P26P2Util8SimpleIn12addCropRatioEPKcff() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::IoPipeEventSystem::SubscriberSpecific<NSCam::NSIoPipe::StrictIoPipeEvent<(NSCam::NSIoPipe::IoPipeEventId)2>, NSCam::v3::NSP1Node::P1NodeImp> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem18SubscriberSpecificINS0_17StrictIoPipeEventILNS0_13IoPipeEventIdE2EEENS_2v38NSP1Node9P1NodeImpEEE = NULL;

/* Demangled: std::__1::__split_buffer<P2::MDPParam*, std::__1::allocator<P2::MDPParam*>&>::push_front(P2::MDPParam* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2P28MDPParamERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::__unordered_map_hasher<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::hash<P2::ID_META>, true>, std::__1::__unordered_map_equal<P2::ID_META, std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > >, std::__1::equal_to<P2::ID_META>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_META, std::__1::vector<android::sp<NSCam::v3::IMetaStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamInfo> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P27ID_METAENS_6vectorIN7android2spIN5NSCam2v315IMetaStreamInfoEEENS_9allocatorISA_EEEEEENS_22__unordered_map_hasherIS3_SE_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_SE_NS_8equal_toIS3_EELb1EEENSB_ISE_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29P2RequestD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P29P2RequestD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareSMVR(android::sp<P2::StreamingProcessor::P2RequestPack> const&, NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor11prepareSMVRERKN7android2spINS0_13P2RequestPackEEERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZN2P218StreamingProcessor11prepareSMVRERKN7android2spINS0_13P2RequestPackEEERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::~StreamingProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessorD2Ev(void) {
    ALOGD("_ZN2P218StreamingProcessorD2Ev() called");
    return 0;
}

/* Exported Object: VTT for encode_frame */
extern "C" __attribute__((visibility("default"))) void* _ZTT12encode_frame = NULL;

/* Exported Object: construction vtable for android::Thread-in-RAW16NodeImp::UnpackThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN12RAW16NodeImp12UnpackThreadE0_N7android6ThreadE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream>, std::__1::__map_value_compare<long, std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream> > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, P2::MWFrame::ReleaseToken::MWStream>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIlN2P27MWFrame12ReleaseToken8MWStreamEEENS_19__map_value_compareIlS6_NS_4lessIlEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIlN2P27MWFrame12ReleaseToken8MWStreamEEENS_19__map_value_compareIlS6_NS_4lessIlEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestD0Ev(void) {
    ALOGD("_ZN2P29P2RequestD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setRequest(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp10setRequestEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp10setRequestEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1DeliverMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node12P1DeliverMgrE = NULL;

/* Demangled: Request::getJpegParams(NSCam::IMetadata*, jpeg_params&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7Request13getJpegParamsEPN5NSCam9IMetadataER11jpeg_params(void) {
    ALOGD("_ZNK7Request13getJpegParamsEPN5NSCam9IMetadataER11jpeg_params() called");
    return 0;
}

/* Demangled: P2::XiaoMi::getMiOutputMetadata(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26XiaoMi19getMiOutputMetadataERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZN2P26XiaoMi19getMiOutputMetadataERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P217DispatchProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZTv0_n32_N2P217DispatchProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_P2Util()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ17isTrace1On_P2UtilvE6sTrace = NULL;

/* Demangled: NSCam::v3::NSP1Node::StuffBufferManager::acquireStoreBuffer(android::sp<NSCam::IImageBuffer>&, char const*, int, NSCam::MSize, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, unsigned char, unsigned char, unsigned char, int, int, NSCam::SecType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node18StuffBufferManager18acquireStoreBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEhhhiiNS_7SecTypeE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node18StuffBufferManager18acquireStoreBufferERN7android2spINS_12IImageBufferEEEPKciNS_5MSizeERNSt3__16vectorIjNSB_9allocatorIjEEEEhhhiiNS_7SecTypeE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::attemptCtrlReadout(NSCam::v3::NSP1Node::P1QueAct&, NSCam::IMetadata*, NSCam::IMetadata*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlReadoutERNS1_8P1QueActEPNS_9IMetadataES6_Ri(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18attemptCtrlReadoutERNS1_8P1QueActEPNS_9IMetadataES6_Ri() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_P2MetadataHandle()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P227isTrace1On_P2MetadataHandleEvE4sVal = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5flushEv(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5flushEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P29P2RequestD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P29P2RequestD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingCheckerMgr::setEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16TimingCheckerMgr9setEnableEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16TimingCheckerMgr9setEnableEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1QueJob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node8P1QueJobE = NULL;

/* Demangled: P2::XiaoMi::miOutputMetadata(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>, android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P26XiaoMi16miOutputMetadataEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEERKNS2_INS_9P2RequestEEE(void) {
    ALOGD("_ZN2P26XiaoMi16miOutputMetadataEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEERKNS2_INS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestD1Ev(void) {
    ALOGD("_ZN2P29P2RequestD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::config() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify6configEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify6configEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::LongExposureStatus */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node18LongExposureStatusE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1DeliverMgr::dumpNumList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node12P1DeliverMgr11dumpNumListEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node12P1DeliverMgr11dumpNumListEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle-in-P2::P2MetadataHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P216P2MetadataHandleE0_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleE = NULL;

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEED0Ev(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEED0Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::releaseImage(android::sp<P2::MWFrame::ReleaseToken> const&, android::sp<NSCam::v3::IImageStreamBuffer> const&, std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame12releaseImageERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEERKNSt3__16vectorINS2_INS7_12IImageBufferEEENSD_9allocatorISG_EEEE(void) {
    ALOGD("_ZN2P27MWFrame12releaseImageERKN7android2spINS0_12ReleaseTokenEEERKNS2_IN5NSCam2v318IImageStreamBufferEEERKNSt3__16vectorINS2_INS7_12IImageBufferEEENSD_9allocatorISG_EEEE() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<P2::P2FrameRequest>, std::__1::allocator<android::sp<P2::P2FrameRequest> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN2P214P2FrameRequestEEENS_9allocatorIS5_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::setLMVOParam(NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::P2Request> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor12setLMVOParamERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor12setLMVOParamERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::poolImageUninit(NSCam::v3::NSP1Node::STREAM_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct15poolImageUninitENS1_10STREAM_IMGE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct15poolImageUninitENS1_10STREAM_IMGE() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZTv0_n120_N11JpegNodeImp5queueEN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::ProcessThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv(void) {
    ALOGD("_ZTv0_n56_N2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13ProcessThread10readyToRunEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEm() called");
    return 0;
}

/* Demangled: P2::P2Cropper::refineBoundary(NSCam::Feature::ILog const&, NSCam::MSize const&, NSCam::NSIoPipe::MCropRect&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Cropper14refineBoundaryERKN5NSCam7Feature4ILogERKNS1_5MSizeERNS1_8NSIoPipe9MCropRectE(void) {
    ALOGD("_ZNK2P29P2Cropper14refineBoundaryERKN5NSCam7Feature4ILogERKNS1_5MSizeERNS1_8NSIoPipe9MCropRectE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<P2::StreamingProcessor::PartialPayload>, std::__1::allocator<android::sp<P2::StreamingProcessor::PartialPayload> > >::__push_back_slow_path<android::sp<P2::StreamingProcessor::PartialPayload> const&>(android::sp<P2::StreamingProcessor::PartialPayload> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor14PartialPayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN2P218StreamingProcessor14PartialPayloadEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_CaptureNode()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ22isTrace1On_CaptureNodevE4sVal = NULL;

/* Demangled: NSCam::v3::BaseNode::getNodeId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38BaseNode9getNodeIdEv(void) {
    ALOGD("_ZNK5NSCam2v38BaseNode9getNodeIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::check_config(NSCam::v3::P1Node::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp12check_configERKNS0_6P1Node12ConfigParamsE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp12check_configERKNS0_6P1Node12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::P2StreamingNodeImp::getOpenId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218P2StreamingNodeImp9getOpenIdEv(void) {
    ALOGD("_ZNK2P218P2StreamingNodeImp9getOpenIdEv() called");
    return 0;
}

/* Demangled: P2::P2Request::~P2Request() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29P2RequestD2Ev(void) {
    ALOGD("_ZN2P29P2RequestD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::sessionLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrl11sessionLockEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrl11sessionLockEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::operator=(android::sp<NSCam::v3::IMetaStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v315IMetaStreamInfoEEaSERKS4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Exported Object: vtable for P2::P2FrameHolder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P213P2FrameHolderE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::P1RegisterNotify(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyC1EN7android2spINS1_9P1NodeImpEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotifyC1EN7android2spINS1_9P1NodeImpEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::RecStore::isEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker8RecStore7isEmptyEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker8RecStore7isEmptyEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::getCropRatio() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIn12getCropRatioEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIn12getCropRatioEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::queue(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp5queueEN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<P2::CaptureProcessor::RequestPair> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN2P216CaptureProcessor11RequestPairEEE = NULL;

/* Demangled: P2::P2InitParam::P2InitParam(NSCam::Feature::P2Util::P2Info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P211P2InitParamC2ERKN5NSCam7Feature6P2Util6P2InfoE(void) {
    ALOGD("_ZN2P211P2InitParamC2ERKN5NSCam7Feature6P2Util6P2InfoE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__emplace_unique_key_args<P2::ID_IMG, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG&&>, std::__1::tuple<> >(P2::ID_IMG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::ID_IMG&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeAct::frameImagePut(NSCam::v3::NSP1Node::STREAM_IMG, signed char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeAct13frameImagePutENS1_10STREAM_IMGEa(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeAct13frameImagePutENS1_10STREAM_IMGEa() called");
    return 0;
}

/* Exported Object: vtable for P2::Processor<unsigned int, unsigned int, P2::MDPParam>::ProcessThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P29ProcessorIjjNS_8MDPParamEE13ProcessThreadE = NULL;

/* Exported Object: guard variable for P2::isTrace1On_CaptureProcessor()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P227isTrace1On_CaptureProcessorEvE6sTrace = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2FrameRequest> >::Processor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_14P2FrameRequestEEEEC2ERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: P2::P2FrameHolder::notifyNextCapture(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P213P2FrameHolder17notifyNextCaptureEii(void) {
    ALOGD("_ZN2P213P2FrameHolder17notifyNextCaptureEii() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N11JpegNodeImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N11JpegNodeImpD0Ev() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE7camProp = NULL;

/* Demangled: P2::Processor<unsigned int, unsigned int, P2::MDPParam>::~Processor() */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorIjjNS_8MDPParamEED2Ev(void) {
    ALOGD("_ZN2P29ProcessorIjjNS_8MDPParamEED2Ev() called");
    return 0;
}

/* Demangled: P2::MWImg::getUsage() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P25MWImg8getUsageEv(void) {
    ALOGD("_ZNK2P25MWImg8getUsageEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::P1RegisterNotify(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotifyC2EN7android2spINS1_9P1NodeImpEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotifyC2EN7android2spINS1_9P1NodeImpEEE() called");
    return 0;
}

/* Demangled: Request::unlockImage(android::sp<NSCam::v3::IImageStreamBuffer>&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE(void) {
    ALOGD("_ZN7Request11unlockImageERN7android2spIN5NSCam2v318IImageStreamBufferEEERNS1_INS2_12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_CaptureProcessor()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P227isTrace1On_CaptureProcessorEvE4sVal = NULL;

/* Demangled: P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMetaD0Ev(void) {
    ALOGD("_ZN2P26MWMetaD0Ev() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_Streaming_EIS()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24isTrace1On_Streaming_EISvE4sVal = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::__unordered_map_hasher<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::hash<P2::StreamingProcessor::ERequestPath>, true>, std::__1::__unordered_map_equal<P2::StreamingProcessor::ERequestPath, std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > >, std::__1::equal_to<P2::StreamingProcessor::ERequestPath>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::StreamingProcessor::ERequestPath, std::__1::unordered_map<unsigned int, android::sp<P2::P2Request>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<P2::P2Request> > > > > > >::__emplace_unique_key_args<P2::StreamingProcessor::ERequestPath, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath const&>, std::__1::tuple<> >(P2::StreamingProcessor::ERequestPath const&, std::__1::piecewise_construct_t const&, std::__1::tuple<P2::StreamingProcessor::ERequestPath const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P218StreamingProcessor12ERequestPathENS_13unordered_mapIjN7android2spINS2_9P2RequestEEENS_4hashIjEENS_8equal_toIjEENS_9allocatorINS_4pairIKjS9_EEEEEEEENS_22__unordered_map_hasherIS4_SK_NSA_IS4_EELb1EEENS_21__unordered_map_equalIS4_SK_NSC_IS4_EELb1EEENSE_ISK_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSX_IJEEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeISK_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: isTrace1On_P2Util()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZ17isTrace1On_P2UtilvE6sTrace = NULL;

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEEE = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1RegisterNotify::getNotifyCrop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node16P1RegisterNotify13getNotifyCropEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node16P1RegisterNotify13getNotifyCropEv() called");
    return 0;
}

/* Demangled: Request::returnMetadataBuffer(android::sp<NSCam::v3::IPipelineFrame> const&, long, android::sp<NSCam::v3::IMetaStreamBuffer>, NSCam::IMetadata*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Request20returnMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi(void) {
    ALOGD("_ZN7Request20returnMetadataBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEElNS1_INS3_17IMetaStreamBufferEEEPNS2_9IMetadataEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::__push_back_slow_path<NS3Av3::MetaSet_T*>(NS3Av3::MetaSet_T*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::~Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7PayloadD0Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor7PayloadD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to JpegNodeImp::~JpegNodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N11JpegNodeImpD1Ev(void) {
    ALOGD("_ZTv0_n24_N11JpegNodeImpD1Ev() called");
    return 0;
}

/* Demangled: P2::MWInfo::findMetaInfo(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo12findMetaInfoENS_7ID_METAE(void) {
    ALOGD("_ZNK2P26MWInfo12findMetaInfoENS_7ID_METAE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::IImageBuffer*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIPNS_12IImageBufferEEE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::notifyCtrlSync(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlSyncERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp14notifyCtrlSyncERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: P2::P2Request::getMeta(P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P29P2Request7getMetaENS_7ID_METAE(void) {
    ALOGD("_ZNK2P29P2Request7getMetaENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMetaD1Ev(void) {
    ALOGD("_ZN2P26MWMetaD1Ev() called");
    return 0;
}

/* Demangled: P2::MWFrame::MWFrame(NSCam::Feature::ILog const&, long const&, android::String8 const&, android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrameC2ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN2P27MWFrameC2ERKN5NSCam7Feature4ILogERKlRKN7android7String8ERKNS8_2spINS1_2v314IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_MWFrameRequest()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25isTrace1On_MWFrameRequestvE6sTrace = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<P2::ID_IMG, P2::ID_IMG, std::__1::hash<P2::ID_IMG>, std::__1::equal_to<P2::ID_IMG>, std::__1::allocator<std::__1::pair<P2::ID_IMG const, P2::ID_IMG> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_13unordered_mapIN2P26ID_IMGES4_NS_4hashIS4_EENS_8equal_toIS4_EENS_9allocatorINS_4pairIKS4_S4_EEEEEEEENS_22__unordered_map_hasherIjSF_NS5_IjEELb1EEENS_21__unordered_map_equalIjSF_NS7_IjEELb1EEENS9_ISF_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: guard variable for isTrace1On_SMVRQueue()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20isTrace1On_SMVRQueuevE4sVal = NULL;

/* Demangled: P2::StreamingProcessor::Payload::addRequests(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload11addRequestsERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS2_9allocatorIS7_EEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload11addRequestsERKNSt3__16vectorIN7android2spINS_9P2RequestEEENS2_9allocatorIS7_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*, std::__1::allocator<std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*>&>::push_back(std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE9push_backEOSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6vectorIN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEEERNS7_ISA_EEE9push_backEOSA_() called");
    return 0;
}

/* Demangled: P2::P2Img::P2Img(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, P2::ID_IMG, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2ImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_6ID_IMGEj(void) {
    ALOGD("_ZN2P25P2ImgC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackENS_6ID_IMGEj() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::getMainFeaturePipeParam() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7Payload23getMainFeaturePipeParamEv(void) {
    ALOGD("_ZN2P218StreamingProcessor7Payload23getMainFeaturePipeParamEv() called");
    return 0;
}

/* Exported Object: construction vtable for P2::IP2Frame-in-P2::MWFrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P214MWFrameRequestE0_NS_8IP2FrameE = NULL;

/* Demangled: P2::P2Util::SimpleIO::hasOutput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util8SimpleIO9hasOutputEv(void) {
    ALOGD("_ZNK2P26P2Util8SimpleIO9hasOutputEv() called");
    return 0;
}

/* Demangled: P2::MDPProcessor::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN2P212MDPProcessor13onThreadStartEv(void) {
    ALOGD("_ZN2P212MDPProcessor13onThreadStartEv() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::~Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7PayloadD1Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor7PayloadD1Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::init(NSCam::v3::IPipelineNode::InitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE(void) {
    ALOGD("_ZN12RAW16NodeImp4initERKN5NSCam2v313IPipelineNode10InitParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to RAW16NodeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N12RAW16NodeImp6uninitEv(void) {
    ALOGD("_ZTv0_n72_N12RAW16NodeImp6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::DispatchProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N2P217DispatchProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZTv0_n80_N2P217DispatchProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P216P2ScanlinePluginD0Ev(void) {
    ALOGD("_ZTv0_n32_N2P216P2ScanlinePluginD0Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getSMVRFPS(NSCam::Feature::ILog const&, android::sp<P2::P2Meta> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor10getSMVRFPSERKN5NSCam7Feature4ILogERKN7android2spINS_6P2MetaEEE(void) {
    ALOGD("_ZNK2P218StreamingProcessor10getSMVRFPSERKN5NSCam7Feature4ILogERKN7android2spINS_6P2MetaEEE() called");
    return 0;
}

/* Demangled: JpegNodeImp::errorHandle(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN11JpegNodeImp11errorHandleERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: JpegNodeImp::config(NSCam::v3::JpegNode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE(void) {
    ALOGD("_ZN11JpegNodeImp6configERKN5NSCam2v38JpegNode12ConfigParamsE() called");
    return 0;
}

/* Exported Object: vtable for JpegNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV11JpegNodeImp = NULL;

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, android::sp<P2::P2Request> >::ProcessThread::enque(android::sp<P2::P2Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5enqueERKS6_(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamEN7android2spINS_9P2RequestEEEE13ProcessThread5enqueERKS6_() called");
    return 0;
}

/* Demangled: P2::MWMeta::~MWMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26MWMetaD2Ev(void) {
    ALOGD("_ZN2P26MWMetaD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for P2::P2Img-in-P2::MWImg */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P25MWImgE152_NS_5P2ImgE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: guard variable for P2::isTrace1On_MWImg()::sVal */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P216isTrace1On_MWImgEvE4sVal = NULL;

/* Demangled: P2::MWFrameRequest::findP2Meta(std::__1::map<long, android::sp<P2::P2Meta>, std::__1::less<long>, std::__1::allocator<std::__1::pair<long const, android::sp<P2::P2Meta> > > > const&, P2::ID_META) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P214MWFrameRequest10findP2MetaERKNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE(void) {
    ALOGD("_ZNK2P214MWFrameRequest10findP2MetaERKNSt3__13mapIlN7android2spINS_6P2MetaEEENS1_4lessIlEENS1_9allocatorINS1_4pairIKlS6_EEEEEENS_7ID_METAE() called");
    return 0;
}

/* Demangled: P2::CaptureProcessor::onNotifyFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2P216CaptureProcessor13onNotifyFlushEv(void) {
    ALOGD("_ZN2P216CaptureProcessor13onNotifyFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::TimingChecker::Client::action() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node13TimingChecker6Client6actionEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node13TimingChecker6Client6actionEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to PDENodeImp::config(NSCam::v3::PDENode::ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE(void) {
    ALOGD("_ZThn40_N10PDENodeImp6configERKN5NSCam2v37PDENode12ConfigParamsE() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::~Payload() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor7PayloadD2Ev(void) {
    ALOGD("_ZN2P218StreamingProcessor7PayloadD2Ev() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::setIdleWaitMS(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13setIdleWaitMSEj(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE13setIdleWaitMSEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNode-in-JpegNodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC11JpegNodeImp0_N5NSCam2v313IPipelineNodeE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*>&>::push_front(android::sp<P2::P2Request>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEERNS_9allocatorIS6_EEE10push_frontERKS6_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::__unordered_map_hasher<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::hash<P2::ID_IMG>, true>, std::__1::__unordered_map_equal<P2::ID_IMG, std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> >, std::__1::equal_to<P2::ID_IMG>, true>, std::__1::allocator<std::__1::__hash_value_type<P2::ID_IMG, android::sp<P2::P2Img> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN2P26ID_IMGEN7android2spINS2_5P2ImgEEEEENS_22__unordered_map_hasherIS3_S8_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S8_NS_8equal_toIS3_EELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2ScanlinePlugin::~P2ScanlinePlugin() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N2P216P2ScanlinePluginD1Ev(void) {
    ALOGD("_ZTv0_n32_N2P216P2ScanlinePluginD1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::Payload::print() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor7Payload5printEv(void) {
    ALOGD("_ZNK2P218StreamingProcessor7Payload5printEv() called");
    return 0;
}

/* Demangled: P2::Processor<P2::P2InitParam, P2::P2ConfigParam, std::__1::vector<android::sp<P2::P2Request>, std::__1::allocator<android::sp<P2::P2Request> > > >::setEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9setEnableEi(void) {
    ALOGD("_ZN2P29ProcessorINS_11P2InitParamENS_13P2ConfigParamENSt3__16vectorIN7android2spINS_9P2RequestEEENS3_9allocatorIS8_EEEEE9setEnableEi() called");
    return 0;
}

/* Exported Object: VTT for P2::MWInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P26MWInfoE = NULL;

/* Demangled: P2::P2Img::getImgInfo(P2::ID_IMG) */
extern "C" __attribute__((visibility("default"))) int _ZN2P25P2Img10getImgInfoENS_6ID_IMGE(void) {
    ALOGD("_ZN2P25P2Img10getImgInfoENS_6ID_IMGE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::setupSubInfo(NSCam::v3::NSP1Node::P1QueAct&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, android::String8&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp12setupSubInfoERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERN7android7String8Eh(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp12setupSubInfoERNS1_8P1QueActERNS_8NSIoPipe11NSCamIOPipe8QBufInfoERN7android7String8Eh() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::prepareCropInfo(NSCam::v3::NSP1Node::P1QueAct&, NSCam::IMetadata*, NSCam::IMetadata*, NSCam::v3::NSP1Node::PREPARE_CROP_PHASE, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp15prepareCropInfoERNS1_8P1QueActEPNS_9IMetadataES6_NS1_18PREPARE_CROP_PHASEEPi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp15prepareCropInfoERNS1_8P1QueActEPNS_9IMetadataES6_NS1_18PREPARE_CROP_PHASEEPi() called");
    return 0;
}

/* Demangled: P2::MWInfo::isValid(NSCam::Feature::ILog const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26MWInfo7isValidERKN5NSCam7Feature4ILogE(void) {
    ALOGD("_ZNK2P26MWInfo7isValidERKN5NSCam7Feature4ILogE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NS3Av3::IHal3A*> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN6NS3Av36IHal3AEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::processReprocFrame(NSCam::v3::NSP1Node::P1QueAct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp18processReprocFrameERNS1_8P1QueActE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp18processReprocFrameERNS1_8P1QueActE() called");
    return 0;
}

/* Demangled: virtual thunk to P2::BasicProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P214BasicProcessor12onThreadStopEv(void) {
    ALOGD("_ZTv0_n56_N2P214BasicProcessor12onThreadStopEv() called");
    return 0;
}

/* Exported Object: P2::isTrace1On_ReleaseBundle()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZZN2P224isTrace1On_ReleaseBundleEvE6sTrace = NULL;

/* Demangled: P2::StreamingProcessor::uninit3DNR() */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor10uninit3DNREv(void) {
    ALOGD("_ZN2P218StreamingProcessor10uninit3DNREv() called");
    return 0;
}

/* Demangled: virtual thunk to P2::P2FrameHolder::endBatchRelease() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N2P213P2FrameHolder15endBatchReleaseEv(void) {
    ALOGD("_ZTv0_n48_N2P213P2FrameHolder15endBatchReleaseEv() called");
    return 0;
}

/* Demangled: std::__1::deque<P2::SMVRQueue::SMVRData, std::__1::allocator<P2::SMVRQueue::SMVRData> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN2P29SMVRQueue8SMVRDataENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::IHalISP*, std::__1::allocator<NS3Av3::IHalISP*> >::__push_back_slow_path<NS3Av3::IHalISP* const&>(NS3Av3::IHalISP* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av37IHalISPENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkRestreamingNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl19checkRestreamingNumEi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl19checkRestreamingNumEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for P2::P2ImgPlugin-in-P2::P2DrawIDPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTCN2P214P2DrawIDPluginE0_NS_11P2ImgPluginE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__emplace_multi<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, android::sp<NSCam::NSCamFeature::VarHolderBase> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, android::sp<NSCam::NSCamFeature::VarHolderBase> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE15__emplace_multiIJRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE15__emplace_multiIJRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEEDpOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::onCtrlResize(android::sp<NSCam::v3::IPipelineFrame> const&, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode12onCtrlResizeERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri(void) {
    ALOGD("_ZN5NSCam2v38BaseNode12onCtrlResizeERKN7android2spINS0_14IPipelineFrameEEElRNS_9IMetadataElS9_Ri() called");
    return 0;
}

/* Demangled: NSCam::v3::JpgPack::JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPackC1Ev(void) {
    ALOGD("_ZN5NSCam2v37JpgPackC1Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::getTSQ(android::sp<P2::StreamingProcessor::Payload> const&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor6getTSQERKN7android2spINS0_7PayloadEEERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void) {
    ALOGD("_ZN2P218StreamingProcessor6getTSQERKN7android2spINS0_7PayloadEEERKN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BaseNode::getULogModuleId() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam2v38BaseNode15getULogModuleIdEv(void) {
    ALOGD("_ZTv0_n56_N5NSCam2v38BaseNode15getULogModuleIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1TaskCtrl::P1TaskCtrl(android::sp<NSCam::v3::NSP1Node::P1NodeImp>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node10P1TaskCtrlC1EN7android2spINS1_9P1NodeImpEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node10P1TaskCtrlC1EN7android2spINS1_9P1NodeImpEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeImpE = NULL;

/* Demangled: P2::MWFrame::preReleaseImageStream(android::sp<NSCam::v3::IImageStreamBuffer> const&, P2::IO_DIR) */
extern "C" __attribute__((visibility("default"))) int _ZN2P27MWFrame21preReleaseImageStreamERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRE(void) {
    ALOGD("_ZN2P27MWFrame21preReleaseImageStreamERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIRE() called");
    return 0;
}

/* Exported Object: VTT for P2::P2FrameRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN2P214P2FrameRequestE = NULL;

/* Demangled: void std::__1::vector<P2::P2Util::SimpleOut, std::__1::allocator<P2::P2Util::SimpleOut> >::__push_back_slow_path<P2::P2Util::SimpleOut const&>(P2::P2Util::SimpleOut const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN2P26P2Util9SimpleOutENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::BaseNode::needCtrlCb(android::sp<NSCam::v3::IPipelineFrame> const&, NSCam::v3::IPipelineNodeCallback::eCtrlType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38BaseNode10needCtrlCbERKN7android2spINS0_14IPipelineFrameEEENS0_21IPipelineNodeCallback9eCtrlTypeE(void) {
    ALOGD("_ZN5NSCam2v38BaseNode10needCtrlCbERKN7android2spINS0_14IPipelineFrameEEENS0_21IPipelineNodeCallback9eCtrlTypeE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::getDropNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl10getDropNumEv(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl10getDropNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::HardwareStateControl::checkShutterTime(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node20HardwareStateControl16checkShutterTimeERi(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node20HardwareStateControl16checkShutterTimeERi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSP1Node::P1NodeImp::dispatch(android::sp<NSCam::v3::IPipelineFrame>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38NSP1Node9P1NodeImp8dispatchEN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v38NSP1Node9P1NodeImp8dispatchEN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<NSCam::IImageBuffer>, NSCam::v3::NSP1Node::StuffBufferPool::BufNote> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spIN5NSCam12IImageBufferEEENS3_2v38NSP1Node15StuffBufferPool7BufNoteEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: P2::META_INFO::META_INFO(P2::ID_META, P2::ID_META, P2::IO_DIR, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P29META_INFOC2ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj(void) {
    ALOGD("_ZN2P29META_INFOC2ENS_7ID_METAES1_NS_6IO_DIRERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::thread, std::__1::allocator<std::__1::thread> >::__push_back_slow_path<std::__1::thread>(std::__1::thread&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::IPipelineFrame::ImageInfoIOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE = NULL;

/* Demangled: NSCam::v3::JpgPack::JpgPack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v37JpgPackC2Ev(void) {
    ALOGD("_ZN5NSCam2v37JpgPackC2Ev() called");
    return 0;
}

/* Demangled: RAW16NodeImp::RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImpC1Ev(void) {
    ALOGD("_ZN12RAW16NodeImpC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_front(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1FrameAct */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node10P1FrameActE = NULL;

/* Demangled: P2::BasicProcessor::onInit(P2::P2InitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214BasicProcessor6onInitERKNS_11P2InitParamE(void) {
    ALOGD("_ZN2P214BasicProcessor6onInitERKNS_11P2InitParamE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<P2::P2Request>*, std::__1::allocator<android::sp<P2::P2Request>*> >::push_front(android::sp<P2::P2Request>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE10push_frontEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN2P29P2RequestEEENS_9allocatorIS6_EEE10push_frontEOS6_() called");
    return 0;
}

/* Demangled: P2::MWFrame::acquireImage(android::sp<NSCam::v3::IImageStreamBuffer> const&, P2::IO_DIR, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P27MWFrame12acquireImageERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIREii(void) {
    ALOGD("_ZNK2P27MWFrame12acquireImageERKN7android2spIN5NSCam2v318IImageStreamBufferEEENS_6IO_DIREii() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::P2RequestPack::getInput(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor13P2RequestPack8getInputEj(void) {
    ALOGD("_ZN2P218StreamingProcessor13P2RequestPack8getInputEj() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::prepareEISVar(P2::P2Util::SimpleIn&, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&, android::sp<P2::P2Request> const&, android::sp<NSCam::Feature::P2Util::Cropper> const&, NSCam::MRectF const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P218StreamingProcessor13prepareEISVarERNS_6P2Util8SimpleInERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEERKNSA_INS4_7Feature6P2Util7CropperEEERKNS4_6MRectFE(void) {
    ALOGD("_ZNK2P218StreamingProcessor13prepareEISVarERNS_6P2Util8SimpleInERN5NSCam12NSCamFeature13NSFeaturePipe16FeaturePipeParamERKN7android2spINS_9P2RequestEEERKNSA_INS4_7Feature6P2Util7CropperEEERKNS4_6MRectFE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSP1Node::P1NodeImp::~P1NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38NSP1Node9P1NodeImpD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSP1Node::P1NodeAct::ActStreamImg */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38NSP1Node9P1NodeAct12ActStreamImgE = NULL;

/* Demangled: Request::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN7Request6unlockEv(void) {
    ALOGD("_ZN7Request6unlockEv() called");
    return 0;
}

/* Demangled: P2::MWFrameRequest::MWFrameRequest(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&, android::sp<P2::MWInfo> const&, android::sp<P2::MWFrame> const&, android::sp<P2::P2InIDMap> const&, double) */
extern "C" __attribute__((visibility("default"))) int _ZN2P214MWFrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd(void) {
    ALOGD("_ZN2P214MWFrameRequestC2ERKN5NSCam7Feature4ILogERKNS2_6P2Util6P2PackERKN7android2spINS6_9P2DataObjEEERKNSB_INS_6MWInfoEEERKNSB_INS_7MWFrameEEERKNSB_INS_9P2InIDMapEEEd() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleIn::releaseAllImg() */
extern "C" __attribute__((visibility("default"))) int _ZN2P26P2Util8SimpleIn13releaseAllImgEv(void) {
    ALOGD("_ZN2P26P2Util8SimpleIn13releaseAllImgEv() called");
    return 0;
}

/* Demangled: P2::P2InitParam::P2InitParam() */
extern "C" __attribute__((visibility("default"))) int _ZN2P211P2InitParamC1Ev(void) {
    ALOGD("_ZN2P211P2InitParamC1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, P2::ID_IMG>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_IMG>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_IMG> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P26ID_IMGEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, P2::ID_META>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, P2::ID_META>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, P2::ID_META> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN2P27ID_METAEEENS_22__unordered_map_hasherIlS4_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS4_NS_8equal_toIlEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::NSP1Node::P1QueAct, std::__1::allocator<NSCam::v3::NSP1Node::P1QueAct> >::__push_back_slow_path<NSCam::v3::NSP1Node::P1QueAct const&>(NSCam::v3::NSP1Node::P1QueAct const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38NSP1Node8P1QueActENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for P2::DispatchProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2P217DispatchProcessorE = NULL;

/* Exported Object: P2::P2Meta::InfoMap */
extern "C" __attribute__((visibility("default"))) void* _ZN2P26P2Meta7InfoMapE = NULL;

/* Demangled: virtual thunk to P2::MWImg::getIImageBufferPtrsCount() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK2P25MWImg24getIImageBufferPtrsCountEv(void) {
    ALOGD("_ZTv0_n104_NK2P25MWImg24getIImageBufferPtrsCountEv() called");
    return 0;
}

/* Demangled: P2::P2Util::SimpleOut::isMDPOutput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2P26P2Util9SimpleOut11isMDPOutputEv(void) {
    ALOGD("_ZNK2P26P2Util9SimpleOut11isMDPOutputEv() called");
    return 0;
}

/* Demangled: P2::P2CaptureNodeImp::P2CaptureNodeImp(NSCam::v3::P2CaptureNode::ePass2Type, NSCam::v3::P2Common::Capture::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P216P2CaptureNodeImpC1EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE(void) {
    ALOGD("_ZN2P216P2CaptureNodeImpC1EN5NSCam2v313P2CaptureNode10ePass2TypeERKNS2_8P2Common7Capture9UsageHintE() called");
    return 0;
}

/* Demangled: RAW16NodeImp::RAW16NodeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12RAW16NodeImpC2Ev(void) {
    ALOGD("_ZN12RAW16NodeImpC2Ev() called");
    return 0;
}

/* Demangled: P2::StreamingProcessor::PartialPayload::PartialPayload(NSCam::Feature::ILog const&, android::sp<P2::StreamingProcessor::P2RequestPack> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2P218StreamingProcessor14PartialPayloadC2ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE(void) {
    ALOGD("_ZN2P218StreamingProcessor14PartialPayloadC2ERKN5NSCam7Feature4ILogERKN7android2spINS0_13P2RequestPackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::P1Node-in-NSCam::v3::NSP1Node::P1NodeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38NSP1Node9P1NodeImpE40_NS0_6P1NodeE = NULL;

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp = NULL;

/* Exported Object: guard variable for P2::isTrace1On_P2MetadataHandle()::sTrace */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2P227isTrace1On_P2MetadataHandleEvE6sTrace = NULL;

/* Demangled: virtual thunk to P2::CaptureProcessor::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N2P216CaptureProcessor12onThreadStopEv(void) {
    ALOGD("_ZTv0_n56_N2P216CaptureProcessor12onThreadStopEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_() called");
    return 0;
}
