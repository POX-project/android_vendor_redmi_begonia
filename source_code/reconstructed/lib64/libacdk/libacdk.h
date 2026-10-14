/*
 * Reverse-Engineered ABI Specification for: libacdk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libacdk.so
 */

#ifndef BEGONIA_RE_LIBACDK_H
#define BEGONIA_RE_LIBACDK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure14acdkMhalUninitEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalUninit() */
int _ZN10NSAcdkMhal12AcdkMhalPure14acdkMhalUninitEv(void);

/* Symbol: _ZN6NSACDK8AcdkMain13destroyMemBufEjP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkMain::destroyMemBuf(unsigned int, AMEM_BUF_INFO*) */
int _ZN6NSACDK8AcdkMain13destroyMemBufEjP13AMEM_BUF_INFO(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void);

/* Symbol: _ZN6NSACDK8AcdkMain9setSrcDevEi */
/* Demangled: NSACDK::AcdkMain::setSrcDev(int) */
int _ZN6NSACDK8AcdkMain9setSrcDevEi(void);

/* Symbol: _ZNK7android6VectorI14ImageBufferMapE8do_splatEPvPKvm */
/* Demangled: android::Vector<ImageBufferMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI14ImageBufferMapE8do_splatEPvPKvm(void);

/* Symbol: mvImgBufMap */
/* Demangled: mvImgBufMap */
extern void* mvImgBufMap;

/* Symbol: _ZN6NSACDK11surfaceView11getNumLayerERj */
/* Demangled: NSACDK::surfaceView::getNumLayer(unsigned int&) */
int _ZN6NSACDK11surfaceView11getNumLayerERj(void);

/* Symbol: _ZN6NSACDK11surfaceView14registerBufferEjj */
/* Demangled: NSACDK::surfaceView::registerBuffer(unsigned int, unsigned int) */
int _ZN6NSACDK11surfaceView14registerBufferEjj(void);

/* Symbol: _ZN6NSACDK11surfaceView4initEv */
/* Demangled: NSACDK::surfaceView::init() */
int _ZN6NSACDK11surfaceView4initEv(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPureC2Ev */
/* Demangled: NSAcdkMhal::AcdkMhalPure::AcdkMhalPure() */
int _ZN10NSAcdkMhal12AcdkMhalPureC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void);

/* Symbol: _ZN6NSACDK11surfaceView10resetLayerEj */
/* Demangled: NSACDK::surfaceView::resetLayer(unsigned int) */
int _ZN6NSACDK11surfaceView10resetLayerEj(void);

/* Symbol: _ZN6NSACDK8AcdkMain11sendcommandEjPhjS1_jPj */
/* Demangled: NSACDK::AcdkMain::sendcommand(unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */
int _ZN6NSACDK8AcdkMain11sendcommandEjPhjS1_jPj(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure17acdkMhalGetAFInfoEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalGetAFInfo() */
int _ZN10NSAcdkMhal12AcdkMhalPure17acdkMhalGetAFInfoEv(void);

/* Symbol: MDK_Open */
/* Demangled: MDK_Open */
int MDK_Open(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalBase14createInstanceEj */
/* Demangled: NSAcdkMhal::AcdkMhalBase::createInstance(unsigned int) */
int _ZN10NSAcdkMhal12AcdkMhalBase14createInstanceEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void);

/* Symbol: _ZN6NSACDK11surfaceViewD0Ev */
/* Demangled: NSACDK::surfaceView::~surfaceView() */
int _ZN6NSACDK11surfaceViewD0Ev(void);

/* Symbol: _ZN6NSACDK8AcdkMain11handleCapCBEPv */
/* Demangled: NSACDK::AcdkMain::handleCapCB(void*) */
int _ZN6NSACDK8AcdkMain11handleCapCBEPv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng17acdkMhalGetAFInfoEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetAFInfo() */
int _ZN10NSAcdkMhal11AcdkMhalEng17acdkMhalGetAFInfoEv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewProcEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreviewProc() */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewProcEv(void);

/* Symbol: _ZN6NSACDK8AcdkMainC2ENS_17_ACDK_BYPASS_FLAGE */
/* Demangled: NSACDK::AcdkMain::AcdkMain(NSACDK::_ACDK_BYPASS_FLAG) */
int _ZN6NSACDK8AcdkMainC2ENS_17_ACDK_BYPASS_FLAGE(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng18acdkMhalPreCaptureEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreCapture() */
int _ZN10NSAcdkMhal11AcdkMhalEng18acdkMhalPreCaptureEv(void);

/* Symbol: _ZNK7android6VectorI14ImageBufferMapE10do_destroyEPvm */
/* Demangled: android::Vector<ImageBufferMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorI14ImageBufferMapE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void);

/* Symbol: _ZN6NSACDK11surfaceViewC2Ev */
/* Demangled: NSACDK::surfaceView::surfaceView() */
int _ZN6NSACDK11surfaceViewC2Ev(void);

/* Symbol: _ZN6NSACDK11AcdkUtility12unmapPhyAddrEP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkUtility::unmapPhyAddr(AMEM_BUF_INFO*) */
int _ZN6NSACDK11AcdkUtility12unmapPhyAddrEP13AMEM_BUF_INFO(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureProcEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCaptureProc() */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureProcEv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalReadyForCapEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalReadyForCap() */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalReadyForCapEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::portInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::portInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::portInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::portInfo const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure18acdkMhal3ASetParamEih */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhal3ASetParam(int, unsigned char) */
int _ZN10NSAcdkMhal12AcdkMhalPure18acdkMhal3ASetParamEih(void);

/* Symbol: mDebugEnable */
/* Demangled: mDebugEnable */
extern void* mDebugEnable;

/* Symbol: _ZN6NSACDK11AcdkUtility12rawImgUnpackE13AMEM_BUF_INFOS1_jjjj */
/* Demangled: NSACDK::AcdkUtility::rawImgUnpack(AMEM_BUF_INFO, AMEM_BUF_INFO, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6NSACDK11AcdkUtility12rawImgUnpackE13AMEM_BUF_INFOS1_jjjj(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng14acdkMhalUninitEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalUninit() */
int _ZN10NSAcdkMhal11AcdkMhalEng14acdkMhalUninitEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: MDK_DeInit */
/* Demangled: MDK_DeInit */
int MDK_DeInit(void);

/* Symbol: MDK_Init */
/* Demangled: MDK_Init */
int MDK_Init(void);

/* Symbol: _ZN6NSACDK11AcdkUtility12allocVirtBufEP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkUtility::allocVirtBuf(AMEM_BUF_INFO*) */
int _ZN6NSACDK11AcdkUtility12allocVirtBufEP13AMEM_BUF_INFO(void);

/* Symbol: _ZN6NSACDK8AcdkMain11stopPreviewEv */
/* Demangled: NSACDK::AcdkMain::stopPreview() */
int _ZN6NSACDK8AcdkMain11stopPreviewEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility15destroyInstanceEv */
/* Demangled: NSACDK::AcdkUtility::destroyInstance() */
int _ZN6NSACDK11AcdkUtility15destroyInstanceEv(void);

/* Symbol: _ZN6NSACDK8AcdkMain6uninitEv */
/* Demangled: NSACDK::AcdkMain::uninit() */
int _ZN6NSACDK8AcdkMain6uninitEv(void);

/* Symbol: _ZN6NSACDK8AcdkMainD1Ev */
/* Demangled: NSACDK::AcdkMain::~AcdkMain() */
int _ZN6NSACDK8AcdkMainD1Ev(void);

/* Symbol: _ZTVN6NSACDK8AcdkMainE */
/* Demangled: vtable for NSACDK::AcdkMain */
extern void* _ZTVN6NSACDK8AcdkMainE;

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalSetStateENS_18acdkMhalState_enumE */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalSetState(NSAcdkMhal::acdkMhalState_enum) */
int _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalSetStateENS_18acdkMhalState_enumE(void);

/* Symbol: _ZNK7android6VectorI14ImageBufferMapE12do_constructEPvm */
/* Demangled: android::Vector<ImageBufferMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorI14ImageBufferMapE12do_constructEPvm(void);

/* Symbol: _ZN6NSACDK11AcdkUtility14queryImageSizeEjjjRj */
/* Demangled: NSACDK::AcdkUtility::queryImageSize(unsigned int, unsigned int, unsigned int, unsigned int&) */
int _ZN6NSACDK11AcdkUtility14queryImageSizeEjjjRj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZN6NSACDK8AcdkMain11setOperModeE16eACDK_OPERA_MODE */
/* Demangled: NSACDK::AcdkMain::setOperMode(eACDK_OPERA_MODE) */
int _ZN6NSACDK8AcdkMain11setOperModeE16eACDK_OPERA_MODE(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll */
/* Demangled: NSAcdkMhal::AcdkMhalEng::doNotifyCb(int, long, long, long) */
int _ZN10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalGetShutTimeEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetShutTime() */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalGetShutTimeEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalGetStateEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalGetState() */
int _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalGetStateEv(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure8doDataCbEiPvj */
/* Demangled: NSAcdkMhal::AcdkMhalPure::doDataCb(int, void*, unsigned int) */
int _ZN10NSAcdkMhal12AcdkMhalPure8doDataCbEiPvj(void);

/* Symbol: _ZN6NSACDK8AcdkMain11takePictureEjjPFvPvEjjji */
/* Demangled: NSACDK::AcdkMain::takePicture(unsigned int, unsigned int, void (*)(void*), unsigned int, unsigned int, unsigned int, int) */
int _ZN6NSACDK8AcdkMain11takePictureEjjPFvPvEjjji(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure10doNotifyCbEiiii */
/* Demangled: NSAcdkMhal::AcdkMhalPure::doNotifyCb(int, int, int, int) */
int _ZN10NSAcdkMhal12AcdkMhalPure10doNotifyCbEiiii(void);

/* Symbol: _ZN6NSACDK11surfaceView14getSurfaceInfoERjS1_S1_ */
/* Demangled: NSACDK::surfaceView::getSurfaceInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN6NSACDK11surfaceView14getSurfaceInfoERjS1_S1_(void);

/* Symbol: _ZN6NSACDK11AcdkUtility4initEv */
/* Demangled: NSACDK::AcdkUtility::init() */
int _ZN6NSACDK11AcdkUtility4initEv(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::__push_back_slow_path<NS3Av3::MetaSet_T*>(NS3Av3::MetaSet_T*&&) */
int _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: MDK_Close */
/* Demangled: MDK_Close */
int MDK_Close(void);

/* Symbol: _ZN6NSACDK11surfaceView22resetActiveFrameBufferEj */
/* Demangled: NSACDK::surfaceView::resetActiveFrameBuffer(unsigned int) */
int _ZN6NSACDK11surfaceView22resetActiveFrameBufferEj(void);

/* Symbol: _ZN6NSACDK11surfaceView6uninitEv */
/* Demangled: NSACDK::surfaceView::uninit() */
int _ZN6NSACDK11surfaceView6uninitEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility11freeVirtBufEP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkUtility::freeVirtBuf(AMEM_BUF_INFO*) */
int _ZN6NSACDK11AcdkUtility11freeVirtBufEP13AMEM_BUF_INFO(void);

/* Symbol: _ZN6NSACDK8AcdkMain13getSensorInfoEv */
/* Demangled: NSACDK::AcdkMain::getSensorInfo() */
int _ZN6NSACDK8AcdkMain13getSensorInfoEv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewStopEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreviewStop() */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewStopEv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalPreviewStartEPv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreviewStart(void*) */
int _ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalPreviewStartEPv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng21acdkMhalGetCaptureRawEP13AMEM_BUF_INFOS2_j */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetCaptureRaw(AMEM_BUF_INFO*, AMEM_BUF_INFO*, unsigned int) */
int _ZN10NSAcdkMhal11AcdkMhalEng21acdkMhalGetCaptureRawEP13AMEM_BUF_INFOS2_j(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZN6NSACDK11AcdkUtility10mapPhyAddrEP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkUtility::mapPhyAddr(AMEM_BUF_INFO*) */
int _ZN6NSACDK11AcdkUtility10mapPhyAddrEP13AMEM_BUF_INFO(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalSetShutTimeEj */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalSetShutTime(unsigned int) */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalSetShutTimeEj(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewProcEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreviewProc() */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewProcEv(void);

/* Symbol: _ZTVN10NSAcdkMhal12AcdkMhalPureE */
/* Demangled: vtable for NSAcdkMhal::AcdkMhalPure */
extern void* _ZTVN10NSAcdkMhal12AcdkMhalPureE;

/* Symbol: _ZNK7android6VectorI14ImageBufferMapE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<ImageBufferMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI14ImageBufferMapE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEngC1Ev */
/* Demangled: NSAcdkMhal::AcdkMhalEng::AcdkMhalEng() */
int _ZN10NSAcdkMhal11AcdkMhalEngC1Ev(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureStopEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCaptureStop() */
int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureStopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::MetaSet_T, std::__1::allocator<NS3Av3::MetaSet_T> >::__push_back_slow_path<NS3Av3::MetaSet_T const&>(NS3Av3::MetaSet_T const&) */
int _ZNSt3__16vectorIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN6NSACDK11surfaceView13setOverlayBufEjPKhjjjjjj */
/* Demangled: NSACDK::surfaceView::setOverlayBuf(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6NSACDK11surfaceView13setOverlayBufEjPKhjjjjjj(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure18acdkMhalPreCaptureEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreCapture() */
int _ZN10NSAcdkMhal12AcdkMhalPure18acdkMhalPreCaptureEv(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureProcEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCaptureProc() */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureProcEv(void);

/* Symbol: _ZN6NSACDK8AcdkBase14createInstanceENS_17_ACDK_BYPASS_FLAGE */
/* Demangled: NSACDK::AcdkBase::createInstance(NSACDK::_ACDK_BYPASS_FLAG) */
int _ZN6NSACDK8AcdkBase14createInstanceENS_17_ACDK_BYPASS_FLAGE(void);

/* Symbol: _ZN6NSACDK8AcdkMain11getFrameCntERj */
/* Demangled: NSACDK::AcdkMain::getFrameCnt(unsigned int&) */
int _ZN6NSACDK8AcdkMain11getFrameCntERj(void);

/* Symbol: _ZN6NSACDK8AcdkMain19sensorFormatSettingEjRjS1_S1_Pj */
/* Demangled: NSACDK::AcdkMain::sensorFormatSetting(unsigned int, unsigned int&, unsigned int&, unsigned int&, unsigned int*) */
int _ZN6NSACDK8AcdkMain19sensorFormatSettingEjRjS1_S1_Pj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalReadyForCapEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalReadyForCap() */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalReadyForCapEv(void);

/* Symbol: _ZN6NSACDK11surfaceView16unRegisterBufferEj */
/* Demangled: NSACDK::surfaceView::unRegisterBuffer(unsigned int) */
int _ZN6NSACDK11surfaceView16unRegisterBufferEj(void);

/* Symbol: _ZN6NSACDK11surfaceViewD1Ev */
/* Demangled: NSACDK::surfaceView::~surfaceView() */
int _ZN6NSACDK11surfaceViewD1Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZTVN6NSACDK15fakeSurfaceViewE */
/* Demangled: vtable for NSACDK::fakeSurfaceView */
extern void* _ZTVN6NSACDK15fakeSurfaceViewE;

/* Symbol: MDK_IOControl */
/* Demangled: MDK_IOControl */
int MDK_IOControl(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng11onProcess3AEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::onProcess3A() */
int _ZN10NSAcdkMhal11AcdkMhalEng11onProcess3AEv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng12acdkMhalInitEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalInit() */
int _ZN10NSAcdkMhal11AcdkMhalEng12acdkMhalInitEv(void);

/* Symbol: _Z9mapJpgFmtiPjS_ */
/* Demangled: mapJpgFmt(int, unsigned int*, unsigned int*) */
int _Z9mapJpgFmtiPjS_(void);

/* Symbol: _ZN6NSACDK8AcdkMain16dispatchCallbackEPv */
/* Demangled: NSACDK::AcdkMain::dispatchCallback(void*) */
int _ZN6NSACDK8AcdkMain16dispatchCallbackEPv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng15requestMagicNumEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::requestMagicNum() */
int _ZN10NSAcdkMhal11AcdkMhalEng15requestMagicNumEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalGetShutTimeEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalGetShutTime() */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalGetShutTimeEv(void);

/* Symbol: _ZN6NSACDK11surfaceView7refreshEv */
/* Demangled: NSACDK::surfaceView::refresh() */
int _ZN6NSACDK11surfaceView7refreshEv(void);

/* Symbol: _ZN6NSACDK8AcdkMain10mSensorDevE */
/* Demangled: NSACDK::AcdkMain::mSensorDev */
extern void* _ZN6NSACDK8AcdkMain10mSensorDevE;

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalCaptureStartEPv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCaptureStart(void*) */
int _ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalCaptureStartEPv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>(NSCam::NSIoPipe::NSCamIOPipe::BufInfo&&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalPreviewStartEPv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreviewStart(void*) */
int _ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalPreviewStartEPv(void);

/* Symbol: _ZN6NSACDK11surfaceView11getBootModeERj */
/* Demangled: NSACDK::surfaceView::getBootMode(unsigned int&) */
int _ZN6NSACDK11surfaceView11getBootModeERj(void);

/* Symbol: g_pAcdkBaseObj */
/* Demangled: g_pAcdkBaseObj */
extern void* g_pAcdkBaseObj;

/* Symbol: _ZN6NSACDK15AcdkSurfaceView14createInstanceEi */
/* Demangled: NSACDK::AcdkSurfaceView::createInstance(int) */
int _ZN6NSACDK15AcdkSurfaceView14createInstanceEi(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZN6NSACDK8AcdkMain12quickViewImgEj */
/* Demangled: NSACDK::AcdkMain::quickViewImg(unsigned int) */
int _ZN6NSACDK8AcdkMain12quickViewImgEj(void);

/* Symbol: _ZN6NSACDK8AcdkMainD2Ev */
/* Demangled: NSACDK::AcdkMain::~AcdkMain() */
int _ZN6NSACDK8AcdkMainD2Ev(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalCBHandleEjPhS1_j */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCBHandle(unsigned int, unsigned char*, unsigned char*, unsigned int) */
int _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalCBHandleEjPhS1_j(void);

/* Symbol: _ZTVN6NSACDK11AcdkUtilityE */
/* Demangled: vtable for NSACDK::AcdkUtility */
extern void* _ZTVN6NSACDK11AcdkUtilityE;

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng18acdkMhal3ASetParamEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhal3ASetParam() */
int _ZN10NSAcdkMhal11AcdkMhalEng18acdkMhal3ASetParamEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewStopEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreviewStop() */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewStopEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility12imageProcessEjjjjjj13AMEM_BUF_INFOS1_jj */
/* Demangled: NSACDK::AcdkUtility::imageProcess(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, AMEM_BUF_INFO, AMEM_BUF_INFO, unsigned int, unsigned int) */
int _ZN6NSACDK11AcdkUtility12imageProcessEjjjjjj13AMEM_BUF_INFOS1_jj(void);

/* Symbol: _ZN6NSACDK8AcdkMain10saveRAWImgEi */
/* Demangled: NSACDK::AcdkMain::saveRAWImg(int) */
int _ZN6NSACDK8AcdkMain10saveRAWImgEi(void);

/* Symbol: _ZN6NSACDK8AcdkMain11handleRAWCBEPv */
/* Demangled: NSACDK::AcdkMain::handleRAWCB(void*) */
int _ZN6NSACDK8AcdkMain11handleRAWCBEPv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng12addFrameMetaEji */
/* Demangled: NSAcdkMhal::AcdkMhalEng::addFrameMeta(unsigned int, int) */
int _ZN10NSAcdkMhal11AcdkMhalEng12addFrameMetaEji(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalSetShutTimeEj */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalSetShutTime(unsigned int) */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalSetShutTimeEj(void);

/* Symbol: _ZN6NSACDK11AcdkUtility13deallocBufferERPN5NSCam12IImageBufferE */
/* Demangled: NSACDK::AcdkUtility::deallocBuffer(NSCam::IImageBuffer*&) */
int _ZN6NSACDK11AcdkUtility13deallocBufferERPN5NSCam12IImageBufferE(void);

/* Symbol: _ZN6NSACDK11AcdkUtility14createInstanceEv */
/* Demangled: NSACDK::AcdkUtility::createInstance() */
int _ZN6NSACDK11AcdkUtility14createInstanceEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility16cacheSyncbyRangeE19AMEM_CACHECTRL_ENUMP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkUtility::cacheSyncbyRange(AMEM_CACHECTRL_ENUM, AMEM_BUF_INFO*) */
int _ZN6NSACDK11AcdkUtility16cacheSyncbyRangeE19AMEM_CACHECTRL_ENUMP13AMEM_BUF_INFO(void);

/* Symbol: _ZN6NSACDK8AcdkMain11saveJPEGImgEmj */
/* Demangled: NSACDK::AcdkMain::saveJPEGImg(unsigned long, unsigned int) */
int _ZN6NSACDK8AcdkMain11saveJPEGImgEmj(void);

/* Symbol: _ZN6NSACDK8AcdkMain12createMemBufERjjP13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkMain::createMemBuf(unsigned int&, unsigned int, AMEM_BUF_INFO*) */
int _ZN6NSACDK8AcdkMain12createMemBufERjjP13AMEM_BUF_INFO(void);

/* Symbol: _ZThn8_N10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll */
/* Demangled: non-virtual thunk to NSAcdkMhal::AcdkMhalEng::doNotifyCb(int, long, long, long) */
int _ZThn8_N10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure15destroyInstanceEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::destroyInstance() */
int _ZN10NSAcdkMhal12AcdkMhalPure15destroyInstanceEv(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureStopEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCaptureStop() */
int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureStopEv(void);

/* Symbol: _ZN6NSACDK8AcdkMainC1ENS_17_ACDK_BYPASS_FLAGE */
/* Demangled: NSACDK::AcdkMain::AcdkMain(NSACDK::_ACDK_BYPASS_FLAG) */
int _ZN6NSACDK8AcdkMainC1ENS_17_ACDK_BYPASS_FLAGE(void);

/* Symbol: _ZN6NSACDK8AcdkMain12handleJPEGCBEPv */
/* Demangled: NSACDK::AcdkMain::handleJPEGCB(void*) */
int _ZN6NSACDK8AcdkMain12handleJPEGCBEPv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void);

/* Symbol: _ZN6NSACDK11AcdkUtility12queryCapSizeERjS1_ */
/* Demangled: NSACDK::AcdkUtility::queryCapSize(unsigned int&, unsigned int&) */
int _ZN6NSACDK11AcdkUtility12queryCapSizeERjS1_(void);

/* Symbol: _ZTVN6NSACDK11surfaceViewE */
/* Demangled: vtable for NSACDK::surfaceView */
extern void* _ZTVN6NSACDK11surfaceViewE;

/* Symbol: _ZN6NSACDK8AcdkMain15handlePreviewCBEPv */
/* Demangled: NSACDK::AcdkMain::handlePreviewCB(void*) */
int _ZN6NSACDK8AcdkMain15handlePreviewCBEPv(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPureC1Ev */
/* Demangled: NSAcdkMhal::AcdkMhalPure::AcdkMhalPure() */
int _ZN10NSAcdkMhal12AcdkMhalPureC1Ev(void);

/* Symbol: _ZN6NSACDK8AcdkMain14setShutterTimeEj */
/* Demangled: NSACDK::AcdkMain::setShutterTime(unsigned int) */
int _ZN6NSACDK8AcdkMain14setShutterTimeEj(void);

/* Symbol: _ZN6NSACDK8AcdkMain15destroyInstanceEv */
/* Demangled: NSACDK::AcdkMain::destroyInstance() */
int _ZN6NSACDK8AcdkMain15destroyInstanceEv(void);

/* Symbol: _ZN6NSACDK8AcdkMain8stateMgrENS_15acdkMainState_eE */
/* Demangled: NSACDK::AcdkMain::stateMgr(NSACDK::acdkMainState_e) */
int _ZN6NSACDK8AcdkMain8stateMgrENS_15acdkMainState_eE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalCaptureStartEPv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCaptureStart(void*) */
int _ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalCaptureStartEPv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6NSACDK8AcdkMain16acdkMainSetStateENS_15acdkMainState_eE */
/* Demangled: NSACDK::AcdkMain::acdkMainSetState(NSACDK::acdkMainState_e) */
int _ZN6NSACDK8AcdkMain16acdkMainSetStateENS_15acdkMainState_eE(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng15destroyInstanceEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::destroyInstance() */
int _ZN10NSAcdkMhal11AcdkMhalEng15destroyInstanceEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility12queryPrvSizeERjS1_ */
/* Demangled: NSACDK::AcdkUtility::queryPrvSize(unsigned int&, unsigned int&) */
int _ZN6NSACDK11AcdkUtility12queryPrvSizeERjS1_(void);

/* Symbol: _ZN6NSACDK8AcdkMain16acdkMainGetStateEv */
/* Demangled: NSACDK::AcdkMain::acdkMainGetState() */
int _ZN6NSACDK8AcdkMain16acdkMainGetStateEv(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEngC2Ev */
/* Demangled: NSAcdkMhal::AcdkMhalEng::AcdkMhalEng() */
int _ZN10NSAcdkMhal11AcdkMhalEngC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN6NSACDK8AcdkMain10handleQVCBEPv */
/* Demangled: NSACDK::AcdkMain::handleQVCB(void*) */
int _ZN6NSACDK8AcdkMain10handleQVCBEPv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6NSACDK11AcdkUtility20queryRAWImgFullGInfoEjjRjS1_ */
/* Demangled: NSACDK::AcdkUtility::queryRAWImgFullGInfo(unsigned int, unsigned int, unsigned int&, unsigned int&) */
int _ZN6NSACDK11AcdkUtility20queryRAWImgFullGInfoEjjRjS1_(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalSetStateENS_18acdkMhalState_enumE */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalSetState(NSAcdkMhal::acdkMhalState_enum) */
int _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalSetStateENS_18acdkMhalState_enumE(void);

/* Symbol: _ZN6NSACDK11surfaceView15destroyInstanceEv */
/* Demangled: NSACDK::surfaceView::destroyInstance() */
int _ZN6NSACDK11surfaceView15destroyInstanceEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility16queryImageStrideEjjjPj */
/* Demangled: NSACDK::AcdkUtility::queryImageStride(unsigned int, unsigned int, unsigned int, unsigned int*) */
int _ZN6NSACDK11AcdkUtility16queryImageStrideEjjjPj(void);

/* Symbol: _ZN6NSACDK11AcdkUtility6uninitEv */
/* Demangled: NSACDK::AcdkUtility::uninit() */
int _ZN6NSACDK11AcdkUtility6uninitEv(void);

/* Symbol: _ZN6NSACDK11surfaceViewC1Ev */
/* Demangled: NSACDK::surfaceView::surfaceView() */
int _ZN6NSACDK11surfaceViewC1Ev(void);

/* Symbol: _ZN6NSACDK11surfaceViewD2Ev */
/* Demangled: NSACDK::surfaceView::~surfaceView() */
int _ZN6NSACDK11surfaceViewD2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__push_back_slow_path<NSCam::NSIoPipe::PortID const&>(NSCam::NSIoPipe::PortID const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNK7android6VectorI14ImageBufferMapE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<ImageBufferMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI14ImageBufferMapE15do_move_forwardEPvPKvm(void);

/* Symbol: _Z14MDK_OpenBypassN6NSACDK17_ACDK_BYPASS_FLAGE */
/* Demangled: MDK_OpenBypass(NSACDK::_ACDK_BYPASS_FLAG) */
int _Z14MDK_OpenBypassN6NSACDK17_ACDK_BYPASS_FLAGE(void);

/* Symbol: _ZN6NSACDK8AcdkMain10sensorInitEv */
/* Demangled: NSACDK::AcdkMain::sensorInit() */
int _ZN6NSACDK8AcdkMain10sensorInitEv(void);

/* Symbol: _ZN6NSACDK8AcdkMain14calcPreviewWinEjjRjS1_S1_S1_ */
/* Demangled: NSACDK::AcdkMain::calcPreviewWin(unsigned int, unsigned int, unsigned int&, unsigned int&, unsigned int&, unsigned int&) */
int _ZN6NSACDK8AcdkMain14calcPreviewWinEjjRjS1_S1_S1_(void);

/* Symbol: _ZN6NSACDK8AcdkMain12startPreviewEPFvPvE */
/* Demangled: NSACDK::AcdkMain::startPreview(void (*)(void*)) */
int _ZN6NSACDK8AcdkMain12startPreviewEPFvPvE(void);

/* Symbol: _ZN6NSACDK8AcdkMainD0Ev */
/* Demangled: NSACDK::AcdkMain::~AcdkMain() */
int _ZN6NSACDK8AcdkMainD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::IHalSensor::ConfigParam, std::__1::allocator<NSCam::IHalSensor::ConfigParam> >::__push_back_slow_path<NSCam::IHalSensor::ConfigParam const&>(NSCam::IHalSensor::ConfigParam const&) */
int _ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNK7android6VectorI14ImageBufferMapE7do_copyEPvPKvm */
/* Demangled: android::Vector<ImageBufferMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI14ImageBufferMapE7do_copyEPvPKvm(void);

/* Symbol: _ZN6NSACDK8AcdkMain10GetPureRawEjjPFvPvEjjji */
/* Demangled: NSACDK::AcdkMain::GetPureRaw(unsigned int, unsigned int, void (*)(void*), unsigned int, unsigned int, unsigned int, int) */
int _ZN6NSACDK8AcdkMain10GetPureRawEjjPFvPvEjjji(void);

/* Symbol: _ZN6NSACDK8AcdkMain14makeExifHeaderEjPhjS1_Rjjj */
/* Demangled: NSACDK::AcdkMain::makeExifHeader(unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int&, unsigned int, unsigned int) */
int _ZN6NSACDK8AcdkMain14makeExifHeaderEjPhjS1_Rjjj(void);

/* Symbol: _ZN6NSACDK8AcdkMain4initEv */
/* Demangled: NSACDK::AcdkMain::init() */
int _ZN6NSACDK8AcdkMain4initEv(void);

/* Symbol: _ZN6NSACDK11AcdkUtility16ImageallocBufferERPN5NSCam12IImageBufferEjjj13AMEM_BUF_INFO */
/* Demangled: NSACDK::AcdkUtility::ImageallocBuffer(NSCam::IImageBuffer*&, unsigned int, unsigned int, unsigned int, AMEM_BUF_INFO) */
int _ZN6NSACDK11AcdkUtility16ImageallocBufferERPN5NSCam12IImageBufferEjjj13AMEM_BUF_INFO(void);

/* Symbol: _ZN6NSACDK11surfaceView14setOverlayInfoEjjjjjmmj */
/* Demangled: NSACDK::surfaceView::setOverlayInfo(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned long, unsigned int) */
int _ZN6NSACDK11surfaceView14setOverlayInfoEjjjjjmmj(void);

/* Symbol: _Z12EngPreviewCbRN5NSCam8NSIoPipe7QParamsE */
/* Demangled: EngPreviewCb(NSCam::NSIoPipe::QParams&) */
int _Z12EngPreviewCbRN5NSCam8NSIoPipe7QParamsE(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalCBHandleEjPhS1_j */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCBHandle(unsigned int, unsigned char*, unsigned char*, unsigned int) */
int _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalCBHandleEjPhS1_j(void);

/* Symbol: _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalGetStateEv */
/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetState() */
int _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalGetStateEv(void);

/* Symbol: _ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::ImageBufferHeap>::sp(NSCam::ImageBufferHeap*) */
int _ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZN10NSAcdkMhal12AcdkMhalPure12acdkMhalInitEv */
/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalInit() */
int _ZN10NSAcdkMhal12AcdkMhalPure12acdkMhalInitEv(void);

/* Symbol: _ZTVN7android6VectorI14ImageBufferMapEE */
/* Demangled: vtable for android::Vector<ImageBufferMap> */
extern void* _ZTVN7android6VectorI14ImageBufferMapEE;

/* Symbol: _ZN6NSACDK11AcdkUtility21queryRAWImgFormatInfoEjjRjS1_ */
/* Demangled: NSACDK::AcdkUtility::queryRAWImgFormatInfo(unsigned int, unsigned int, unsigned int&, unsigned int&) */
int _ZN6NSACDK11AcdkUtility21queryRAWImgFormatInfoEjjRjS1_(void);

/* Symbol: _ZN6NSACDK8AcdkMain14cameraCallbackEPv */
/* Demangled: NSACDK::AcdkMain::cameraCallback(void*) */
int _ZN6NSACDK8AcdkMain14cameraCallbackEPv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN10NSAcdkMhal11AcdkMhalEngE */
/* Demangled: vtable for NSAcdkMhal::AcdkMhalEng */
extern void* _ZTVN10NSAcdkMhal11AcdkMhalEngE;

/* Symbol: _Z13PurePreviewCbRN5NSCam8NSIoPipe7QParamsE */
/* Demangled: PurePreviewCb(NSCam::NSIoPipe::QParams&) */
int _Z13PurePreviewCbRN5NSCam8NSIoPipe7QParamsE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBACDK_H */
