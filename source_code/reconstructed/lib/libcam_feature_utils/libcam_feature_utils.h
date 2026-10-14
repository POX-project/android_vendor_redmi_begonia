/*
 * Reverse-Engineered ABI Specification for: libcam.feature_utils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.feature_utils.so
 */

#ifndef BEGONIA_RE_LIBCAM_FEATURE_UTILS_H
#define BEGONIA_RE_LIBCAM_FEATURE_UTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13toP2PQIdxNameEj */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::toP2PQIdxName(unsigned int) */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13toP2PQIdxNameEj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputEN9NSImageio7NSIspio10EPortIndexE */
/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Input const&, NSImageio::NSIspio::EPortIndex) */
int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputEN9NSImageio7NSIspio10EPortIndexE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doMdpStart() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE */
/* Demangled: NSCam::Feature::P2Util::push_in(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::IImageBuffer*) */
int _ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::resize(unsigned int) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEEC1Ev */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::Singleton() */
int _ZN7android9SingletonIN5NSCam12BufAllocUtilEEC1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_ */
/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp<NSCam::IIonImageBufferHeap>(NSCam::IIonImageBufferHeap*) */
int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_(void);

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED1Ev */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::~Singleton() */
int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitDequeVSSAgain() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv(void);

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC2Ev */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::Singleton() */
int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC2Ev(void);

/* Symbol: _ZTVN5NSCam7Feature6P2Util9P2InfoObjE */
/* Demangled: vtable for NSCam::Feature::P2Util::P2InfoObj */
extern void* _ZTVN5NSCam7Feature6P2Util9P2InfoObjE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE4findIjEENS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::find<unsigned int>(unsigned int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE4findIjEENS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEERKT_(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::ECmd> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorInfoC1ERKNS0_4ILogERKj */
/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo(NSCam::Feature::ILog const&, unsigned int const&) */
int _ZN5NSCam7Feature6P2Util12P2SensorInfoC1ERKNS0_4ILogERKj(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util9P2DataObj12getFrameDataEv */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::getFrameData() const */
int _ZNK5NSCam7Feature6P2Util9P2DataObj12getFrameDataEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util9P2DataObj13getSensorDataEj */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::getSensorData(unsigned int) const */
int _ZNK5NSCam7Feature6P2Util9P2DataObj13getSensorDataEj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util16push_srz3_FACENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS_5MSizeES9_ */
/* Demangled: NSCam::Feature::P2Util::push_srz3_FACENR(NSCam::NSIoPipe::FrameParams&, _SRZ_SIZE_INFO_*, NSCam::MSize const&, NSCam::MSize const&) */
int _ZN5NSCam7Feature6P2Util16push_srz3_FACENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS_5MSizeES9_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6tryGetIiEEiRKNS_9IMetadataEjRT_ */
/* Demangled: int NSCam::Feature::P2Util::tryGet<int>(NSCam::IMetadata const&, unsigned int, int&) */
int _ZN5NSCam7Feature6P2Util6tryGetIiEEiRKNS_9IMetadataEjRT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam7Feature19SecureBufferControlD1Ev */
/* Demangled: NSCam::Feature::SecureBufferControl::~SecureBufferControl() */
int _ZN5NSCam7Feature19SecureBufferControlD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam7Feature16makeSensorLoggerERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::makeSensorLogger(NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature16makeSensorLoggerERKNS0_4ILogEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv(void);

/* Symbol: _ZGVZN12CustomPQBase7getImplEvE8sDefault */
/* Demangled: guard variable for CustomPQBase::getImpl()::sDefault */
extern void* _ZGVZN12CustomPQBase7getImplEvE8sDefault;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp20supportDefaultPQPathE10P2_PQ_PATH */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDefaultPQPath(P2_PQ_PATH) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp20supportDefaultPQPathE10P2_PQ_PATH(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2Info::getSensorInfo() const */
int _ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util17updateFrameParamsERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE */
/* Demangled: NSCam::Feature::P2Util::updateFrameParams(NSCam::NSIoPipe::FrameParams&, NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
int _ZN5NSCam7Feature6P2Util17updateFrameParamsERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void);

/* Symbol: _ZN5NSCam7Feature19SecureBufferControlC2Ev */
/* Demangled: NSCam::Feature::SecureBufferControl::SecureBufferControl() */
int _ZN5NSCam7Feature19SecureBufferControlC2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
int _ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2DataC1ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(android::sp<NSCam::Feature::P2Util::P2DataObj> const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2DataC1ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj(void);

/* Symbol: P2NormalStream_DbgLogEnable_DEBUG */
/* Demangled: P2NormalStream_DbgLogEnable_DEBUG */
extern void* P2NormalStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam7Feature4ILogD0Ev */
/* Demangled: NSCam::Feature::ILog::~ILog() */
int _ZN5NSCam7Feature4ILogD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE5clearEv */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::clear() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE5clearEv(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_ASSERT */
/* Demangled: P2PipeWrapper_DbgLogEnable_ASSERT */
extern void* P2PipeWrapper_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2AppStreamInfo, std::__1::allocator<NSCam::Feature::P2Util::P2AppStreamInfo> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::sendCommand(NSCam::NSIoPipe::NSPostProc::ESDCmd, int, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyThread() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::dequeJudgement() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam7Feature4ILogC1Ev */
/* Demangled: NSCam::Feature::ILog::ILog() */
int _ZN5NSCam7Feature4ILogC1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::Dump_Tpipe(unsigned int*) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::saveToFile(char const*, NSCam::NSIoPipe::WPEBufInfo*) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp9initNVRamEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initNVRam() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp9initNVRamEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2DataC1ERKS2_RKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(NSCam::Feature::P2Util::P2Data const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2DataC1ERKS2_RKNS0_4ILogEj(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputEN9NSImageio7NSIspio10EPortIndexE */
/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Output const&, NSImageio::NSIspio::EPortIndex) */
int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputEN9NSImageio7NSIspio10EPortIndexE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void);

/* Symbol: _ZN5NSCam20FeatureProfileHelper11getShotProfERhRKNS_12ProfileParamE */
/* Demangled: NSCam::FeatureProfileHelper::getShotProf(unsigned char&, NSCam::ProfileParam const&) */
int _ZN5NSCam20FeatureProfileHelper11getShotProfERhRKNS_12ProfileParamE(void);

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<4u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<6u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrLceiPortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::hasYnrLceiPort() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrLceiPortEv(void);

/* Symbol: _ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
int _ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void);

/* Symbol: _ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEC2EPS4_ */
/* Demangled: android::sp<NSCam::Feature::P2Util::P2InfoObj>::sp(NSCam::Feature::P2Util::P2InfoObj*) */
int _ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEC2EPS4_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE8__detachEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__detach(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE8__detachEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_ERROR */
/* Demangled: P2PipeWrapper_DbgLogEnable_ERROR */
extern void* P2PipeWrapper_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::addCmd(NSCam::NSIoPipe::NSPostProc::ECmd const&) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::push_back(NSCam::NSIoPipe::NSWpe::WPEFrameUnit const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2DataObjD2Ev */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
int _ZN5NSCam7Feature6P2Util9P2DataObjD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void);

/* Symbol: _ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
int _ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void);

/* Symbol: WpeStream_DbgLogEnable_ASSERT */
/* Demangled: WpeStream_DbgLogEnable_ASSERT */
extern void* WpeStream_DbgLogEnable_ASSERT;

/* Symbol: DipUtility_DbgLogEnable_VERBOSE */
/* Demangled: DipUtility_DbgLogEnable_VERBOSE */
extern void* DipUtility_DbgLogEnable_VERBOSE;

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<1u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2DataC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data() */
int _ZN5NSCam7Feature6P2Util6P2DataC1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfier6popAllERNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::popAll(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&) */
int _ZN5NSCam7Feature6P2Util13P2IOClassfier6popAllERNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputERKNS2_6PortIDE */
/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Input const&, NSCam::NSIoPipe::PortID const&) */
int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe5InputERKNS2_6PortIDE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__push_back_slow_path<DipModuleCfg const&>(DipModuleCfg const&) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_ASSERT */
/* Demangled: p2HP_EQNode_DbgLogEnable_ASSERT */
extern void* p2HP_EQNode_DbgLogEnable_ASSERT;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam7Feature13DefaultLoggerD1Ev */
/* Demangled: NSCam::Feature::DefaultLogger::~DefaultLogger() */
int _ZN5NSCam7Feature13DefaultLoggerD1Ev(void);

/* Symbol: _ZN5NSCam7Feature15makeFrameLoggerERKNS0_4ILogEjjj */
/* Demangled: NSCam::Feature::makeFrameLogger(NSCam::Feature::ILog const&, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam7Feature15makeFrameLoggerERKNS0_4ILogEjjj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util23prepareOneMDPFrameParamERNS_8NSIoPipe11FrameParamsERNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEESB_RKNS1_9MDPObjPtrE */
/* Demangled: NSCam::Feature::P2Util::prepareOneMDPFrameParam(NSCam::NSIoPipe::FrameParams&, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, NSCam::Feature::P2Util::MDPObjPtr const&) */
int _ZN5NSCam7Feature6P2Util23prepareOneMDPFrameParamERNS_8NSIoPipe11FrameParamsERNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEESB_RKNS1_9MDPObjPtrE(void);

/* Symbol: WpeStream_DbgLogEnable_ERROR */
/* Demangled: WpeStream_DbgLogEnable_ERROR */
extern void* WpeStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mInitCountE;

/* Symbol: _ZN5NSCam7Feature19SecureBufferControl4initENS_7SecTypeE */
/* Demangled: NSCam::Feature::SecureBufferControl::init(NSCam::SecType) */
int _ZN5NSCam7Feature19SecureBufferControl4initENS_7SecTypeE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeISA_S3_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::__deallocate_node(std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, void*>*>*) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeISA_S3_EEEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQUserE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQUser */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQUserE;

/* Symbol: _ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE */
/* Demangled: NSCam::Feature::P2Util::makeFrameParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
int _ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util17allocateRegBufferEi */
/* Demangled: NSCam::Feature::P2Util::allocateRegBuffer(int) */
int _ZN5NSCam7Feature6P2Util17allocateRegBufferEi(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO>&>&) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj(void);

/* Symbol: _ZTVN5NSCam7Feature6P2Util13P2PlatInfoImpE */
/* Demangled: vtable for NSCam::Feature::P2Util::P2PlatInfoImp */
extern void* _ZTVN5NSCam7Feature6P2Util13P2PlatInfoImpE;

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<0u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util12P2ConfigInfoC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo() */
int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv(void);

/* Symbol: _ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEjj */
/* Demangled: NSCam::Feature::makeRequestLogger(NSCam::Feature::ILog const&, unsigned int, unsigned int) */
int _ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEjj(void);

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<6u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util6P2PackC2ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE */
/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::ILog const&, android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&) */
int _ZN5NSCam7Feature6P2Util6P2PackC2ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6is4K2KERKNS_5MSizeE */
/* Demangled: NSCam::Feature::P2Util::is4K2K(NSCam::MSize const&) */
int _ZN5NSCam7Feature6P2Util6is4K2KERKNS_5MSizeE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mCmdListCondE;

/* Symbol: _ZN5NSCam16ImageBufferUtils13deallocBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::ImageBufferUtils::deallocBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam16ImageBufferUtils13deallocBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorDataC1ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util12P2SensorDataC1ERKNS0_4ILogE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack12getFrameDataEv */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getFrameData() const */
int _ZNK5NSCam7Feature6P2Util6P2Pack12getFrameDataEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11printFeInfoERKNS0_4ILogEjPNS_8NSIoPipe6FEInfoE */
/* Demangled: NSCam::Feature::P2Util::printFeInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::FEInfo*) */
int _ZN5NSCam7Feature6P2Util11printFeInfoERKNS0_4ILogEjPNS_8NSIoPipe6FEInfoE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputERKNS2_6PortIDE */
/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::Output const&, NSCam::NSIoPipe::PortID const&) */
int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6OutputERKNS2_6PortIDE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2IOClassfier11hasRotateIOEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::hasRotateIO() const */
int _ZNK5NSCam7Feature6P2Util13P2IOClassfier11hasRotateIOEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorDataC2ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util12P2SensorDataC2ERKNS0_4ILogE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2InfoC2ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2InfoC2ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::pop_front() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE9pop_frontEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dumpToFile(char const*, unsigned char*, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj(void);

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11getInstanceEv */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::getInstance() */
int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11getInstanceEv(void);

/* Symbol: _ZN5NSCam7Feature4ILogC1ERKN7android2spINS0_7ILogObjEEE */
/* Demangled: NSCam::Feature::ILog::ILog(android::sp<NSCam::Feature::ILogObj> const&) */
int _ZN5NSCam7Feature4ILogC1ERKN7android2spINS0_7ILogObjEEE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEj */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorData(unsigned int) const */
int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEj(void);

/* Symbol: _Z8DrvMkdirPKcj */
/* Demangled: DrvMkdir(char const*, unsigned int) */
int _Z8DrvMkdirPKcj(void);

/* Symbol: _ZN5NSCam16ImageBufferUtils17createBufferAliasEPNS_12IImageBufferEjjNS_12EImageFormatE */
/* Demangled: NSCam::ImageBufferUtils::createBufferAlias(NSCam::IImageBuffer*, unsigned int, unsigned int, NSCam::EImageFormat) */
int _ZN5NSCam16ImageBufferUtils17createBufferAliasEPNS_12IImageBufferEjjNS_12EImageFormatE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS2_9MCropRectERKNS_5MSizeE */
/* Demangled: NSCam::Feature::P2Util::push_crop(NSCam::NSIoPipe::FrameParams&, unsigned int, NSCam::NSIoPipe::MCropRect const&, NSCam::MSize const&) */
int _ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS2_9MCropRectERKNS_5MSizeE(void);

/* Symbol: WpeThread_DbgLogEnable_WARN */
/* Demangled: WpeThread_DbgLogEnable_WARN */
extern void* WpeThread_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam7Feature6P2Util15makeTuningParamERKNS0_4ILogERKNS1_6P2PackEPN6NS3Av37IHalISPERNS8_9MetaSet_TEPSB_iPvPNS_12IImageBufferEiSG_iSE_ */
/* Demangled: NSCam::Feature::P2Util::makeTuningParam(NSCam::Feature::ILog const&, NSCam::Feature::P2Util::P2Pack const&, NS3Av3::IHalISP*, NS3Av3::MetaSet_T&, NS3Av3::MetaSet_T*, int, void*, NSCam::IImageBuffer*, int, NSCam::IImageBuffer*, int, void*) */
int _ZN5NSCam7Feature6P2Util15makeTuningParamERKNS0_4ILogERKNS1_6P2PackEPN6NS3Av37IHalISPERNS8_9MetaSet_TEPSB_iPvPNS_12IImageBufferEiSG_iSE_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16m_bSaveReqToFileE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_bSaveReqToFile */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16m_bSaveReqToFileE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util15isGraphicBufferEPKNS_12IImageBufferE */
/* Demangled: NSCam::Feature::P2Util::isGraphicBuffer(NSCam::IImageBuffer const*) */
int _ZN5NSCam7Feature6P2Util15isGraphicBufferEPKNS_12IImageBufferE(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_DEBUG */
/* Demangled: p2HP_DQNode_DbgLogEnable_DEBUG */
extern void* p2HP_DQNode_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQUserLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger15getLogRequestIDEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogRequestID() const */
int _ZNK5NSCam7Feature13DefaultLogger15getLogRequestIDEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8mCmdListE;

/* Symbol: _ZN5NSCam7Feature16makeSensorLoggerEPKcjj */
/* Demangled: NSCam::Feature::makeSensorLogger(char const*, unsigned int, unsigned int) */
int _ZN5NSCam7Feature16makeSensorLoggerEPKcjj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<2u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportDREPathEj10P2_PQ_PATH */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDREPath(unsigned int, P2_PQ_PATH) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportDREPathEj10P2_PQ_PATH(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportHFGPathEj10P2_PQ_PATH */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportHFGPath(unsigned int, P2_PQ_PATH) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14supportHFGPathEj10P2_PQ_PATH(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorDataC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData() */
int _ZN5NSCam7Feature6P2Util12P2SensorDataC1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util16printTuningParamERKNS0_4ILogERKN6NS3Av311TuningParamE */
/* Demangled: NSCam::Feature::P2Util::printTuningParam(NSCam::Feature::ILog const&, NS3Av3::TuningParam const&) */
int _ZN5NSCam7Feature6P2Util16printTuningParamERKNS0_4ILogERKN6NS3Av311TuningParamE(void);

/* Symbol: _ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
int _ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_WARN */
/* Demangled: P2PipeWrapper_DbgLogEnable_WARN */
extern void* P2PipeWrapper_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitEnqueVSSAgain() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2InfoC1ERKS2_RKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(NSCam::Feature::P2Util::P2Info const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2InfoC1ERKS2_RKNS0_4ILogEj(void);

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9threshold */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9threshold;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD2Ev */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::~P2PlatInfoImp() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD2Ev(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEj */
/* Demangled: NSCam::Feature::P2Util::P2Data::getSensorData(unsigned int) const */
int _ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6toNameEN9NSImageio7NSIspio10EPortIndexE */
/* Demangled: NSCam::Feature::P2Util::toName(NSImageio::NSIspio::EPortIndex) */
int _ZN5NSCam7Feature6P2Util6toNameEN9NSImageio7NSIspio10EPortIndexE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void);

/* Symbol: _ZN5NSCam16ImageBufferUtils12createBufferERN7android2spINS_12IImageBufferEEES5_ */
/* Demangled: NSCam::ImageBufferUtils::createBuffer(android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam16ImageBufferUtils12createBufferERN7android2spINS_12IImageBufferEEES5_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initSensorDevEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initSensorDev() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initSensorDevEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp18getActiveArrayRectEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getActiveArrayRect() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp18getActiveArrayRectEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTVN5NSCam7Feature6P2Util9P2DataObjE */
/* Demangled: vtable for NSCam::Feature::P2Util::P2DataObj */
extern void* _ZTVN5NSCam7Feature6P2Util9P2DataObjE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::enque(NSCam::NSIoPipe::EStreamPipeID, unsigned int, int, NSCam::NSIoPipe::QParams const&, std::__1::vector<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >&, char*) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc(void);

/* Symbol: WpeThread_DbgLogEnable_ERROR */
/* Demangled: WpeThread_DbgLogEnable_ERROR */
extern void* WpeThread_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam7Feature6P2Util17applyDMAConstrainERNS_8NSIoPipe9MCropRectEj */
/* Demangled: NSCam::Feature::P2Util::applyDMAConstrain(NSCam::NSIoPipe::MCropRect&, unsigned int) */
int _ZN5NSCam7Feature6P2Util17applyDMAConstrainERNS_8NSIoPipe9MCropRectEj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej(void);

/* Symbol: _ZN5NSCam12BufAllocUtil10deAllocMemEPKcPNS_12IImageBufferE */
/* Demangled: NSCam::BufAllocUtil::deAllocMem(char const*, NSCam::IImageBuffer*) */
int _ZN5NSCam12BufAllocUtil10deAllocMemEPKcPNS_12IImageBufferE(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger11getUserNameEv */
/* Demangled: NSCam::Feature::DefaultLogger::getUserName() const */
int _ZNK5NSCam7Feature13DefaultLogger11getUserNameEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2ConfigInfoC1ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC1ERKNS0_4ILogE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEv */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorData() const */
int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorDataEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2IOClassfier14hasNonRotateIOEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::hasNonRotateIO() const */
int _ZNK5NSCam7Feature6P2Util13P2IOClassfier14hasNonRotateIOEv(void);

/* Symbol: gWPELastTpipeStructure */
/* Demangled: gWPELastTpipeStructure */
extern void* gWPELastTpipeStructure;

/* Symbol: _ZN5NSCam7Feature6P2Util12P2ConfigInfoC2ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC2ERKNS0_4ILogE(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger15getLogMWFrameIDEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogMWFrameID() const */
int _ZNK5NSCam7Feature13DefaultLogger15getLogMWFrameIDEv(void);

/* Symbol: _ZTv0_n12_N5NSCam7Feature13DefaultLoggerD0Ev */
/* Demangled: virtual thunk to NSCam::Feature::DefaultLogger::~DefaultLogger() */
int _ZTv0_n12_N5NSCam7Feature13DefaultLoggerD0Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6toNameEj */
/* Demangled: NSCam::Feature::P2Util::toName(unsigned int) */
int _ZN5NSCam7Feature6P2Util6toNameEj(void);

/* Symbol: _ZN5NSCam20FeatureProfileHelper10getVSSProfERhRKNS_12ProfileParamE */
/* Demangled: NSCam::FeatureProfileHelper::getVSSProf(unsigned char&, NSCam::ProfileParam const&) */
int _ZN5NSCam20FeatureProfileHelper10getVSSProfERhRKNS_12ProfileParamE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE7reserveEj */
/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::reserve(unsigned int) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE7reserveEj(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14getYnrLceiPortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getYnrLceiPort() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14getYnrLceiPortEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE8__detachEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__detach(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE8__detachEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2IOClassfier5hasIOEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::hasIO() const */
int _ZNK5NSCam7Feature6P2Util13P2IOClassfier5hasIOEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_front(unsigned int* const&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJRjS9_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::__emplace_unique_key_args<unsigned int, unsigned int&, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >(unsigned int const&, unsigned int&, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJRjS9_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISA_S3_EEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEj(void);

/* Symbol: WpeStream_DbgLogEnable_INFO */
/* Demangled: WpeStream_DbgLogEnable_INFO */
extern void* WpeStream_DbgLogEnable_INFO;

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack9getP2PackERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getP2Pack(NSCam::Feature::ILog const&, unsigned int) const */
int _ZNK5NSCam7Feature6P2Util6P2Pack9getP2PackERKNS0_4ILogEj(void);

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE7camProp */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE7camProp;

/* Symbol: _ZN5NSCam7Feature6P2Util6trySetINS_9IMetadataEEEiRS3_jRKT_ */
/* Demangled: int NSCam::Feature::P2Util::trySet<NSCam::IMetadata>(NSCam::IMetadata&, unsigned int, NSCam::IMetadata const&) */
int _ZN5NSCam7Feature6P2Util6trySetINS_9IMetadataEEEiRS3_jRKT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper9mUserInfoE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mUserInfo */
extern void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper9mUserInfoE;

/* Symbol: _ZN5NSCam12BufAllocUtil8allocMemEPKcjjji */
/* Demangled: NSCam::BufAllocUtil::allocMem(char const*, unsigned int, unsigned int, unsigned int, int) */
int _ZN5NSCam12BufAllocUtil8allocMemEPKcjjji(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<8u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::clearCmds() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2DataObjD0Ev */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
int _ZN5NSCam7Feature6P2Util9P2DataObjD0Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2InfoObj13addSensorInfoERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::addSensorInfo(NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util9P2InfoObj13addSensorInfoERKNS0_4ILogEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mModuleMtxE;

/* Symbol: _ZN5NSCam7Feature6P2Util11P2FrameDataC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData() */
int _ZN5NSCam7Feature6P2Util11P2FrameDataC1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2InfoObjD1Ev */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
int _ZN5NSCam7Feature6P2Util9P2InfoObjD1Ev(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEv */
/* Demangled: NSCam::Feature::P2Util::P2Data::getSensorData() const */
int _ZNK5NSCam7Feature6P2Util6P2Data13getSensorDataEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::setFps(int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi(void);

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE9sInstanceE */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::sInstance */
extern void* _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE9sInstanceE;

/* Symbol: _ZN7android2spIN5NSCam7Feature6P2Util7CropperEEaSEOS5_ */
/* Demangled: android::sp<NSCam::Feature::P2Util::Cropper>::operator=(android::sp<NSCam::Feature::P2Util::Cropper>&&) */
int _ZN7android2spIN5NSCam7Feature6P2Util7CropperEEaSEOS5_(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Info11getPlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2Info::getPlatInfo() const */
int _ZNK5NSCam7Feature6P2Util6P2Info11getPlatInfoEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getLsc2PortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getLsc2Port() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getLsc2PortEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getCommand(NSCam::NSIoPipe::NSWpe::ECmd&) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQUserLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2InfoC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info() */
int _ZN5NSCam7Feature6P2Util6P2InfoC2Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util10findOutputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_6OutputE */
/* Demangled: NSCam::Feature::P2Util::findOutput(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::PortID const&, NSCam::NSIoPipe::Output&) */
int _ZN5NSCam7Feature6P2Util10findOutputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_6OutputE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSWpe::WPEFramePackage const&>(NSCam::NSIoPipe::NSWpe::WPEFramePackage const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(android::sp<NSCam::IImageBuffer> const&) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSERKS3_(void);

/* Symbol: _ZTTN5NSCam7Feature6P2Util9P2DataObjE */
/* Demangled: VTT for NSCam::Feature::P2Util::P2DataObj */
extern void* _ZTTN5NSCam7Feature6P2Util9P2DataObjE;

/* Symbol: _ZN5NSCam7Feature6P2Util12getDebugExifEv */
/* Demangled: NSCam::Feature::P2Util::getDebugExif() */
int _ZN5NSCam7Feature6P2Util12getDebugExifEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfier12popNonRotateEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::popNonRotate() */
int _ZN5NSCam7Feature6P2Util13P2IOClassfier12popNonRotateEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util9P2InfoObj13getSensorInfoEj */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::getSensorInfo(unsigned int) const */
int _ZNK5NSCam7Feature6P2Util9P2InfoObj13getSensorInfoEj(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZGVZN16NvramQueryHelper9getHelperEvE8sDefault */
/* Demangled: guard variable for NvramQueryHelper::getHelper()::sDefault */
extern void* _ZGVZN16NvramQueryHelper9getHelperEvE8sDefault;

/* Symbol: _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferENS2_14EPortCapbilityEi */
/* Demangled: NSCam::Feature::P2Util::push_out(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::IImageBuffer*, NSCam::NSIoPipe::EPortCapbility, int) */
int _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferENS2_14EPortCapbilityEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv(void);

/* Symbol: _ZN5NSCam7Feature10makeLoggerEPKcS2_jjjjjj */
/* Demangled: NSCam::Feature::makeLogger(char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam7Feature10makeLoggerEPKcS2_jjjjjj(void);

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<5u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<7u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util6P2DataC2ERKS2_RKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(NSCam::Feature::P2Util::P2Data const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2DataC2ERKS2_RKNS0_4ILogEj(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack11getPlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getPlatInfo() const */
int _ZNK5NSCam7Feature6P2Util6P2Pack11getPlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11toMCropRectERKNS1_4P2IOE */
/* Demangled: NSCam::Feature::P2Util::toMCropRect(NSCam::Feature::P2Util::P2IO const&) */
int _ZN5NSCam7Feature6P2Util11toMCropRectERKNS1_4P2IOE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_wpeEQUserNumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQUserNum */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_wpeEQUserNumE;

/* Symbol: _ZTCN5NSCam8NSIoPipe5NSWpe9WpeStreamE0_NS1_10IWpeStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSWpe::IWpeStream-in-NSCam::NSIoPipe::NSWpe::WpeStream */
extern void* _ZTCN5NSCam8NSIoPipe5NSWpe9WpeStreamE0_NS1_10IWpeStreamE;

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger11getLogLevelEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogLevel() const */
int _ZNK5NSCam7Feature13DefaultLogger11getLogLevelEv(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger9getLogStrEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogStr() const */
int _ZNK5NSCam7Feature13DefaultLogger9getLogStrEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util15updateDebugExifERKNS1_6P2PackERKNS_9IMetadataERS5_ */
/* Demangled: NSCam::Feature::P2Util::updateDebugExif(NSCam::Feature::P2Util::P2Pack const&, NSCam::IMetadata const&, NSCam::IMetadata&) */
int _ZN5NSCam7Feature6P2Util15updateDebugExifERKNS1_6P2PackERKNS_9IMetadataERS5_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9findInputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_5InputE */
/* Demangled: NSCam::Feature::P2Util::findInput(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::PortID const&, NSCam::NSIoPipe::Input&) */
int _ZN5NSCam7Feature6P2Util9findInputERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERNS2_5InputE(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_DEBUG */
/* Demangled: p2HP_EQNode_DbgLogEnable_DEBUG */
extern void* p2HP_EQNode_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImpC1Ej */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::P2PlatInfoImp(unsigned int) */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpC1Ej(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportDREEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDRE() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportDREEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6PortIDE */
/* Demangled: NSCam::Feature::P2Util::toName(NSCam::NSIoPipe::PortID const&) */
int _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6PortIDE(void);

/* Symbol: _ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD0Ev */
/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
int _ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD0Ev(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEj */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorInfo(unsigned int) const */
int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEj(void);

/* Symbol: _ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD1Ev */
/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
int _ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13printCrspInfoERKNS0_4ILogEjPNS_8NSIoPipe8CrspInfoE */
/* Demangled: NSCam::Feature::P2Util::printCrspInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::CrspInfo*) */
int _ZN5NSCam7Feature6P2Util13printCrspInfoERKNS0_4ILogEjPNS_8NSIoPipe8CrspInfoE(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_WARN */
/* Demangled: p2HP_DQNode_DbgLogEnable_WARN */
extern void* p2HP_DQNode_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::addCommand(NSCam::NSIoPipe::NSWpe::ECmd const&) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::clearCommands() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv(void);

/* Symbol: _ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::ImageBufferHeap>::sp(NSCam::ImageBufferHeap*) */
int _ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZTCN5NSCam7Feature13DefaultLoggerE0_NS0_7ILogObjE */
/* Demangled: construction vtable for NSCam::Feature::ILogObj-in-NSCam::Feature::DefaultLogger */
extern void* _ZTCN5NSCam7Feature13DefaultLoggerE0_NS0_7ILogObjE;

/* Symbol: P2NormalStream_DbgLogEnable_INFO */
/* Demangled: P2NormalStream_DbgLogEnable_INFO */
extern void* P2NormalStream_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWpeStreamImp() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv(void);

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<1u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsEjRNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEERKNS1_9MDPObjPtrE */
/* Demangled: NSCam::Feature::P2Util::prepareMDPFrameParam(NSCam::NSIoPipe::QParams&, unsigned int, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, NSCam::Feature::P2Util::MDPObjPtr const&) */
int _ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsEjRNSt3__16vectorINS1_4P2IOENS5_9allocatorIS7_EEEERKNS1_9MDPObjPtrE(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__append(unsigned int) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_ASSERT */
/* Demangled: p2HP_DQNode_DbgLogEnable_ASSERT */
extern void* p2HP_DQNode_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<4u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2PackC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack() */
int _ZN5NSCam7Feature6P2Util6P2PackC1Ev(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Data12getFrameDataEv */
/* Demangled: NSCam::Feature::P2Util::P2Data::getFrameData() const */
int _ZNK5NSCam7Feature6P2Util6P2Data12getFrameDataEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13m_wpeEQDupIdxE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQDupIdx */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13m_wpeEQDupIdxE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void);

/* Symbol: _ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
int _ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void);

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEED1Ev */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::~Singleton() */
int _ZN7android9SingletonIN5NSCam12BufAllocUtilEED1Ev(void);

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<7u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<9u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe5InputE */
/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::Input const&) */
int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe5InputE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2IOClassfier10rotateSizeEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::rotateSize() const */
int _ZNK5NSCam7Feature6P2Util13P2IOClassfier10rotateSizeEv(void);

/* Symbol: _ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
int _ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void);

/* Symbol: _ZN5NSCam20FeatureProfileHelper14getEngShotProfERhRKNS_12ProfileParamE */
/* Demangled: NSCam::FeatureProfileHelper::getEngShotProf(unsigned char&, NSCam::ProfileParam const&) */
int _ZN5NSCam20FeatureProfileHelper14getEngShotProfERhRKNS_12ProfileParamE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD0Ev */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::~P2PlatInfoImp() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD0Ev(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_INFO */
/* Demangled: p2HP_EQNode_DbgLogEnable_INFO */
extern void* p2HP_EQNode_DbgLogEnable_INFO;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe5NSWpe9WpeStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSWpe::WpeStream */
extern void* _ZTTN5NSCam8NSIoPipe5NSWpe9WpeStreamE;

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEEC2Ev */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::Singleton() */
int _ZN7android9SingletonIN5NSCam12BufAllocUtilEEC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__emplace_unique_key_args<DP_ISP_FEATURE_ENUM, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>, std::__1::tuple<> >(DP_ISP_FEATURE_ENUM const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDES5_ */
/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::PortID const&, NSCam::NSIoPipe::PortID const&) */
int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDES5_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE */
/* Demangled: NSCam::Feature::P2Util::push_out(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::IImageBuffer*) */
int _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDEPNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj(void);

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED2Ev */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::~Singleton() */
int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEEEvT_SJ_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEEEvT_SJ_(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam7Feature6P2Util4P2IOERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::Feature::P2Util::P2IO>&) */
int _ZNSt3__114__split_bufferIN5NSCam7Feature6P2Util4P2IOERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createInstance() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv(void);

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEE11hasInstanceEv */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::hasInstance() */
int _ZN7android9SingletonIN5NSCam12BufAllocUtilEE11hasInstanceEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14queryNVRamDataENS1_10P2PlatInfo9FeatureIDEih */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::queryNVRamData(NSCam::Feature::P2Util::P2PlatInfo::FeatureID, int, unsigned char) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14queryNVRamDataENS1_10P2PlatInfo9FeatureIDEih(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2InfoObjC1ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::P2InfoObj(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util9P2InfoObjC1ERKNS0_4ILogE(void);

/* Symbol: _ZN7android2spIN5NSCam22ISecureImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::ISecureImageBufferHeap>::sp(NSCam::ISecureImageBufferHeap*) */
int _ZN7android2spIN5NSCam22ISecureImageBufferHeapEEC2EPS2_(void);

/* Symbol: _Z16saveToRegFmtFilePKcPhj */
/* Demangled: saveToRegFmtFile(char const*, unsigned char*, unsigned int) */
int _Z16saveToRegFmtFilePKcPhj(void);

/* Symbol: _Z14saveToTextFilePKcPhj */
/* Demangled: saveToTextFile(char const*, unsigned char*, unsigned int) */
int _Z14saveToTextFilePKcPhj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13dumpP2PQTableEPKc */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::dumpP2PQTable(char const*) */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13dumpP2PQTableEPKc(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2ConfigInfo5DummyE */
/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::Dummy */
extern void* _ZN5NSCam7Feature6P2Util12P2ConfigInfo5DummyE;

/* Symbol: _ZN5NSCam7Feature6P2Util9P2InfoObjC2ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::P2InfoObj(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util9P2InfoObjC2ERKNS0_4ILogE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE */
/* Demangled: NSCam::Feature::P2Util::makeQParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
int _ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11printFmInfoERKNS0_4ILogEjPNS_8NSIoPipe6FMInfoE */
/* Demangled: NSCam::Feature::P2Util::printFmInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::FMInfo*) */
int _ZN5NSCam7Feature6P2Util11printFmInfoERKNS0_4ILogEjPNS_8NSIoPipe6FMInfoE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6tryGetIhEEiRKNS_9IMetadataEjRT_ */
/* Demangled: int NSCam::Feature::P2Util::tryGet<unsigned char>(NSCam::IMetadata const&, unsigned int, unsigned char&) */
int _ZN5NSCam7Feature6P2Util6tryGetIhEEiRKNS_9IMetadataEjRT_(void);

/* Symbol: _ZN5NSCam7Feature19SecureBufferControlD2Ev */
/* Demangled: NSCam::Feature::SecureBufferControl::~SecureBufferControl() */
int _ZN5NSCam7Feature19SecureBufferControlD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::deque(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, unsigned int, long long) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::PixelIDMapping(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FrameUnit> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::IsDMAPortSupport(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj(void);

/* Symbol: _ZN5NSCam16ImageBufferUtils17removeBufferAliasEPNS_12IImageBufferES2_ */
/* Demangled: NSCam::ImageBufferUtils::removeBufferAlias(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN5NSCam16ImageBufferUtils17removeBufferAliasEPNS_12IImageBufferES2_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::queryDIPInfo(std::__1::map<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, std::__1::allocator<std::__1::pair<NSCam::NSIoPipe::EDIPInfoEnum const, unsigned int> > >&) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getSensorInfo() const */
int _ZNK5NSCam7Feature6P2Util6P2Pack13getSensorInfoEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorData>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorDataEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::destroyInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::checkVssStatus() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: P2NormalStream_DbgLogEnable_VERBOSE */
/* Demangled: P2NormalStream_DbgLogEnable_VERBOSE */
extern void* P2NormalStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
int _ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void);

/* Symbol: DipUtility_DbgLogEnable_ERROR */
/* Demangled: DipUtility_DbgLogEnable_ERROR */
extern void* DipUtility_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam7Feature4ILogD1Ev */
/* Demangled: NSCam::Feature::ILog::~ILog() */
int _ZN5NSCam7Feature4ILogD1Ev(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportHFGEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportHFG() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp10supportHFGEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Info13getConfigInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2Info::getConfigInfo() const */
int _ZNK5NSCam7Feature6P2Util6P2Info13getConfigInfoEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE(void);

/* Symbol: _ZN5NSCam7Feature4ILogC2Ev */
/* Demangled: NSCam::Feature::ILog::ILog() */
int _ZN5NSCam7Feature4ILogC2Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2PackC1ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE */
/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::ILog const&, android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, android::sp<NSCam::Feature::P2Util::P2DataObj> const&) */
int _ZN5NSCam7Feature6P2Util6P2PackC1ERKNS0_4ILogERKN7android2spINS1_9P2InfoObjEEERKNS7_INS1_9P2DataObjEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfierD1Ev */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::~P2IOClassfier() */
int _ZN5NSCam7Feature6P2Util13P2IOClassfierD1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOE */
/* Demangled: NSCam::Feature::P2Util::toOutput(NSCam::Feature::P2Util::P2IO const&) */
int _ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
int _ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void);

/* Symbol: _ZTVN5NSCam7Feature13DefaultLoggerE */
/* Demangled: vtable for NSCam::Feature::DefaultLogger */
extern void* _ZTVN5NSCam7Feature13DefaultLoggerE;

/* Symbol: _ZN5NSCam7Feature6P2Util16printQParamsInfoERKNS0_4ILogEjPNS_8NSIoPipe7PQParamE */
/* Demangled: NSCam::Feature::P2Util::printQParamsInfo(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::PQParam*) */
int _ZN5NSCam7Feature6P2Util16printQParamsInfoERKNS0_4ILogEjPNS_8NSIoPipe7PQParamE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getPostProcPipeInstance(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj(void);

/* Symbol: DipUtility_DbgLogEnable_WARN */
/* Demangled: DipUtility_DbgLogEnable_WARN */
extern void* DipUtility_DbgLogEnable_WARN;

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger14getLogSensorIDEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogSensorID() const */
int _ZNK5NSCam7Feature13DefaultLogger14getLogSensorIDEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorInfoC2ERKNS0_4ILogERKj */
/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo(NSCam::Feature::ILog const&, unsigned int const&) */
int _ZN5NSCam7Feature6P2Util12P2SensorInfoC2ERKNS0_4ILogERKj(void);

/* Symbol: _ZTVN5NSCam7Feature4ILogE */
/* Demangled: vtable for NSCam::Feature::ILog */
extern void* _ZTVN5NSCam7Feature4ILogE;

/* Symbol: _ZTV12CustomPQBase */
/* Demangled: vtable for CustomPQBase */
extern void* _ZTV12CustomPQBase;

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorInfoC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo() */
int _ZN5NSCam7Feature6P2Util12P2SensorInfoC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util15findInputBufferERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDE */
/* Demangled: NSCam::Feature::P2Util::findInputBuffer(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::PortID const&) */
int _ZN5NSCam7Feature6P2Util15findInputBufferERKNS_8NSIoPipe11FrameParamsERKNS2_6PortIDE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN5NSCam7Feature6P2Util15updateExtraMetaERKNS1_6P2PackERNS_9IMetadataE */
/* Demangled: NSCam::Feature::P2Util::updateExtraMeta(NSCam::Feature::P2Util::P2Pack const&, NSCam::IMetadata&) */
int _ZN5NSCam7Feature6P2Util15updateExtraMetaERKNS1_6P2PackERNS_9IMetadataE(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2IOClassfier13nonRotateSizeEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::nonRotateSize() const */
int _ZNK5NSCam7Feature6P2Util13P2IOClassfier13nonRotateSizeEv(void);

/* Symbol: _ZN5NSCam7Feature17makeRequestLoggerEPKcjjjjjj */
/* Demangled: NSCam::Feature::makeRequestLogger(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam7Feature17makeRequestLoggerEPKcjjjjjj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<0u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2DataC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data() */
int _ZN5NSCam7Feature6P2Util6P2DataC2Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util15push_srz4_LCENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS1_6P2PackEiRKNS_5MSizeESC_ */
/* Demangled: NSCam::Feature::P2Util::push_srz4_LCENR(NSCam::NSIoPipe::FrameParams&, _SRZ_SIZE_INFO_*, NSCam::Feature::P2Util::P2Pack const&, int, NSCam::MSize const&, NSCam::MSize const&) */
int _ZN5NSCam7Feature6P2Util15push_srz4_LCENRERNS_8NSIoPipe11FrameParamsEP15_SRZ_SIZE_INFO_RKNS1_6P2PackEiRKNS_5MSizeESC_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util16releaseRegBufferERPv */
/* Demangled: NSCam::Feature::P2Util::releaseRegBuffer(void*&) */
int _ZN5NSCam7Feature6P2Util16releaseRegBufferERPv(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE7camProp */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::camProp */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE7camProp;

/* Symbol: _ZN5NSCam7Feature19SecureBufferControl17allocSecureBufferEj */
/* Demangled: NSCam::Feature::SecureBufferControl::allocSecureBuffer(unsigned int) */
int _ZN5NSCam7Feature19SecureBufferControl17allocSecureBufferEj(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN5NSCam7Feature13DefaultLoggerD2Ev */
/* Demangled: NSCam::Feature::DefaultLogger::~DefaultLogger() */
int _ZN5NSCam7Feature13DefaultLoggerD2Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOEj */
/* Demangled: NSCam::Feature::P2Util::toOutput(NSCam::Feature::P2Util::P2IO const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util8toOutputERKNS1_4P2IOEj(void);

/* Symbol: _ZN5NSCam20FeatureProfileHelper19getEngStreamingProfERhRKNS_12ProfileParamE */
/* Demangled: NSCam::FeatureProfileHelper::getEngStreamingProf(unsigned char&, NSCam::ProfileParam const&) */
int _ZN5NSCam20FeatureProfileHelper19getEngStreamingProfERhRKNS_12ProfileParamE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_ */
/* Demangled: void std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::__emplace_back_slow_path<NSCam::Feature::P2Util::P2IO>(NSCam::Feature::P2Util::P2IO&&) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doEnque(NSCam::NSIoPipe::NSPostProc::FramePackage&) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mTotalCmdNumE;

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2ConfigInfoC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2ConfigInfo::P2ConfigInfo() */
int _ZN5NSCam7Feature6P2Util12P2ConfigInfoC2Ev(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN5NSCam7Feature15makeFrameLoggerEPKcjjjjj */
/* Demangled: NSCam::Feature::makeFrameLogger(char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam7Feature15makeFrameLoggerEPKcjjjjj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ExtraParamE */
/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::ExtraParam const&) */
int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ExtraParamE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6trySetIiEEiRNS_9IMetadataEjRKT_ */
/* Demangled: int NSCam::Feature::P2Util::trySet<int>(NSCam::IMetadata&, unsigned int, int const&) */
int _ZN5NSCam7Feature6P2Util6trySetIiEEiRNS_9IMetadataEjRKT_(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2IOClassfier9totalSizeEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::totalSize() const */
int _ZNK5NSCam7Feature6P2Util13P2IOClassfier9totalSizeEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mWPESemEQDoneE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mWPESemEQDone */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mWPESemEQDoneE;

/* Symbol: _ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
int _ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp14initTuningPortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initTuningPort() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp14initTuningPortEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(char const*, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, unsigned int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12push_PQParamERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2ObjPtrE */
/* Demangled: NSCam::Feature::P2Util::push_PQParam(NSCam::NSIoPipe::FrameParams&, NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::P2Util::P2ObjPtr const&) */
int _ZN5NSCam7Feature6P2Util12push_PQParamERNS_8NSIoPipe11FrameParamsERKNS1_6P2PackERKNS1_8P2ObjPtrE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfier9popRotateEv */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::popRotate() */
int _ZN5NSCam7Feature6P2Util13P2IOClassfier9popRotateEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setJpegParam(NSCam::NSIoPipe::NSPostProc::EJpgCmd, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii(void);

/* Symbol: _ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
int _ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::MdpStartInfo, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::MdpStartInfo> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_iWpeEnqueReqE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_iWpeEnqueReq */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_iWpeEnqueReqE;

/* Symbol: _ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsERNS2_11FrameParamsERNSt3__16vectorINS1_4P2IOENS7_9allocatorIS9_EEEERKNS1_9MDPObjPtrE */
/* Demangled: NSCam::Feature::P2Util::prepareMDPFrameParam(NSCam::NSIoPipe::QParams&, NSCam::NSIoPipe::FrameParams&, std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >&, NSCam::Feature::P2Util::MDPObjPtr const&) */
int _ZN5NSCam7Feature6P2Util20prepareMDPFrameParamERNS_8NSIoPipe7QParamsERNS2_11FrameParamsERNSt3__16vectorINS1_4P2IOENS7_9allocatorIS9_EEEERKNS1_9MDPObjPtrE(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_DEBUG */
/* Demangled: P2PipeWrapper_DbgLogEnable_DEBUG */
extern void* P2PipeWrapper_DbgLogEnable_DEBUG;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: P2NormalStream_DbgLogEnable_ERROR */
/* Demangled: P2NormalStream_DbgLogEnable_ERROR */
extern void* P2NormalStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE(void);

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEE5sLockE */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::sLock */
extern void* _ZN7android9SingletonIN5NSCam12BufAllocUtilEE5sLockE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<0u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj0EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<2u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13supportCZPathEj10P2_PQ_PATH */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportCZPath(unsigned int, P2_PQ_PATH) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13supportCZPathEj10P2_PQ_PATH(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12toMCrpRsInfoERKNS1_4P2IOE */
/* Demangled: NSCam::Feature::P2Util::toMCrpRsInfo(NSCam::Feature::P2Util::P2IO const&) */
int _ZN5NSCam7Feature6P2Util12toMCrpRsInfoERKNS1_4P2IOE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQDoneE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQDone */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQDoneE;

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<6u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj6EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2PackC1ERKS2_RKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2PackC1ERKS2_RKNS0_4ILogEj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE */
/* Demangled: NSCam::Feature::P2Util::push_in(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::Feature::P2Util::P2IO const&) */
int _ZN5NSCam7Feature6P2Util7push_inERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
int _ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void);

/* Symbol: _ZN5NSCam16ImageBufferUtils13deallocBufferEPNS_12IImageBufferE */
/* Demangled: NSCam::ImageBufferUtils::deallocBuffer(NSCam::IImageBuffer*) */
int _ZN5NSCam16ImageBufferUtils13deallocBufferEPNS_12IImageBufferE(void);

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<8u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE */
/* Demangled: NSCam::Feature::P2Util::makeQParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
int _ZN5NSCam7Feature6P2Util11makeQParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfierC1ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::P2IOClassfier(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> > const&) */
int _ZN5NSCam7Feature6P2Util13P2IOClassfierC1ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::eraseNotify(NSCam::NSIoPipe::NSWpe::EWPEBufferListTag, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv(void);

/* Symbol: WpeStream_DbgLogEnable_DEBUG */
/* Demangled: WpeStream_DbgLogEnable_DEBUG */
extern void* WpeStream_DbgLogEnable_DEBUG;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16queryLowIsoNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::queryLowIsoNVRam(int, unsigned char, NvramFeatureID, NSCam::Feature::P2Util::P2PlatInfo::NVRamData&) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16queryLowIsoNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11P2FrameDataC1ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util11P2FrameDataC1ERKNS0_4ILogE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11P2FrameDataC2ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util11P2FrameDataC2ERKNS0_4ILogE(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorDataC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2SensorData::P2SensorData() */
int _ZN5NSCam7Feature6P2Util12P2SensorDataC2Ev(void);

/* Symbol: _ZTTN5NSCam7Feature6P2Util9P2InfoObjE */
/* Demangled: VTT for NSCam::Feature::P2Util::P2InfoObj */
extern void* _ZTTN5NSCam7Feature6P2Util9P2InfoObjE;

/* Symbol: _ZN5NSCam7Feature6P2Util12toCapabilityEj */
/* Demangled: NSCam::Feature::P2Util::toCapability(unsigned int) */
int _ZN5NSCam7Feature6P2Util12toCapabilityEj(void);

/* Symbol: WpeThread_DbgLogEnable_INFO */
/* Demangled: WpeThread_DbgLogEnable_INFO */
extern void* WpeThread_DbgLogEnable_INFO;

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC1Ev */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::Singleton() */
int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEEC1Ev(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: DipUtility_DbgLogEnable_ASSERT */
/* Demangled: DipUtility_DbgLogEnable_ASSERT */
extern void* DipUtility_DbgLogEnable_ASSERT;

/* Symbol: _ZN7android2spIKN5NSCam7Feature6P2Util9P2DataObjEEaSEOS6_ */
/* Demangled: android::sp<NSCam::Feature::P2Util::P2DataObj const>::operator=(android::sp<NSCam::Feature::P2Util::P2DataObj const>&&) */
int _ZN7android2spIKN5NSCam7Feature6P2Util9P2DataObjEEaSEOS6_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE15__emplace_multiIJRKNS_4pairIKjS5_EEEEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__emplace_multi<std::__1::pair<unsigned int const, NSCam::Feature::P2Util::P2SensorInfo> const&>(std::__1::pair<unsigned int const, NSCam::Feature::P2Util::P2SensorInfo> const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE15__emplace_multiIJRKNS_4pairIKjS5_EEEEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEDpOT_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE */
/* Demangled: NSCam::Feature::P2Util::makeFrameParams(NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
int _ZN5NSCam7Feature6P2Util15makeFrameParamsERKNS1_6P2PackENS_8NSIoPipe10NSPostProc16ENormalStreamTagERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp;

/* Symbol: _ZN5NSCam7Feature19SecureBufferControlD0Ev */
/* Demangled: NSCam::Feature::SecureBufferControl::~SecureBufferControl() */
int _ZN5NSCam7Feature19SecureBufferControlD0Ev(void);

/* Symbol: WpeThread_DbgLogEnable_ASSERT */
/* Demangled: WpeThread_DbgLogEnable_ASSERT */
extern void* WpeThread_DbgLogEnable_ASSERT;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2DataObjC1ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::P2DataObj(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util9P2DataObjC1ERKNS0_4ILogE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2DataObjC2ERKNS0_4ILogE */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::P2DataObj(NSCam::Feature::ILog const&) */
int _ZN5NSCam7Feature6P2Util9P2DataObjC2ERKNS0_4ILogE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEEEvT_SL_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE14__assign_multiINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEEEvT_SL_(void);

/* Symbol: _ZN5NSCam7Feature19SecureBufferControlC1Ev */
/* Demangled: NSCam::Feature::SecureBufferControl::SecureBufferControl() */
int _ZN5NSCam7Feature19SecureBufferControlC1Ev(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<2u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj2EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<4u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj4EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogERKNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, NSCam::NSIoPipe::QParams const&) */
int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogERKNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6trySetINS_5MRectEEEiRNS_9IMetadataEjRKT_ */
/* Demangled: int NSCam::Feature::P2Util::trySet<NSCam::MRect>(NSCam::IMetadata&, unsigned int, NSCam::MRect const&) */
int _ZN5NSCam7Feature6P2Util6trySetINS_5MRectEEEiRNS_9IMetadataEjRKT_(void);

/* Symbol: _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv */
/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::clear() */
int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_INFO */
/* Demangled: P2PipeWrapper_DbgLogEnable_INFO */
extern void* P2PipeWrapper_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTv0_n12_N5NSCam7Feature13DefaultLoggerD1Ev */
/* Demangled: virtual thunk to NSCam::Feature::DefaultLogger::~DefaultLogger() */
int _ZTv0_n12_N5NSCam7Feature13DefaultLoggerD1Ev(void);

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<8u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj8EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE5sLockE */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::sLock */
extern void* _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE5sLockE;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16getImgoAlignMaskEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getImgoAlignMask() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16getImgoAlignMaskEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfierC2ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::P2IOClassfier(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> > const&) */
int _ZN5NSCam7Feature6P2Util13P2IOClassfierC2ERKNSt3__16vectorINS1_4P2IOENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doDeque(int, NSCam::NSIoPipe::NSPostProc::FrameUnit&, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE15__emplace_multiIJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__emplace_multi<std::__1::pair<unsigned int const, NSCam::MSize> const&>(std::__1::pair<unsigned int const, NSCam::MSize> const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE15__emplace_multiIJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEDpOT_(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void);

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEE11getInstanceEv */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::getInstance() */
int _ZN7android9SingletonIN5NSCam12BufAllocUtilEE11getInstanceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util19updateExpectEndTimeERNS_8NSIoPipe7QParamsEjj */
/* Demangled: NSCam::Feature::P2Util::updateExpectEndTime(NSCam::NSIoPipe::QParams&, unsigned int, unsigned int) */
int _ZN5NSCam7Feature6P2Util19updateExpectEndTimeERNS_8NSIoPipe7QParamsEjj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::needSecureBuffer(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj(void);

/* Symbol: _ZTCN5NSCam8NSIoPipe10NSPostProc12NormalStreamE0_NS1_13INormalStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSPostProc::INormalStream-in-NSCam::NSIoPipe::NSPostProc::NormalStream */
extern void* _ZTCN5NSCam8NSIoPipe10NSPostProc12NormalStreamE0_NS1_13INormalStreamE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::push_back(unsigned int const&) */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE9push_backERKj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<7u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj7EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2DataObjD1Ev */
/* Demangled: NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
int _ZN5NSCam7Feature6P2Util9P2DataObjD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream7mThreadE;

/* Symbol: _ZN5NSCam7Feature6P2Util11P2FrameDataC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2FrameData::P2FrameData() */
int _ZN5NSCam7Feature6P2Util11P2FrameDataC2Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9P2InfoObjD2Ev */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
int _ZN5NSCam7Feature6P2Util9P2InfoObjD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj(void);

/* Symbol: WpeThread_DbgLogEnable_DEBUG */
/* Demangled: WpeThread_DbgLogEnable_DEBUG */
extern void* WpeThread_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam16ImageBufferUtils11allocBufferERN7android2spINS_12IImageBufferEEEjjjij */
/* Demangled: NSCam::ImageBufferUtils::allocBuffer(android::sp<NSCam::IImageBuffer>&, unsigned int, unsigned int, unsigned int, int, unsigned int) */
int _ZN5NSCam16ImageBufferUtils11allocBufferERN7android2spINS_12IImageBufferEEEjjjij(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__swap_out_circular_buffer(std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>&) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN5NSCam7Feature13DefaultLoggerD0Ev */
/* Demangled: NSCam::Feature::DefaultLogger::~DefaultLogger() */
int _ZN5NSCam7Feature13DefaultLoggerD0Ev(void);

/* Symbol: _ZTTN5NSCam7Feature13DefaultLoggerE */
/* Demangled: VTT for NSCam::Feature::DefaultLogger */
extern void* _ZTTN5NSCam7Feature13DefaultLoggerE;

/* Symbol: _ZN5NSCam7Feature6P2Util6P2DataC2ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Data::P2Data(android::sp<NSCam::Feature::P2Util::P2DataObj> const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2DataC2ERKN7android2spINS1_9P2DataObjEEERKNS0_4ILogEj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp19initActiveArrayRectEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initActiveArrayRect() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp19initActiveArrayRectEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createInstance(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_ERROR */
/* Demangled: p2HP_DQNode_DbgLogEnable_ERROR */
extern void* p2HP_DQNode_DbgLogEnable_ERROR;

/* Symbol: WpeStream_DbgLogEnable_VERBOSE */
/* Demangled: WpeStream_DbgLogEnable_VERBOSE */
extern void* WpeStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13queryAllNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::queryAllNVRam(int, unsigned char, NvramFeatureID, NSCam::Feature::P2Util::P2PlatInfo::NVRamData&) const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp13queryAllNVRamEih14NvramFeatureIDRNS1_10P2PlatInfo9NVRamDataE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE */
/* Demangled: NSCam::Feature::P2Util::push_out(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::Feature::P2Util::P2IO const&) */
int _ZN5NSCam7Feature6P2Util8push_outERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSPostProc::FramePackage, void*>) */
int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp15getYnrFaceiPortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getYnrFaceiPort() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp15getYnrFaceiPortEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6OutputE */
/* Demangled: NSCam::Feature::P2Util::toName(NSCam::NSIoPipe::Output const&) */
int _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe6OutputE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorData5DummyE */
/* Demangled: NSCam::Feature::P2Util::P2SensorData::Dummy */
extern void* _ZN5NSCam7Feature6P2Util12P2SensorData5DummyE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IMetadataProvider>::sp(NSCam::IMetadataProvider*) */
int _ZN7android2spIN5NSCam17IMetadataProviderEEC2EPS2_(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, void*>) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImpC2Ej */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::P2PlatInfoImp(unsigned int) */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpC2Ej(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportClearZoomEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportClearZoom() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportClearZoomEv(void);

/* Symbol: _ZNK5NSCam7Feature19SecureBufferControl9toSecEnumENS_7SecTypeE */
/* Demangled: NSCam::Feature::SecureBufferControl::toSecEnum(NSCam::SecType) const */
int _ZNK5NSCam7Feature19SecureBufferControl9toSecEnumENS_7SecTypeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::sendCommand(int, int, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mDumpCountE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mDumpCount */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mDumpCountE;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getBpc2PortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::getBpc2Port() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp11getBpc2PortEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util9P2InfoObj5cloneEv */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::clone() const */
int _ZNK5NSCam7Feature6P2Util9P2InfoObj5cloneEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS_6MRectFERKNS_5MSizeEj */
/* Demangled: NSCam::Feature::P2Util::push_crop(NSCam::NSIoPipe::FrameParams&, unsigned int, NSCam::MRectF const&, NSCam::MSize const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util9push_cropERNS_8NSIoPipe11FrameParamsEjRKNS_6MRectFERKNS_5MSizeEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger13getLogFrameIDEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogFrameID() const */
int _ZNK5NSCam7Feature13DefaultLogger13getLogFrameIDEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD1Ev */
/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2DataObj::~P2DataObj() */
int _ZTv0_n12_N5NSCam7Feature6P2Util9P2DataObjD1Ev(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe10NSPostProc12NormalStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern void* _ZTVN5NSCam8NSIoPipe10NSPostProc12NormalStreamE;

/* Symbol: _Z11DrvMakePathPKcj */
/* Demangled: DrvMakePath(char const*, unsigned int) */
int _Z11DrvMakePathPKcj(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::Feature::P2Util::P2SensorInfo> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam7Feature6P2Util12P2SensorInfoEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util9pushToMDPERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE */
/* Demangled: NSCam::Feature::P2Util::pushToMDP(NSCam::NSIoPipe::FrameParams&, NSCam::NSIoPipe::PortID const&, NSCam::Feature::P2Util::P2IO const&) */
int _ZN5NSCam7Feature6P2Util9pushToMDPERNS_8NSIoPipe11FrameParamsERKNS2_6PortIDERKNS1_4P2IOE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::makeRequestLogger(NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature17makeRequestLoggerERKNS0_4ILogEj(void);

/* Symbol: _ZN7android2spIN5NSCam7Feature7ILogObjEEaSERKS4_ */
/* Demangled: android::sp<NSCam::Feature::ILogObj>::operator=(android::sp<NSCam::Feature::ILogObj> const&) */
int _ZN7android2spIN5NSCam7Feature7ILogObjEEaSERKS4_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSPostProc::FramePackage const&>(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackEjRKNS1_9MDPObjPtrE */
/* Demangled: NSCam::Feature::P2Util::makeDpPqParam(DpPqParam*, NSCam::Feature::P2Util::P2Pack const&, unsigned int, NSCam::Feature::P2Util::MDPObjPtr const&) */
int _ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackEjRKNS1_9MDPObjPtrE(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE9threshold */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::threshold */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9threshold;

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<3u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2PackC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack() */
int _ZN5NSCam7Feature6P2Util6P2PackC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DipModuleCfg>&) */
int _ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void);

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEED2Ev */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::~Singleton() */
int _ZN7android9SingletonIN5NSCam12BufAllocUtilEED2Ev(void);

/* Symbol: _ZN5NSCam7Feature4ILogC2ERKN7android2spINS0_7ILogObjEEE */
/* Demangled: NSCam::Feature::ILog::ILog(android::sp<NSCam::Feature::ILogObj> const&) */
int _ZN5NSCam7Feature4ILogC2ERKN7android2spINS0_7ILogObjEEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6tryGetINS_5MRectEEEiRKNS_9IMetadataEjRT_ */
/* Demangled: int NSCam::Feature::P2Util::tryGet<NSCam::MRect>(NSCam::IMetadata const&, unsigned int, NSCam::MRect&) */
int _ZN5NSCam7Feature6P2Util6tryGetINS_5MRectEEEiRKNS_9IMetadataEjRT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::releaseLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD1Ev */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::~P2PlatInfoImp() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImpD1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11P2FrameData5DummyE */
/* Demangled: NSCam::Feature::P2Util::P2FrameData::Dummy */
extern void* _ZN5NSCam7Feature6P2Util11P2FrameData5DummyE;

/* Symbol: nsTimeoutToWait */
/* Demangled: nsTimeoutToWait */
extern void* nsTimeoutToWait;

/* Symbol: p2HP_DQNode_DbgLogEnable_INFO */
/* Demangled: p2HP_DQNode_DbgLogEnable_INFO */
extern void* p2HP_DQNode_DbgLogEnable_INFO;

/* Symbol: _ZZN16NvramQueryHelper9getHelperEvE8sDefault */
/* Demangled: NvramQueryHelper::getHelper()::sDefault */
extern void* _ZZN16NvramQueryHelper9getHelperEvE8sDefault;

/* Symbol: _ZNK5NSCam7Feature6P2Util9P2InfoObj13getConfigInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::getConfigInfo() const */
int _ZNK5NSCam7Feature6P2Util9P2InfoObj13getConfigInfoEv(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSWpe9WpeStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSWpe::WpeStream */
extern void* _ZTVN5NSCam8NSIoPipe5NSWpe9WpeStreamE;

/* Symbol: _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13updateQParamsERNS_8NSIoPipe7QParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE */
/* Demangled: NSCam::Feature::P2Util::updateQParams(NSCam::NSIoPipe::QParams&, NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::P2Util::P2IOPack const&, NSCam::Feature::P2Util::P2ObjPtr const&, NS3Av3::TuningParam const&) */
int _ZN5NSCam7Feature6P2Util13updateQParamsERNS_8NSIoPipe7QParamsERKNS1_6P2PackERKNS1_8P2IOPackERKNS1_8P2ObjPtrERKN6NS3Av311TuningParamE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util16updateCropRegionERNS_9IMetadataERKNS_5MRectE */
/* Demangled: NSCam::Feature::P2Util::updateCropRegion(NSCam::IMetadata&, NSCam::MRect const&) */
int _ZN5NSCam7Feature6P2Util16updateCropRegionERNS_9IMetadataERKNS_5MRectE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::enqueJudgement() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv(void);

/* Symbol: WpeStream_DbgLogEnable_WARN */
/* Demangled: WpeStream_DbgLogEnable_WARN */
extern void* WpeStream_DbgLogEnable_WARN;

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<1u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj1EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<3u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp7isDip50Ev */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::isDip50() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp7isDip50Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::getRegTableSize() */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_(void);

/* Symbol: _ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
int _ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_VERBOSE */
/* Demangled: P2PipeWrapper_DbgLogEnable_VERBOSE */
extern void* P2PipeWrapper_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createThread() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_VERBOSE */
/* Demangled: p2HP_EQNode_DbgLogEnable_VERBOSE */
extern void* p2HP_EQNode_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::checkWPEEnqueuedUserNum() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv(void);

/* Symbol: _ZZN12CustomPQBase7getImplEvE8sDefault */
/* Demangled: CustomPQBase::getImpl()::sDefault */
extern void* _ZZN12CustomPQBase7getImplEvE8sDefault;

/* Symbol: _ZTTN5NSCam8NSIoPipe10NSPostProc12NormalStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern void* _ZTTN5NSCam8NSIoPipe10NSPostProc12NormalStreamE;

/* Symbol: WpeThread_DbgLogEnable_VERBOSE */
/* Demangled: WpeThread_DbgLogEnable_VERBOSE */
extern void* WpeThread_DbgLogEnable_VERBOSE;

/* Symbol: _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: guard variable for NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<9u>()::sPlatInfo */
extern void* _ZGVZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZN5NSCam7Feature6P2Util10P2PlatInfo11getInstanceEj */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo::getInstance(unsigned int) */
int _ZN5NSCam7Feature6P2Util10P2PlatInfo11getInstanceEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::createInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dequeueJudgement() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initP2PQTableEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initP2PQTable() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp13initP2PQTableEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportDefaultPQEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::supportDefaultPQ() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp16supportDefaultPQEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorInfo5DummyE */
/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::Dummy */
extern void* _ZN5NSCam7Feature6P2Util12P2SensorInfo5DummyE;

/* Symbol: _ZN5NSCam7Feature6P2Util6P2PackC2ERKS2_RKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Pack::P2Pack(NSCam::Feature::P2Util::P2Pack const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2PackC2ERKS2_RKNS0_4ILogEj(void);

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::persistProp */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE11persistProp;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11mWpeCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mWpeCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11mWpeCmdLockE;

/* Symbol: _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrFacePortEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::hasYnrFacePort() const */
int _ZNK5NSCam7Feature6P2Util13P2PlatInfoImp14hasYnrFacePortEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _Z10saveToFilePKcPhj */
/* Demangled: saveToFile(char const*, unsigned char*, unsigned int) */
int _Z10saveToFilePKcPhj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createThread() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam20FeatureProfileHelper16getStreamingProfERhRKNS_12ProfileParamE */
/* Demangled: NSCam::FeatureProfileHelper::getStreamingProf(unsigned char&, NSCam::ProfileParam const&) */
int _ZN5NSCam20FeatureProfileHelper16getStreamingProfERhRKNS_12ProfileParamE(void);

/* Symbol: _ZN5NSCam7Feature4ILogD2Ev */
/* Demangled: NSCam::Feature::ILog::~ILog() */
int _ZN5NSCam7Feature4ILogD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackERKNS_8NSIoPipe6OutputE */
/* Demangled: NSCam::Feature::P2Util::makeDpPqParam(DpPqParam*, NSCam::Feature::P2Util::P2Pack const&, NSCam::NSIoPipe::Output const&) */
int _ZN5NSCam7Feature6P2Util13makeDpPqParamEP9DpPqParamRKNS1_6P2PackERKNS_8NSIoPipe6OutputE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6tryGetINS_9IMetadataEEEiRKS3_jRT_ */
/* Demangled: int NSCam::Feature::P2Util::tryGet<NSCam::IMetadata>(NSCam::IMetadata const&, unsigned int, NSCam::IMetadata&) */
int _ZN5NSCam7Feature6P2Util6tryGetINS_9IMetadataEEEiRKS3_jRT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_ERROR */
/* Demangled: p2HP_EQNode_DbgLogEnable_ERROR */
extern void* p2HP_EQNode_DbgLogEnable_ERROR;

/* Symbol: _ZZN5NSCam20FeatureProfileHelper11isDebugOpenEvE9debugDump */
/* Demangled: NSCam::FeatureProfileHelper::isDebugOpen()::debugDump */
extern void* _ZZN5NSCam20FeatureProfileHelper11isDebugOpenEvE9debugDump;

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<9u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj9EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Pack13getConfigInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2Pack::getConfigInfo() const */
int _ZNK5NSCam7Feature6P2Util6P2Pack13getConfigInfoEv(void);

/* Symbol: _ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
int _ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void);

/* Symbol: _ZN7android2spIN5NSCam7Feature7ILogObjEEC2INS2_13DefaultLoggerEEEPT_ */
/* Demangled: android::sp<NSCam::Feature::ILogObj>::sp<NSCam::Feature::DefaultLogger>(NSCam::Feature::DefaultLogger*) */
int _ZN7android2spIN5NSCam7Feature7ILogObjEEC2INS2_13DefaultLoggerEEEPT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util11getCropRectERKNS_6MRectFE */
/* Demangled: NSCam::Feature::P2Util::getCropRect(NSCam::MRectF const&) */
int _ZN5NSCam7Feature6P2Util11getCropRectERKNS_6MRectFE(void);

/* Symbol: _ZTV16NvramQueryHelper */
/* Demangled: vtable for NvramQueryHelper */
extern void* _ZTV16NvramQueryHelper;

/* Symbol: _ZN5NSCam7Feature6P2Util9P2InfoObjD0Ev */
/* Demangled: NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
int _ZN5NSCam7Feature6P2Util9P2InfoObjD0Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe6OutputE */
/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::Output const&) */
int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe6OutputE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util8printSRZERKNS0_4ILogEjjPK15_SRZ_SIZE_INFO_ */
/* Demangled: NSCam::Feature::P2Util::printSRZ(NSCam::Feature::ILog const&, unsigned int, unsigned int, _SRZ_SIZE_INFO_ const*) */
int _ZN5NSCam7Feature6P2Util8printSRZERKNS0_4ILogEjjPK15_SRZ_SIZE_INFO_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util13P2IOClassfierD2Ev */
/* Demangled: NSCam::Feature::P2Util::P2IOClassfier::~P2IOClassfier() */
int _ZN5NSCam7Feature6P2Util13P2IOClassfierD2Ev(void);

/* Symbol: _ZN5NSCam7Feature19SecureBufferControl23registerAndGetSecHandleEPNS_12IImageBufferE */
/* Demangled: NSCam::Feature::SecureBufferControl::registerAndGetSecHandle(NSCam::IImageBuffer*) */
int _ZN5NSCam7Feature19SecureBufferControl23registerAndGetSecHandleEPNS_12IImageBufferE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::tuple<void*, android::sp<NSCam::IImageBuffer> > > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_5tupleIJPvN7android2spIN5NSCam12IImageBufferEEEEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void);

/* Symbol: _Z5getUsv */
/* Demangled: getUs() */
int _Z5getUsv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::eraseNotify(NSCam::NSIoPipe::NSPostProc::EBufferListTag, int, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void);

/* Symbol: _ZN5NSCam7Feature19makeSubSensorLoggerERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::makeSubSensorLogger(NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature19makeSubSensorLoggerERKNS0_4ILogEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::getCmd(NSCam::NSIoPipe::NSPostProc::ECmd&) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15m_WpeStreamInitE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_WpeStreamInit */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15m_WpeStreamInitE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::wpeGlobalListCtrl(WpePackage, unsigned int, unsigned int, int&) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi(void);

/* Symbol: _ZTVN5NSCam7Feature8ILogBaseE */
/* Demangled: vtable for NSCam::Feature::ILogBase */
extern void* _ZTVN5NSCam7Feature8ILogBaseE;

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<3u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj3EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEvE9sPlatInfo */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<5u>()::sPlatInfo */
extern void* _ZZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEvE9sPlatInfo;

/* Symbol: nsTimeoutToWaitEnQ */
/* Demangled: nsTimeoutToWaitEnQ */
extern void* nsTimeoutToWaitEnQ;

/* Symbol: _ZN5NSCam7Feature6P2Util13P2PlatInfoImp10initIdxMgrEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfoImp::initIdxMgr() */
int _ZN5NSCam7Feature6P2Util13P2PlatInfoImp10initIdxMgrEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mSemWpeThreadE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mSemWpeThread */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mSemWpeThreadE;

/* Symbol: _ZN7android9SingletonIN5NSCam12BufAllocUtilEE9sInstanceE */
/* Demangled: android::Singleton<NSCam::BufAllocUtil>::sInstance */
extern void* _ZN7android9SingletonIN5NSCam12BufAllocUtilEE9sInstanceE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12P2SensorInfoC2Ev */
/* Demangled: NSCam::Feature::P2Util::P2SensorInfo::P2SensorInfo() */
int _ZN5NSCam7Feature6P2Util12P2SensorInfoC2Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2InfoC1Ev */
/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info() */
int _ZN5NSCam7Feature6P2Util6P2InfoC1Ev(void);

/* Symbol: _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDEN9NSImageio7NSIspio10EPortIndexE */
/* Demangled: NSCam::Feature::P2Util::is(NSCam::NSIoPipe::PortID const&, NSImageio::NSIspio::EPortIndex) */
int _ZN5NSCam7Feature6P2Util2isERKNS_8NSIoPipe6PortIDEN9NSImageio7NSIspio10EPortIndexE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util15P2AppStreamInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp */
/* Demangled: guard variable for NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern void* _ZGVZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp;

/* Symbol: _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11hasInstanceEv */
/* Demangled: android::Singleton<NSCam::ImageBufferUtils>::hasInstance() */
int _ZN7android9SingletonIN5NSCam16ImageBufferUtilsEE11hasInstanceEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEEE;

/* Symbol: _ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEaSEOS5_ */
/* Demangled: android::sp<NSCam::Feature::P2Util::P2InfoObj>::operator=(android::sp<NSCam::Feature::P2Util::P2InfoObj>&&) */
int _ZN7android2spIN5NSCam7Feature6P2Util9P2InfoObjEEaSEOS5_(void);

/* Symbol: _ZN5NSCam7Feature6P2Util10toP2PQPathEj */
/* Demangled: NSCam::Feature::P2Util::toP2PQPath(unsigned int) */
int _ZN5NSCam7Feature6P2Util10toP2PQPathEj(void);

/* Symbol: _ZTVN5NSCam7Feature19SecureBufferControlE */
/* Demangled: vtable for NSCam::Feature::SecureBufferControl */
extern void* _ZTVN5NSCam7Feature19SecureBufferControlE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev(void);

/* Symbol: _ZNK5NSCam7Feature19SecureBufferControl13getSecureEnumEv */
/* Demangled: NSCam::Feature::SecureBufferControl::getSecureEnum() const */
int _ZNK5NSCam7Feature19SecureBufferControl13getSecureEnumEv(void);

/* Symbol: DipUtility_DbgLogEnable_INFO */
/* Demangled: DipUtility_DbgLogEnable_INFO */
extern void* DipUtility_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setFps(int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper12mWPEUserInfoE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mWPEUserInfo */
extern void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper12mWPEUserInfoE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::updateThreadProperty(NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE(void);

/* Symbol: DipUtility_DbgLogEnable_DEBUG */
/* Demangled: DipUtility_DbgLogEnable_DEBUG */
extern void* DipUtility_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10MCrpRsInfoE */
/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::MCrpRsInfo const&) */
int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10MCrpRsInfoE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev */
/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::~__deque_base() */
int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev(void);

/* Symbol: _ZN5NSCam7Feature13DefaultLoggerC1EPKcS3_jjjjjj */
/* Demangled: NSCam::Feature::DefaultLogger::DefaultLogger(char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam7Feature13DefaultLoggerC1EPKcS3_jjjjjj(void);

/* Symbol: _ZNK5NSCam7Feature13DefaultLogger17getLogMWRequestIDEv */
/* Demangled: NSCam::Feature::DefaultLogger::getLogMWRequestID() const */
int _ZNK5NSCam7Feature13DefaultLogger17getLogMWRequestIDEv(void);

/* Symbol: _ZN5NSCam7Feature13DefaultLoggerC2EPKcS3_jjjjjj */
/* Demangled: NSCam::Feature::DefaultLogger::DefaultLogger(char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam7Feature13DefaultLoggerC2EPKcS3_jjjjjj(void);

/* Symbol: P2NormalStream_DbgLogEnable_ASSERT */
/* Demangled: P2NormalStream_DbgLogEnable_ASSERT */
extern void* P2NormalStream_DbgLogEnable_ASSERT;

/* Symbol: P2NormalStream_DbgLogEnable_WARN */
/* Demangled: P2NormalStream_DbgLogEnable_WARN */
extern void* P2NormalStream_DbgLogEnable_WARN;

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::push_back(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyThread() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe5InputE */
/* Demangled: NSCam::Feature::P2Util::toName(NSCam::NSIoPipe::Input const&) */
int _ZN5NSCam7Feature6P2Util6toNameERKNS_8NSIoPipe5InputE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6trySetIhEEiRNS_9IMetadataEjRKT_ */
/* Demangled: int NSCam::Feature::P2Util::trySet<unsigned char>(NSCam::IMetadata&, unsigned int, unsigned char const&) */
int _ZN5NSCam7Feature6P2Util6trySetIhEEiRNS_9IMetadataEjRKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::queryFrame(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi(void);

/* Symbol: _ZGVZN5NSCam20FeatureProfileHelper11isDebugOpenEvE9debugDump */
/* Demangled: guard variable for NSCam::FeatureProfileHelper::isDebugOpen()::debugDump */
extern void* _ZGVZN5NSCam20FeatureProfileHelper11isDebugOpenEvE9debugDump;

/* Symbol: _ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEj */
/* Demangled: NSCam::Feature::P2Util::P2Info::getSensorInfo(unsigned int) const */
int _ZNK5NSCam7Feature6P2Util6P2Info13getSensorInfoEj(void);

/* Symbol: _ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD0Ev */
/* Demangled: virtual thunk to NSCam::Feature::P2Util::P2InfoObj::~P2InfoObj() */
int _ZTv0_n12_N5NSCam7Feature6P2Util9P2InfoObjD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> >::vector(std::__1::vector<NSCam::Feature::P2Util::P2IO, std::__1::allocator<NSCam::Feature::P2Util::P2IO> > const&) */
int _ZNSt3__16vectorIN5NSCam7Feature6P2Util4P2IOENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_WARN */
/* Demangled: p2HP_EQNode_DbgLogEnable_WARN */
extern void* p2HP_EQNode_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ModuleInfoE */
/* Demangled: NSCam::Feature::P2Util::printQParams(NSCam::Feature::ILog const&, unsigned int, NSCam::NSIoPipe::ModuleInfo const&) */
int _ZN5NSCam7Feature6P2Util12printQParamsERKNS0_4ILogEjRKNS_8NSIoPipe10ModuleInfoE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__emplace_unique_key_args<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>, std::__1::tuple<> >(NSCam::NSIoPipe::EDIPInfoEnum const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2InfoC2ERKS2_RKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(NSCam::Feature::P2Util::P2Info const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2InfoC2ERKS2_RKNS0_4ILogEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_back_capacity() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEv */
/* Demangled: NSCam::Feature::P2Util::P2PlatInfo const* NSCam::Feature::P2Util::getPlatInfo_<5u>() */
int _ZN5NSCam7Feature6P2Util12getPlatInfo_ILj5EEEPKNS1_10P2PlatInfoEv(void);

/* Symbol: _ZN5NSCam7Feature6P2Util6P2InfoC1ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj */
/* Demangled: NSCam::Feature::P2Util::P2Info::P2Info(android::sp<NSCam::Feature::P2Util::P2InfoObj> const&, NSCam::Feature::ILog const&, unsigned int) */
int _ZN5NSCam7Feature6P2Util6P2InfoC1ERKN7android2spINS1_9P2InfoObjEEERKNS0_4ILogEj(void);

/* Symbol: _ZZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp */
/* Demangled: NSCam::CamSysTrace::needP2Trace(int)::debugProp */
extern void* _ZZN5NSCam11CamSysTrace11needP2TraceEiE9debugProp;

/* Symbol: p2HP_DQNode_DbgLogEnable_VERBOSE */
/* Demangled: p2HP_DQNode_DbgLogEnable_VERBOSE */
extern void* p2HP_DQNode_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getUs() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_ */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::swap(std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >&) */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_FEATURE_UTILS_H */
