/*
 * Reverse-Engineered Source for: libcam.feature_utils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_feature_utils"

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
#include "libcam_feature_utils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::toP2PQIdxName(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13toP2PQIdxNameEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp13toP2PQIdxNameEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Input const&, NSImageio::NSIspio::EPortIndex) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputEN9NSImageio7NSIspio10EPortIndexE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputEN9NSImageio7NSIspio10EPortIndexE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doMdpStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_in(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::BufAllocUtil>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam12BufAllocUtilEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam12BufAllocUtilEEC1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp<NSCam::IIonImageBufferHeap>(NSCam::IIonImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitDequeVSSAgain() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::P2Util::P2InfoObj */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature6P2Util9P2InfoObjE = NULL;

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::find<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE4findIjEENS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE4findIjEENS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::ECmd> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo(NSCam::Feature::ILog const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorInfoC1ERKNS0_4ILogERKj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorInfoC1ERKNS0_4ILogERKj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::getFrameData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util9P2DataObj12getFrameDataEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util9P2DataObj12getFrameDataEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::getSensorData(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util9P2DataObj13getSensorDataEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util9P2DataObj13getSensorDataEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_srz3_FACENR(NSCam::NSIoPipe::FrameParams&, _SRZ_SIZE_INFO_*, NSCam::MSize const&, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util16push_srz3_FACENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS_5MSizeES9_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util16push_srz3_FACENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS_5MSizeES9_() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::tryGet<int>(NSCam::IMetadata const&, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6tryGetIiEEiRKNS_9IMetadataEjRT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6tryGetIiEEiRKNS_9IMetadataEjRT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::~SecureBufferControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControlD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControlD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeSensorLogger(NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature16makeSensorLoggerERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature16makeSensorLoggerERKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv() called");
    return 0;
}

/* Exported Object: guard variable for CustomPQBase::getImpl()::sDefault */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN12CustomPQBase7getImplEvE8sDefault = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDefaultPQPath(P2_PQ_PATH) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp20supportDefaultPQPathE10P2_PQ_PATH(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp20supportDefaultPQPathE10P2_PQ_PATH() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::getSensorInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::updateFrameParams(NSCam::NSIoPipe::FrameParams&, NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util17updateFrameParamsERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util17updateFrameParamsERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::SecureBufferControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControlC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControlC2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(android::sp<NSCam::Feature::P2Util::P2DataObj> const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2DataC1ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2DataC1ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::Feature::ILog::~ILog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogD0Ev(void) {
    ALOGD("_ZN5NSCam7Feature4ILogD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE5clearEv() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_ASSERT = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::sendCommand(NSCam::NSIoPipe::NSPostProc::ESDCmd, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::dequeJudgement() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::ILog::ILog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature4ILogC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::Dump_Tpipe(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::saveToFile(char const*, NSCam::NSIoPipe::WPEBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initNVRam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp9initNVRamEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp9initNVRamEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(NSCam::Feature::P2Util::P2Data const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2DataC1ERKS2_RKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2DataC1ERKS2_RKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Output const&, NSImageio::NSIspio::EPortIndex) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputEN9NSImageio7NSIspio10EPortIndexE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputEN9NSImageio7NSIspio10EPortIndexE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx() called");
    return 0;
}

/* Demangled: NSCam::FeatureProfileHelper::getShotProf(unsigned char&, NSCam::ProfileParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20FeatureProfileHelper11getShotProfERhRKNS_12ProfileParamE(void) {
    ALOGD("_ZN5NSCam20FeatureProfileHelper11getShotProfERhRKNS_12ProfileParamE() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<4u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<6u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::hasYnrLceiPort() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrLceiPortEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrLceiPortEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void) {
    ALOGD("_ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Feature::P2Util::P2InfoObj>::sp(NSCam::Feature::P2Util::P2InfoObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEC2EPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEC2EPS4_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__detach(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE8__detachEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE8__detachEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::addCmd(NSCam::NSIoPipe::NSPostProc::ECmd const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::push_back(NSCam::NSIoPipe::NSWpe::WPEFrameUnit const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2DataObjD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2DataObjD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void) {
    ALOGD("_ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_ASSERT = NULL;

/* Exported Object: DipUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_VERBOSE = NULL;

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<1u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2DataC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2DataC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::popAll(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfier6popAllERNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfier6popAllERNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Input const&, NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputERKNS2_6PortIDE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputERKNS2_6PortIDE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__push_back_slow_path<DipModuleCfg const&>(DipModuleCfg const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_ASSERT = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::Feature::DefaultLogger::~DefaultLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature13DefaultLoggerD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature13DefaultLoggerD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeFrameLogger(NSCam::Feature::ILog const&, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature15makeFrameLoggerERKNS0_4ILogEjjj(void) {
    ALOGD("_ZN5NSCam7Feature15makeFrameLoggerERKNS0_4ILogEjjj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::prepareOneMDPFrameParam(NSCam::NSIoPipe::FrameParams&, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, NSCam::Feature::P2Util::MDPObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util23prepareOneMDPFrameParamERNS_8NSIoPipe11FrameParamsERNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEESB_RKNS1_9MDPObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util23prepareOneMDPFrameParamERNS_8NSIoPipe11FrameParamsERNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEESB_RKNS1_9MDPObjPtrE() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_ERROR = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mInitCountE = NULL;

/* Demangled: NSCam::Feature::SecureBufferControl::init(NSCam::SecType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControl4initENS_7SecTypeE(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControl4initENS_7SecTypeE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::__deallocate_node(std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, void*>*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeISA_S3_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeISA_S3_EEEE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQUser */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQUserE = NULL;

/* Demangled: NSCam::Feature::P2Util::makeFrameParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::allocateRegBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util17allocateRegBufferEi(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util17allocateRegBufferEi() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::P2Util::P2PlatInfoImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature6P2Util13P2PlatInfoImpE = NULL;

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<0u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2ConfigInfoC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeRequestLogger(NSCam::Feature::ILog const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEjj(void) {
    ALOGD("_ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEjj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<6u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::ILog const&, android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2PackC2ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2PackC2ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is4K2K(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6is4K2KERKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6is4K2KERKNS_5MSizeE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mCmdListCondE = NULL;

/* Demangled: NSCam::ImageBufferUtils::deallocBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ImageBufferUtils13deallocBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam16ImageBufferUtils13deallocBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorDataC1ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorDataC1ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getFrameData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack12getFrameDataEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack12getFrameDataEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printFeInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::FEInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11printFeInfoERKNS0_4ILogEjPNS_8NSIoPipe6FEInfoE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11printFeInfoERKNS0_4ILogEjPNS_8NSIoPipe6FEInfoE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Output const&, NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputERKNS2_6PortIDE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputERKNS2_6PortIDE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::hasRotateIO() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2IOClassfier11hasRotateIOEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2IOClassfier11hasRotateIOEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorDataC2ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorDataC2ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2InfoC2ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2InfoC2ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dumpToFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::ILog::ILog(android::sp<NSCam::Feature::ILogObj> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogC1ERKN7android2spINS0_7ILogObjEEE(void) {
    ALOGD("_ZN5NSCam7Feature4ILogC1ERKN7android2spINS0_7ILogObjEEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorData(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEj() called");
    return 0;
}

/* Demangled: DrvMkdir(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8DrvMkdirPKcj(void) {
    ALOGD("_Z8DrvMkdirPKcj() called");
    return 0;
}

/* Demangled: NSCam::ImageBufferUtils::createBufferAlias(NSCam::IImageBuffer*, unsigned int, unsigned int, NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ImageBufferUtils17createBufferAliasEPNS_12IImageBufferEjjNS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam16ImageBufferUtils17createBufferAliasEPNS_12IImageBufferEjjNS_12EImageFormatE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_crop(NSCam::NSIoPipe::FrameParams&, unsigned int, NSCam::NSIoPipe::MCropRect const&, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS2_9MCropRectERKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS2_9MCropRectERKNS_5MSizeE() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::Feature::P2Util::makeTuningParam(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, NS3Av3::IHalISP*, NS3Av3::MetaSet_T&, NS3Av3::MetaSet_T*, int, void*, NSCam::IImageBuffer*, int, NSCam::IImageBuffer*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15makeTuningParamERKNS0_4ILogERKNS1_6P2PackEPN6NS3Av37IHalISPERNS8_9MetaSet_TEPSB_iPvPNS_12IImageBufferEiSG_iSE_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15makeTuningParamERKNS0_4ILogERKNS1_6P2PackEPN6NS3Av37IHalISPERNS8_9MetaSet_TEPSB_iPvPNS_12IImageBufferEiSG_iSE_() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_bSaveReqToFile */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16m_bSaveReqToFileE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::isGraphicBuffer(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15isGraphicBufferEPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15isGraphicBufferEPKNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQUserLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getLogRequestID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger15getLogRequestIDEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger15getLogRequestIDEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8mCmdListE = NULL;

/* Demangled: NSCam::Feature::makeSensorLogger(char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature16makeSensorLoggerEPKcjj(void) {
    ALOGD("_ZN5NSCam7Feature16makeSensorLoggerEPKcjj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<2u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDREPath(unsigned int, P2_PQ_PATH) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportDREPathEj10P2_PQ_PATH(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportDREPathEj10P2_PQ_PATH() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportHFGPath(unsigned int, P2_PQ_PATH) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportHFGPathEj10P2_PQ_PATH(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportHFGPathEj10P2_PQ_PATH() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorDataC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorDataC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printTuningParam(NSCam::Feature::ILog const&, NS3Av3::TuningParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util16printTuningParamERKNS0_4ILogERKN6NS3Av311TuningParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util16printTuningParamERKNS0_4ILogERKN6NS3Av311TuningParamE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void) {
    ALOGD("_ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitEnqueVSSAgain() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(NSCam::Feature::P2Util::P2Info const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2InfoC1ERKS2_RKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2InfoC1ERKS2_RKNS0_4ILogEj() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9threshold = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::~P2PlatInfoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImpD2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::getSensorData(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toName(NSImageio::NSIspio::EPortIndex) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6toNameEN9NSImageio7NSIspio10EPortIndexE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6toNameEN9NSImageio7NSIspio10EPortIndexE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::ImageBufferUtils::createBuffer(android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ImageBufferUtils12createBufferERN7android2spINS_12IImageBufferEEES5_(void) {
    ALOGD("_ZN5NSCam16ImageBufferUtils12createBufferERN7android2spINS_12IImageBufferEEES5_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initSensorDev() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initSensorDevEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initSensorDevEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getActiveArrayRect() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp18getActiveArrayRectEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp18getActiveArrayRectEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::P2Util::P2DataObj */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature6P2Util9P2DataObjE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::enque(NSCam::NSIoPipe::EStreamPipeID, unsigned int, int, NSCam::NSIoPipe::QParams const&, std::__1::vector<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >&, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::Feature::P2Util::applyDMAConstrain(NSCam::NSIoPipe::MCropRect&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util17applyDMAConstrainERNS_8NSIoPipe9MCropRectEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util17applyDMAConstrainERNS_8NSIoPipe9MCropRectEj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej() called");
    return 0;
}

/* Demangled: NSCam::BufAllocUtil::deAllocMem(char const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BufAllocUtil10deAllocMemEPKcPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12BufAllocUtil10deAllocMemEPKcPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getUserName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger11getUserNameEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger11getUserNameEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC1ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2ConfigInfoC1ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::hasNonRotateIO() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2IOClassfier14hasNonRotateIOEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2IOClassfier14hasNonRotateIOEv() called");
    return 0;
}

/* Exported Object: gWPELastTpipeStructure */
extern "C" __attribute__((visibility("default"))) void* gWPELastTpipeStructure = NULL;

/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC2ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2ConfigInfoC2ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getLogMWFrameID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger15getLogMWFrameIDEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger15getLogMWFrameIDEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Feature::DefaultLogger::~DefaultLogger() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam7Feature13DefaultLoggerD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam7Feature13DefaultLoggerD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toName(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6toNameEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6toNameEj() called");
    return 0;
}

/* Demangled: NSCam::FeatureProfileHelper::getVSSProf(unsigned char&, NSCam::ProfileParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20FeatureProfileHelper10getVSSProfERhRKNS_12ProfileParamE(void) {
    ALOGD("_ZN5NSCam20FeatureProfileHelper10getVSSProfERhRKNS_12ProfileParamE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE7reserveEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getYnrLceiPort() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14getYnrLceiPortEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14getYnrLceiPortEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__detach(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE8__detachEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE8__detachEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::hasIO() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2IOClassfier5hasIOEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2IOClassfier5hasIOEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_front(unsigned int* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::__emplace_unique_key_args<unsigned int, unsigned int&, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >(unsigned int const&, unsigned int&, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJRjS9_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJRjS9_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEj() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::Feature::P2Util::P2Pack::getP2Pack(NSCam::Feature::ILog const&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack9getP2PackERKNS0_4ILogEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack9getP2PackERKNS0_4ILogEj() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE7camProp = NULL;

/* Demangled: int NSCam::Feature::P2Util::trySet<NSCam::IMetadata>(NSCam::IMetadata&, unsigned int, NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6trySetINS_9IMetadataEEEiRS3_jRKT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6trySetINS_9IMetadataEEEiRS3_jRKT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mUserInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper9mUserInfoE = NULL;

/* Demangled: NSCam::BufAllocUtil::allocMem(char const*, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BufAllocUtil8allocMemEPKcjjji(void) {
    ALOGD("_ZN5NSCam12BufAllocUtil8allocMemEPKcjjji() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<8u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::clearCmds() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2DataObjD0Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2DataObjD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::addSensorInfo(NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2InfoObj13addSensorInfoERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2InfoObj13addSensorInfoERKNS0_4ILogEj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mModuleMtxE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11P2FrameDataC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11P2FrameDataC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2InfoObjD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2InfoObjD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::getSensorData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::setFps(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi() called");
    return 0;
}

/* Exported Object: android::Singleton<NSCam::ImageBufferUtils>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE9sInstanceE = NULL;

/* Demangled: android::sp<NSCam::Feature::P2Util::Cropper>::operator=(android::sp<NSCam::Feature::P2Util::Cropper>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam7Feature6P2Util7CropperEEaSEOS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam7Feature6P2Util7CropperEEaSEOS5_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::getPlatInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Info11getPlatInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Info11getPlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getLsc2Port() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getLsc2PortEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getLsc2PortEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getCommand(NSCam::NSIoPipe::NSWpe::ECmd&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQUserLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2InfoC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2InfoC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::findOutput(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::PortID const&, NSCam::NSIoPipe::Output&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util10findOutputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_6OutputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util10findOutputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_6OutputE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSWpe::WPEFramePackage const&>(NSCam::NSIoPipe::NSWpe::WPEFramePackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Feature::P2Util::P2DataObj */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam7Feature6P2Util9P2DataObjE = NULL;

/* Demangled: NSCam::Feature::P2Util::getDebugExif() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getDebugExifEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getDebugExifEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::popNonRotate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfier12popNonRotateEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfier12popNonRotateEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::getSensorInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util9P2InfoObj13getSensorInfoEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util9P2InfoObj13getSensorInfoEj() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Exported Object: guard variable for NvramQueryHelper::getHelper()::sDefault */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN16NvramQueryHelper9getHelperEvE8sDefault = NULL;

/* Demangled: NSCam::Feature::P2Util::push_out(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::IImageBuffer*, NSCam::NSIoPipe::EPortCapbility, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferENS2_14EPortCapbilityEi(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferENS2_14EPortCapbilityEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeLogger(char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature10makeLoggerEPKcS2_jjjjjj(void) {
    ALOGD("_ZN5NSCam7Feature10makeLoggerEPKcS2_jjjjjj() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<5u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<7u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(NSCam::Feature::P2Util::P2Data const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2DataC2ERKS2_RKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2DataC2ERKS2_RKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getPlatInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack11getPlatInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack11getPlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toMCropRect(NSCam::Feature::P2Util::P2IO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11toMCropRectERKNS1_4P2IOE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11toMCropRectERKNS1_4P2IOE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQUserNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_wpeEQUserNumE = NULL;

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSWpe::IWpeStream-in-NSCam::NSIoPipe::NSWpe::WpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe5NSWpe9WpeStreamE0_NS1_10IWpeStreamE = NULL;

/* Demangled: NSCam::Feature::DefaultLogger::getLogLevel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger11getLogLevelEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger11getLogLevelEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getLogStr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger9getLogStrEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger9getLogStrEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::updateDebugExif(NSCam::Feature::P2Util::P2Pack const&, NSCam::IMetadata const&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15updateDebugExifERKNS1_6P2PackERKNS_9IMetadataERS5_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15updateDebugExifERKNS1_6P2PackERKNS_9IMetadataERS5_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::findInput(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::PortID const&, NSCam::NSIoPipe::Input&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9findInputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_5InputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9findInputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_5InputE() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::P2PlatInfoImp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpC1Ej(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImpC1Ej() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDRE() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportDREEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportDREEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toName(NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6PortIDE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6PortIDE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printCrspInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::CrspInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13printCrspInfoERKNS0_4ILogEjPNS_8NSIoPipe8CrspInfoE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13printCrspInfoERKNS0_4ILogEjPNS_8NSIoPipe8CrspInfoE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::addCommand(NSCam::NSIoPipe::NSWpe::ECmd const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::clearCommands() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::ImageBufferHeap>::sp(NSCam::ImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::Feature::ILogObj-in-NSCam::Feature::DefaultLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam7Feature13DefaultLoggerE0_NS0_7ILogObjE = NULL;

/* Exported Object: P2NormalStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWpeStreamImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<1u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::prepareMDPFrameParam(NSCam::NSIoPipe::QParams&, unsigned int, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, NSCam::Feature::P2Util::MDPObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsEjRNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEERKNS1_9MDPObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsEjRNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEERKNS1_9MDPObjPtrE() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<4u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2PackC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2PackC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::getFrameData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Data12getFrameDataEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Data12getFrameDataEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQDupIdx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13m_wpeEQDupIdxE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void) {
    ALOGD("_ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::BufAllocUtil>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam12BufAllocUtilEED1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam12BufAllocUtilEED1Ev() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<7u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<9u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::Input const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe5InputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe5InputE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::rotateSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2IOClassfier10rotateSizeEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2IOClassfier10rotateSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void) {
    ALOGD("_ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx() called");
    return 0;
}

/* Demangled: NSCam::FeatureProfileHelper::getEngShotProf(unsigned char&, NSCam::ProfileParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20FeatureProfileHelper14getEngShotProfERhRKNS_12ProfileParamE(void) {
    ALOGD("_ZN5NSCam20FeatureProfileHelper14getEngShotProfERhRKNS_12ProfileParamE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::~P2PlatInfoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD0Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImpD0Ev() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_INFO = NULL;

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::NSWpe::WpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe5NSWpe9WpeStreamE = NULL;

/* Demangled: android::Singleton<NSCam::BufAllocUtil>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam12BufAllocUtilEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam12BufAllocUtilEEC2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__emplace_unique_key_args<DP_ISP_FEATURE_ENUM, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>, std::__1::tuple<> >(DP_ISP_FEATURE_ENUM const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::PortID const&, NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDES5_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDES5_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_out(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEEEvT_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEEEvT_SJ_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::Feature::P2Util::P2IO>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam7Feature6P2Util4P2IOERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam7Feature6P2Util4P2IOERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::BufAllocUtil>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam12BufAllocUtilEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam12BufAllocUtilEE11hasInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::queryNVRamData(NSCam::Feature::P2Util::P2PlatInfo::FeatureID, int, unsigned char) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14queryNVRamDataENS1_10P2PlatInfo9FeatureIDEih(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14queryNVRamDataENS1_10P2PlatInfo9FeatureIDEih() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::P2InfoObj(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2InfoObjC1ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2InfoObjC1ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::ISecureImageBufferHeap>::sp(NSCam::ISecureImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam22ISecureImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam22ISecureImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: saveToRegFmtFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16saveToRegFmtFilePKcPhj(void) {
    ALOGD("_Z16saveToRegFmtFilePKcPhj() called");
    return 0;
}

/* Demangled: saveToTextFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14saveToTextFilePKcPhj(void) {
    ALOGD("_Z14saveToTextFilePKcPhj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::dumpP2PQTable(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13dumpP2PQTableEPKc(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp13dumpP2PQTableEPKc() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2ConfigInfo::Dummy */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam7Feature6P2Util12P2ConfigInfo5DummyE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::P2InfoObj(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2InfoObjC2ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2InfoObjC2ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::makeQParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printFmInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::FMInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11printFmInfoERKNS0_4ILogEjPNS_8NSIoPipe6FMInfoE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11printFmInfoERKNS0_4ILogEjPNS_8NSIoPipe6FMInfoE() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::tryGet<unsigned char>(NSCam::IMetadata const&, unsigned int, unsigned char&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6tryGetIhEEiRKNS_9IMetadataEjRT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6tryGetIhEEiRKNS_9IMetadataEjRT_() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::~SecureBufferControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControlD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControlD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::deque(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::PixelIDMapping(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FrameUnit> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::IsDMAPortSupport(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj() called");
    return 0;
}

/* Demangled: NSCam::ImageBufferUtils::removeBufferAlias(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ImageBufferUtils17removeBufferAliasEPNS_12IImageBufferES2_(void) {
    ALOGD("_ZN5NSCam16ImageBufferUtils17removeBufferAliasEPNS_12IImageBufferES2_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::queryDIPInfo(std::__1::map<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, std::__1::allocator<std::__1::pair<NSCam::NSIoPipe::EDIPInfoEnum const, unsigned int> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::checkVssStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_VERBOSE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void) {
    ALOGD("_ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::Feature::ILog::~ILog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature4ILogD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportHFG() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportHFGEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportHFGEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::getConfigInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Info13getConfigInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Info13getConfigInfoEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE() called");
    return 0;
}

/* Demangled: NSCam::Feature::ILog::ILog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature4ILogC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::ILog const&, android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2PackC1ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2PackC1ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::~P2IOClassfier() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfierD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfierD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toOutput(NSCam::Feature::P2Util::P2IO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::DefaultLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature13DefaultLoggerE = NULL;

/* Demangled: NSCam::Feature::P2Util::printQParamsInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::PQParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util16printQParamsInfoERKNS0_4ILogEjPNS_8NSIoPipe7PQParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util16printQParamsInfoERKNS0_4ILogEjPNS_8NSIoPipe7PQParamE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getPostProcPipeInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_WARN = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getLogSensorID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger14getLogSensorIDEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger14getLogSensorIDEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo(NSCam::Feature::ILog const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorInfoC2ERKNS0_4ILogERKj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorInfoC2ERKNS0_4ILogERKj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::ILog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature4ILogE = NULL;

/* Exported Object: vtable for CustomPQBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CustomPQBase = NULL;

/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorInfoC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorInfoC1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::findInputBuffer(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15findInputBufferERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15findInputBufferERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::updateExtraMeta(NSCam::Feature::P2Util::P2Pack const&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15updateExtraMetaERKNS1_6P2PackERNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15updateExtraMetaERKNS1_6P2PackERNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::nonRotateSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2IOClassfier13nonRotateSizeEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2IOClassfier13nonRotateSizeEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeRequestLogger(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature17makeRequestLoggerEPKcjjjjjj(void) {
    ALOGD("_ZN5NSCam7Feature17makeRequestLoggerEPKcjjjjjj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<0u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2DataC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2DataC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_srz4_LCENR(NSCam::NSIoPipe::FrameParams&, _SRZ_SIZE_INFO_*, NSCam::Feature::P2Util::P2Pack const&, int, NSCam::MSize const&, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15push_srz4_LCENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS1_6P2PackEiRKNS_5MSizeESC_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15push_srz4_LCENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS1_6P2PackEiRKNS_5MSizeESC_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::releaseRegBuffer(void*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util16releaseRegBufferERPv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util16releaseRegBufferERPv() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE7camProp = NULL;

/* Demangled: NSCam::Feature::SecureBufferControl::allocSecureBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControl17allocSecureBufferEj(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControl17allocSecureBufferEj() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSCam::Feature::DefaultLogger::~DefaultLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature13DefaultLoggerD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature13DefaultLoggerD2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toOutput(NSCam::Feature::P2Util::P2IO const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOEj() called");
    return 0;
}

/* Demangled: NSCam::FeatureProfileHelper::getEngStreamingProf(unsigned char&, NSCam::ProfileParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20FeatureProfileHelper19getEngStreamingProfERhRKNS_12ProfileParamE(void) {
    ALOGD("_ZN5NSCam20FeatureProfileHelper19getEngStreamingProfERhRKNS_12ProfileParamE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::__emplace_back_slow_path<NSCam::Feature::P2Util::P2IO>(NSCam::Feature::P2Util::P2IO&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doEnque(NSCam::NSIoPipe::NSPostProc::FramePackage&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mTotalCmdNumE = NULL;

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2ConfigInfoC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeFrameLogger(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature15makeFrameLoggerEPKcjjjjj(void) {
    ALOGD("_ZN5NSCam7Feature15makeFrameLoggerEPKcjjjjj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::ExtraParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ExtraParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ExtraParamE() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::trySet<int>(NSCam::IMetadata&, unsigned int, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6trySetIiEEiRNS_9IMetadataEjRKT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6trySetIiEEiRNS_9IMetadataEjRKT_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::totalSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2IOClassfier9totalSizeEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2IOClassfier9totalSizeEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mWPESemEQDone */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mWPESemEQDoneE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void) {
    ALOGD("_ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initTuningPort() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp14initTuningPortEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp14initTuningPortEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(char const*, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_PQParam(NSCam::NSIoPipe::FrameParams&, NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12push_PQParamERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2ObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12push_PQParamERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2ObjPtrE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::popRotate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfier9popRotateEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfier9popRotateEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setJpegParam(NSCam::NSIoPipe::NSPostProc::EJpgCmd, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void) {
    ALOGD("_ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::MdpStartInfo, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::MdpStartInfo> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_iWpeEnqueReq */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_iWpeEnqueReqE = NULL;

/* Demangled: NSCam::Feature::P2Util::prepareMDPFrameParam(NSCam::NSIoPipe::QParams&, NSCam::NSIoPipe::FrameParams&, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, NSCam::Feature::P2Util::MDPObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsERNS2_11FrameParamsERNSt3__16vectorINS1_4P2IOENS7_9allocatorIS9_EEEERKNS1_9MDPObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsERNS2_11FrameParamsERNSt3__16vectorINS1_4P2IOENS7_9allocatorIS9_EEEERKNS1_9MDPObjPtrE() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_DEBUG = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Exported Object: P2NormalStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE() called");
    return 0;
}

/* Exported Object: android::Singleton<NSCam::BufAllocUtil>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5NSCam12BufAllocUtilEE5sLockE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<0u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<2u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportCZPath(unsigned int, P2_PQ_PATH) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13supportCZPathEj10P2_PQ_PATH(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13supportCZPathEj10P2_PQ_PATH() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toMCrpRsInfo(NSCam::Feature::P2Util::P2IO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12toMCrpRsInfoERKNS1_4P2IOE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12toMCrpRsInfoERKNS1_4P2IOE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQDone */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQDoneE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<6u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2PackC1ERKS2_RKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2PackC1ERKS2_RKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_in(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::Feature::P2Util::P2IO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE() called");
    return 0;
}

/* Demangled: NSCam::ImageBufferUtils::deallocBuffer(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ImageBufferUtils13deallocBufferEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam16ImageBufferUtils13deallocBufferEPNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<8u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::makeQParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::P2IOClassfier(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfierC1ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfierC1ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::eraseNotify(NSCam::NSIoPipe::NSWpe::EWPEBufferListTag, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::queryLowIsoNVRam(int, unsigned char, NvramFeatureID, NSCam::Feature::P2Util::P2PlatInfo::NVRamData&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16queryLowIsoNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16queryLowIsoNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11P2FrameDataC1ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11P2FrameDataC1ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11P2FrameDataC2ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11P2FrameDataC2ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorDataC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorDataC2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Feature::P2Util::P2InfoObj */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam7Feature6P2Util9P2InfoObjE = NULL;

/* Demangled: NSCam::Feature::P2Util::toCapability(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12toCapabilityEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12toCapabilityEj() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_INFO = NULL;

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_ASSERT = NULL;

/* Demangled: android::sp<NSCam::Feature::P2Util::P2DataObj const>::operator=(android::sp<NSCam::Feature::P2Util::P2DataObj const>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIKN5NSCam7Feature6P2Util9P2DataObjEEaSEOS6_(void) {
    ALOGD("_ZN7android2spIKN5NSCam7Feature6P2Util9P2DataObjEEaSEOS6_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__emplace_multi<std::__1::pair<unsigned int const, NSCam::Feature::P2Util::P2SensorInfo> const&>(std::__1::pair<unsigned int const, NSCam::Feature::P2Util::P2SensorInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE15__emplace_multiIJRKNS_4pairIKjS5_EEEEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE15__emplace_multiIJRKNS_4pairIKjS5_EEEEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::makeFrameParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp = NULL;

/* Demangled: NSCam::Feature::SecureBufferControl::~SecureBufferControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControlD0Ev(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControlD0Ev() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_ASSERT = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::P2DataObj(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2DataObjC1ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2DataObjC1ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::P2DataObj(NSCam::Feature::ILog const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2DataObjC2ERKNS0_4ILogE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2DataObjC2ERKNS0_4ILogE() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEEEvT_SL_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEEEvT_SL_() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::SecureBufferControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControlC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControlC1Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<2u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<4u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, NSCam::NSIoPipe::QParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogERKNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogERKNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::trySet<NSCam::MRect>(NSCam::IMetadata&, unsigned int, NSCam::MRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6trySetINS_5MRectEEEiRNS_9IMetadataEjRKT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6trySetINS_5MRectEEEiRNS_9IMetadataEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Feature::DefaultLogger::~DefaultLogger() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam7Feature13DefaultLoggerD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam7Feature13DefaultLoggerD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<8u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: android::Singleton<NSCam::ImageBufferUtils>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE5sLockE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getImgoAlignMask() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16getImgoAlignMaskEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16getImgoAlignMaskEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::P2IOClassfier(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfierC2ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfierC2ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doDeque(int, NSCam::NSIoPipe::NSPostProc::FrameUnit&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__emplace_multi<std::__1::pair<unsigned int const, NSCam::MSize> const&>(std::__1::pair<unsigned int const, NSCam::MSize> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE15__emplace_multiIJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE15__emplace_multiIJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::BufAllocUtil>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam12BufAllocUtilEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam12BufAllocUtilEE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::updateExpectEndTime(NSCam::NSIoPipe::QParams&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util19updateExpectEndTimeERNS_8NSIoPipe7QParamsEjj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util19updateExpectEndTimeERNS_8NSIoPipe7QParamsEjj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::needSecureBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSPostProc::INormalStream-in-NSCam::NSIoPipe::NSPostProc::NormalStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe10NSPostProc12NormalStreamE0_NS1_13INormalStreamE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::push_back(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<7u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2DataObjD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2DataObjD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream7mThreadE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11P2FrameDataC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11P2FrameDataC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2InfoObjD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2InfoObjD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::ImageBufferUtils::allocBuffer(android::sp<NSCam::IImageBuffer>&, unsigned int, unsigned int, unsigned int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16ImageBufferUtils11allocBufferERN7android2spINS_12IImageBufferEEEjjjij(void) {
    ALOGD("_ZN5NSCam16ImageBufferUtils11allocBufferERN7android2spINS_12IImageBufferEEEjjjij() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__swap_out_circular_buffer(std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::~DefaultLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature13DefaultLoggerD0Ev(void) {
    ALOGD("_ZN5NSCam7Feature13DefaultLoggerD0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Feature::DefaultLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam7Feature13DefaultLoggerE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(android::sp<NSCam::Feature::P2Util::P2DataObj> const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2DataC2ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2DataC2ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initActiveArrayRect() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp19initActiveArrayRectEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp19initActiveArrayRectEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createInstance(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_ERROR = NULL;

/* Exported Object: WpeStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::queryAllNVRam(int, unsigned char, NvramFeatureID, NSCam::Feature::P2Util::P2PlatInfo::NVRamData&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13queryAllNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13queryAllNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_out(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::Feature::P2Util::P2IO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSPostProc::FramePackage, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getYnrFaceiPort() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp15getYnrFaceiPortEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp15getYnrFaceiPortEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toName(NSCam::NSIoPipe::Output const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6OutputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6OutputE() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2SensorData::Dummy */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam7Feature6P2Util12P2SensorData5DummyE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataProvider>::sp(NSCam::IMetadataProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::P2PlatInfoImp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpC2Ej(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImpC2Ej() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportClearZoom() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportClearZoomEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportClearZoomEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::toSecEnum(NSCam::SecType) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature19SecureBufferControl9toSecEnumENS_7SecTypeE(void) {
    ALOGD("_ZNK5NSCam7Feature19SecureBufferControl9toSecEnumENS_7SecTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mDumpCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mDumpCountE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getBpc2Port() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getBpc2PortEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getBpc2PortEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util9P2InfoObj5cloneEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util9P2InfoObj5cloneEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::push_crop(NSCam::NSIoPipe::FrameParams&, unsigned int, NSCam::MRectF const&, NSCam::MSize const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS_6MRectFERKNS_5MSizeEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS_6MRectFERKNS_5MSizeEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getLogFrameID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger13getLogFrameIDEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger13getLogFrameIDEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe10NSPostProc12NormalStreamE = NULL;

/* Demangled: DrvMakePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11DrvMakePathPKcj(void) {
    ALOGD("_Z11DrvMakePathPKcj() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::pushToMDP(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::Feature::P2Util::P2IO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9pushToMDPERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9pushToMDPERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeRequestLogger(NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Feature::ILogObj>::operator=(android::sp<NSCam::Feature::ILogObj> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam7Feature7ILogObjEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam7Feature7ILogObjEEaSERKS4_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSPostProc::FramePackage const&>(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::makeDpPqParam(DpPqParam*, NSCam::Feature::P2Util::P2Pack const&, unsigned int, NSCam::Feature::P2Util::MDPObjPtr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackEjRKNS1_9MDPObjPtrE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackEjRKNS1_9MDPObjPtrE() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9threshold = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<3u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2PackC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2PackC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DipModuleCfg>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv() called");
    return 0;
}

/* Demangled: android::Singleton<NSCam::BufAllocUtil>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam12BufAllocUtilEED2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam12BufAllocUtilEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::ILog::ILog(android::sp<NSCam::Feature::ILogObj> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogC2ERKN7android2spINS0_7ILogObjEEE(void) {
    ALOGD("_ZN5NSCam7Feature4ILogC2ERKN7android2spINS0_7ILogObjEEE() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::tryGet<NSCam::MRect>(NSCam::IMetadata const&, unsigned int, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6tryGetINS_5MRectEEEiRKNS_9IMetadataEjRT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6tryGetINS_5MRectEEEiRKNS_9IMetadataEjRT_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::releaseLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::~P2PlatInfoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImpD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2FrameData::Dummy */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam7Feature6P2Util11P2FrameData5DummyE = NULL;

/* Exported Object: nsTimeoutToWait */
extern "C" __attribute__((visibility("default"))) void* nsTimeoutToWait = NULL;

/* Exported Object: p2HP_DQNode_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_INFO = NULL;

/* Exported Object: NvramQueryHelper::getHelper()::sDefault */
extern "C" __attribute__((visibility("default"))) void* _ZZN16NvramQueryHelper9getHelperEvE8sDefault = NULL;

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::getConfigInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util9P2InfoObj13getConfigInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util9P2InfoObj13getConfigInfoEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSWpe::WpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSWpe9WpeStreamE = NULL;

/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::updateQParams(NSCam::NSIoPipe::QParams&, NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13updateQParamsERNS_8NSIoPipe7QParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13updateQParamsERNS_8NSIoPipe7QParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::updateCropRegion(NSCam::IMetadata&, NSCam::MRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util16updateCropRegionERNS_9IMetadataERKNS_5MRectE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util16updateCropRegionERNS_9IMetadataERKNS_5MRectE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::enqueJudgement() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_WARN = NULL;

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<1u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<3u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::isDip50() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp7isDip50Ev(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp7isDip50Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::getRegTableSize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void) {
    ALOGD("_ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::checkWPEEnqueuedUserNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv() called");
    return 0;
}

/* Exported Object: CustomPQBase::getImpl()::sDefault */
extern "C" __attribute__((visibility("default"))) void* _ZZN12CustomPQBase7getImplEvE8sDefault = NULL;

/* Exported Object: VTT for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe10NSPostProc12NormalStreamE = NULL;

/* Exported Object: WpeThread_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<9u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util10P2PlatInfo11getInstanceEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util10P2PlatInfo11getInstanceEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dequeueJudgement() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initP2PQTable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initP2PQTableEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initP2PQTableEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDefaultPQ() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportDefaultPQEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportDefaultPQEv() called");
    return 0;
}

/* Exported Object: NSCam::Feature::P2Util::P2SensorInfo::Dummy */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam7Feature6P2Util12P2SensorInfo5DummyE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2PackC2ERKS2_RKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2PackC2ERKS2_RKNS0_4ILogEj() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mWpeCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11mWpeCmdLockE = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::hasYnrFacePort() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrFacePortEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrFacePortEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Demangled: saveToFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z10saveToFilePKcPhj(void) {
    ALOGD("_Z10saveToFilePKcPhj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::FeatureProfileHelper::getStreamingProf(unsigned char&, NSCam::ProfileParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20FeatureProfileHelper16getStreamingProfERhRKNS_12ProfileParamE(void) {
    ALOGD("_ZN5NSCam20FeatureProfileHelper16getStreamingProfERhRKNS_12ProfileParamE() called");
    return 0;
}

/* Demangled: NSCam::Feature::ILog::~ILog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature4ILogD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature4ILogD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::makeDpPqParam(DpPqParam*, NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::Output const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackERKNS_8NSIoPipe6OutputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackERKNS_8NSIoPipe6OutputE() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::tryGet<NSCam::IMetadata>(NSCam::IMetadata const&, unsigned int, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6tryGetINS_9IMetadataEEEiRKS3_jRT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6tryGetINS_9IMetadataEEEiRKS3_jRT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_ERROR = NULL;

/* Exported Object: NSCam::FeatureProfileHelper::isDebugOpen()::debugDump */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam20FeatureProfileHelper11isDebugOpenEvE9debugDump = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<9u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Pack::getConfigInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Pack13getConfigInfoEv(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Pack13getConfigInfoEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void) {
    ALOGD("_ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Feature::ILogObj>::sp<NSCam::Feature::DefaultLogger>(NSCam::Feature::DefaultLogger*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam7Feature7ILogObjEEC2INS2_13DefaultLoggerEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam7Feature7ILogObjEEC2INS2_13DefaultLoggerEEEPT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::getCropRect(NSCam::MRectF const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util11getCropRectERKNS_6MRectFE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util11getCropRectERKNS_6MRectFE() called");
    return 0;
}

/* Exported Object: vtable for NvramQueryHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTV16NvramQueryHelper = NULL;

/* Demangled: NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util9P2InfoObjD0Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util9P2InfoObjD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::Output const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe6OutputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe6OutputE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::printSRZ(NSCam::Feature::ILog const&, unsigned int, unsigned int, _SRZ_SIZE_INFO_ const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util8printSRZERKNS0_4ILogEjjPK15_SRZ_SIZE_INFO_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util8printSRZERKNS0_4ILogEjjPK15_SRZ_SIZE_INFO_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::~P2IOClassfier() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2IOClassfierD2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2IOClassfierD2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::registerAndGetSecHandle(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19SecureBufferControl23registerAndGetSecHandleEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam7Feature19SecureBufferControl23registerAndGetSecHandleEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev() called");
    return 0;
}

/* Demangled: getUs() */
extern "C" __attribute__((visibility("default"))) int _Z5getUsv(void) {
    ALOGD("_Z5getUsv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::eraseNotify(NSCam::NSIoPipe::NSPostProc::EBufferListTag, int, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj() called");
    return 0;
}

/* Demangled: NSCam::Feature::makeSubSensorLogger(NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature19makeSubSensorLoggerERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature19makeSubSensorLoggerERKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::getCmd(NSCam::NSIoPipe::NSPostProc::ECmd&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_WpeStreamInit */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15m_WpeStreamInitE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::wpeGlobalListCtrl(WpePackage, unsigned int, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::ILogBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature8ILogBaseE = NULL;

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<3u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<5u>()::sPlatInfo */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEvE9sPlatInfo = NULL;

/* Exported Object: nsTimeoutToWaitEnQ */
extern "C" __attribute__((visibility("default"))) void* nsTimeoutToWaitEnQ = NULL;

/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initIdxMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp10initIdxMgrEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util13P2PlatInfoImp10initIdxMgrEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mSemWpeThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mSemWpeThreadE = NULL;

/* Exported Object: android::Singleton<NSCam::BufAllocUtil>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5NSCam12BufAllocUtilEE9sInstanceE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12P2SensorInfoC2Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12P2SensorInfoC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2InfoC1Ev(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2InfoC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::PortID const&, NSImageio::NSIspio::EPortIndex) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDEN9NSImageio7NSIspio10EPortIndexE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDEN9NSImageio7NSIspio10EPortIndexE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp = NULL;

/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEEE = NULL;

/* Demangled: android::sp<NSCam::Feature::P2Util::P2InfoObj>::operator=(android::sp<NSCam::Feature::P2Util::P2InfoObj>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEaSEOS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEaSEOS5_() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toP2PQPath(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util10toP2PQPathEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util10toP2PQPathEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Feature::SecureBufferControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam7Feature19SecureBufferControlE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::SecureBufferControl::getSecureEnum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature19SecureBufferControl13getSecureEnumEv(void) {
    ALOGD("_ZNK5NSCam7Feature19SecureBufferControl13getSecureEnumEv() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setFps(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mWPEUserInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper12mWPEUserInfoE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::updateThreadProperty(NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::MCrpRsInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10MCrpRsInfoE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10MCrpRsInfoE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::DefaultLogger(char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature13DefaultLoggerC1EPKcS3_jjjjjj(void) {
    ALOGD("_ZN5NSCam7Feature13DefaultLoggerC1EPKcS3_jjjjjj() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::getLogMWRequestID() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature13DefaultLogger17getLogMWRequestIDEv(void) {
    ALOGD("_ZNK5NSCam7Feature13DefaultLogger17getLogMWRequestIDEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::DefaultLogger::DefaultLogger(char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature13DefaultLoggerC2EPKcS3_jjjjjj(void) {
    ALOGD("_ZN5NSCam7Feature13DefaultLoggerC2EPKcS3_jjjjjj() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_ASSERT = NULL;

/* Exported Object: P2NormalStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_WARN = NULL;

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::push_back(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::toName(NSCam::NSIoPipe::Input const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe5InputE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe5InputE() called");
    return 0;
}

/* Demangled: int NSCam::Feature::P2Util::trySet<unsigned char>(NSCam::IMetadata&, unsigned int, unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6trySetIhEEiRNS_9IMetadataEjRKT_(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6trySetIhEEiRNS_9IMetadataEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::queryFrame(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::FeatureProfileHelper::isDebugOpen()::debugDump */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam20FeatureProfileHelper11isDebugOpenEvE9debugDump = NULL;

/* Demangled: NSCam::Feature::P2Util::P2Info::getSensorInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEj(void) {
    ALOGD("_ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::vector(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::ModuleInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ModuleInfoE(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ModuleInfoE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__emplace_unique_key_args<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>, std::__1::tuple<> >(NSCam::NSIoPipe::EDIPInfoEnum const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(NSCam::Feature::P2Util::P2Info const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2InfoC2ERKS2_RKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2InfoC2ERKS2_RKNS0_4ILogEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<5u>() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEv(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, NSCam::Feature::ILog const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam7Feature6P2Util6P2InfoC1ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj(void) {
    ALOGD("_ZN5NSCam7Feature6P2Util6P2InfoC1ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj() called");
    return 0;
}

/* Exported Object: NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp = NULL;

/* Exported Object: p2HP_DQNode_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getUs() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::swap(std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_() called");
    return 0;
}
