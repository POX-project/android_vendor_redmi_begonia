/*
 * Reverse-Engineered ABI Specification for: libmialgoengine.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmialgoengine.so
 */

#ifndef BEGONIA_RE_LIBMIALGOENGINE_H
#define BEGONIA_RE_LIBMIALGOENGINE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6mialgo8MiaImageC2ENS_9FrameInfoEPNS_16MiaBufferManagerE */
/* Demangled: mialgo::MiaImage::MiaImage(mialgo::FrameInfo, mialgo::MiaBufferManager*) */
int _ZN6mialgo8MiaImageC2ENS_9FrameInfoEPNS_16MiaBufferManagerE(void);

/* Symbol: _ZN6mialgo10MiaNodeHdr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv */
/* Demangled: mialgo::MiaNodeHdr::ProcessBuffer(mialgo::MiImageBuffer*, int, mialgo::MiImageBuffer*, void*) */
int _ZN6mialgo10MiaNodeHdr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv(void);

/* Symbol: _ZTv0_n24_N6mialgo8MiaImageD1Ev */
/* Demangled: virtual thunk to mialgo::MiaImage::~MiaImage() */
int _ZTv0_n24_N6mialgo8MiaImageD1Ev(void);

/* Symbol: _ZN6mialgo10MiaNodeHdr4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeHdr::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo10MiaNodeHdr4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZTv0_n24_N6mialgo7MiaNodeD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNode::~MiaNode() */
int _ZTv0_n24_N6mialgo7MiaNodeD0Ev(void);

/* Symbol: _ZN6mialgo13MiaImageQueue7getSizeEv */
/* Demangled: mialgo::MiaImageQueue::getSize() */
int _ZN6mialgo13MiaImageQueue7getSizeEv(void);

/* Symbol: _ZTv0_n24_N6mialgo10MiaServiceD0Ev */
/* Demangled: virtual thunk to mialgo::MiaService::~MiaService() */
int _ZTv0_n24_N6mialgo10MiaServiceD0Ev(void);

/* Symbol: _ZN6mialgo16MiaBufferManagerD2Ev */
/* Demangled: mialgo::MiaBufferManager::~MiaBufferManager() */
int _ZN6mialgo16MiaBufferManagerD2Ev(void);

/* Symbol: _ZN6mialgo10MiaNodeHdrD1Ev */
/* Demangled: mialgo::MiaNodeHdr::~MiaNodeHdr() */
int _ZN6mialgo10MiaNodeHdrD1Ev(void);

/* Symbol: _ZN6mialgo14QAltekDepurpleC2Ev */
/* Demangled: mialgo::QAltekDepurple::QAltekDepurple() */
int _ZN6mialgo14QAltekDepurpleC2Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo14MiaNodeMiBokehD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
int _ZTv0_n24_N6mialgo14MiaNodeMiBokehD0Ev(void);

/* Symbol: _ZN6mialgo14SkinBeautifier24processPreviewYUVArcsoftEPNS_13MiImageBufferES2_ */
/* Demangled: mialgo::SkinBeautifier::processPreviewYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
int _ZN6mialgo14SkinBeautifier24processPreviewYUVArcsoftEPNS_13MiImageBufferES2_(void);

/* Symbol: _ZN6mialgo10MiaSession18increaseImageQueueEjNS_10mia_wake_tE */
/* Demangled: mialgo::MiaSession::increaseImageQueue(unsigned int, mialgo::mia_wake_t) */
int _ZN6mialgo10MiaSession18increaseImageQueueEjNS_10mia_wake_tE(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeMiBokeh::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo14MiaNodeMiBokeh12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegment13ProcessBufferEPNS_12_MiImageListES2_Pv */
/* Demangled: mialgo::MiaNodeMiSegment::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
int _ZN6mialgo16MiaNodeMiSegment13ProcessBufferEPNS_12_MiImageListES2_Pv(void);

/* Symbol: _ZN6mialgo13MiaImageQueue8addImageERN7android2spINS_8MiaImageEEENS_10mia_wake_tE */
/* Demangled: mialgo::MiaImageQueue::addImage(android::sp<mialgo::MiaImage>&, mialgo::mia_wake_t) */
int _ZN6mialgo13MiaImageQueue8addImageERN7android2spINS_8MiaImageEEENS_10mia_wake_tE(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragmentC1Ev */
/* Demangled: mialgo::MiaNodeMiFragment::MiaNodeMiFragment() */
int _ZN6mialgo17MiaNodeMiFragmentC1Ev(void);

/* Symbol: _ZN6mialgo10MiaService14destroySessionEPv */
/* Demangled: mialgo::MiaService::destroySession(void*) */
int _ZN6mialgo10MiaService14destroySessionEPv(void);

/* Symbol: _ZN6mialgo10MiaService5flushEPv */
/* Demangled: mialgo::MiaService::flush(void*) */
int _ZN6mialgo10MiaService5flushEPv(void);

/* Symbol: _ZTTN6mialgo8MiaImageE */
/* Demangled: VTT for mialgo::MiaImage */
extern void* _ZTTN6mialgo8MiaImageE;

/* Symbol: _ZN6mialgo16MiaNodeMiSegment6DeInitEv */
/* Demangled: mialgo::MiaNodeMiSegment::DeInit() */
int _ZN6mialgo16MiaNodeMiSegment6DeInitEv(void);

/* Symbol: _ZN6mialgo12gMiaLogLevelE */
/* Demangled: mialgo::gMiaLogLevel */
extern void* _ZN6mialgo12gMiaLogLevelE;

/* Symbol: _ZN6mialgo13MiaNodeMemcpy12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeMemcpy::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo13MiaNodeMemcpy12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple13ProcessBufferEPNS_12_MiImageListES2_Pv */
/* Demangled: mialgo::MiaNodeDePurple::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
int _ZN6mialgo15MiaNodeDePurple13ProcessBufferEPNS_12_MiImageListES2_Pv(void);

/* Symbol: _ZN6mialgo14QAltekDepurpleD1Ev */
/* Demangled: mialgo::QAltekDepurple::~QAltekDepurple() */
int _ZN6mialgo14QAltekDepurpleD1Ev(void);

/* Symbol: _ZN6mialgo7MiaNode4stopEv */
/* Demangled: mialgo::MiaNode::stop() */
int _ZN6mialgo7MiaNode4stopEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo7MiaNodeEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo7MiaNodeEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZN6mialgo10ArcsoftHdrC2Ev */
/* Demangled: mialgo::ArcsoftHdr::ArcsoftHdr() */
int _ZN6mialgo10ArcsoftHdrC2Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_ */
/* Demangled: mialgo::MiaNodeMiBokeh::processRelighting(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo14MiaNodeMiBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6mialgo10QVisidonSR4initEv */
/* Demangled: mialgo::QVisidonSR::init() */
int _ZN6mialgo10QVisidonSR4initEv(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragmentD0Ev */
/* Demangled: mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
int _ZN6mialgo17MiaNodeMiFragmentD0Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSrC1Ev */
/* Demangled: mialgo::MiaNodeVisidonSr::MiaNodeVisidonSr() */
int _ZN6mialgo16MiaNodeVisidonSrC1Ev(void);

/* Symbol: _ZN6mialgo8MiaImage20allocateCopyMetadataEPv */
/* Demangled: mialgo::MiaImage::allocateCopyMetadata(void*) */
int _ZN6mialgo8MiaImage20allocateCopyMetadataEPv(void);

/* Symbol: _ZTVN6mialgo16MiaNodeVisidonSrE */
/* Demangled: vtable for mialgo::MiaNodeVisidonSr */
extern void* _ZTVN6mialgo16MiaNodeVisidonSrE;

/* Symbol: _ZN6mialgo15AltekCaptureLDC7processEPNS_13MiImageBufferES2_jjP16alLDC_FPC_DATA_T */
/* Demangled: mialgo::AltekCaptureLDC::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, unsigned int, alLDC_FPC_DATA_T*) */
int _ZN6mialgo15AltekCaptureLDC7processEPNS_13MiImageBufferES2_jjP16alLDC_FPC_DATA_T(void);

/* Symbol: _ZN6mialgo14SkinBeautifier12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE */
/* Demangled: mialgo::SkinBeautifier::setOffScreen(__tag_ASVL_OFFSCREEN*, mialgo::MiImageBuffer*) */
int _ZN6mialgo14SkinBeautifier12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<ANativeWindowBuffer*, std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::less<ANativeWindowBuffer*>, true>, std::__1::allocator<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void);

/* Symbol: _ZN6mialgo10ArcsoftHdrD1Ev */
/* Demangled: mialgo::ArcsoftHdr::~ArcsoftHdr() */
int _ZN6mialgo10ArcsoftHdrD1Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSr12processImageEPv */
/* Demangled: mialgo::MiaNodeVisidonSr::processImage(void*) */
int _ZN6mialgo16MiaNodeVisidonSr12processImageEPv(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegmentC2Ev */
/* Demangled: mialgo::MiaNodeMiSegment::MiaNodeMiSegment() */
int _ZN6mialgo16MiaNodeMiSegmentC2Ev(void);

/* Symbol: _ZN6mialgo14SkinBeautifier5resetEv */
/* Demangled: mialgo::SkinBeautifier::reset() */
int _ZN6mialgo14SkinBeautifier5resetEv(void);

/* Symbol: _ZN6mialgo7MiaNode5startEv */
/* Demangled: mialgo::MiaNode::start() */
int _ZN6mialgo7MiaNode5startEv(void);

/* Symbol: _ZTVN6mialgo13MiaImageQueueE */
/* Demangled: vtable for mialgo::MiaImageQueue */
extern void* _ZTVN6mialgo13MiaImageQueueE;

/* Symbol: _ZTTN6mialgo16MiaNodeVisidonSrE */
/* Demangled: VTT for mialgo::MiaNodeVisidonSr */
extern void* _ZTTN6mialgo16MiaNodeVisidonSrE;

/* Symbol: _ZN6mialgo7MiaNode10unlinkNodeERN7android2spIS0_EE */
/* Demangled: mialgo::MiaNode::unlinkNode(android::sp<mialgo::MiaNode>&) */
int _ZN6mialgo7MiaNode10unlinkNodeERN7android2spIS0_EE(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSr6DeInitEv */
/* Demangled: mialgo::MiaNodeVisidonSr::DeInit() */
int _ZN6mialgo16MiaNodeVisidonSr6DeInitEv(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion6DeInitEv */
/* Demangled: mialgo::MiaNodeAltekDistortion::DeInit() */
int _ZN6mialgo22MiaNodeAltekDistortion6DeInitEv(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh11DumpRawDataEPhijPKc */
/* Demangled: mialgo::MiaNodeMiBokeh::DumpRawData(unsigned char*, int, unsigned int, char const*) */
int _ZN6mialgo14MiaNodeMiBokeh11DumpRawDataEPhijPKc(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_ */
/* Demangled: mialgo::MiaNodeCaptureBokeh::CopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo19MiaNodeCaptureBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_(void);

/* Symbol: _ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
int _ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD0Ev(void);

/* Symbol: _ZN6mialgo8MiaImageC1ENS_9FrameInfoEPNS_16MiaBufferManagerE */
/* Demangled: mialgo::MiaImage::MiaImage(mialgo::FrameInfo, mialgo::MiaBufferManager*) */
int _ZN6mialgo8MiaImageC1ENS_9FrameInfoEPNS_16MiaBufferManagerE(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSrD0Ev */
/* Demangled: mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
int _ZN6mialgo16MiaNodeVisidonSrD0Ev(void);

/* Symbol: _ZTCN6mialgo10MiaSessionE0_NS_6NodeCBE */
/* Demangled: construction vtable for mialgo::NodeCB-in-mialgo::MiaSession */
extern void* _ZTCN6mialgo10MiaSessionE0_NS_6NodeCBE;

/* Symbol: _ZN6mialgo13MiaNodeMemcpyD2Ev */
/* Demangled: mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
int _ZN6mialgo13MiaNodeMemcpyD2Ev(void);

/* Symbol: _ZN6mialgo14SkinBeautifier6enableEbbi */
/* Demangled: mialgo::SkinBeautifier::enable(bool, bool, int) */
int _ZN6mialgo14SkinBeautifier6enableEbbi(void);

/* Symbol: _ZTv0_n24_N6mialgo16MiaNodeVisidonSrD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
int _ZTv0_n24_N6mialgo16MiaNodeVisidonSrD1Ev(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion12processImageEPv */
/* Demangled: mialgo::MiaNodeAltekDistortion::processImage(void*) */
int _ZN6mialgo22MiaNodeAltekDistortion12processImageEPv(void);

/* Symbol: _ZTCN6mialgo22MiaNodeAltekDistortionE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeAltekDistortion */
extern void* _ZTCN6mialgo22MiaNodeAltekDistortionE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo14MiaNodeMiBokehC2Ev */
/* Demangled: mialgo::MiaNodeMiBokeh::MiaNodeMiBokeh() */
int _ZN6mialgo14MiaNodeMiBokehC2Ev(void);

/* Symbol: _ZN6mialgo13MiSegmentMiuiC2Ev */
/* Demangled: mialgo::MiSegmentMiui::MiSegmentMiui() */
int _ZN6mialgo13MiSegmentMiuiC2Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegment12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeMiSegment::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo16MiaNodeMiSegment12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegment7processEPNS_12_MiImageListES2_i */
/* Demangled: mialgo::MiaNodeMiSegment::process(mialgo::_MiImageList*, mialgo::_MiImageList*, int) */
int _ZN6mialgo16MiaNodeMiSegment7processEPNS_12_MiImageListES2_i(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegmentD1Ev */
/* Demangled: mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
int _ZN6mialgo16MiaNodeMiSegmentD1Ev(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlip6doFlipEPhS1_S1_S1_iiiii */
/* Demangled: mialgo::MiaNodeSwFlip::doFlip(unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int) */
int _ZN6mialgo13MiaNodeSwFlip6doFlipEPhS1_S1_S1_iiiii(void);

/* Symbol: _ZN6mialgo7MiaNode6DeInitEv */
/* Demangled: mialgo::MiaNode::DeInit() */
int _ZN6mialgo7MiaNode6DeInitEv(void);

/* Symbol: _ZN6mialgo13MiaImageQueue19findImageOnLocationEj */
/* Demangled: mialgo::MiaImageQueue::findImageOnLocation(unsigned int) */
int _ZN6mialgo13MiaImageQueue19findImageOnLocationEj(void);

/* Symbol: _Z16getCurrentTimeMsv */
/* Demangled: getCurrentTimeMs() */
int _Z16getCurrentTimeMsv(void);

/* Symbol: _ZTTN6mialgo14MiaNodeMiBokehE */
/* Demangled: VTT for mialgo::MiaNodeMiBokeh */
extern void* _ZTTN6mialgo14MiaNodeMiBokehE;

/* Symbol: _ZTVN6mialgo17MiaNodeMiFragmentE */
/* Demangled: vtable for mialgo::MiaNodeMiFragment */
extern void* _ZTVN6mialgo17MiaNodeMiFragmentE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE5eraseENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, mialgo::Task>, std::__1::__map_value_compare<int, std::__1::__value_type<int, mialgo::Task>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, mialgo::Task> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<int, mialgo::Task>, std::__1::__tree_node<std::__1::__value_type<int, mialgo::Task>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE5eraseENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEE(void);

/* Symbol: _ZN6mialgo13MiaImageQueue16updateImageStateEN7android2spINS_8MiaImageEEENS_17mia_image_state_tENS_10mia_wake_tE */
/* Demangled: mialgo::MiaImageQueue::updateImageState(android::sp<mialgo::MiaImage>, mialgo::mia_image_state_t, mialgo::mia_wake_t) */
int _ZN6mialgo13MiaImageQueue16updateImageStateEN7android2spINS_8MiaImageEEENS_17mia_image_state_tENS_10mia_wake_tE(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment12processImageEPv */
/* Demangled: mialgo::MiaNodeMiFragment::processImage(void*) */
int _ZN6mialgo17MiaNodeMiFragment12processImageEPv(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN */
/* Demangled: mialgo::MiaNodeCaptureBokeh::PrepareImage(mialgo::_MiImageList*, __tag_ASVL_OFFSCREEN&) */
int _ZN6mialgo19MiaNodeCaptureBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN(void);

/* Symbol: _ZNK7android6VectorIPN6mialgo10MiaSessionEE8do_splatEPvPKvm */
/* Demangled: android::Vector<mialgo::MiaSession*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN6mialgo10MiaSessionEE8do_splatEPvPKvm(void);

/* Symbol: _ZN6mialgo10MiaNodeHdr12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeHdr::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo10MiaNodeHdr12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlip4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeSwFlip::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo13MiaNodeSwFlip4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlipC1Ev */
/* Demangled: mialgo::MiaNodeSwFlip::MiaNodeSwFlip() */
int _ZN6mialgo13MiaNodeSwFlipC1Ev(void);

/* Symbol: _ZN6mialgo16MiaBufferManager19AllocateMoreBuffersEj */
/* Demangled: mialgo::MiaBufferManager::AllocateMoreBuffers(unsigned int) */
int _ZN6mialgo16MiaBufferManager19AllocateMoreBuffersEj(void);

/* Symbol: _ZTTN6mialgo10MiaNodeHdrE */
/* Demangled: VTT for mialgo::MiaNodeHdr */
extern void* _ZTTN6mialgo10MiaNodeHdrE;

/* Symbol: _ZN6mialgo14SensorIdStringEi */
/* Demangled: mialgo::SensorIdString(int) */
int _ZN6mialgo14SensorIdStringEi(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokehD1Ev */
/* Demangled: mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
int _ZN6mialgo14MiaNodeMiBokehD1Ev(void);

/* Symbol: _ZN6mialgo13MiSegmentMiuiD1Ev */
/* Demangled: mialgo::MiSegmentMiui::~MiSegmentMiui() */
int _ZN6mialgo13MiSegmentMiuiD1Ev(void);

/* Symbol: g_altekLdcLogLevel */
/* Demangled: g_altekLdcLogLevel */
extern void* g_altekLdcLogLevel;

/* Symbol: _ZN6mialgo15AltekCaptureLDCC2Ev */
/* Demangled: mialgo::AltekCaptureLDC::AltekCaptureLDC() */
int _ZN6mialgo15AltekCaptureLDCC2Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeMiSegment::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo16MiaNodeMiSegment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo14MiFragmentMiuiC1Ev */
/* Demangled: mialgo::MiFragmentMiui::MiFragmentMiui() */
int _ZN6mialgo14MiFragmentMiuiC1Ev(void);

/* Symbol: _ZN7android2spIN6mialgo7MiaNodeEED2Ev */
/* Demangled: android::sp<mialgo::MiaNode>::~sp() */
int _ZN7android2spIN6mialgo7MiaNodeEED2Ev(void);

/* Symbol: _ZNK7android6VectorIPN6mialgo10MiaSessionEE12do_constructEPvm */
/* Demangled: android::Vector<mialgo::MiaSession*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIPN6mialgo10MiaSessionEE12do_constructEPvm(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN */
/* Demangled: mialgo::MiaNodeCaptureBokeh::ReleaseImage(__tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo19MiaNodeCaptureBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN(void);

/* Symbol: _ZN6mialgo13MetadataUtils10initializeENS_13MiaMetaUtilCbE */
/* Demangled: mialgo::MetadataUtils::initialize(mialgo::MiaMetaUtilCb) */
int _ZN6mialgo13MetadataUtils10initializeENS_13MiaMetaUtilCbE(void);

/* Symbol: _ZN6mialgo7MiaNode12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNode::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo7MiaNode12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZTVN6mialgo16MiaNodeMiSegmentE */
/* Demangled: vtable for mialgo::MiaNodeMiSegment */
extern void* _ZTVN6mialgo16MiaNodeMiSegmentE;

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier13ProcessBufferEPNS_12_MiImageListES2_Pv */
/* Demangled: mialgo::MiaNodeSkinBeautifier::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
int _ZN6mialgo21MiaNodeSkinBeautifier13ProcessBufferEPNS_12_MiImageListES2_Pv(void);

/* Symbol: _ZN6mialgo10MiaNodeHdr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeHdr::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo10MiaNodeHdr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion10getFpcDataEPvR16alLDC_FPC_DATA_T */
/* Demangled: mialgo::MiaNodeAltekDistortion::getFpcData(void*, alLDC_FPC_DATA_T&) */
int _ZN6mialgo22MiaNodeAltekDistortion10getFpcDataEPvR16alLDC_FPC_DATA_T(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeMiFragment::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo17MiaNodeMiFragment4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment6DeInitEv */
/* Demangled: mialgo::MiaNodeMiFragment::DeInit() */
int _ZN6mialgo17MiaNodeMiFragment6DeInitEv(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlipD0Ev */
/* Demangled: mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
int _ZN6mialgo13MiaNodeSwFlipD0Ev(void);

/* Symbol: _ZNK7android6VectorIPN6mialgo10MiaSessionEE7do_copyEPvPKvm */
/* Demangled: android::Vector<mialgo::MiaSession*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN6mialgo10MiaSessionEE7do_copyEPvPKvm(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv */
/* Demangled: mialgo::MiaNodeVisidonSr::ProcessBuffer(mialgo::MiImageBuffer*, int, mialgo::MiImageBuffer*, void*) */
int _ZN6mialgo16MiaNodeVisidonSr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDCD1Ev */
/* Demangled: mialgo::AltekCaptureLDC::~AltekCaptureLDC() */
int _ZN6mialgo15AltekCaptureLDCD1Ev(void);

/* Symbol: _ZTTN6mialgo16MiaNodeMiSegmentE */
/* Demangled: VTT for mialgo::MiaNodeMiSegment */
extern void* _ZTTN6mialgo16MiaNodeMiSegmentE;

/* Symbol: _ZN6mialgo14MiFragmentMiuiD0Ev */
/* Demangled: mialgo::MiFragmentMiui::~MiFragmentMiui() */
int _ZN6mialgo14MiFragmentMiuiD0Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh9DoProcessEv */
/* Demangled: mialgo::MiaNodeCaptureBokeh::DoProcess() */
int _ZN6mialgo19MiaNodeCaptureBokeh9DoProcessEv(void);

/* Symbol: _ZN6mialgo10MiaNodeHdrC1Ev */
/* Demangled: mialgo::MiaNodeHdr::MiaNodeHdr() */
int _ZN6mialgo10MiaNodeHdrC1Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo10MiaNodeHdrD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeHdr::~MiaNodeHdr() */
int _ZTv0_n24_N6mialgo10MiaNodeHdrD1Ev(void);

/* Symbol: _ZTVN6mialgo11MiBokehMiuiE */
/* Demangled: vtable for mialgo::MiBokehMiui */
extern void* _ZTVN6mialgo11MiBokehMiuiE;

/* Symbol: _ZN6mialgo14SkinBeautifier23processRecordYUVArcsoftEPNS_13MiImageBufferES2_ */
/* Demangled: mialgo::SkinBeautifier::processRecordYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
int _ZN6mialgo14SkinBeautifier23processRecordYUVArcsoftEPNS_13MiImageBufferES2_(void);

/* Symbol: _ZN6mialgo10MiaSession12processFrameEPNS_8MiaFrameE */
/* Demangled: mialgo::MiaSession::processFrame(mialgo::MiaFrame*) */
int _ZN6mialgo10MiaSession12processFrameEPNS_8MiaFrameE(void);

/* Symbol: _ZN6mialgo7MiaNode8mNodeCntE */
/* Demangled: mialgo::MiaNode::mNodeCnt */
extern void* _ZN6mialgo7MiaNode8mNodeCntE;

/* Symbol: _ZTv0_n24_N6mialgo8MiaImageD0Ev */
/* Demangled: virtual thunk to mialgo::MiaImage::~MiaImage() */
int _ZTv0_n24_N6mialgo8MiaImageD0Ev(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC18m_initParamStrideYE */
/* Demangled: mialgo::AltekCaptureLDC::m_initParamStrideY */
extern void* _ZN6mialgo15AltekCaptureLDC18m_initParamStrideYE;

/* Symbol: _ZTVN6mialgo15AltekCaptureLDCE */
/* Demangled: vtable for mialgo::AltekCaptureLDC */
extern void* _ZTVN6mialgo15AltekCaptureLDCE;

/* Symbol: _ZN6mialgo15MiaNodeDePurpleD2Ev */
/* Demangled: mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
int _ZN6mialgo15MiaNodeDePurpleD2Ev(void);

/* Symbol: _ZTCN6mialgo14MiaNodeMiBokehE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMiBokeh */
extern void* _ZTCN6mialgo14MiaNodeMiBokehE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh20ConvertToArcFaceInfoERNS_17FDMetadataResultsER23_tag_ARC_DCR_FACE_PARAM */
/* Demangled: mialgo::MiaNodeCaptureBokeh::ConvertToArcFaceInfo(mialgo::FDMetadataResults&, _tag_ARC_DCR_FACE_PARAM&) */
int _ZN6mialgo19MiaNodeCaptureBokeh20ConvertToArcFaceInfoERNS_17FDMetadataResultsER23_tag_ARC_DCR_FACE_PARAM(void);

/* Symbol: _ZTTN6mialgo19MiaNodeCaptureBokehE */
/* Demangled: VTT for mialgo::MiaNodeCaptureBokeh */
extern void* _ZTTN6mialgo19MiaNodeCaptureBokehE;

/* Symbol: _ZN6mialgo7MiaNode4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNode::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo7MiaNode4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo7MiaUtil12MiFreeBufferEPNS_12_MiImageListE */
/* Demangled: mialgo::MiaUtil::MiFreeBuffer(mialgo::_MiImageList*) */
int _ZN6mialgo7MiaUtil12MiFreeBufferEPNS_12_MiImageListE(void);

/* Symbol: _ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_jilfi */
/* Demangled: mialgo::MiBokehMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, int, long, float, int) */
int _ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_jilfi(void);

/* Symbol: _ZN6mialgo10MiaSession16createImageQueueERNS_9FrameInfoE */
/* Demangled: mialgo::MiaSession::createImageQueue(mialgo::FrameInfo&) */
int _ZN6mialgo10MiaSession16createImageQueueERNS_9FrameInfoE(void);

/* Symbol: _ZN6mialgo16MiaBufferManagerD1Ev */
/* Demangled: mialgo::MiaBufferManager::~MiaBufferManager() */
int _ZN6mialgo16MiaBufferManagerD1Ev(void);

/* Symbol: _ZN6mialgo13MetadataUtils25allocateCopyInterMetadataEPv */
/* Demangled: mialgo::MetadataUtils::allocateCopyInterMetadata(void*) */
int _ZN6mialgo13MetadataUtils25allocateCopyInterMetadataEPv(void);

/* Symbol: _ZN6mialgo10MiaNodeHdrD0Ev */
/* Demangled: mialgo::MiaNodeHdr::~MiaNodeHdr() */
int _ZN6mialgo10MiaNodeHdrD0Ev(void);

/* Symbol: _ZTVN6mialgo10MiaNodeHdrE */
/* Demangled: vtable for mialgo::MiaNodeHdr */
extern void* _ZTVN6mialgo10MiaNodeHdrE;

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeAltekDistortion::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo22MiaNodeAltekDistortion4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo14QAltekDepurpleC1Ev */
/* Demangled: mialgo::QAltekDepurple::QAltekDepurple() */
int _ZN6mialgo14QAltekDepurpleC1Ev(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN */
/* Demangled: mialgo::MiaNodeDePurple::PrepareImage(mialgo::_MiImageList*, __tag_ASVL_OFFSCREEN&) */
int _ZN6mialgo15MiaNodeDePurple12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE15__emplace_multiIJRKNS_4pairIKjS6_EEEEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long> std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> > > >::__emplace_multi<std::__1::pair<unsigned int const, android::sp<mialgo::MiaImage> > const&>(std::__1::pair<unsigned int const, android::sp<mialgo::MiaImage> > const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE15__emplace_multiIJRKNS_4pairIKjS6_EEEEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_(void);

/* Symbol: _ZTTN6mialgo13MiaImageQueueE */
/* Demangled: VTT for mialgo::MiaImageQueue */
extern void* _ZTTN6mialgo13MiaImageQueueE;

/* Symbol: _ZN6mialgo14SkinBeautifier17processYUVArcsoftEPNS_13MiImageBufferES2_ */
/* Demangled: mialgo::SkinBeautifier::processYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
int _ZN6mialgo14SkinBeautifier17processYUVArcsoftEPNS_13MiImageBufferES2_(void);

/* Symbol: _ZN6mialgo10MiaSessionD2Ev */
/* Demangled: mialgo::MiaSession::~MiaSession() */
int _ZN6mialgo10MiaSessionD2Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
int _ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD1Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo13MiaNodeSwFlipD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
int _ZTv0_n24_N6mialgo13MiaNodeSwFlipD1Ev(void);

/* Symbol: _ZN6mialgo14SurfaceWrapperC2EP13ANativeWindowNS_11SurfaceTypeE */
/* Demangled: mialgo::SurfaceWrapper::SurfaceWrapper(ANativeWindow*, mialgo::SurfaceType) */
int _ZN6mialgo14SurfaceWrapperC2EP13ANativeWindowNS_11SurfaceTypeE(void);

/* Symbol: _ZTVN6mialgo7MiaNodeE */
/* Demangled: vtable for mialgo::MiaNode */
extern void* _ZTVN6mialgo7MiaNodeE;

/* Symbol: _ZN6mialgo14QAltekDepurpleD0Ev */
/* Demangled: mialgo::QAltekDepurple::~QAltekDepurple() */
int _ZN6mialgo14QAltekDepurpleD0Ev(void);

/* Symbol: _ZN6mialgo10ArcsoftHdrC1Ev */
/* Demangled: mialgo::ArcsoftHdr::ArcsoftHdr() */
int _ZN6mialgo10ArcsoftHdrC1Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo15MiaNodeDePurpleD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
int _ZTv0_n24_N6mialgo15MiaNodeDePurpleD1Ev(void);

/* Symbol: _ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_Phjiljfi */
/* Demangled: mialgo::MiBokehMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned char*, unsigned int, int, long, unsigned int, float, int) */
int _ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_Phjiljfi(void);

/* Symbol: _ZN6mialgo10MiaSession15onMessageComingENS_15mia_node_type_tENS_12mia_node_msgEPv */
/* Demangled: mialgo::MiaSession::onMessageComing(mialgo::mia_node_type_t, mialgo::mia_node_msg, void*) */
int _ZN6mialgo10MiaSession15onMessageComingENS_15mia_node_type_tENS_12mia_node_msgEPv(void);

/* Symbol: _ZN7android2spIN6mialgo8MiaImageEED2Ev */
/* Demangled: android::sp<mialgo::MiaImage>::~sp() */
int _ZN7android2spIN6mialgo8MiaImageEED2Ev(void);

/* Symbol: _ZN6mialgo7MiaNode8findNodeERN7android4ListINS1_2spIS0_EEEENS_15mia_node_type_tE */
/* Demangled: mialgo::MiaNode::findNode(android::List<android::sp<mialgo::MiaNode> >&, mialgo::mia_node_type_t) */
int _ZN6mialgo7MiaNode8findNodeERN7android4ListINS1_2spIS0_EEEENS_15mia_node_type_tE(void);

/* Symbol: _ZTTN6mialgo7MiaNodeE */
/* Demangled: VTT for mialgo::MiaNode */
extern void* _ZTTN6mialgo7MiaNodeE;

/* Symbol: _ZN6mialgo14SkinBeautifier12setImgOrientEi */
/* Demangled: mialgo::SkinBeautifier::setImgOrient(int) */
int _ZN6mialgo14SkinBeautifier12setImgOrientEi(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier12processImageEPv */
/* Demangled: mialgo::MiaNodeSkinBeautifier::processImage(void*) */
int _ZN6mialgo21MiaNodeSkinBeautifier12processImageEPv(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeAltekDistortion::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo22MiaNodeAltekDistortion12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion13ProcessBufferEPNS_12_MiImageListES2_Pv */
/* Demangled: mialgo::MiaNodeAltekDistortion::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
int _ZN6mialgo22MiaNodeAltekDistortion13ProcessBufferEPNS_12_MiImageListES2_Pv(void);

/* Symbol: _ZTVN6mialgo13MiaNodeSwFlipE */
/* Demangled: vtable for mialgo::MiaNodeSwFlip */
extern void* _ZTVN6mialgo13MiaNodeSwFlipE;

/* Symbol: _ZN6mialgo14SurfaceWrapper13dequeueBufferEv */
/* Demangled: mialgo::SurfaceWrapper::dequeueBuffer() */
int _ZN6mialgo14SurfaceWrapper13dequeueBufferEv(void);

/* Symbol: _ZN6mialgo7MiaUtil12MiFreeBufferEPNS_13MiImageBufferE */
/* Demangled: mialgo::MiaUtil::MiFreeBuffer(mialgo::MiImageBuffer*) */
int _ZN6mialgo7MiaUtil12MiFreeBufferEPNS_13MiImageBufferE(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeSkinBeautifier::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo21MiaNodeSkinBeautifier10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortionD2Ev */
/* Demangled: mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
int _ZN6mialgo22MiaNodeAltekDistortionD2Ev(void);

/* Symbol: _ZN6mialgo16MiaBufferManager7DestroyEv */
/* Demangled: mialgo::MiaBufferManager::Destroy() */
int _ZN6mialgo16MiaBufferManager7DestroyEv(void);

/* Symbol: _ZN6mialgo7MiaUtil12MiCopyBufferEPNS_13MiImageBufferES2_ */
/* Demangled: mialgo::MiaUtil::MiCopyBuffer(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
int _ZN6mialgo7MiaUtil12MiCopyBufferEPNS_13MiImageBufferES2_(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegmentC1Ev */
/* Demangled: mialgo::MiaNodeMiSegment::MiaNodeMiSegment() */
int _ZN6mialgo16MiaNodeMiSegmentC1Ev(void);

/* Symbol: _ZN6mialgo13MetadataUtils11getInstanceEv */
/* Demangled: mialgo::MetadataUtils::getInstance() */
int _ZN6mialgo13MetadataUtils11getInstanceEv(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpyC2Ev */
/* Demangled: mialgo::MiaNodeMemcpy::MiaNodeMemcpy() */
int _ZN6mialgo13MiaNodeMemcpyC2Ev(void);

/* Symbol: _ZN6mialgo10ArcsoftHdrD0Ev */
/* Demangled: mialgo::ArcsoftHdr::~ArcsoftHdr() */
int _ZN6mialgo10ArcsoftHdrD0Ev(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeMiFragment::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo17MiaNodeMiFragment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlip6DeInitEv */
/* Demangled: mialgo::MiaNodeSwFlip::DeInit() */
int _ZN6mialgo13MiaNodeSwFlip6DeInitEv(void);

/* Symbol: _ZN6mialgo7MiaUtil13dumpMemToFileEPcS1_j */
/* Demangled: mialgo::MiaUtil::dumpMemToFile(char*, char*, unsigned int) */
int _ZN6mialgo7MiaUtil13dumpMemToFileEPcS1_j(void);

/* Symbol: _ZTv0_n24_N6mialgo16MiaNodeMiSegmentD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
int _ZTv0_n24_N6mialgo16MiaNodeMiSegmentD1Ev(void);

/* Symbol: _ZTTN6mialgo22MiaNodeAltekDistortionE */
/* Demangled: VTT for mialgo::MiaNodeAltekDistortion */
extern void* _ZTTN6mialgo22MiaNodeAltekDistortionE;

/* Symbol: _ZN6mialgo13MiaNodeSwFlip12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeSwFlip::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo13MiaNodeSwFlip12dequeueImageENS_11mia_block_tE(void);

/* Symbol: MIAFlush */
/* Demangled: MIAFlush */
int MIAFlush(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6mialgo7MiaUtil10calcOffsetENS_9FrameInfoEPNS_18mia_padding_info_tEPNS_21MiaFrame_len_offset_tE */
/* Demangled: mialgo::MiaUtil::calcOffset(mialgo::FrameInfo, mialgo::mia_padding_info_t*, mialgo::MiaFrame_len_offset_t*) */
int _ZN6mialgo7MiaUtil10calcOffsetENS_9FrameInfoEPNS_18mia_padding_info_tEPNS_21MiaFrame_len_offset_tE(void);

/* Symbol: _ZN6mialgo14QAltekDepurple12loadResourceEiii */
/* Demangled: mialgo::QAltekDepurple::loadResource(int, int, int) */
int _ZN6mialgo14QAltekDepurple12loadResourceEiii(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokehC1Ev */
/* Demangled: mialgo::MiaNodeMiBokeh::MiaNodeMiBokeh() */
int _ZN6mialgo14MiaNodeMiBokehC1Ev(void);

/* Symbol: _ZN6mialgo14SurfaceWrapperD2Ev */
/* Demangled: mialgo::SurfaceWrapper::~SurfaceWrapper() */
int _ZN6mialgo14SurfaceWrapperD2Ev(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpyD1Ev */
/* Demangled: mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
int _ZN6mialgo13MiaNodeMemcpyD1Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo16MiaNodeVisidonSrD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
int _ZTv0_n24_N6mialgo16MiaNodeVisidonSrD0Ev(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeDePurple::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo15MiaNodeDePurple12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo13MiSegmentMiuiC1Ev */
/* Demangled: mialgo::MiSegmentMiui::MiSegmentMiui() */
int _ZN6mialgo13MiSegmentMiuiC1Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegmentD0Ev */
/* Demangled: mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
int _ZN6mialgo16MiaNodeMiSegmentD0Ev(void);

/* Symbol: _ZN6mialgo17get_device_regionEv */
/* Demangled: mialgo::get_device_region() */
int _ZN6mialgo17get_device_regionEv(void);

/* Symbol: _ZN6mialgo14SkinBeautifier10dumpBufferEPNS_13MiImageBufferEPKcS4_Rib */
/* Demangled: mialgo::SkinBeautifier::dumpBuffer(mialgo::MiImageBuffer*, char const*, char const*, int&, bool) */
int _ZN6mialgo14SkinBeautifier10dumpBufferEPNS_13MiImageBufferEPKcS4_Rib(void);

/* Symbol: _ZN6mialgo10MiaServiceD2Ev */
/* Demangled: mialgo::MiaService::~MiaService() */
int _ZN6mialgo10MiaServiceD2Ev(void);

/* Symbol: _ZN6mialgo7MiaUtil8LibUnmapEPv */
/* Demangled: mialgo::MiaUtil::LibUnmap(void*) */
int _ZN6mialgo7MiaUtil8LibUnmapEPv(void);

/* Symbol: _ZN6mialgo10ArcsoftHdr13process_llhdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_ */
/* Demangled: mialgo::ArcsoftHdr::process_llhdr(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::MiImageBuffer*) */
int _ZN6mialgo10ArcsoftHdr13process_llhdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSr4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeVisidonSr::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo16MiaNodeVisidonSr4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh12CheckPersistEv */
/* Demangled: mialgo::MiaNodeMiBokeh::CheckPersist() */
int _ZN6mialgo14MiaNodeMiBokeh12CheckPersistEv(void);

/* Symbol: _ZN6mialgo7MiaUtil10LibGetAddrEPvPKc */
/* Demangled: mialgo::MiaUtil::LibGetAddr(void*, char const*) */
int _ZN6mialgo7MiaUtil10LibGetAddrEPvPKc(void);

/* Symbol: _ZN6mialgo14QAltekDepurple7processEPNS_13MiImageBufferES2_12alCFR_FACE_Tj9alGE_RECT */
/* Demangled: mialgo::QAltekDepurple::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, alCFR_FACE_T, unsigned int, alGE_RECT) */
int _ZN6mialgo14QAltekDepurple7processEPNS_13MiImageBufferES2_12alCFR_FACE_Tj9alGE_RECT(void);

/* Symbol: _ZN6mialgo11MiBokehMiui4initEj */
/* Demangled: mialgo::MiBokehMiui::init(unsigned int) */
int _ZN6mialgo11MiBokehMiui4initEj(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokehD0Ev */
/* Demangled: mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
int _ZN6mialgo14MiaNodeMiBokehD0Ev(void);

/* Symbol: _ZN6mialgo13MiSegmentMiuiD0Ev */
/* Demangled: mialgo::MiSegmentMiui::~MiSegmentMiui() */
int _ZN6mialgo13MiSegmentMiuiD0Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeCaptureBokeh::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo19MiaNodeCaptureBokeh12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN6mialgo10MiaSession14onResultComingENS_15mia_node_type_tEmPv */
/* Demangled: mialgo::MiaSession::onResultComing(mialgo::mia_node_type_t, unsigned long, void*) */
int _ZN6mialgo10MiaSession14onResultComingENS_15mia_node_type_tEmPv(void);

/* Symbol: _ZN6mialgo8MiaImage18unlockOutputBufferEv */
/* Demangled: mialgo::MiaImage::unlockOutputBuffer() */
int _ZN6mialgo8MiaImage18unlockOutputBufferEv(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDCC1Ev */
/* Demangled: mialgo::AltekCaptureLDC::AltekCaptureLDC() */
int _ZN6mialgo15AltekCaptureLDCC1Ev(void);

/* Symbol: _ZNK7android6VectorIPN6mialgo10MiaSessionEE10do_destroyEPvm */
/* Demangled: android::Vector<mialgo::MiaSession*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIPN6mialgo10MiaSessionEE10do_destroyEPvm(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpy6DeInitEv */
/* Demangled: mialgo::MiaNodeMemcpy::DeInit() */
int _ZN6mialgo13MiaNodeMemcpy6DeInitEv(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier18updateBeautyParamsEPv */
/* Demangled: mialgo::MiaNodeSkinBeautifier::updateBeautyParams(void*) */
int _ZN6mialgo21MiaNodeSkinBeautifier18updateBeautyParamsEPv(void);

/* Symbol: _ZN6mialgo10MiaSession15pruneImageQueueEv */
/* Demangled: mialgo::MiaSession::pruneImageQueue() */
int _ZN6mialgo10MiaSession15pruneImageQueueEv(void);

/* Symbol: _ZN6mialgo10MiaSession16checkBufferStateEv */
/* Demangled: mialgo::MiaSession::checkBufferState() */
int _ZN6mialgo10MiaSession16checkBufferStateEv(void);

/* Symbol: _ZN6mialgo7MiaNode13setThreadFuncEPFiPvE */
/* Demangled: mialgo::MiaNode::setThreadFunc(int (*)(void*)) */
int _ZN6mialgo7MiaNode13setThreadFuncEPFiPvE(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh6DeInitEv */
/* Demangled: mialgo::MiaNodeMiBokeh::DeInit() */
int _ZN6mialgo14MiaNodeMiBokeh6DeInitEv(void);

/* Symbol: _ZN6mialgo10MiaService4initENS_13MiaMetaUtilCbEPNS_13MiaInitParamsE */
/* Demangled: mialgo::MiaService::init(mialgo::MiaMetaUtilCb, mialgo::MiaInitParams*) */
int _ZN6mialgo10MiaService4initENS_13MiaMetaUtilCbEPNS_13MiaInitParamsE(void);

/* Symbol: _ZN6mialgo10MiaSessionC2EPNS_13SessionOutputE */
/* Demangled: mialgo::MiaSession::MiaSession(mialgo::SessionOutput*) */
int _ZN6mialgo10MiaSessionC2EPNS_13SessionOutputE(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurpleC2Ev */
/* Demangled: mialgo::MiaNodeDePurple::MiaNodeDePurple() */
int _ZN6mialgo15MiaNodeDePurpleC2Ev(void);

/* Symbol: _ZN6mialgo11readASDinfoEi */
/* Demangled: mialgo::readASDinfo(int) */
int _ZN6mialgo11readASDinfoEi(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDCD0Ev */
/* Demangled: mialgo::AltekCaptureLDC::~AltekCaptureLDC() */
int _ZN6mialgo15AltekCaptureLDCD0Ev(void);

/* Symbol: _ZN6mialgo14MiFragmentMiui14initMiFragmentEj */
/* Demangled: mialgo::MiFragmentMiui::initMiFragment(unsigned int) */
int _ZN6mialgo14MiFragmentMiui14initMiFragmentEj(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokehD2Ev */
/* Demangled: mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
int _ZN6mialgo19MiaNodeCaptureBokehD2Ev(void);

/* Symbol: MIADeinit */
/* Demangled: MIADeinit */
int MIADeinit(void);

/* Symbol: _ZTVN6mialgo10QVisidonSRE */
/* Demangled: vtable for mialgo::QVisidonSR */
extern void* _ZTVN6mialgo10QVisidonSRE;

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeMiBokeh::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo14MiaNodeMiBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZTCN6mialgo13MiaNodeSwFlipE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeSwFlip */
extern void* _ZTCN6mialgo13MiaNodeSwFlipE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo22g_beautyVendorTagArrayE */
/* Demangled: mialgo::g_beautyVendorTagArray */
extern void* _ZN6mialgo22g_beautyVendorTagArrayE;

/* Symbol: _ZN6mialgo13MiaImageQueue16pollImageOnStateENS_17mia_image_state_tENS_11mia_block_tES1_PFbRN7android2spINS_8MiaImageEEES7_E */
/* Demangled: mialgo::MiaImageQueue::pollImageOnState(mialgo::mia_image_state_t, mialgo::mia_block_t, mialgo::mia_image_state_t, bool (*)(android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&)) */
int _ZN6mialgo13MiaImageQueue16pollImageOnStateENS_17mia_image_state_tENS_11mia_block_tES1_PFbRN7android2spINS_8MiaImageEEES7_E(void);

/* Symbol: _ZTVN6mialgo13MiaNodeMemcpyE */
/* Demangled: vtable for mialgo::MiaNodeMemcpy */
extern void* _ZTVN6mialgo13MiaNodeMemcpyE;

/* Symbol: _ZTv0_n24_N6mialgo10MiaNodeHdrD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeHdr::~MiaNodeHdr() */
int _ZTv0_n24_N6mialgo10MiaNodeHdrD0Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo17MiaNodeMiFragmentD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
int _ZTv0_n24_N6mialgo17MiaNodeMiFragmentD1Ev(void);

/* Symbol: _ZTTN6mialgo13MiaNodeSwFlipE */
/* Demangled: VTT for mialgo::MiaNodeSwFlip */
extern void* _ZTTN6mialgo13MiaNodeSwFlipE;

/* Symbol: _ZTVN6mialgo21MiaNodeSkinBeautifierE */
/* Demangled: vtable for mialgo::MiaNodeSkinBeautifier */
extern void* _ZTVN6mialgo21MiaNodeSkinBeautifierE;

/* Symbol: _ZTCN6mialgo10MiaNodeHdrE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeHdr */
extern void* _ZTCN6mialgo10MiaNodeHdrE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo15MiaNodeDePurpleD1Ev */
/* Demangled: mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
int _ZN6mialgo15MiaNodeDePurpleD1Ev(void);

/* Symbol: _ZN6mialgo7MiaNodeD2Ev */
/* Demangled: mialgo::MiaNode::~MiaNode() */
int _ZN6mialgo7MiaNodeD2Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
int _ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD1Ev(void);

/* Symbol: _ZN6mialgo16MiaBufferManager15AllocateBuffersEjjjjmm */
/* Demangled: mialgo::MiaBufferManager::AllocateBuffers(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned long) */
int _ZN6mialgo16MiaBufferManager15AllocateBuffersEjjjjmm(void);

/* Symbol: _ZN6mialgo8MiaImageC1EP19ANativeWindowBuffer */
/* Demangled: mialgo::MiaImage::MiaImage(ANativeWindowBuffer*) */
int _ZN6mialgo8MiaImageC1EP19ANativeWindowBuffer(void);

/* Symbol: _ZN6mialgo7MiaUtil17MiAllocCopyBufferEPNS_13MiImageBufferES2_ */
/* Demangled: mialgo::MiaUtil::MiAllocCopyBuffer(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
int _ZN6mialgo7MiaUtil17MiAllocCopyBufferEPNS_13MiImageBufferES2_(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeMiBokeh::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo14MiaNodeMiBokeh4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh14SetFrameParamsEPNS_12_MiImageListES2_S2_S2_S2_Pv */
/* Demangled: mialgo::MiaNodeCaptureBokeh::SetFrameParams(mialgo::_MiImageList*, mialgo::_MiImageList*, mialgo::_MiImageList*, mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
int _ZN6mialgo19MiaNodeCaptureBokeh14SetFrameParamsEPNS_12_MiImageListES2_S2_S2_S2_Pv(void);

/* Symbol: _ZN6mialgo14SkinBeautifierD2Ev */
/* Demangled: mialgo::SkinBeautifier::~SkinBeautifier() */
int _ZN6mialgo14SkinBeautifierD2Ev(void);

/* Symbol: _ZN6mialgo10MiaSessionD1Ev */
/* Demangled: mialgo::MiaSession::~MiaSession() */
int _ZN6mialgo10MiaSessionD1Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
int _ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD0Ev(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC15checkInitLdcLibEjjjjP16alLDC_FPC_DATA_T */
/* Demangled: mialgo::AltekCaptureLDC::checkInitLdcLib(unsigned int, unsigned int, unsigned int, unsigned int, alLDC_FPC_DATA_T*) */
int _ZN6mialgo15AltekCaptureLDC15checkInitLdcLibEjjjjP16alLDC_FPC_DATA_T(void);

/* Symbol: _ZN6mialgo10MiaSession10getGraphIDEPNS_15GraphDescriptorE */
/* Demangled: mialgo::MiaSession::getGraphID(mialgo::GraphDescriptor*) */
int _ZN6mialgo10MiaSession10getGraphIDEPNS_15GraphDescriptorE(void);

/* Symbol: _ZN6mialgo10MiaSession16bindSurface2PortENS_10MiaGraphIdEPNS_14SurfaceWrapperE */
/* Demangled: mialgo::MiaSession::bindSurface2Port(mialgo::MiaGraphId, mialgo::SurfaceWrapper*) */
int _ZN6mialgo10MiaSession16bindSurface2PortENS_10MiaGraphIdEPNS_14SurfaceWrapperE(void);

/* Symbol: _ZN6mialgo16MiaBufferManager17AllocateOneBufferEjjjmmPPvPj */
/* Demangled: mialgo::MiaBufferManager::AllocateOneBuffer(unsigned int, unsigned int, unsigned int, unsigned long, unsigned long, void**, unsigned int*) */
int _ZN6mialgo16MiaBufferManager17AllocateOneBufferEjjjmmPPvPj(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortionC2Ev */
/* Demangled: mialgo::MiaNodeAltekDistortion::MiaNodeAltekDistortion() */
int _ZN6mialgo22MiaNodeAltekDistortionC2Ev(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeDePurple::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo15MiaNodeDePurple10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZTv0_n24_N6mialgo13MiaNodeSwFlipD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
int _ZTv0_n24_N6mialgo13MiaNodeSwFlipD0Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeCaptureBokeh::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo19MiaNodeCaptureBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo13MiaImageQueue9pollImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaImageQueue::pollImage(mialgo::mia_block_t) */
int _ZN6mialgo13MiaImageQueue9pollImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE */
/* Demangled: mialgo::setOffScreen(__tag_ASVL_OFFSCREEN*, mialgo::MiImageBuffer*) */
int _ZN6mialgo12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment7processEPNS_12_MiImageListES2_ */
/* Demangled: mialgo::MiaNodeMiFragment::process(mialgo::_MiImageList*, mialgo::_MiImageList*) */
int _ZN6mialgo17MiaNodeMiFragment7processEPNS_12_MiImageListES2_(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh6DeInitEv */
/* Demangled: mialgo::MiaNodeCaptureBokeh::DeInit() */
int _ZN6mialgo19MiaNodeCaptureBokeh6DeInitEv(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier6DeInitEv */
/* Demangled: mialgo::MiaNodeSkinBeautifier::DeInit() */
int _ZN6mialgo21MiaNodeSkinBeautifier6DeInitEv(void);

/* Symbol: _ZTv0_n24_N6mialgo15MiaNodeDePurpleD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
int _ZTv0_n24_N6mialgo15MiaNodeDePurpleD0Ev(void);

/* Symbol: _ZN6mialgo7MiaUtil9CopyImageEPNS_12_MiImageListES2_ */
/* Demangled: mialgo::MiaUtil::CopyImage(mialgo::_MiImageList*, mialgo::_MiImageList*) */
int _ZN6mialgo7MiaUtil9CopyImageEPNS_12_MiImageListES2_(void);

/* Symbol: _ZN6mialgo10QVisidonSRD2Ev */
/* Demangled: mialgo::QVisidonSR::~QVisidonSR() */
int _ZN6mialgo10QVisidonSRD2Ev(void);

/* Symbol: _ZN6mialgo14QAltekDepurple4initEjjiii */
/* Demangled: mialgo::QAltekDepurple::init(unsigned int, unsigned int, int, int, int) */
int _ZN6mialgo14QAltekDepurple4initEjjiii(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: MIACreateSession */
/* Demangled: MIACreateSession */
int MIACreateSession(void);

/* Symbol: _ZN6mialgo10QVisidonSR7processEPNS_13MiImageBufferES2_i7_VDRectiib */
/* Demangled: mialgo::QVisidonSR::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, int, _VDRect, int, int, bool) */
int _ZN6mialgo10QVisidonSR7processEPNS_13MiImageBufferES2_i7_VDRectiib(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortionD1Ev */
/* Demangled: mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
int _ZN6mialgo22MiaNodeAltekDistortionD1Ev(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC17m_initParamHeightE */
/* Demangled: mialgo::AltekCaptureLDC::m_initParamHeight */
extern void* _ZN6mialgo15AltekCaptureLDC17m_initParamHeightE;

/* Symbol: _ZTVN6mialgo14SkinBeautifierE */
/* Demangled: vtable for mialgo::SkinBeautifier */
extern void* _ZTVN6mialgo14SkinBeautifierE;

/* Symbol: _ZN6mialgo7MiaUtil9VSNPrintFEPcmPKcSt9__va_list */
/* Demangled: mialgo::MiaUtil::VSNPrintF(char*, unsigned long, char const*, std::__va_list) */
int _ZN6mialgo7MiaUtil9VSNPrintFEPcmPKcSt9__va_list(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifierD2Ev */
/* Demangled: mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
int _ZN6mialgo21MiaNodeSkinBeautifierD2Ev(void);

/* Symbol: _ZN6mialgo11MiBokehMiuiD2Ev */
/* Demangled: mialgo::MiBokehMiui::~MiBokehMiui() */
int _ZN6mialgo11MiBokehMiuiD2Ev(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpyC1Ev */
/* Demangled: mialgo::MiaNodeMemcpy::MiaNodeMemcpy() */
int _ZN6mialgo13MiaNodeMemcpyC1Ev(void);

/* Symbol: _ZN6mialgo7MiaNode8linkNodeERN7android2spIS0_EE */
/* Demangled: mialgo::MiaNode::linkNode(android::sp<mialgo::MiaNode>&) */
int _ZN6mialgo7MiaNode8linkNodeERN7android2spIS0_EE(void);

/* Symbol: _ZN6mialgo8MiaImageD2Ev */
/* Demangled: mialgo::MiaImage::~MiaImage() */
int _ZN6mialgo8MiaImageD2Ev(void);

/* Symbol: _ZN6mialgo14SkinBeautifier17smoothParamUpdateEii */
/* Demangled: mialgo::SkinBeautifier::smoothParamUpdate(int, int) */
int _ZN6mialgo14SkinBeautifier17smoothParamUpdateEii(void);

/* Symbol: _ZTv0_n24_N6mialgo16MiaNodeMiSegmentD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
int _ZTv0_n24_N6mialgo16MiaNodeMiSegmentD0Ev(void);

/* Symbol: _ZN6mialgo14SkinBeautifier4initEi */
/* Demangled: mialgo::SkinBeautifier::init(int) */
int _ZN6mialgo14SkinBeautifier4initEi(void);

/* Symbol: _ZN6mialgo10MiaServiceC2Ev */
/* Demangled: mialgo::MiaService::MiaService() */
int _ZN6mialgo10MiaServiceC2Ev(void);

/* Symbol: _ZTCN6mialgo21MiaNodeSkinBeautifierE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeSkinBeautifier */
extern void* _ZTCN6mialgo21MiaNodeSkinBeautifierE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo10ArcsoftHdr7ProcessEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE */
/* Demangled: mialgo::ArcsoftHdr::Process(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::MiImageBuffer*, mialgo::arc_hdr_output_meta_t*) */
int _ZN6mialgo10ArcsoftHdr7ProcessEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE(void);

/* Symbol: _ZN6mialgo10ArcsoftHdr11process_hdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE */
/* Demangled: mialgo::ArcsoftHdr::process_hdr(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::MiImageBuffer*, mialgo::arc_hdr_output_meta_t*) */
int _ZN6mialgo10ArcsoftHdr11process_hdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_S5_S5_ */
/* Demangled: mialgo::MiaNodeCaptureBokeh::ProcessBuffer(android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&) */
int _ZN6mialgo19MiaNodeCaptureBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_S5_S5_(void);

/* Symbol: _ZN6mialgo10MiaSession13acquireBufferENS_15mia_node_type_tENS_11mia_port_idEbb */
/* Demangled: mialgo::MiaSession::acquireBuffer(mialgo::mia_node_type_t, mialgo::mia_port_id, bool, bool) */
int _ZN6mialgo10MiaSession13acquireBufferENS_15mia_node_type_tENS_11mia_port_idEbb(void);

/* Symbol: _ZN6mialgo7MiaUtil14getAvailMemoryEv */
/* Demangled: mialgo::MiaUtil::getAvailMemory() */
int _ZN6mialgo7MiaUtil14getAvailMemoryEv(void);

/* Symbol: _ZN6mialgo8MiaImageC1EPNS_8MiaFrameE */
/* Demangled: mialgo::MiaImage::MiaImage(mialgo::MiaFrame*) */
int _ZN6mialgo8MiaImageC1EPNS_8MiaFrameE(void);

/* Symbol: _ZTVN7android4ListINS_2spIN6mialgo8MiaImageEEEEE */
/* Demangled: vtable for android::List<android::sp<mialgo::MiaImage> > */
extern void* _ZTVN7android4ListINS_2spIN6mialgo8MiaImageEEEEE;

/* Symbol: _ZN6mialgo13MiaImageQueue17eraseImageOnStateENS_17mia_image_state_tE */
/* Demangled: mialgo::MiaImageQueue::eraseImageOnState(mialgo::mia_image_state_t) */
int _ZN6mialgo13MiaImageQueue17eraseImageOnStateENS_17mia_image_state_tE(void);

/* Symbol: _ZN6mialgo13MetadataUtils11setTagValueEPvjS1_m */
/* Demangled: mialgo::MetadataUtils::setTagValue(void*, unsigned int, void*, unsigned long) */
int _ZN6mialgo13MetadataUtils11setTagValueEPvjS1_m(void);

/* Symbol: _ZN6mialgo10MiaSession10createNodeENS_15mia_node_type_tE */
/* Demangled: mialgo::MiaSession::createNode(mialgo::mia_node_type_t) */
int _ZN6mialgo10MiaSession10createNodeENS_15mia_node_type_tE(void);

/* Symbol: _ZN6mialgo14SurfaceWrapperD1Ev */
/* Demangled: mialgo::SurfaceWrapper::~SurfaceWrapper() */
int _ZN6mialgo14SurfaceWrapperD1Ev(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpyD0Ev */
/* Demangled: mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
int _ZN6mialgo13MiaNodeMemcpyD0Ev(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment13ProcessBufferEPNS_12_MiImageListES2_Pv */
/* Demangled: mialgo::MiaNodeMiFragment::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
int _ZN6mialgo17MiaNodeMiFragment13ProcessBufferEPNS_12_MiImageListES2_Pv(void);

/* Symbol: _ZN6mialgo10MiaSession7releaseEPNS_8MiaFrameE */
/* Demangled: mialgo::MiaSession::release(mialgo::MiaFrame*) */
int _ZN6mialgo10MiaSession7releaseEPNS_8MiaFrameE(void);

/* Symbol: _ZTCN6mialgo15MiaNodeDePurpleE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeDePurple */
extern void* _ZTCN6mialgo15MiaNodeDePurpleE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo10MiaServiceD1Ev */
/* Demangled: mialgo::MiaService::~MiaService() */
int _ZN6mialgo10MiaServiceD1Ev(void);

/* Symbol: _ZTTN6mialgo13MiaNodeMemcpyE */
/* Demangled: VTT for mialgo::MiaNodeMemcpy */
extern void* _ZTTN6mialgo13MiaNodeMemcpyE;

/* Symbol: _ZN6mialgo16MiaBufferManager14FreeAllBuffersEv */
/* Demangled: mialgo::MiaBufferManager::FreeAllBuffers() */
int _ZN6mialgo16MiaBufferManager14FreeAllBuffersEv(void);

/* Symbol: _ZTVN6mialgo15MiaNodeDePurpleE */
/* Demangled: vtable for mialgo::MiaNodeDePurple */
extern void* _ZTVN6mialgo15MiaNodeDePurpleE;

/* Symbol: _ZTVN6mialgo14QAltekDepurpleE */
/* Demangled: vtable for mialgo::QAltekDepurple */
extern void* _ZTVN6mialgo14QAltekDepurpleE;

/* Symbol: _ZN6mialgo13MetadataUtils20allocateCopyMetadataEPv */
/* Demangled: mialgo::MetadataUtils::allocateCopyMetadata(void*) */
int _ZN6mialgo13MetadataUtils20allocateCopyMetadataEPv(void);

/* Symbol: _ZN6mialgo16MiaBufferManager10InitializeEPNS_23BufferManagerCreateDataE */
/* Demangled: mialgo::MiaBufferManager::Initialize(mialgo::BufferManagerCreateData*) */
int _ZN6mialgo16MiaBufferManager10InitializeEPNS_23BufferManagerCreateDataE(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokehC2Ev */
/* Demangled: mialgo::MiaNodeCaptureBokeh::MiaNodeCaptureBokeh() */
int _ZN6mialgo19MiaNodeCaptureBokehC2Ev(void);

/* Symbol: _ZN6mialgo10MiaSession11getNodeNameENS_15mia_node_type_tE */
/* Demangled: mialgo::MiaSession::getNodeName(mialgo::mia_node_type_t) */
int _ZN6mialgo10MiaSession11getNodeNameENS_15mia_node_type_tE(void);

/* Symbol: _ZN6mialgo10MiaSession13releaseBufferEN7android2spINS_8MiaImageEEE */
/* Demangled: mialgo::MiaSession::releaseBuffer(android::sp<mialgo::MiaImage>) */
int _ZN6mialgo10MiaSession13releaseBufferEN7android2spINS_8MiaImageEEE(void);

/* Symbol: _ZThn8_N6mialgo10MiaSession7releaseEPNS_8MiaFrameE */
/* Demangled: non-virtual thunk to mialgo::MiaSession::release(mialgo::MiaFrame*) */
int _ZThn8_N6mialgo10MiaSession7releaseEPNS_8MiaFrameE(void);

/* Symbol: _ZThn8_N6mialgo10MiaSessionD1Ev */
/* Demangled: non-virtual thunk to mialgo::MiaSession::~MiaSession() */
int _ZThn8_N6mialgo10MiaSessionD1Ev(void);

/* Symbol: _ZN6mialgo7MiaNode17getInputBufferNumEv */
/* Demangled: mialgo::MiaNode::getInputBufferNum() */
int _ZN6mialgo7MiaNode17getInputBufferNumEv(void);

/* Symbol: _ZN6mialgo13MiaImageQueue19findLocationOnImageEN7android2spINS_8MiaImageEEE */
/* Demangled: mialgo::MiaImageQueue::findLocationOnImage(android::sp<mialgo::MiaImage>) */
int _ZN6mialgo13MiaImageQueue19findLocationOnImageEN7android2spINS_8MiaImageEEE(void);

/* Symbol: _ZN6mialgo13MiSegmentMiui13initMiSegmentEj */
/* Demangled: mialgo::MiSegmentMiui::initMiSegment(unsigned int) */
int _ZN6mialgo13MiSegmentMiui13initMiSegmentEj(void);

/* Symbol: _ZN6mialgo14MiFragmentMiui7processEPNS_13MiImageBufferES2_ji */
/* Demangled: mialgo::MiFragmentMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, int) */
int _ZN6mialgo14MiFragmentMiui7processEPNS_13MiImageBufferES2_ji(void);

/* Symbol: _ZTTN6mialgo10MiaServiceE */
/* Demangled: VTT for mialgo::MiaService */
extern void* _ZTTN6mialgo10MiaServiceE;

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortion10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeAltekDistortion::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo22MiaNodeAltekDistortion10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo10MiaService11getInstanceEv */
/* Demangled: mialgo::MiaService::getInstance() */
int _ZN6mialgo10MiaService11getInstanceEv(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurpleC1Ev */
/* Demangled: mialgo::MiaNodeDePurple::MiaNodeDePurple() */
int _ZN6mialgo15MiaNodeDePurpleC1Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKc */
/* Demangled: mialgo::MiaNodeMiBokeh::DumpYUVData(__tag_ASVL_OFFSCREEN*, unsigned int, char const*) */
int _ZN6mialgo14MiaNodeMiBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKc(void);

/* Symbol: _ZN6mialgo10MiaSession10buildGraphEPNS_15GraphDescriptorE */
/* Demangled: mialgo::MiaSession::buildGraph(mialgo::GraphDescriptor*) */
int _ZN6mialgo10MiaSession10buildGraphEPNS_15GraphDescriptorE(void);

/* Symbol: _ZN6mialgo14SurfaceWrapper5setupEv */
/* Demangled: mialgo::SurfaceWrapper::setup() */
int _ZN6mialgo14SurfaceWrapper5setupEv(void);

/* Symbol: _ZTv0_n24_N6mialgo13MiaNodeMemcpyD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
int _ZTv0_n24_N6mialgo13MiaNodeMemcpyD1Ev(void);

/* Symbol: _ZN6mialgo10ArcsoftHdr4initEv */
/* Demangled: mialgo::ArcsoftHdr::init() */
int _ZN6mialgo10ArcsoftHdr4initEv(void);

/* Symbol: _ZTVN6mialgo22MiaNodeAltekDistortionE */
/* Demangled: vtable for mialgo::MiaNodeAltekDistortion */
extern void* _ZTVN6mialgo22MiaNodeAltekDistortionE;

/* Symbol: _ZN6mialgo15MiaNodeDePurple12processImageEPv */
/* Demangled: mialgo::MiaNodeDePurple::processImage(void*) */
int _ZN6mialgo15MiaNodeDePurple12processImageEPv(void);

/* Symbol: _ZN6mialgo14QAltekDepurple19getCfrCalibationSetEjPPNS_27ALTEK_CFR_CALIBRATION_SET_TE */
/* Demangled: mialgo::QAltekDepurple::getCfrCalibationSet(unsigned int, mialgo::ALTEK_CFR_CALIBRATION_SET_T**) */
int _ZN6mialgo14QAltekDepurple19getCfrCalibationSetEjPPNS_27ALTEK_CFR_CALIBRATION_SET_TE(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_ */
/* Demangled: mialgo::MiaNodeMiBokeh::CopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo14MiaNodeMiBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragmentD2Ev */
/* Demangled: mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
int _ZN6mialgo17MiaNodeMiFragmentD2Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokehD1Ev */
/* Demangled: mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
int _ZN6mialgo19MiaNodeCaptureBokehD1Ev(void);

/* Symbol: _ZN6mialgo13MetadataUtils11getTagValueEPvjPS1_ */
/* Demangled: mialgo::MetadataUtils::getTagValue(void*, unsigned int, void**) */
int _ZN6mialgo13MetadataUtils11getTagValueEPvjPS1_(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpy4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeMemcpy::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo13MiaNodeMemcpy4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeVisidonSr::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo16MiaNodeVisidonSr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZTv0_n24_N6mialgo17MiaNodeMiFragmentD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
int _ZTv0_n24_N6mialgo17MiaNodeMiFragmentD0Ev(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlip12processImageEPv */
/* Demangled: mialgo::MiaNodeSwFlip::processImage(void*) */
int _ZN6mialgo13MiaNodeSwFlip12processImageEPv(void);

/* Symbol: _ZN6mialgo14SkinBeautifierC2Ev */
/* Demangled: mialgo::SkinBeautifier::SkinBeautifier() */
int _ZN6mialgo14SkinBeautifierC2Ev(void);

/* Symbol: _ZN6mialgo8MiaImageC2EPNS_8MiaFrameE */
/* Demangled: mialgo::MiaImage::MiaImage(mialgo::MiaFrame*) */
int _ZN6mialgo8MiaImageC2EPNS_8MiaFrameE(void);

/* Symbol: _ZN6mialgo7MiaUtil11MiCopyPlaneEPhS1_iiii */
/* Demangled: mialgo::MiaUtil::MiCopyPlane(unsigned char*, unsigned char*, int, int, int, int) */
int _ZN6mialgo7MiaUtil11MiCopyPlaneEPhS1_iiii(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurpleD0Ev */
/* Demangled: mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
int _ZN6mialgo15MiaNodeDePurpleD0Ev(void);

/* Symbol: _ZTCN6mialgo17MiaNodeMiFragmentE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMiFragment */
extern void* _ZTCN6mialgo17MiaNodeMiFragmentE0_NS_7MiaNodeE;

/* Symbol: _ZTv0_n24_N6mialgo10MiaSessionD1Ev */
/* Demangled: virtual thunk to mialgo::MiaSession::~MiaSession() */
int _ZTv0_n24_N6mialgo10MiaSessionD1Ev(void);

/* Symbol: _ZN6mialgo7MiaNodeD1Ev */
/* Demangled: mialgo::MiaNode::~MiaNode() */
int _ZN6mialgo7MiaNodeD1Ev(void);

/* Symbol: _ZTVN7android4ListINS_2spIN6mialgo7MiaNodeEEEEE */
/* Demangled: vtable for android::List<android::sp<mialgo::MiaNode> > */
extern void* _ZTVN7android4ListINS_2spIN6mialgo7MiaNodeEEEEE;

/* Symbol: _ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
int _ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD0Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN */
/* Demangled: mialgo::MiaNodeMiBokeh::ReleaseImage(__tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo14MiaNodeMiBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN(void);

/* Symbol: _ZTTN6mialgo17MiaNodeMiFragmentE */
/* Demangled: VTT for mialgo::MiaNodeMiFragment */
extern void* _ZTTN6mialgo17MiaNodeMiFragmentE;

/* Symbol: _ZN6mialgo13MiaNodeSwFlip13ProcessBufferEPNS_12_MiImageListES2_Pvii */
/* Demangled: mialgo::MiaNodeSwFlip::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*, int, int) */
int _ZN6mialgo13MiaNodeSwFlip13ProcessBufferEPNS_12_MiImageListES2_Pvii(void);

/* Symbol: _ZN6mialgo7MiaNode9runThreadEPv */
/* Demangled: mialgo::MiaNode::runThread(void*) */
int _ZN6mialgo7MiaNode9runThreadEPv(void);

/* Symbol: _ZTVN6mialgo8MiaImageE */
/* Demangled: vtable for mialgo::MiaImage */
extern void* _ZTVN6mialgo8MiaImageE;

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeSkinBeautifier::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo21MiaNodeSkinBeautifier12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh10MergeImageEP20__tag_ASVL_OFFSCREENS2_i */
/* Demangled: mialgo::MiaNodeCaptureBokeh::MergeImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, int) */
int _ZN6mialgo19MiaNodeCaptureBokeh10MergeImageEP20__tag_ASVL_OFFSCREENS2_i(void);

/* Symbol: _ZN6mialgo14SkinBeautifier7processEPNS_13MiImageBufferES2_i */
/* Demangled: mialgo::SkinBeautifier::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, int) */
int _ZN6mialgo14SkinBeautifier7processEPNS_13MiImageBufferES2_i(void);

/* Symbol: _ZN6mialgo10MiaNodeHdr6DeInitEv */
/* Demangled: mialgo::MiaNodeHdr::DeInit() */
int _ZN6mialgo10MiaNodeHdr6DeInitEv(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSrD2Ev */
/* Demangled: mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
int _ZN6mialgo16MiaNodeVisidonSrD2Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh27ReadCalibrationDataFromFileEPKcPvj */
/* Demangled: mialgo::MiaNodeCaptureBokeh::ReadCalibrationDataFromFile(char const*, void*, unsigned int) */
int _ZN6mialgo19MiaNodeCaptureBokeh27ReadCalibrationDataFromFileEPKcPvj(void);

/* Symbol: _ZN6mialgo14SkinBeautifier29processVideoCaptureYUVArcsoftEPNS_13MiImageBufferES2_ */
/* Demangled: mialgo::SkinBeautifier::processVideoCaptureYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
int _ZN6mialgo14SkinBeautifier29processVideoCaptureYUVArcsoftEPNS_13MiImageBufferES2_(void);

/* Symbol: _ZN6mialgo14SkinBeautifierD1Ev */
/* Demangled: mialgo::SkinBeautifier::~SkinBeautifier() */
int _ZN6mialgo14SkinBeautifierD1Ev(void);

/* Symbol: MIADestroySession */
/* Demangled: MIADestroySession */
int MIADestroySession(void);

/* Symbol: _ZN6mialgo10MiaSessionD0Ev */
/* Demangled: mialgo::MiaSession::~MiaSession() */
int _ZN6mialgo10MiaSessionD0Ev(void);

/* Symbol: _ZN6mialgo10QVisidonSRC2Ev */
/* Demangled: mialgo::QVisidonSR::QVisidonSR() */
int _ZN6mialgo10QVisidonSRC2Ev(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragment12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeMiFragment::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo17MiaNodeMiFragment12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortionC1Ev */
/* Demangled: mialgo::MiaNodeAltekDistortion::MiaNodeAltekDistortion() */
int _ZN6mialgo22MiaNodeAltekDistortionC1Ev(void);

/* Symbol: _ZTVN6mialgo10MiaServiceE */
/* Demangled: vtable for mialgo::MiaService */
extern void* _ZTVN6mialgo10MiaServiceE;

/* Symbol: _ZN6mialgo10MiaNodeHdr12processImageEPv */
/* Demangled: mialgo::MiaNodeHdr::processImage(void*) */
int _ZN6mialgo10MiaNodeHdr12processImageEPv(void);

/* Symbol: _ZN6mialgo10ArcsoftHdr17ProcessHdrCheckerEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tEPNS_24arc_hdr_checker_result_tE */
/* Demangled: mialgo::ArcsoftHdr::ProcessHdrChecker(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::arc_hdr_checker_result_t*) */
int _ZN6mialgo10ArcsoftHdr17ProcessHdrCheckerEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tEPNS_24arc_hdr_checker_result_tE(void);

/* Symbol: _ZN6mialgo13MiaImageQueue10eraseImageEN7android2spINS_8MiaImageEEE */
/* Demangled: mialgo::MiaImageQueue::eraseImage(android::sp<mialgo::MiaImage>) */
int _ZN6mialgo13MiaImageQueue10eraseImageEN7android2spINS_8MiaImageEEE(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifierC2Ev */
/* Demangled: mialgo::MiaNodeSkinBeautifier::MiaNodeSkinBeautifier() */
int _ZN6mialgo21MiaNodeSkinBeautifierC2Ev(void);

/* Symbol: _ZN6mialgo11MiBokehMiuiC2Ev */
/* Demangled: mialgo::MiBokehMiui::MiBokehMiui() */
int _ZN6mialgo11MiBokehMiuiC2Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh13GetFaceDegreeEi */
/* Demangled: mialgo::MiaNodeCaptureBokeh::GetFaceDegree(int) */
int _ZN6mialgo19MiaNodeCaptureBokeh13GetFaceDegreeEi(void);

/* Symbol: _ZNSt3__13mapIjN7android2spIN6mialgo7MiaNodeEEENS_4lessIjEENS_9allocatorINS_4pairIKjS5_EEEEEixEOj */
/* Demangled: std::__1::map<unsigned int, android::sp<mialgo::MiaNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<mialgo::MiaNode> > > >::operator[](unsigned int&&) */
int _ZNSt3__13mapIjN7android2spIN6mialgo7MiaNodeEEENS_4lessIjEENS_9allocatorINS_4pairIKjS5_EEEEEixEOj(void);

/* Symbol: _ZN6mialgo13MetadataUtilsC2Ev */
/* Demangled: mialgo::MetadataUtils::MetadataUtils() */
int _ZN6mialgo13MetadataUtilsC2Ev(void);

/* Symbol: _ZTVN6mialgo14MiFragmentMiuiE */
/* Demangled: vtable for mialgo::MiFragmentMiui */
extern void* _ZTVN6mialgo14MiFragmentMiuiE;

/* Symbol: _ZN6mialgo10MiaService6deinitEv */
/* Demangled: mialgo::MiaService::deinit() */
int _ZN6mialgo10MiaService6deinitEv(void);

/* Symbol: _ZN6mialgo10QVisidonSRD1Ev */
/* Demangled: mialgo::QVisidonSR::~QVisidonSR() */
int _ZN6mialgo10QVisidonSRD1Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_ */
/* Demangled: mialgo::MiaNodeMiBokeh::AllocCopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo14MiaNodeMiBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_(void);

/* Symbol: _ZN6mialgo10MiaSession11setCallbackEPNS_12MiaSessionCbE */
/* Demangled: mialgo::MiaSession::setCallback(mialgo::MiaSessionCb*) */
int _ZN6mialgo10MiaSession11setCallbackEPNS_12MiaSessionCbE(void);

/* Symbol: _ZN6mialgo8MiaImageC2EP19ANativeWindowBuffer */
/* Demangled: mialgo::MiaImage::MiaImage(ANativeWindowBuffer*) */
int _ZN6mialgo8MiaImageC2EP19ANativeWindowBuffer(void);

/* Symbol: _ZN6mialgo7MiaUtil13MiAllocBufferEPNS_12_MiImageListEiiNS_9MiaFormatE */
/* Demangled: mialgo::MiaUtil::MiAllocBuffer(mialgo::_MiImageList*, int, int, mialgo::MiaFormat) */
int _ZN6mialgo7MiaUtil13MiAllocBufferEPNS_12_MiImageListEiiNS_9MiaFormatE(void);

/* Symbol: _ZN6mialgo10MiaNodeHdr9GetAEInfoEPNS_20arc_hdr_input_meta_tEPv */
/* Demangled: mialgo::MiaNodeHdr::GetAEInfo(mialgo::arc_hdr_input_meta_t*, void*) */
int _ZN6mialgo10MiaNodeHdr9GetAEInfoEPNS_20arc_hdr_input_meta_tEPv(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC4initEjjjji */
/* Demangled: mialgo::AltekCaptureLDC::init(unsigned int, unsigned int, unsigned int, unsigned int, int) */
int _ZN6mialgo15AltekCaptureLDC4initEjjjji(void);

/* Symbol: _ZN6mialgo22MiaNodeAltekDistortionD0Ev */
/* Demangled: mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
int _ZN6mialgo22MiaNodeAltekDistortionD0Ev(void);

/* Symbol: _ZTVN7android6VectorIPN6mialgo10MiaSessionEEE */
/* Demangled: vtable for android::Vector<mialgo::MiaSession*> */
extern void* _ZTVN7android6VectorIPN6mialgo10MiaSessionEEE;

/* Symbol: _ZN6mialgo7MiaNode10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNode::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo7MiaNode10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifierD1Ev */
/* Demangled: mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
int _ZN6mialgo21MiaNodeSkinBeautifierD1Ev(void);

/* Symbol: _ZN6mialgo11MiBokehMiuiD1Ev */
/* Demangled: mialgo::MiBokehMiui::~MiBokehMiui() */
int _ZN6mialgo11MiBokehMiuiD1Ev(void);

/* Symbol: _ZN6mialgo8MiaImageD1Ev */
/* Demangled: mialgo::MiaImage::~MiaImage() */
int _ZN6mialgo8MiaImageD1Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_ */
/* Demangled: mialgo::MiaNodeCaptureBokeh::AllocCopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo19MiaNodeCaptureBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_(void);

/* Symbol: _ZN6mialgo7MiaUtil13MiAllocBufferEPNS_13MiImageBufferEiii */
/* Demangled: mialgo::MiaUtil::MiAllocBuffer(mialgo::MiImageBuffer*, int, int, int) */
int _ZN6mialgo7MiaUtil13MiAllocBufferEPNS_13MiImageBufferEiii(void);

/* Symbol: _ZN6mialgo7MiaUtil13isDumpVisibleEv */
/* Demangled: mialgo::MiaUtil::isDumpVisible() */
int _ZN6mialgo7MiaUtil13isDumpVisibleEv(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeSkinBeautifier::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo21MiaNodeSkinBeautifier4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlipD2Ev */
/* Demangled: mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
int _ZN6mialgo13MiaNodeSwFlipD2Ev(void);

/* Symbol: _ZN7android2spIN6mialgo10MiaServiceEED2Ev */
/* Demangled: android::sp<mialgo::MiaService>::~sp() */
int _ZN7android2spIN6mialgo10MiaServiceEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, mialgo::Task>, std::__1::__tree_node<std::__1::__value_type<int, mialgo::Task>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<int, mialgo::Task>, std::__1::__map_value_compare<int, std::__1::__value_type<int, mialgo::Task>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, mialgo::Task> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6mialgo10MiaServiceC1Ev */
/* Demangled: mialgo::MiaService::MiaService() */
int _ZN6mialgo10MiaServiceC1Ev(void);

/* Symbol: _ZTVN6mialgo10ArcsoftHdrE */
/* Demangled: vtable for mialgo::ArcsoftHdr */
extern void* _ZTVN6mialgo10ArcsoftHdrE;

/* Symbol: _ZN6mialgo14MiFragmentMiuiD2Ev */
/* Demangled: mialgo::MiFragmentMiui::~MiFragmentMiui() */
int _ZN6mialgo14MiFragmentMiuiD2Ev(void);

/* Symbol: MIAInit */
/* Demangled: MIAInit */
int MIAInit(void);

/* Symbol: _ZTTN6mialgo10MiaSessionE */
/* Demangled: VTT for mialgo::MiaSession */
extern void* _ZTTN6mialgo10MiaSessionE;

/* Symbol: _ZN6mialgo16MiaNodeVisidonSr12dequeueImageENS_11mia_block_tE */
/* Demangled: mialgo::MiaNodeVisidonSr::dequeueImage(mialgo::mia_block_t) */
int _ZN6mialgo16MiaNodeVisidonSr12dequeueImageENS_11mia_block_tE(void);

/* Symbol: _ZTTN6mialgo15MiaNodeDePurpleE */
/* Demangled: VTT for mialgo::MiaNodeDePurple */
extern void* _ZTTN6mialgo15MiaNodeDePurpleE;

/* Symbol: _ZN6mialgo14SurfaceWrapper4bindENS_15mia_node_type_tENS_11mia_port_idE */
/* Demangled: mialgo::SurfaceWrapper::bind(mialgo::mia_node_type_t, mialgo::mia_port_id) */
int _ZN6mialgo14SurfaceWrapper4bindENS_15mia_node_type_tENS_11mia_port_idE(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple6DeInitEv */
/* Demangled: mialgo::MiaNodeDePurple::DeInit() */
int _ZN6mialgo15MiaNodeDePurple6DeInitEv(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh9IniEngineEv */
/* Demangled: mialgo::MiaNodeCaptureBokeh::IniEngine() */
int _ZN6mialgo19MiaNodeCaptureBokeh9IniEngineEv(void);

/* Symbol: MIAProcessFrame */
/* Demangled: MIAProcessFrame */
int MIAProcessFrame(void);

/* Symbol: _ZN6mialgo16MiaBufferManager6CreateEPNS_23BufferManagerCreateDataE */
/* Demangled: mialgo::MiaBufferManager::Create(mialgo::BufferManagerCreateData*) */
int _ZN6mialgo16MiaBufferManager6CreateEPNS_23BufferManagerCreateDataE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<ANativeWindowBuffer*, std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::less<ANativeWindowBuffer*>, true>, std::__1::allocator<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEE(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegment4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeMiSegment::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo16MiaNodeMiSegment4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo10MiaService12processFrameEPvPNS_8MiaFrameE */
/* Demangled: mialgo::MiaService::processFrame(void*, mialgo::MiaFrame*) */
int _ZN6mialgo10MiaService12processFrameEPvPNS_8MiaFrameE(void);

/* Symbol: _ZN6mialgo10MiaServiceD0Ev */
/* Demangled: mialgo::MiaService::~MiaService() */
int _ZN6mialgo10MiaServiceD0Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo7MiaNodeD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNode::~MiaNode() */
int _ZTv0_n24_N6mialgo7MiaNodeD1Ev(void);

/* Symbol: _ZN6mialgo7MiaUtil12MiDumpBufferEPNS_13MiImageBufferEPKc */
/* Demangled: mialgo::MiaUtil::MiDumpBuffer(mialgo::MiImageBuffer*, char const*) */
int _ZN6mialgo7MiaUtil12MiDumpBufferEPNS_13MiImageBufferEPKc(void);

/* Symbol: _ZN6mialgo7MiaUtil6now_msEv */
/* Demangled: mialgo::MiaUtil::now_ms() */
int _ZN6mialgo7MiaUtil6now_msEv(void);

/* Symbol: _ZTv0_n24_N6mialgo10MiaServiceD1Ev */
/* Demangled: virtual thunk to mialgo::MiaService::~MiaService() */
int _ZTv0_n24_N6mialgo10MiaServiceD1Ev(void);

/* Symbol: _ZN6mialgo10MiaNodeHdrD2Ev */
/* Demangled: mialgo::MiaNodeHdr::~MiaNodeHdr() */
int _ZN6mialgo10MiaNodeHdrD2Ev(void);

/* Symbol: _ZTv0_n24_N6mialgo14MiaNodeMiBokehD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
int _ZTv0_n24_N6mialgo14MiaNodeMiBokehD1Ev(void);

/* Symbol: _ZN6mialgo10MiaSession5flushEv */
/* Demangled: mialgo::MiaSession::flush() */
int _ZN6mialgo10MiaSession5flushEv(void);

/* Symbol: MI_open_lib */
/* Demangled: MI_open_lib */
int MI_open_lib(void);

/* Symbol: _ZN6mialgo14SurfaceWrapper5matchENS_15mia_node_type_tENS_11mia_port_idE */
/* Demangled: mialgo::SurfaceWrapper::match(mialgo::mia_node_type_t, mialgo::mia_port_id) */
int _ZN6mialgo14SurfaceWrapper5matchENS_15mia_node_type_tENS_11mia_port_idE(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokehC1Ev */
/* Demangled: mialgo::MiaNodeCaptureBokeh::MiaNodeCaptureBokeh() */
int _ZN6mialgo19MiaNodeCaptureBokehC1Ev(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC16m_initParamWidthE */
/* Demangled: mialgo::AltekCaptureLDC::m_initParamWidth */
extern void* _ZN6mialgo15AltekCaptureLDC16m_initParamWidthE;

/* Symbol: _ZN6mialgo17MiaNodeMiFragmentC2Ev */
/* Demangled: mialgo::MiaNodeMiFragment::MiaNodeMiFragment() */
int _ZN6mialgo17MiaNodeMiFragmentC2Ev(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlip10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeSwFlip::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo13MiaNodeSwFlip10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZThn8_N6mialgo10MiaSessionD0Ev */
/* Demangled: non-virtual thunk to mialgo::MiaSession::~MiaSession() */
int _ZThn8_N6mialgo10MiaSessionD0Ev(void);

/* Symbol: _ZTCN6mialgo13MiaNodeMemcpyE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMemcpy */
extern void* _ZTCN6mialgo13MiaNodeMemcpyE0_NS_7MiaNodeE;

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN */
/* Demangled: mialgo::MiaNodeMiBokeh::PrepareImage(mialgo::_MiImageList*, __tag_ASVL_OFFSCREEN&) */
int _ZN6mialgo14MiaNodeMiBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpy10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE */
/* Demangled: mialgo::MiaNodeMemcpy::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
int _ZN6mialgo13MiaNodeMemcpy10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void);

/* Symbol: _ZN6mialgo14QAltekDepurpleD2Ev */
/* Demangled: mialgo::QAltekDepurple::~QAltekDepurple() */
int _ZN6mialgo14QAltekDepurpleD2Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh12processImageEPv */
/* Demangled: mialgo::MiaNodeMiBokeh::processImage(void*) */
int _ZN6mialgo14MiaNodeMiBokeh12processImageEPv(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegment12processImageEPv */
/* Demangled: mialgo::MiaNodeMiSegment::processImage(void*) */
int _ZN6mialgo16MiaNodeMiSegment12processImageEPv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, mialgo::Task>, std::__1::__map_value_compare<int, std::__1::__value_type<int, mialgo::Task>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, mialgo::Task> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, mialgo::Task>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeDePurple::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo15MiaNodeDePurple4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKcx */
/* Demangled: mialgo::MiaNodeCaptureBokeh::DumpYUVData(__tag_ASVL_OFFSCREEN*, unsigned int, char const*, long long) */
int _ZN6mialgo19MiaNodeCaptureBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKcx(void);

/* Symbol: _ZTVN6mialgo10MiaSessionE */
/* Demangled: vtable for mialgo::MiaSession */
extern void* _ZTVN6mialgo10MiaSessionE;

/* Symbol: _ZTv0_n24_N6mialgo13MiaNodeMemcpyD0Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
int _ZTv0_n24_N6mialgo13MiaNodeMemcpyD0Ev(void);

/* Symbol: _Z23allocBufAndReadFromFilePKcPPvPl */
/* Demangled: allocBufAndReadFromFile(char const*, void**, long*) */
int _Z23allocBufAndReadFromFilePKcPPvPl(void);

/* Symbol: _ZN6mialgo17MiaNodeMiFragmentD1Ev */
/* Demangled: mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
int _ZN6mialgo17MiaNodeMiFragmentD1Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokehD0Ev */
/* Demangled: mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
int _ZN6mialgo19MiaNodeCaptureBokehD0Ev(void);

/* Symbol: _ZN6mialgo7MiaUtil12MiDumpBufferEPNS_12_MiImageListEPKc */
/* Demangled: mialgo::MiaUtil::MiDumpBuffer(mialgo::_MiImageList*, char const*) */
int _ZN6mialgo7MiaUtil12MiDumpBufferEPNS_12_MiImageListEPKc(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC16initParamChangedEjjjjP16alLDC_FPC_DATA_T */
/* Demangled: mialgo::AltekCaptureLDC::initParamChanged(unsigned int, unsigned int, unsigned int, unsigned int, alLDC_FPC_DATA_T*) */
int _ZN6mialgo15AltekCaptureLDC16initParamChangedEjjjjP16alLDC_FPC_DATA_T(void);

/* Symbol: _ZN6mialgo15MiaNodeDePurple14SetFrameParamsEPvP12alCFR_FACE_TP9alGE_RECTPj */
/* Demangled: mialgo::MiaNodeDePurple::SetFrameParams(void*, alCFR_FACE_T*, alGE_RECT*, unsigned int*) */
int _ZN6mialgo15MiaNodeDePurple14SetFrameParamsEPvP12alCFR_FACE_TP9alGE_RECTPj(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh12DumpMetadataER19_tag_ARC_DCIR_PARAMl */
/* Demangled: mialgo::MiaNodeCaptureBokeh::DumpMetadata(_tag_ARC_DCIR_PARAM&, long) */
int _ZN6mialgo19MiaNodeCaptureBokeh12DumpMetadataER19_tag_ARC_DCIR_PARAMl(void);

/* Symbol: _ZN6mialgo14SkinBeautifierC1Ev */
/* Demangled: mialgo::SkinBeautifier::SkinBeautifier() */
int _ZN6mialgo14SkinBeautifierC1Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSrC2Ev */
/* Demangled: mialgo::MiaNodeVisidonSr::MiaNodeVisidonSr() */
int _ZN6mialgo16MiaNodeVisidonSrC2Ev(void);

/* Symbol: _ZTCN6mialgo16MiaNodeVisidonSrE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeVisidonSr */
extern void* _ZTCN6mialgo16MiaNodeVisidonSrE0_NS_7MiaNodeE;

/* Symbol: _ZTCN6mialgo16MiaNodeMiSegmentE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMiSegment */
extern void* _ZTCN6mialgo16MiaNodeMiSegmentE0_NS_7MiaNodeE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE14__assign_multiINS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEEEvT_SM_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> > > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE14__assign_multiINS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEEEvT_SM_(void);

/* Symbol: _ZN6mialgo10ArcsoftHdrD2Ev */
/* Demangled: mialgo::ArcsoftHdr::~ArcsoftHdr() */
int _ZN6mialgo10ArcsoftHdrD2Ev(void);

/* Symbol: _ZN6mialgo10MiaSessionC1EPNS_13SessionOutputE */
/* Demangled: mialgo::MiaSession::MiaSession(mialgo::SessionOutput*) */
int _ZN6mialgo10MiaSessionC1EPNS_13SessionOutputE(void);

/* Symbol: _ZTVN6mialgo10MiaFrameCbE */
/* Demangled: vtable for mialgo::MiaFrameCb */
extern void* _ZTVN6mialgo10MiaFrameCbE;

/* Symbol: _ZTv0_n24_N6mialgo10MiaSessionD0Ev */
/* Demangled: virtual thunk to mialgo::MiaSession::~MiaSession() */
int _ZTv0_n24_N6mialgo10MiaSessionD0Ev(void);

/* Symbol: _ZN6mialgo7MiaNodeD0Ev */
/* Demangled: mialgo::MiaNode::~MiaNode() */
int _ZN6mialgo7MiaNodeD0Ev(void);

/* Symbol: _ZN6mialgo13MetadataUtils12setVTagValueEPvNS_9VendorTagES1_m */
/* Demangled: mialgo::MetadataUtils::setVTagValue(void*, mialgo::VendorTag, void*, unsigned long) */
int _ZN6mialgo13MetadataUtils12setVTagValueEPvNS_9VendorTagES1_m(void);

/* Symbol: _ZN6mialgo13MiaImageQueue18kickOutImageWaiterEv */
/* Demangled: mialgo::MiaImageQueue::kickOutImageWaiter() */
int _ZN6mialgo13MiaImageQueue18kickOutImageWaiterEv(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifier7processEPNS_12_MiImageListES2_ */
/* Demangled: mialgo::MiaNodeSkinBeautifier::process(mialgo::_MiImageList*, mialgo::_MiImageList*) */
int _ZN6mialgo21MiaNodeSkinBeautifier7processEPNS_12_MiImageListES2_(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh18MapRectToInputDataERNS_6MiRectES2_RiS3_S2_ */
/* Demangled: mialgo::MiaNodeCaptureBokeh::MapRectToInputData(mialgo::MiRect&, mialgo::MiRect&, int&, int&, mialgo::MiRect&) */
int _ZN6mialgo19MiaNodeCaptureBokeh18MapRectToInputDataERNS_6MiRectES2_RiS3_S2_(void);

/* Symbol: _ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD1Ev */
/* Demangled: virtual thunk to mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
int _ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD1Ev(void);

/* Symbol: _ZN6mialgo7MiaUtil10dumpToFileEPKcPNS_12_MiImageListE */
/* Demangled: mialgo::MiaUtil::dumpToFile(char const*, mialgo::_MiImageList*) */
int _ZN6mialgo7MiaUtil10dumpToFileEPKcPNS_12_MiImageListE(void);

/* Symbol: _ZN6mialgo7MiaUtil11FloatToHalfEf */
/* Demangled: mialgo::MiaUtil::FloatToHalf(float) */
int _ZN6mialgo7MiaUtil11FloatToHalfEf(void);

/* Symbol: _ZN6mialgo16MiaNodeVisidonSrD1Ev */
/* Demangled: mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
int _ZN6mialgo16MiaNodeVisidonSrD1Ev(void);

/* Symbol: _ZN6mialgo11MiBokehMiui11initMiBokehEj */
/* Demangled: mialgo::MiBokehMiui::initMiBokeh(unsigned int) */
int _ZN6mialgo11MiBokehMiui11initMiBokehEj(void);

/* Symbol: _ZN6mialgo14SkinBeautifierD0Ev */
/* Demangled: mialgo::SkinBeautifier::~SkinBeautifier() */
int _ZN6mialgo14SkinBeautifierD0Ev(void);

/* Symbol: _ZN6mialgo13MetadataUtils12getVTagValueEPvNS_9VendorTagEPS1_ */
/* Demangled: mialgo::MetadataUtils::getVTagValue(void*, mialgo::VendorTag, void**) */
int _ZN6mialgo13MetadataUtils12getVTagValueEPvNS_9VendorTagEPS1_(void);

/* Symbol: _ZN6mialgo7MiaUtil6LibMapEPKcS2_ */
/* Demangled: mialgo::MiaUtil::LibMap(char const*, char const*) */
int _ZN6mialgo7MiaUtil6LibMapEPKcS2_(void);

/* Symbol: _ZN6mialgo10QVisidonSRC1Ev */
/* Demangled: mialgo::QVisidonSR::QVisidonSR() */
int _ZN6mialgo10QVisidonSRC1Ev(void);

/* Symbol: _ZN6mialgo16MiaNodeMiSegmentD2Ev */
/* Demangled: mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
int _ZN6mialgo16MiaNodeMiSegmentD2Ev(void);

/* Symbol: _ZN6mialgo14SkinBeautifier6now_msEv */
/* Demangled: mialgo::SkinBeautifier::now_ms() */
int _ZN6mialgo14SkinBeautifier6now_msEv(void);

/* Symbol: _ZN6mialgo14SurfaceWrapper13enqueueBufferEN7android2spINS_8MiaImageEEE */
/* Demangled: mialgo::SurfaceWrapper::enqueueBuffer(android::sp<mialgo::MiaImage>) */
int _ZN6mialgo14SurfaceWrapper13enqueueBufferEN7android2spINS_8MiaImageEEE(void);

/* Symbol: _ZN6mialgo14QAltekDepurple7initCFREjj */
/* Demangled: mialgo::QAltekDepurple::initCFR(unsigned int, unsigned int) */
int _ZN6mialgo14QAltekDepurple7initCFREjj(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifierC1Ev */
/* Demangled: mialgo::MiaNodeSkinBeautifier::MiaNodeSkinBeautifier() */
int _ZN6mialgo21MiaNodeSkinBeautifierC1Ev(void);

/* Symbol: _ZN6mialgo14QAltekDepurple9deinitCFREv */
/* Demangled: mialgo::QAltekDepurple::deinitCFR() */
int _ZN6mialgo14QAltekDepurple9deinitCFREv(void);

/* Symbol: _ZN6mialgo11MiBokehMiuiC1Ev */
/* Demangled: mialgo::MiBokehMiui::MiBokehMiui() */
int _ZN6mialgo11MiBokehMiuiC1Ev(void);

/* Symbol: _ZN6mialgo13MiSegmentMiui4initEj */
/* Demangled: mialgo::MiSegmentMiui::init(unsigned int) */
int _ZN6mialgo13MiSegmentMiui4initEj(void);

/* Symbol: _ZTVN6mialgo13MiSegmentMiuiE */
/* Demangled: vtable for mialgo::MiSegmentMiui */
extern void* _ZTVN6mialgo13MiSegmentMiuiE;

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_ */
/* Demangled: mialgo::MiaNodeCaptureBokeh::processRelighting(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN6mialgo19MiaNodeCaptureBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6mialgo13MetadataUtilsC1Ev */
/* Demangled: mialgo::MetadataUtils::MetadataUtils() */
int _ZN6mialgo13MetadataUtilsC1Ev(void);

/* Symbol: _ZN6mialgo14SurfaceWrapperC1EP13ANativeWindowNS_11SurfaceTypeE */
/* Demangled: mialgo::SurfaceWrapper::SurfaceWrapper(ANativeWindow*, mialgo::SurfaceType) */
int _ZN6mialgo14SurfaceWrapperC1EP13ANativeWindowNS_11SurfaceTypeE(void);

/* Symbol: _ZN6mialgo10QVisidonSRD0Ev */
/* Demangled: mialgo::QVisidonSR::~QVisidonSR() */
int _ZN6mialgo10QVisidonSRD0Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokehD2Ev */
/* Demangled: mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
int _ZN6mialgo14MiaNodeMiBokehD2Ev(void);

/* Symbol: _ZN6mialgo13MiSegmentMiuiD2Ev */
/* Demangled: mialgo::MiSegmentMiui::~MiSegmentMiui() */
int _ZN6mialgo13MiSegmentMiuiD2Ev(void);

/* Symbol: _ZN6mialgo14MiFragmentMiui4initEj */
/* Demangled: mialgo::MiFragmentMiui::init(unsigned int) */
int _ZN6mialgo14MiFragmentMiui4initEj(void);

/* Symbol: _ZN6mialgo13MiaNodeSwFlipC2Ev */
/* Demangled: mialgo::MiaNodeSwFlip::MiaNodeSwFlip() */
int _ZN6mialgo13MiaNodeSwFlipC2Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh4InitERNS_9FrameInfoEj */
/* Demangled: mialgo::MiaNodeCaptureBokeh::Init(mialgo::FrameInfo&, unsigned int) */
int _ZN6mialgo19MiaNodeCaptureBokeh4InitERNS_9FrameInfoEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZN6mialgo14SkinBeautifier24setUi9_BeautyParamsValueEbiiiiiiiiiiiiiii */
/* Demangled: mialgo::SkinBeautifier::setUi9_BeautyParamsValue(bool, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int) */
int _ZN6mialgo14SkinBeautifier24setUi9_BeautyParamsValueEbiiiiiiiiiiiiiii(void);

/* Symbol: _ZN6mialgo14MiFragmentMiuiC2Ev */
/* Demangled: mialgo::MiFragmentMiui::MiFragmentMiui() */
int _ZN6mialgo14MiFragmentMiuiC2Ev(void);

/* Symbol: _ZTVN6mialgo19MiaNodeCaptureBokehE */
/* Demangled: vtable for mialgo::MiaNodeCaptureBokeh */
extern void* _ZTVN6mialgo19MiaNodeCaptureBokehE;

/* Symbol: _ZTVN7android4ListIPPvEE */
/* Demangled: vtable for android::List<void**> */
extern void* _ZTVN7android4ListIPPvEE;

/* Symbol: _ZN6mialgo7MiaNode12processImageEPv */
/* Demangled: mialgo::MiaNode::processImage(void*) */
int _ZN6mialgo7MiaNode12processImageEPv(void);

/* Symbol: _ZN6mialgo13MetadataUtils18initVendorTagTableEv */
/* Demangled: mialgo::MetadataUtils::initVendorTagTable() */
int _ZN6mialgo13MetadataUtils18initVendorTagTableEv(void);

/* Symbol: _ZN6mialgo13MiaNodeMemcpy12processImageEPv */
/* Demangled: mialgo::MiaNodeMemcpy::processImage(void*) */
int _ZN6mialgo13MiaNodeMemcpy12processImageEPv(void);

/* Symbol: _ZN6mialgo21MiaNodeSkinBeautifierD0Ev */
/* Demangled: mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
int _ZN6mialgo21MiaNodeSkinBeautifierD0Ev(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDC18m_initParamFpcDataE */
/* Demangled: mialgo::AltekCaptureLDC::m_initParamFpcData */
extern void* _ZN6mialgo15AltekCaptureLDC18m_initParamFpcDataE;

/* Symbol: _ZN6mialgo15AltekCaptureLDC18m_initParamStrideXE */
/* Demangled: mialgo::AltekCaptureLDC::m_initParamStrideX */
extern void* _ZN6mialgo15AltekCaptureLDC18m_initParamStrideXE;

/* Symbol: _ZN6mialgo11MiBokehMiuiD0Ev */
/* Demangled: mialgo::MiBokehMiui::~MiBokehMiui() */
int _ZN6mialgo11MiBokehMiuiD0Ev(void);

/* Symbol: _ZN6mialgo13MiSegmentMiui7processEPNS_13MiImageBufferES2_jiil */
/* Demangled: mialgo::MiSegmentMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, int, int, long) */
int _ZN6mialgo13MiSegmentMiui7processEPNS_13MiImageBufferES2_jiil(void);

/* Symbol: _ZTCN6mialgo19MiaNodeCaptureBokehE0_NS_7MiaNodeE */
/* Demangled: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeCaptureBokeh */
extern void* _ZTCN6mialgo19MiaNodeCaptureBokehE0_NS_7MiaNodeE;

/* Symbol: _ZNK7android6VectorIPN6mialgo10MiaSessionEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<mialgo::MiaSession*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN6mialgo10MiaSessionEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN6mialgo8MiaImageD0Ev */
/* Demangled: mialgo::MiaImage::~MiaImage() */
int _ZN6mialgo8MiaImageD0Ev(void);

/* Symbol: _ZN6mialgo18MIA_INTERFACES_SYSE */
/* Demangled: mialgo::MIA_INTERFACES_SYS */
extern void* _ZN6mialgo18MIA_INTERFACES_SYSE;

/* Symbol: _ZTTN6mialgo21MiaNodeSkinBeautifierE */
/* Demangled: VTT for mialgo::MiaNodeSkinBeautifier */
extern void* _ZTTN6mialgo21MiaNodeSkinBeautifierE;

/* Symbol: _ZN6mialgo13MiaNodeSwFlipD1Ev */
/* Demangled: mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
int _ZN6mialgo13MiaNodeSwFlipD1Ev(void);

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh12CheckPersistEv */
/* Demangled: mialgo::MiaNodeCaptureBokeh::CheckPersist() */
int _ZN6mialgo19MiaNodeCaptureBokeh12CheckPersistEv(void);

/* Symbol: _ZN6mialgo10MiaService26getCalibrationDataFilePathEv */
/* Demangled: mialgo::MiaService::getCalibrationDataFilePath() */
int _ZN6mialgo10MiaService26getCalibrationDataFilePathEv(void);

/* Symbol: _ZN6mialgo13MetadataUtils12freeMetadataEPv */
/* Demangled: mialgo::MetadataUtils::freeMetadata(void*) */
int _ZN6mialgo13MetadataUtils12freeMetadataEPv(void);

/* Symbol: _ZN6mialgo15AltekCaptureLDCD2Ev */
/* Demangled: mialgo::AltekCaptureLDC::~AltekCaptureLDC() */
int _ZN6mialgo15AltekCaptureLDCD2Ev(void);

/* Symbol: _ZN6mialgo11MiBokehMiui16GetRawDepthImageEPvb */
/* Demangled: mialgo::MiBokehMiui::GetRawDepthImage(void*, bool) */
int _ZN6mialgo11MiBokehMiui16GetRawDepthImageEPvb(void);

/* Symbol: _ZN6mialgo14MiFragmentMiuiD1Ev */
/* Demangled: mialgo::MiFragmentMiui::~MiFragmentMiui() */
int _ZN6mialgo14MiFragmentMiuiD1Ev(void);

/* Symbol: _ZN6mialgo10MiaService13createSessionEPNS_15GraphDescriptorEPNS_13SessionOutputEPNS_12MiaSessionCbE */
/* Demangled: mialgo::MiaService::createSession(mialgo::GraphDescriptor*, mialgo::SessionOutput*, mialgo::MiaSessionCb*) */
int _ZN6mialgo10MiaService13createSessionEPNS_15GraphDescriptorEPNS_13SessionOutputEPNS_12MiaSessionCbE(void);

/* Symbol: _ZN6mialgo10MiaSession13onFrameComingENS_15mia_node_type_tENS_11mia_port_idEN7android2spINS_8MiaImageEEE */
/* Demangled: mialgo::MiaSession::onFrameComing(mialgo::mia_node_type_t, mialgo::mia_port_id, android::sp<mialgo::MiaImage>) */
int _ZN6mialgo10MiaSession13onFrameComingENS_15mia_node_type_tENS_11mia_port_idEN7android2spINS_8MiaImageEEE(void);

/* Symbol: _ZNK7android6VectorIPN6mialgo10MiaSessionEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<mialgo::MiaSession*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN6mialgo10MiaSessionEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN6mialgo10MiaNodeHdrC2Ev */
/* Demangled: mialgo::MiaNodeHdr::MiaNodeHdr() */
int _ZN6mialgo10MiaNodeHdrC2Ev(void);

/* Symbol: _ZN6mialgo14MiaNodeMiBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_ */
/* Demangled: mialgo::MiaNodeMiBokeh::ProcessBuffer(android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&) */
int _ZN6mialgo14MiaNodeMiBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_(void);

/* Symbol: _ZTVN6mialgo14MiaNodeMiBokehE */
/* Demangled: vtable for mialgo::MiaNodeMiBokeh */
extern void* _ZTVN6mialgo14MiaNodeMiBokehE;

/* Symbol: _ZN6mialgo19MiaNodeCaptureBokeh12processImageEPv */
/* Demangled: mialgo::MiaNodeCaptureBokeh::processImage(void*) */
int _ZN6mialgo19MiaNodeCaptureBokeh12processImageEPv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMIALGOENGINE_H */
