/*
 * Reverse-Engineered Source for: libmialgoengine.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmialgoengine"

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
#include "libmialgoengine.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: mialgo::MiaImage::MiaImage(mialgo::FrameInfo, mialgo::MiaBufferManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageC2ENS_9FrameInfoEPNS_16MiaBufferManagerE(void) {
    ALOGD("_ZN6mialgo8MiaImageC2ENS_9FrameInfoEPNS_16MiaBufferManagerE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::ProcessBuffer(mialgo::MiImageBuffer*, int, mialgo::MiImageBuffer*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaImage::~MiaImage() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo8MiaImageD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo8MiaImageD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNode::~MiaNode() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo7MiaNodeD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo7MiaNodeD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::getSize() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue7getSizeEv(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue7getSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaService::~MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo10MiaServiceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo10MiaServiceD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::~MiaBufferManager() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManagerD2Ev(void) {
    ALOGD("_ZN6mialgo16MiaBufferManagerD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::~MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdrD1Ev(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdrD1Ev() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::QAltekDepurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurpleC2Ev(void) {
    ALOGD("_ZN6mialgo14QAltekDepurpleC2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo14MiaNodeMiBokehD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo14MiaNodeMiBokehD0Ev() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::processPreviewYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier24processPreviewYUVArcsoftEPNS_13MiImageBufferES2_(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier24processPreviewYUVArcsoftEPNS_13MiImageBufferES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::increaseImageQueue(unsigned int, mialgo::mia_wake_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession18increaseImageQueueEjNS_10mia_wake_tE(void) {
    ALOGD("_ZN6mialgo10MiaSession18increaseImageQueueEjNS_10mia_wake_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment13ProcessBufferEPNS_12_MiImageListES2_Pv(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment13ProcessBufferEPNS_12_MiImageListES2_Pv() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::addImage(android::sp<mialgo::MiaImage>&, mialgo::mia_wake_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue8addImageERN7android2spINS_8MiaImageEEENS_10mia_wake_tE(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue8addImageERN7android2spINS_8MiaImageEEENS_10mia_wake_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragmentC1Ev(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragmentC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaService::destroySession(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService14destroySessionEPv(void) {
    ALOGD("_ZN6mialgo10MiaService14destroySessionEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaService::flush(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService5flushEPv(void) {
    ALOGD("_ZN6mialgo10MiaService5flushEPv() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaImage */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo8MiaImageE = NULL;

/* Demangled: mialgo::MiaNodeMiSegment::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment6DeInitEv(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment6DeInitEv() called");
    return 0;
}

/* Exported Object: mialgo::gMiaLogLevel */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo12gMiaLogLevelE = NULL;

/* Demangled: mialgo::MiaNodeMemcpy::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpy12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpy12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple13ProcessBufferEPNS_12_MiImageListES2_Pv(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple13ProcessBufferEPNS_12_MiImageListES2_Pv() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::~QAltekDepurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurpleD1Ev(void) {
    ALOGD("_ZN6mialgo14QAltekDepurpleD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode4stopEv(void) {
    ALOGD("_ZN6mialgo7MiaNode4stopEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaNode> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo7MiaNodeEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo7MiaNodeEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdrC2Ev(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdrC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::processRelighting(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: mialgo::QVisidonSR::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSR4initEv(void) {
    ALOGD("_ZN6mialgo10QVisidonSR4initEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragmentD0Ev(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragmentD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSrC1Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSrC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::allocateCopyMetadata(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImage20allocateCopyMetadataEPv(void) {
    ALOGD("_ZN6mialgo8MiaImage20allocateCopyMetadataEPv() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeVisidonSr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo16MiaNodeVisidonSrE = NULL;

/* Demangled: mialgo::AltekCaptureLDC::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, unsigned int, alLDC_FPC_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDC7processEPNS_13MiImageBufferES2_jjP16alLDC_FPC_DATA_T(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDC7processEPNS_13MiImageBufferES2_jjP16alLDC_FPC_DATA_T() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::setOffScreen(__tag_ASVL_OFFSCREEN*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<ANativeWindowBuffer*, std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::less<ANativeWindowBuffer*>, true>, std::__1::allocator<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::~ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdrD1Ev(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdrD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSr12processImageEPv(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSr12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegmentC2Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegmentC2Ev() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier5resetEv(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier5resetEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::start() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode5startEv(void) {
    ALOGD("_ZN6mialgo7MiaNode5startEv() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaImageQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo13MiaImageQueueE = NULL;

/* Exported Object: VTT for mialgo::MiaNodeVisidonSr */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo16MiaNodeVisidonSrE = NULL;

/* Demangled: mialgo::MiaNode::unlinkNode(android::sp<mialgo::MiaNode>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode10unlinkNodeERN7android2spIS0_EE(void) {
    ALOGD("_ZN6mialgo7MiaNode10unlinkNodeERN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSr6DeInitEv(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSr6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion6DeInitEv(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::DumpRawData(unsigned char*, int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh11DumpRawDataEPhijPKc(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh11DumpRawDataEPhijPKc() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::CopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::MiaImage(mialgo::FrameInfo, mialgo::MiaBufferManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageC1ENS_9FrameInfoEPNS_16MiaBufferManagerE(void) {
    ALOGD("_ZN6mialgo8MiaImageC1ENS_9FrameInfoEPNS_16MiaBufferManagerE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSrD0Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSrD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::NodeCB-in-mialgo::MiaSession */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo10MiaSessionE0_NS_6NodeCBE = NULL;

/* Demangled: mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpyD2Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpyD2Ev() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::enable(bool, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier6enableEbbi(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier6enableEbbi() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo16MiaNodeVisidonSrD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo16MiaNodeVisidonSrD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion12processImageEPv(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion12processImageEPv() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeAltekDistortion */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo22MiaNodeAltekDistortionE0_NS_7MiaNodeE = NULL;

/* Demangled: mialgo::MiaNodeMiBokeh::MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokehC2Ev(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokehC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::MiSegmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiuiC2Ev(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiuiC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::process(mialgo::_MiImageList*, mialgo::_MiImageList*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment7processEPNS_12_MiImageListES2_i(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment7processEPNS_12_MiImageListES2_i() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegmentD1Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegmentD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::doFlip(unsigned char*, unsigned char*, unsigned char*, unsigned char*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip6doFlipEPhS1_S1_S1_iiiii(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip6doFlipEPhS1_S1_S1_iiiii() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode6DeInitEv(void) {
    ALOGD("_ZN6mialgo7MiaNode6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::findImageOnLocation(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue19findImageOnLocationEj(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue19findImageOnLocationEj() called");
    return 0;
}

/* Demangled: getCurrentTimeMs() */
extern "C" __attribute__((visibility("default"))) int _Z16getCurrentTimeMsv(void) {
    ALOGD("_Z16getCurrentTimeMsv() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeMiBokeh */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo14MiaNodeMiBokehE = NULL;

/* Exported Object: vtable for mialgo::MiaNodeMiFragment */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo17MiaNodeMiFragmentE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, mialgo::Task>, std::__1::__map_value_compare<int, std::__1::__value_type<int, mialgo::Task>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, mialgo::Task> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<int, mialgo::Task>, std::__1::__tree_node<std::__1::__value_type<int, mialgo::Task>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE5eraseENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE5eraseENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEE() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::updateImageState(android::sp<mialgo::MiaImage>, mialgo::mia_image_state_t, mialgo::mia_wake_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue16updateImageStateEN7android2spINS_8MiaImageEEENS_17mia_image_state_tENS_10mia_wake_tE(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue16updateImageStateEN7android2spINS_8MiaImageEEENS_17mia_image_state_tENS_10mia_wake_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment12processImageEPv(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::PrepareImage(mialgo::_MiImageList*, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN() called");
    return 0;
}

/* Demangled: android::Vector<mialgo::MiaSession*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN6mialgo10MiaSessionEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN6mialgo10MiaSessionEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlipC1Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlipC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::AllocateMoreBuffers(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager19AllocateMoreBuffersEj(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager19AllocateMoreBuffersEj() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeHdr */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo10MiaNodeHdrE = NULL;

/* Demangled: mialgo::SensorIdString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SensorIdStringEi(void) {
    ALOGD("_ZN6mialgo14SensorIdStringEi() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokehD1Ev(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokehD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::~MiSegmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiuiD1Ev(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiuiD1Ev() called");
    return 0;
}

/* Exported Object: g_altekLdcLogLevel */
extern "C" __attribute__((visibility("default"))) void* g_altekLdcLogLevel = NULL;

/* Demangled: mialgo::AltekCaptureLDC::AltekCaptureLDC() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDCC2Ev(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDCC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiFragmentMiui::MiFragmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiuiC1Ev(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiuiC1Ev() called");
    return 0;
}

/* Demangled: android::sp<mialgo::MiaNode>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6mialgo7MiaNodeEED2Ev(void) {
    ALOGD("_ZN7android2spIN6mialgo7MiaNodeEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<mialgo::MiaSession*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN6mialgo10MiaSessionEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIPN6mialgo10MiaSessionEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::ReleaseImage(__tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::initialize(mialgo::MiaMetaUtilCb) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils10initializeENS_13MiaMetaUtilCbE(void) {
    ALOGD("_ZN6mialgo13MetadataUtils10initializeENS_13MiaMetaUtilCbE() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo7MiaNode12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeMiSegment */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo16MiaNodeMiSegmentE = NULL;

/* Demangled: mialgo::MiaNodeSkinBeautifier::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier13ProcessBufferEPNS_12_MiImageListES2_Pv(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier13ProcessBufferEPNS_12_MiImageListES2_Pv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::getFpcData(void*, alLDC_FPC_DATA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion10getFpcDataEPvR16alLDC_FPC_DATA_T(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion10getFpcDataEPvR16alLDC_FPC_DATA_T() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment6DeInitEv(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlipD0Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlipD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<mialgo::MiaSession*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN6mialgo10MiaSessionEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN6mialgo10MiaSessionEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::ProcessBuffer(mialgo::MiImageBuffer*, int, mialgo::MiImageBuffer*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSr13ProcessBufferEPNS_13MiImageBufferEiS2_Pv() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::~AltekCaptureLDC() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDCD1Ev(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDCD1Ev() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeMiSegment */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo16MiaNodeMiSegmentE = NULL;

/* Demangled: mialgo::MiFragmentMiui::~MiFragmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiuiD0Ev(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiuiD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::DoProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh9DoProcessEv(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh9DoProcessEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdrC1Ev(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdrC1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeHdr::~MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo10MiaNodeHdrD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo10MiaNodeHdrD1Ev() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiBokehMiui */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo11MiBokehMiuiE = NULL;

/* Demangled: mialgo::SkinBeautifier::processRecordYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier23processRecordYUVArcsoftEPNS_13MiImageBufferES2_(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier23processRecordYUVArcsoftEPNS_13MiImageBufferES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::processFrame(mialgo::MiaFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession12processFrameEPNS_8MiaFrameE(void) {
    ALOGD("_ZN6mialgo10MiaSession12processFrameEPNS_8MiaFrameE() called");
    return 0;
}

/* Exported Object: mialgo::MiaNode::mNodeCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo7MiaNode8mNodeCntE = NULL;

/* Demangled: virtual thunk to mialgo::MiaImage::~MiaImage() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo8MiaImageD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo8MiaImageD0Ev() called");
    return 0;
}

/* Exported Object: mialgo::AltekCaptureLDC::m_initParamStrideY */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo15AltekCaptureLDC18m_initParamStrideYE = NULL;

/* Exported Object: vtable for mialgo::AltekCaptureLDC */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo15AltekCaptureLDCE = NULL;

/* Demangled: mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurpleD2Ev(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurpleD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMiBokeh */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo14MiaNodeMiBokehE0_NS_7MiaNodeE = NULL;

/* Demangled: mialgo::MiaNodeCaptureBokeh::ConvertToArcFaceInfo(mialgo::FDMetadataResults&, _tag_ARC_DCR_FACE_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh20ConvertToArcFaceInfoERNS_17FDMetadataResultsER23_tag_ARC_DCR_FACE_PARAM(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh20ConvertToArcFaceInfoERNS_17FDMetadataResultsER23_tag_ARC_DCR_FACE_PARAM() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeCaptureBokeh */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo19MiaNodeCaptureBokehE = NULL;

/* Demangled: mialgo::MiaNode::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo7MiaNode4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiFreeBuffer(mialgo::_MiImageList*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil12MiFreeBufferEPNS_12_MiImageListE(void) {
    ALOGD("_ZN6mialgo7MiaUtil12MiFreeBufferEPNS_12_MiImageListE() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, int, long, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_jilfi(void) {
    ALOGD("_ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_jilfi() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::createImageQueue(mialgo::FrameInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession16createImageQueueERNS_9FrameInfoE(void) {
    ALOGD("_ZN6mialgo10MiaSession16createImageQueueERNS_9FrameInfoE() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::~MiaBufferManager() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManagerD1Ev(void) {
    ALOGD("_ZN6mialgo16MiaBufferManagerD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::allocateCopyInterMetadata(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils25allocateCopyInterMetadataEPv(void) {
    ALOGD("_ZN6mialgo13MetadataUtils25allocateCopyInterMetadataEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::~MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdrD0Ev(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdrD0Ev() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeHdr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo10MiaNodeHdrE = NULL;

/* Demangled: mialgo::MiaNodeAltekDistortion::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::QAltekDepurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurpleC1Ev(void) {
    ALOGD("_ZN6mialgo14QAltekDepurpleC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::PrepareImage(mialgo::_MiImageList*, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long> std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> > > >::__emplace_multi<std::__1::pair<unsigned int const, android::sp<mialgo::MiaImage> > const&>(std::__1::pair<unsigned int const, android::sp<mialgo::MiaImage> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE15__emplace_multiIJRKNS_4pairIKjS6_EEEEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE15__emplace_multiIJRKNS_4pairIKjS6_EEEEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaImageQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo13MiaImageQueueE = NULL;

/* Demangled: mialgo::SkinBeautifier::processYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier17processYUVArcsoftEPNS_13MiImageBufferES2_(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier17processYUVArcsoftEPNS_13MiImageBufferES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSessionD2Ev(void) {
    ALOGD("_ZN6mialgo10MiaSessionD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo13MiaNodeSwFlipD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo13MiaNodeSwFlipD1Ev() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::SurfaceWrapper(ANativeWindow*, mialgo::SurfaceType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapperC2EP13ANativeWindowNS_11SurfaceTypeE(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapperC2EP13ANativeWindowNS_11SurfaceTypeE() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo7MiaNodeE = NULL;

/* Demangled: mialgo::QAltekDepurple::~QAltekDepurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurpleD0Ev(void) {
    ALOGD("_ZN6mialgo14QAltekDepurpleD0Ev() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdrC1Ev(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdrC1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo15MiaNodeDePurpleD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo15MiaNodeDePurpleD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned char*, unsigned int, int, long, unsigned int, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_Phjiljfi(void) {
    ALOGD("_ZN6mialgo11MiBokehMiui7processEPNS_13MiImageBufferES2_Phjiljfi() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::onMessageComing(mialgo::mia_node_type_t, mialgo::mia_node_msg, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession15onMessageComingENS_15mia_node_type_tENS_12mia_node_msgEPv(void) {
    ALOGD("_ZN6mialgo10MiaSession15onMessageComingENS_15mia_node_type_tENS_12mia_node_msgEPv() called");
    return 0;
}

/* Demangled: android::sp<mialgo::MiaImage>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6mialgo8MiaImageEED2Ev(void) {
    ALOGD("_ZN7android2spIN6mialgo8MiaImageEED2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::findNode(android::List<android::sp<mialgo::MiaNode> >&, mialgo::mia_node_type_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode8findNodeERN7android4ListINS1_2spIS0_EEEENS_15mia_node_type_tE(void) {
    ALOGD("_ZN6mialgo7MiaNode8findNodeERN7android4ListINS1_2spIS0_EEEENS_15mia_node_type_tE() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo7MiaNodeE = NULL;

/* Demangled: mialgo::SkinBeautifier::setImgOrient(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier12setImgOrientEi(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier12setImgOrientEi() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier12processImageEPv(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion13ProcessBufferEPNS_12_MiImageListES2_Pv(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion13ProcessBufferEPNS_12_MiImageListES2_Pv() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeSwFlip */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo13MiaNodeSwFlipE = NULL;

/* Demangled: mialgo::SurfaceWrapper::dequeueBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapper13dequeueBufferEv(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapper13dequeueBufferEv() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiFreeBuffer(mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil12MiFreeBufferEPNS_13MiImageBufferE(void) {
    ALOGD("_ZN6mialgo7MiaUtil12MiFreeBufferEPNS_13MiImageBufferE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortionD2Ev(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortionD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::Destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager7DestroyEv(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager7DestroyEv() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiCopyBuffer(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil12MiCopyBufferEPNS_13MiImageBufferES2_(void) {
    ALOGD("_ZN6mialgo7MiaUtil12MiCopyBufferEPNS_13MiImageBufferES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegmentC1Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegmentC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils11getInstanceEv(void) {
    ALOGD("_ZN6mialgo13MetadataUtils11getInstanceEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpyC2Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpyC2Ev() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::~ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdrD0Ev(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdrD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip6DeInitEv(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::dumpMemToFile(char*, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil13dumpMemToFileEPcS1_j(void) {
    ALOGD("_ZN6mialgo7MiaUtil13dumpMemToFileEPcS1_j() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo16MiaNodeMiSegmentD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo16MiaNodeMiSegmentD1Ev() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeAltekDistortion */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo22MiaNodeAltekDistortionE = NULL;

/* Demangled: mialgo::MiaNodeSwFlip::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: MIAFlush */
extern "C" __attribute__((visibility("default"))) int MIAFlush(void) {
    ALOGD("MIAFlush() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::calcOffset(mialgo::FrameInfo, mialgo::mia_padding_info_t*, mialgo::MiaFrame_len_offset_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil10calcOffsetENS_9FrameInfoEPNS_18mia_padding_info_tEPNS_21MiaFrame_len_offset_tE(void) {
    ALOGD("_ZN6mialgo7MiaUtil10calcOffsetENS_9FrameInfoEPNS_18mia_padding_info_tEPNS_21MiaFrame_len_offset_tE() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::loadResource(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurple12loadResourceEiii(void) {
    ALOGD("_ZN6mialgo14QAltekDepurple12loadResourceEiii() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokehC1Ev(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokehC1Ev() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::~SurfaceWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapperD2Ev(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapperD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpyD1Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpyD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo16MiaNodeVisidonSrD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo16MiaNodeVisidonSrD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::MiSegmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiuiC1Ev(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiuiC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegmentD0Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegmentD0Ev() called");
    return 0;
}

/* Demangled: mialgo::get_device_region() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17get_device_regionEv(void) {
    ALOGD("_ZN6mialgo17get_device_regionEv() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::dumpBuffer(mialgo::MiImageBuffer*, char const*, char const*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier10dumpBufferEPNS_13MiImageBufferEPKcS4_Rib(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier10dumpBufferEPNS_13MiImageBufferEPKcS4_Rib() called");
    return 0;
}

/* Demangled: mialgo::MiaService::~MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaServiceD2Ev(void) {
    ALOGD("_ZN6mialgo10MiaServiceD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::LibUnmap(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil8LibUnmapEPv(void) {
    ALOGD("_ZN6mialgo7MiaUtil8LibUnmapEPv() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::process_llhdr(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdr13process_llhdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdr13process_llhdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSr4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSr4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::CheckPersist() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh12CheckPersistEv(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh12CheckPersistEv() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::LibGetAddr(void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil10LibGetAddrEPvPKc(void) {
    ALOGD("_ZN6mialgo7MiaUtil10LibGetAddrEPvPKc() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, alCFR_FACE_T, unsigned int, alGE_RECT) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurple7processEPNS_13MiImageBufferES2_12alCFR_FACE_Tj9alGE_RECT(void) {
    ALOGD("_ZN6mialgo14QAltekDepurple7processEPNS_13MiImageBufferES2_12alCFR_FACE_Tj9alGE_RECT() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiui4initEj(void) {
    ALOGD("_ZN6mialgo11MiBokehMiui4initEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokehD0Ev(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokehD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::~MiSegmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiuiD0Ev(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiuiD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: mialgo::MiaSession::onResultComing(mialgo::mia_node_type_t, unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession14onResultComingENS_15mia_node_type_tEmPv(void) {
    ALOGD("_ZN6mialgo10MiaSession14onResultComingENS_15mia_node_type_tEmPv() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::unlockOutputBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImage18unlockOutputBufferEv(void) {
    ALOGD("_ZN6mialgo8MiaImage18unlockOutputBufferEv() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::AltekCaptureLDC() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDCC1Ev(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDCC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<mialgo::MiaSession*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN6mialgo10MiaSessionEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIPN6mialgo10MiaSessionEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpy6DeInitEv(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpy6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::updateBeautyParams(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier18updateBeautyParamsEPv(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier18updateBeautyParamsEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::pruneImageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession15pruneImageQueueEv(void) {
    ALOGD("_ZN6mialgo10MiaSession15pruneImageQueueEv() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::checkBufferState() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession16checkBufferStateEv(void) {
    ALOGD("_ZN6mialgo10MiaSession16checkBufferStateEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::setThreadFunc(int (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode13setThreadFuncEPFiPvE(void) {
    ALOGD("_ZN6mialgo7MiaNode13setThreadFuncEPFiPvE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh6DeInitEv(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaService::init(mialgo::MiaMetaUtilCb, mialgo::MiaInitParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService4initENS_13MiaMetaUtilCbEPNS_13MiaInitParamsE(void) {
    ALOGD("_ZN6mialgo10MiaService4initENS_13MiaMetaUtilCbEPNS_13MiaInitParamsE() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::MiaSession(mialgo::SessionOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSessionC2EPNS_13SessionOutputE(void) {
    ALOGD("_ZN6mialgo10MiaSessionC2EPNS_13SessionOutputE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurpleC2Ev(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurpleC2Ev() called");
    return 0;
}

/* Demangled: mialgo::readASDinfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11readASDinfoEi(void) {
    ALOGD("_ZN6mialgo11readASDinfoEi() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::~AltekCaptureLDC() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDCD0Ev(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDCD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiFragmentMiui::initMiFragment(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiui14initMiFragmentEj(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiui14initMiFragmentEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokehD2Ev(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokehD2Ev() called");
    return 0;
}

/* Demangled: MIADeinit */
extern "C" __attribute__((visibility("default"))) int MIADeinit(void) {
    ALOGD("MIADeinit() called");
    return 0;
}

/* Exported Object: vtable for mialgo::QVisidonSR */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo10QVisidonSRE = NULL;

/* Demangled: mialgo::MiaNodeMiBokeh::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeSwFlip */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo13MiaNodeSwFlipE0_NS_7MiaNodeE = NULL;

/* Exported Object: mialgo::g_beautyVendorTagArray */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo22g_beautyVendorTagArrayE = NULL;

/* Demangled: mialgo::MiaImageQueue::pollImageOnState(mialgo::mia_image_state_t, mialgo::mia_block_t, mialgo::mia_image_state_t, bool (*)(android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&)) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue16pollImageOnStateENS_17mia_image_state_tENS_11mia_block_tES1_PFbRN7android2spINS_8MiaImageEEES7_E(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue16pollImageOnStateENS_17mia_image_state_tENS_11mia_block_tES1_PFbRN7android2spINS_8MiaImageEEES7_E() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeMemcpy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo13MiaNodeMemcpyE = NULL;

/* Demangled: virtual thunk to mialgo::MiaNodeHdr::~MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo10MiaNodeHdrD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo10MiaNodeHdrD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo17MiaNodeMiFragmentD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo17MiaNodeMiFragmentD1Ev() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeSwFlip */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo13MiaNodeSwFlipE = NULL;

/* Exported Object: vtable for mialgo::MiaNodeSkinBeautifier */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo21MiaNodeSkinBeautifierE = NULL;

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeHdr */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo10MiaNodeHdrE0_NS_7MiaNodeE = NULL;

/* Demangled: mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurpleD1Ev(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurpleD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::~MiaNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNodeD2Ev(void) {
    ALOGD("_ZN6mialgo7MiaNodeD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::AllocateBuffers(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager15AllocateBuffersEjjjjmm(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager15AllocateBuffersEjjjjmm() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::MiaImage(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageC1EP19ANativeWindowBuffer(void) {
    ALOGD("_ZN6mialgo8MiaImageC1EP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiAllocCopyBuffer(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil17MiAllocCopyBufferEPNS_13MiImageBufferES2_(void) {
    ALOGD("_ZN6mialgo7MiaUtil17MiAllocCopyBufferEPNS_13MiImageBufferES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::SetFrameParams(mialgo::_MiImageList*, mialgo::_MiImageList*, mialgo::_MiImageList*, mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh14SetFrameParamsEPNS_12_MiImageListES2_S2_S2_S2_Pv(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh14SetFrameParamsEPNS_12_MiImageListES2_S2_S2_S2_Pv() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::~SkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifierD2Ev(void) {
    ALOGD("_ZN6mialgo14SkinBeautifierD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSessionD1Ev(void) {
    ALOGD("_ZN6mialgo10MiaSessionD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo22MiaNodeAltekDistortionD0Ev() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::checkInitLdcLib(unsigned int, unsigned int, unsigned int, unsigned int, alLDC_FPC_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDC15checkInitLdcLibEjjjjP16alLDC_FPC_DATA_T(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDC15checkInitLdcLibEjjjjP16alLDC_FPC_DATA_T() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::getGraphID(mialgo::GraphDescriptor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession10getGraphIDEPNS_15GraphDescriptorE(void) {
    ALOGD("_ZN6mialgo10MiaSession10getGraphIDEPNS_15GraphDescriptorE() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::bindSurface2Port(mialgo::MiaGraphId, mialgo::SurfaceWrapper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession16bindSurface2PortENS_10MiaGraphIdEPNS_14SurfaceWrapperE(void) {
    ALOGD("_ZN6mialgo10MiaSession16bindSurface2PortENS_10MiaGraphIdEPNS_14SurfaceWrapperE() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::AllocateOneBuffer(unsigned int, unsigned int, unsigned int, unsigned long, unsigned long, void**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager17AllocateOneBufferEjjjmmPPvPj(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager17AllocateOneBufferEjjjmmPPvPj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortionC2Ev(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortionC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo13MiaNodeSwFlipD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo13MiaNodeSwFlipD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::pollImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue9pollImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue9pollImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::setOffScreen(__tag_ASVL_OFFSCREEN*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE(void) {
    ALOGD("_ZN6mialgo12setOffScreenEP20__tag_ASVL_OFFSCREENPNS_13MiImageBufferE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::process(mialgo::_MiImageList*, mialgo::_MiImageList*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment7processEPNS_12_MiImageListES2_(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment7processEPNS_12_MiImageListES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh6DeInitEv(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier6DeInitEv(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier6DeInitEv() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo15MiaNodeDePurpleD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo15MiaNodeDePurpleD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::CopyImage(mialgo::_MiImageList*, mialgo::_MiImageList*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil9CopyImageEPNS_12_MiImageListES2_(void) {
    ALOGD("_ZN6mialgo7MiaUtil9CopyImageEPNS_12_MiImageListES2_() called");
    return 0;
}

/* Demangled: mialgo::QVisidonSR::~QVisidonSR() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSRD2Ev(void) {
    ALOGD("_ZN6mialgo10QVisidonSRD2Ev() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::init(unsigned int, unsigned int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurple4initEjjiii(void) {
    ALOGD("_ZN6mialgo14QAltekDepurple4initEjjiii() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: MIACreateSession */
extern "C" __attribute__((visibility("default"))) int MIACreateSession(void) {
    ALOGD("MIACreateSession() called");
    return 0;
}

/* Demangled: mialgo::QVisidonSR::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, int, _VDRect, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSR7processEPNS_13MiImageBufferES2_i7_VDRectiib(void) {
    ALOGD("_ZN6mialgo10QVisidonSR7processEPNS_13MiImageBufferES2_i7_VDRectiib() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortionD1Ev(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortionD1Ev() called");
    return 0;
}

/* Exported Object: mialgo::AltekCaptureLDC::m_initParamHeight */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo15AltekCaptureLDC17m_initParamHeightE = NULL;

/* Exported Object: vtable for mialgo::SkinBeautifier */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo14SkinBeautifierE = NULL;

/* Demangled: mialgo::MiaUtil::VSNPrintF(char*, unsigned long, char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil9VSNPrintFEPcmPKcSt9__va_list(void) {
    ALOGD("_ZN6mialgo7MiaUtil9VSNPrintFEPcmPKcSt9__va_list() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifierD2Ev(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifierD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::~MiBokehMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiuiD2Ev(void) {
    ALOGD("_ZN6mialgo11MiBokehMiuiD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpyC1Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpyC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::linkNode(android::sp<mialgo::MiaNode>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode8linkNodeERN7android2spIS0_EE(void) {
    ALOGD("_ZN6mialgo7MiaNode8linkNodeERN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::~MiaImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageD2Ev(void) {
    ALOGD("_ZN6mialgo8MiaImageD2Ev() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::smoothParamUpdate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier17smoothParamUpdateEii(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier17smoothParamUpdateEii() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo16MiaNodeMiSegmentD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo16MiaNodeMiSegmentD0Ev() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier4initEi(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier4initEi() called");
    return 0;
}

/* Demangled: mialgo::MiaService::MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaServiceC2Ev(void) {
    ALOGD("_ZN6mialgo10MiaServiceC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeSkinBeautifier */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo21MiaNodeSkinBeautifierE0_NS_7MiaNodeE = NULL;

/* Demangled: mialgo::ArcsoftHdr::Process(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::MiImageBuffer*, mialgo::arc_hdr_output_meta_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdr7ProcessEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdr7ProcessEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::process_hdr(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::MiImageBuffer*, mialgo::arc_hdr_output_meta_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdr11process_hdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdr11process_hdrEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tES2_PNS_21arc_hdr_output_meta_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::ProcessBuffer(android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_S5_S5_(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_S5_S5_() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::acquireBuffer(mialgo::mia_node_type_t, mialgo::mia_port_id, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession13acquireBufferENS_15mia_node_type_tENS_11mia_port_idEbb(void) {
    ALOGD("_ZN6mialgo10MiaSession13acquireBufferENS_15mia_node_type_tENS_11mia_port_idEbb() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::getAvailMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil14getAvailMemoryEv(void) {
    ALOGD("_ZN6mialgo7MiaUtil14getAvailMemoryEv() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::MiaImage(mialgo::MiaFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageC1EPNS_8MiaFrameE(void) {
    ALOGD("_ZN6mialgo8MiaImageC1EPNS_8MiaFrameE() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<mialgo::MiaImage> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN6mialgo8MiaImageEEEEE = NULL;

/* Demangled: mialgo::MiaImageQueue::eraseImageOnState(mialgo::mia_image_state_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue17eraseImageOnStateENS_17mia_image_state_tE(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue17eraseImageOnStateENS_17mia_image_state_tE() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::setTagValue(void*, unsigned int, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils11setTagValueEPvjS1_m(void) {
    ALOGD("_ZN6mialgo13MetadataUtils11setTagValueEPvjS1_m() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::createNode(mialgo::mia_node_type_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession10createNodeENS_15mia_node_type_tE(void) {
    ALOGD("_ZN6mialgo10MiaSession10createNodeENS_15mia_node_type_tE() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::~SurfaceWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapperD1Ev(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapperD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpyD0Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpyD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment13ProcessBufferEPNS_12_MiImageListES2_Pv(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment13ProcessBufferEPNS_12_MiImageListES2_Pv() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::release(mialgo::MiaFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession7releaseEPNS_8MiaFrameE(void) {
    ALOGD("_ZN6mialgo10MiaSession7releaseEPNS_8MiaFrameE() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeDePurple */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo15MiaNodeDePurpleE0_NS_7MiaNodeE = NULL;

/* Demangled: mialgo::MiaService::~MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaServiceD1Ev(void) {
    ALOGD("_ZN6mialgo10MiaServiceD1Ev() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeMemcpy */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo13MiaNodeMemcpyE = NULL;

/* Demangled: mialgo::MiaBufferManager::FreeAllBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager14FreeAllBuffersEv(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager14FreeAllBuffersEv() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeDePurple */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo15MiaNodeDePurpleE = NULL;

/* Exported Object: vtable for mialgo::QAltekDepurple */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo14QAltekDepurpleE = NULL;

/* Demangled: mialgo::MetadataUtils::allocateCopyMetadata(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils20allocateCopyMetadataEPv(void) {
    ALOGD("_ZN6mialgo13MetadataUtils20allocateCopyMetadataEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::Initialize(mialgo::BufferManagerCreateData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager10InitializeEPNS_23BufferManagerCreateDataE(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager10InitializeEPNS_23BufferManagerCreateDataE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokehC2Ev(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokehC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::getNodeName(mialgo::mia_node_type_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession11getNodeNameENS_15mia_node_type_tE(void) {
    ALOGD("_ZN6mialgo10MiaSession11getNodeNameENS_15mia_node_type_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::releaseBuffer(android::sp<mialgo::MiaImage>) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession13releaseBufferEN7android2spINS_8MiaImageEEE(void) {
    ALOGD("_ZN6mialgo10MiaSession13releaseBufferEN7android2spINS_8MiaImageEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to mialgo::MiaSession::release(mialgo::MiaFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6mialgo10MiaSession7releaseEPNS_8MiaFrameE(void) {
    ALOGD("_ZThn8_N6mialgo10MiaSession7releaseEPNS_8MiaFrameE() called");
    return 0;
}

/* Demangled: non-virtual thunk to mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6mialgo10MiaSessionD1Ev(void) {
    ALOGD("_ZThn8_N6mialgo10MiaSessionD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::getInputBufferNum() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode17getInputBufferNumEv(void) {
    ALOGD("_ZN6mialgo7MiaNode17getInputBufferNumEv() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::findLocationOnImage(android::sp<mialgo::MiaImage>) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue19findLocationOnImageEN7android2spINS_8MiaImageEEE(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue19findLocationOnImageEN7android2spINS_8MiaImageEEE() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::initMiSegment(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiui13initMiSegmentEj(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiui13initMiSegmentEj() called");
    return 0;
}

/* Demangled: mialgo::MiFragmentMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiui7processEPNS_13MiImageBufferES2_ji(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiui7processEPNS_13MiImageBufferES2_ji() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo10MiaServiceE = NULL;

/* Demangled: mialgo::MiaNodeAltekDistortion::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortion10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortion10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiaService::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService11getInstanceEv(void) {
    ALOGD("_ZN6mialgo10MiaService11getInstanceEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurpleC1Ev(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurpleC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::DumpYUVData(__tag_ASVL_OFFSCREEN*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKc(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKc() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::buildGraph(mialgo::GraphDescriptor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession10buildGraphEPNS_15GraphDescriptorE(void) {
    ALOGD("_ZN6mialgo10MiaSession10buildGraphEPNS_15GraphDescriptorE() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::setup() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapper5setupEv(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapper5setupEv() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo13MiaNodeMemcpyD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo13MiaNodeMemcpyD1Ev() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdr4initEv(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdr4initEv() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeAltekDistortion */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo22MiaNodeAltekDistortionE = NULL;

/* Demangled: mialgo::MiaNodeDePurple::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple12processImageEPv(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::getCfrCalibationSet(unsigned int, mialgo::ALTEK_CFR_CALIBRATION_SET_T**) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurple19getCfrCalibationSetEjPPNS_27ALTEK_CFR_CALIBRATION_SET_TE(void) {
    ALOGD("_ZN6mialgo14QAltekDepurple19getCfrCalibationSetEjPPNS_27ALTEK_CFR_CALIBRATION_SET_TE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::CopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh9CopyImageEP20__tag_ASVL_OFFSCREENS2_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragmentD2Ev(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragmentD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokehD1Ev(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokehD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::getTagValue(void*, unsigned int, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils11getTagValueEPvjPS1_(void) {
    ALOGD("_ZN6mialgo13MetadataUtils11getTagValueEPvjPS1_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpy4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpy4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSr10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo17MiaNodeMiFragmentD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo17MiaNodeMiFragmentD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip12processImageEPv(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::SkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifierC2Ev(void) {
    ALOGD("_ZN6mialgo14SkinBeautifierC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::MiaImage(mialgo::MiaFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageC2EPNS_8MiaFrameE(void) {
    ALOGD("_ZN6mialgo8MiaImageC2EPNS_8MiaFrameE() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiCopyPlane(unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil11MiCopyPlaneEPhS1_iiii(void) {
    ALOGD("_ZN6mialgo7MiaUtil11MiCopyPlaneEPhS1_iiii() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::~MiaNodeDePurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurpleD0Ev(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurpleD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMiFragment */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo17MiaNodeMiFragmentE0_NS_7MiaNodeE = NULL;

/* Demangled: virtual thunk to mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo10MiaSessionD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo10MiaSessionD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::~MiaNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNodeD1Ev(void) {
    ALOGD("_ZN6mialgo7MiaNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<mialgo::MiaNode> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN6mialgo7MiaNodeEEEEE = NULL;

/* Demangled: virtual thunk to mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo21MiaNodeSkinBeautifierD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::ReleaseImage(__tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh12ReleaseImageEP20__tag_ASVL_OFFSCREEN() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeMiFragment */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo17MiaNodeMiFragmentE = NULL;

/* Demangled: mialgo::MiaNodeSwFlip::ProcessBuffer(mialgo::_MiImageList*, mialgo::_MiImageList*, void*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip13ProcessBufferEPNS_12_MiImageListES2_Pvii(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip13ProcessBufferEPNS_12_MiImageListES2_Pvii() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::runThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode9runThreadEPv(void) {
    ALOGD("_ZN6mialgo7MiaNode9runThreadEPv() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaImage */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo8MiaImageE = NULL;

/* Demangled: mialgo::MiaNodeSkinBeautifier::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::MergeImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh10MergeImageEP20__tag_ASVL_OFFSCREENS2_i(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh10MergeImageEP20__tag_ASVL_OFFSCREENS2_i() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier7processEPNS_13MiImageBufferES2_i(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier7processEPNS_13MiImageBufferES2_i() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr6DeInitEv(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSrD2Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSrD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::ReadCalibrationDataFromFile(char const*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh27ReadCalibrationDataFromFileEPKcPvj(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh27ReadCalibrationDataFromFileEPKcPvj() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::processVideoCaptureYUVArcsoft(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier29processVideoCaptureYUVArcsoftEPNS_13MiImageBufferES2_(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier29processVideoCaptureYUVArcsoftEPNS_13MiImageBufferES2_() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::~SkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifierD1Ev(void) {
    ALOGD("_ZN6mialgo14SkinBeautifierD1Ev() called");
    return 0;
}

/* Demangled: MIADestroySession */
extern "C" __attribute__((visibility("default"))) int MIADestroySession(void) {
    ALOGD("MIADestroySession() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSessionD0Ev(void) {
    ALOGD("_ZN6mialgo10MiaSessionD0Ev() called");
    return 0;
}

/* Demangled: mialgo::QVisidonSR::QVisidonSR() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSRC2Ev(void) {
    ALOGD("_ZN6mialgo10QVisidonSRC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragment12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragment12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortionC1Ev(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortionC1Ev() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo10MiaServiceE = NULL;

/* Demangled: mialgo::MiaNodeHdr::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr12processImageEPv(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::ProcessHdrChecker(mialgo::MiImageBuffer*, mialgo::arc_hdr_input_meta_t const*, mialgo::arc_hdr_checker_result_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdr17ProcessHdrCheckerEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tEPNS_24arc_hdr_checker_result_tE(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdr17ProcessHdrCheckerEPNS_13MiImageBufferEPKNS_20arc_hdr_input_meta_tEPNS_24arc_hdr_checker_result_tE() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::eraseImage(android::sp<mialgo::MiaImage>) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue10eraseImageEN7android2spINS_8MiaImageEEE(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue10eraseImageEN7android2spINS_8MiaImageEEE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifierC2Ev(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifierC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::MiBokehMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiuiC2Ev(void) {
    ALOGD("_ZN6mialgo11MiBokehMiuiC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::GetFaceDegree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh13GetFaceDegreeEi(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh13GetFaceDegreeEi() called");
    return 0;
}

/* Demangled: std::__1::map<unsigned int, android::sp<mialgo::MiaNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, android::sp<mialgo::MiaNode> > > >::operator[](unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIjN7android2spIN6mialgo7MiaNodeEEENS_4lessIjEENS_9allocatorINS_4pairIKjS5_EEEEEixEOj(void) {
    ALOGD("_ZNSt3__13mapIjN7android2spIN6mialgo7MiaNodeEEENS_4lessIjEENS_9allocatorINS_4pairIKjS5_EEEEEixEOj() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::MetadataUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtilsC2Ev(void) {
    ALOGD("_ZN6mialgo13MetadataUtilsC2Ev() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiFragmentMiui */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo14MiFragmentMiuiE = NULL;

/* Demangled: mialgo::MiaService::deinit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService6deinitEv(void) {
    ALOGD("_ZN6mialgo10MiaService6deinitEv() called");
    return 0;
}

/* Demangled: mialgo::QVisidonSR::~QVisidonSR() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSRD1Ev(void) {
    ALOGD("_ZN6mialgo10QVisidonSRD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::AllocCopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::setCallback(mialgo::MiaSessionCb*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession11setCallbackEPNS_12MiaSessionCbE(void) {
    ALOGD("_ZN6mialgo10MiaSession11setCallbackEPNS_12MiaSessionCbE() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::MiaImage(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageC2EP19ANativeWindowBuffer(void) {
    ALOGD("_ZN6mialgo8MiaImageC2EP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiAllocBuffer(mialgo::_MiImageList*, int, int, mialgo::MiaFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil13MiAllocBufferEPNS_12_MiImageListEiiNS_9MiaFormatE(void) {
    ALOGD("_ZN6mialgo7MiaUtil13MiAllocBufferEPNS_12_MiImageListEiiNS_9MiaFormatE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::GetAEInfo(mialgo::arc_hdr_input_meta_t*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdr9GetAEInfoEPNS_20arc_hdr_input_meta_tEPv(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdr9GetAEInfoEPNS_20arc_hdr_input_meta_tEPv() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::init(unsigned int, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDC4initEjjjji(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDC4initEjjjji() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeAltekDistortion::~MiaNodeAltekDistortion() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo22MiaNodeAltekDistortionD0Ev(void) {
    ALOGD("_ZN6mialgo22MiaNodeAltekDistortionD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<mialgo::MiaSession*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPN6mialgo10MiaSessionEEE = NULL;

/* Demangled: mialgo::MiaNode::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo7MiaNode10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifierD1Ev(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifierD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::~MiBokehMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiuiD1Ev(void) {
    ALOGD("_ZN6mialgo11MiBokehMiuiD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::~MiaImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageD1Ev(void) {
    ALOGD("_ZN6mialgo8MiaImageD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::AllocCopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh14AllocCopyImageEP20__tag_ASVL_OFFSCREENS2_() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiAllocBuffer(mialgo::MiImageBuffer*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil13MiAllocBufferEPNS_13MiImageBufferEiii(void) {
    ALOGD("_ZN6mialgo7MiaUtil13MiAllocBufferEPNS_13MiImageBufferEiii() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::isDumpVisible() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil13isDumpVisibleEv(void) {
    ALOGD("_ZN6mialgo7MiaUtil13isDumpVisibleEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlipD2Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlipD2Ev() called");
    return 0;
}

/* Demangled: android::sp<mialgo::MiaService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6mialgo10MiaServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6mialgo10MiaServiceEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, mialgo::Task>, std::__1::__tree_node<std::__1::__value_type<int, mialgo::Task>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<int, mialgo::Task>, std::__1::__map_value_compare<int, std::__1::__value_type<int, mialgo::Task>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, mialgo::Task> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: mialgo::MiaService::MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaServiceC1Ev(void) {
    ALOGD("_ZN6mialgo10MiaServiceC1Ev() called");
    return 0;
}

/* Exported Object: vtable for mialgo::ArcsoftHdr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo10ArcsoftHdrE = NULL;

/* Demangled: mialgo::MiFragmentMiui::~MiFragmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiuiD2Ev(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiuiD2Ev() called");
    return 0;
}

/* Demangled: MIAInit */
extern "C" __attribute__((visibility("default"))) int MIAInit(void) {
    ALOGD("MIAInit() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaSession */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo10MiaSessionE = NULL;

/* Demangled: mialgo::MiaNodeVisidonSr::dequeueImage(mialgo::mia_block_t) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSr12dequeueImageENS_11mia_block_tE(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSr12dequeueImageENS_11mia_block_tE() called");
    return 0;
}

/* Exported Object: VTT for mialgo::MiaNodeDePurple */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo15MiaNodeDePurpleE = NULL;

/* Demangled: mialgo::SurfaceWrapper::bind(mialgo::mia_node_type_t, mialgo::mia_port_id) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapper4bindENS_15mia_node_type_tENS_11mia_port_idE(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapper4bindENS_15mia_node_type_tENS_11mia_port_idE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple6DeInitEv(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple6DeInitEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::IniEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh9IniEngineEv(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh9IniEngineEv() called");
    return 0;
}

/* Demangled: MIAProcessFrame */
extern "C" __attribute__((visibility("default"))) int MIAProcessFrame(void) {
    ALOGD("MIAProcessFrame() called");
    return 0;
}

/* Demangled: mialgo::MiaBufferManager::Create(mialgo::BufferManagerCreateData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaBufferManager6CreateEPNS_23BufferManagerCreateDataE(void) {
    ALOGD("_ZN6mialgo16MiaBufferManager6CreateEPNS_23BufferManagerCreateDataE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<ANativeWindowBuffer*, std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::less<ANativeWindowBuffer*>, true>, std::__1::allocator<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<ANativeWindowBuffer*, android::sp<mialgo::MiaImage> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP19ANativeWindowBufferN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIS3_S9_NS_4lessIS3_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_PvEElEE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaService::processFrame(void*, mialgo::MiaFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService12processFrameEPvPNS_8MiaFrameE(void) {
    ALOGD("_ZN6mialgo10MiaService12processFrameEPvPNS_8MiaFrameE() called");
    return 0;
}

/* Demangled: mialgo::MiaService::~MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaServiceD0Ev(void) {
    ALOGD("_ZN6mialgo10MiaServiceD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNode::~MiaNode() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo7MiaNodeD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo7MiaNodeD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiDumpBuffer(mialgo::MiImageBuffer*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil12MiDumpBufferEPNS_13MiImageBufferEPKc(void) {
    ALOGD("_ZN6mialgo7MiaUtil12MiDumpBufferEPNS_13MiImageBufferEPKc() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::now_ms() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil6now_msEv(void) {
    ALOGD("_ZN6mialgo7MiaUtil6now_msEv() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaService::~MiaService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo10MiaServiceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo10MiaServiceD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::~MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdrD2Ev(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdrD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo14MiaNodeMiBokehD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo14MiaNodeMiBokehD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession5flushEv(void) {
    ALOGD("_ZN6mialgo10MiaSession5flushEv() called");
    return 0;
}

/* Demangled: MI_open_lib */
extern "C" __attribute__((visibility("default"))) int MI_open_lib(void) {
    ALOGD("MI_open_lib() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::match(mialgo::mia_node_type_t, mialgo::mia_port_id) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapper5matchENS_15mia_node_type_tENS_11mia_port_idE(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapper5matchENS_15mia_node_type_tENS_11mia_port_idE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokehC1Ev(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokehC1Ev() called");
    return 0;
}

/* Exported Object: mialgo::AltekCaptureLDC::m_initParamWidth */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo15AltekCaptureLDC16m_initParamWidthE = NULL;

/* Demangled: mialgo::MiaNodeMiFragment::MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragmentC2Ev(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragmentC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlip10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlip10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6mialgo10MiaSessionD0Ev(void) {
    ALOGD("_ZThn8_N6mialgo10MiaSessionD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMemcpy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo13MiaNodeMemcpyE0_NS_7MiaNodeE = NULL;

/* Demangled: mialgo::MiaNodeMiBokeh::PrepareImage(mialgo::_MiImageList*, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh12PrepareImageEPNS_12_MiImageListER20__tag_ASVL_OFFSCREEN() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::queueImage(android::sp<mialgo::MiaImage>&, mialgo::MiaFrameType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpy10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpy10queueImageERN7android2spINS_8MiaImageEEENS_12MiaFrameTypeE() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::~QAltekDepurple() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurpleD2Ev(void) {
    ALOGD("_ZN6mialgo14QAltekDepurpleD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh12processImageEPv(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegment12processImageEPv(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegment12processImageEPv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, mialgo::Task>, std::__1::__map_value_compare<int, std::__1::__value_type<int, mialgo::Task>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, mialgo::Task> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, mialgo::Task>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN6mialgo4TaskEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::DumpYUVData(__tag_ASVL_OFFSCREEN*, unsigned int, char const*, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKcx(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh11DumpYUVDataEP20__tag_ASVL_OFFSCREENjPKcx() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaSession */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo10MiaSessionE = NULL;

/* Demangled: virtual thunk to mialgo::MiaNodeMemcpy::~MiaNodeMemcpy() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo13MiaNodeMemcpyD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo13MiaNodeMemcpyD0Ev() called");
    return 0;
}

/* Demangled: allocBufAndReadFromFile(char const*, void**, long*) */
extern "C" __attribute__((visibility("default"))) int _Z23allocBufAndReadFromFilePKcPPvPl(void) {
    ALOGD("_Z23allocBufAndReadFromFilePKcPPvPl() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiFragment::~MiaNodeMiFragment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo17MiaNodeMiFragmentD1Ev(void) {
    ALOGD("_ZN6mialgo17MiaNodeMiFragmentD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokehD0Ev(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokehD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::MiDumpBuffer(mialgo::_MiImageList*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil12MiDumpBufferEPNS_12_MiImageListEPKc(void) {
    ALOGD("_ZN6mialgo7MiaUtil12MiDumpBufferEPNS_12_MiImageListEPKc() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::initParamChanged(unsigned int, unsigned int, unsigned int, unsigned int, alLDC_FPC_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDC16initParamChangedEjjjjP16alLDC_FPC_DATA_T(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDC16initParamChangedEjjjjP16alLDC_FPC_DATA_T() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeDePurple::SetFrameParams(void*, alCFR_FACE_T*, alGE_RECT*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15MiaNodeDePurple14SetFrameParamsEPvP12alCFR_FACE_TP9alGE_RECTPj(void) {
    ALOGD("_ZN6mialgo15MiaNodeDePurple14SetFrameParamsEPvP12alCFR_FACE_TP9alGE_RECTPj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::DumpMetadata(_tag_ARC_DCIR_PARAM&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh12DumpMetadataER19_tag_ARC_DCIR_PARAMl(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh12DumpMetadataER19_tag_ARC_DCIR_PARAMl() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::SkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifierC1Ev(void) {
    ALOGD("_ZN6mialgo14SkinBeautifierC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSrC2Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSrC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeVisidonSr */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo16MiaNodeVisidonSrE0_NS_7MiaNodeE = NULL;

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeMiSegment */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo16MiaNodeMiSegmentE0_NS_7MiaNodeE = NULL;

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> > > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE14__assign_multiINS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEEEvT_SM_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE14__assign_multiINS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEEEvT_SM_() called");
    return 0;
}

/* Demangled: mialgo::ArcsoftHdr::~ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10ArcsoftHdrD2Ev(void) {
    ALOGD("_ZN6mialgo10ArcsoftHdrD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::MiaSession(mialgo::SessionOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSessionC1EPNS_13SessionOutputE(void) {
    ALOGD("_ZN6mialgo10MiaSessionC1EPNS_13SessionOutputE() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaFrameCb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo10MiaFrameCbE = NULL;

/* Demangled: virtual thunk to mialgo::MiaSession::~MiaSession() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo10MiaSessionD0Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo10MiaSessionD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNode::~MiaNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNodeD0Ev(void) {
    ALOGD("_ZN6mialgo7MiaNodeD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::setVTagValue(void*, mialgo::VendorTag, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils12setVTagValueEPvNS_9VendorTagES1_m(void) {
    ALOGD("_ZN6mialgo13MetadataUtils12setVTagValueEPvNS_9VendorTagES1_m() called");
    return 0;
}

/* Demangled: mialgo::MiaImageQueue::kickOutImageWaiter() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaImageQueue18kickOutImageWaiterEv(void) {
    ALOGD("_ZN6mialgo13MiaImageQueue18kickOutImageWaiterEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::process(mialgo::_MiImageList*, mialgo::_MiImageList*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifier7processEPNS_12_MiImageListES2_(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifier7processEPNS_12_MiImageListES2_() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::MapRectToInputData(mialgo::MiRect&, mialgo::MiRect&, int&, int&, mialgo::MiRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh18MapRectToInputDataERNS_6MiRectES2_RiS3_S2_(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh18MapRectToInputDataERNS_6MiRectES2_RiS3_S2_() called");
    return 0;
}

/* Demangled: virtual thunk to mialgo::MiaNodeCaptureBokeh::~MiaNodeCaptureBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD1Ev(void) {
    ALOGD("_ZTv0_n24_N6mialgo19MiaNodeCaptureBokehD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::dumpToFile(char const*, mialgo::_MiImageList*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil10dumpToFileEPKcPNS_12_MiImageListE(void) {
    ALOGD("_ZN6mialgo7MiaUtil10dumpToFileEPKcPNS_12_MiImageListE() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::FloatToHalf(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil11FloatToHalfEf(void) {
    ALOGD("_ZN6mialgo7MiaUtil11FloatToHalfEf() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeVisidonSr::~MiaNodeVisidonSr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeVisidonSrD1Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeVisidonSrD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::initMiBokeh(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiui11initMiBokehEj(void) {
    ALOGD("_ZN6mialgo11MiBokehMiui11initMiBokehEj() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::~SkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifierD0Ev(void) {
    ALOGD("_ZN6mialgo14SkinBeautifierD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::getVTagValue(void*, mialgo::VendorTag, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils12getVTagValueEPvNS_9VendorTagEPS1_(void) {
    ALOGD("_ZN6mialgo13MetadataUtils12getVTagValueEPvNS_9VendorTagEPS1_() called");
    return 0;
}

/* Demangled: mialgo::MiaUtil::LibMap(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaUtil6LibMapEPKcS2_(void) {
    ALOGD("_ZN6mialgo7MiaUtil6LibMapEPKcS2_() called");
    return 0;
}

/* Demangled: mialgo::QVisidonSR::QVisidonSR() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSRC1Ev(void) {
    ALOGD("_ZN6mialgo10QVisidonSRC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiSegment::~MiaNodeMiSegment() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo16MiaNodeMiSegmentD2Ev(void) {
    ALOGD("_ZN6mialgo16MiaNodeMiSegmentD2Ev() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::now_ms() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier6now_msEv(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier6now_msEv() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::enqueueBuffer(android::sp<mialgo::MiaImage>) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapper13enqueueBufferEN7android2spINS_8MiaImageEEE(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapper13enqueueBufferEN7android2spINS_8MiaImageEEE() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::initCFR(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurple7initCFREjj(void) {
    ALOGD("_ZN6mialgo14QAltekDepurple7initCFREjj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifierC1Ev(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifierC1Ev() called");
    return 0;
}

/* Demangled: mialgo::QAltekDepurple::deinitCFR() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14QAltekDepurple9deinitCFREv(void) {
    ALOGD("_ZN6mialgo14QAltekDepurple9deinitCFREv() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::MiBokehMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiuiC1Ev(void) {
    ALOGD("_ZN6mialgo11MiBokehMiuiC1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiui4initEj(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiui4initEj() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiSegmentMiui */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo13MiSegmentMiuiE = NULL;

/* Demangled: mialgo::MiaNodeCaptureBokeh::processRelighting(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh17processRelightingEP20__tag_ASVL_OFFSCREENS2_S2_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::MetadataUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtilsC1Ev(void) {
    ALOGD("_ZN6mialgo13MetadataUtilsC1Ev() called");
    return 0;
}

/* Demangled: mialgo::SurfaceWrapper::SurfaceWrapper(ANativeWindow*, mialgo::SurfaceType) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SurfaceWrapperC1EP13ANativeWindowNS_11SurfaceTypeE(void) {
    ALOGD("_ZN6mialgo14SurfaceWrapperC1EP13ANativeWindowNS_11SurfaceTypeE() called");
    return 0;
}

/* Demangled: mialgo::QVisidonSR::~QVisidonSR() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10QVisidonSRD0Ev(void) {
    ALOGD("_ZN6mialgo10QVisidonSRD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::~MiaNodeMiBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokehD2Ev(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokehD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::~MiSegmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiuiD2Ev(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiuiD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiFragmentMiui::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiui4initEj(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiui4initEj() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSwFlip::MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlipC2Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlipC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::Init(mialgo::FrameInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh4InitERNS_9FrameInfoEj(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh4InitERNS_9FrameInfoEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, android::sp<mialgo::MiaImage> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android2spIN6mialgo8MiaImageEEEEENS_19__map_value_compareIjS7_NS_4lessIjEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: mialgo::SkinBeautifier::setUi9_BeautyParamsValue(bool, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14SkinBeautifier24setUi9_BeautyParamsValueEbiiiiiiiiiiiiiii(void) {
    ALOGD("_ZN6mialgo14SkinBeautifier24setUi9_BeautyParamsValueEbiiiiiiiiiiiiiii() called");
    return 0;
}

/* Demangled: mialgo::MiFragmentMiui::MiFragmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiuiC2Ev(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiuiC2Ev() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeCaptureBokeh */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo19MiaNodeCaptureBokehE = NULL;

/* Exported Object: vtable for android::List<void**> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPPvEE = NULL;

/* Demangled: mialgo::MiaNode::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo7MiaNode12processImageEPv(void) {
    ALOGD("_ZN6mialgo7MiaNode12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::initVendorTagTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils18initVendorTagTableEv(void) {
    ALOGD("_ZN6mialgo13MetadataUtils18initVendorTagTableEv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMemcpy::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeMemcpy12processImageEPv(void) {
    ALOGD("_ZN6mialgo13MiaNodeMemcpy12processImageEPv() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeSkinBeautifier::~MiaNodeSkinBeautifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo21MiaNodeSkinBeautifierD0Ev(void) {
    ALOGD("_ZN6mialgo21MiaNodeSkinBeautifierD0Ev() called");
    return 0;
}

/* Exported Object: mialgo::AltekCaptureLDC::m_initParamFpcData */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo15AltekCaptureLDC18m_initParamFpcDataE = NULL;

/* Exported Object: mialgo::AltekCaptureLDC::m_initParamStrideX */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo15AltekCaptureLDC18m_initParamStrideXE = NULL;

/* Demangled: mialgo::MiBokehMiui::~MiBokehMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiuiD0Ev(void) {
    ALOGD("_ZN6mialgo11MiBokehMiuiD0Ev() called");
    return 0;
}

/* Demangled: mialgo::MiSegmentMiui::process(mialgo::MiImageBuffer*, mialgo::MiImageBuffer*, unsigned int, int, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiSegmentMiui7processEPNS_13MiImageBufferES2_jiil(void) {
    ALOGD("_ZN6mialgo13MiSegmentMiui7processEPNS_13MiImageBufferES2_jiil() called");
    return 0;
}

/* Exported Object: construction vtable for mialgo::MiaNode-in-mialgo::MiaNodeCaptureBokeh */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6mialgo19MiaNodeCaptureBokehE0_NS_7MiaNodeE = NULL;

/* Demangled: android::Vector<mialgo::MiaSession*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN6mialgo10MiaSessionEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN6mialgo10MiaSessionEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: mialgo::MiaImage::~MiaImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo8MiaImageD0Ev(void) {
    ALOGD("_ZN6mialgo8MiaImageD0Ev() called");
    return 0;
}

/* Exported Object: mialgo::MIA_INTERFACES_SYS */
extern "C" __attribute__((visibility("default"))) void* _ZN6mialgo18MIA_INTERFACES_SYSE = NULL;

/* Exported Object: VTT for mialgo::MiaNodeSkinBeautifier */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6mialgo21MiaNodeSkinBeautifierE = NULL;

/* Demangled: mialgo::MiaNodeSwFlip::~MiaNodeSwFlip() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MiaNodeSwFlipD1Ev(void) {
    ALOGD("_ZN6mialgo13MiaNodeSwFlipD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeCaptureBokeh::CheckPersist() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh12CheckPersistEv(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh12CheckPersistEv() called");
    return 0;
}

/* Demangled: mialgo::MiaService::getCalibrationDataFilePath() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService26getCalibrationDataFilePathEv(void) {
    ALOGD("_ZN6mialgo10MiaService26getCalibrationDataFilePathEv() called");
    return 0;
}

/* Demangled: mialgo::MetadataUtils::freeMetadata(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo13MetadataUtils12freeMetadataEPv(void) {
    ALOGD("_ZN6mialgo13MetadataUtils12freeMetadataEPv() called");
    return 0;
}

/* Demangled: mialgo::AltekCaptureLDC::~AltekCaptureLDC() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo15AltekCaptureLDCD2Ev(void) {
    ALOGD("_ZN6mialgo15AltekCaptureLDCD2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiBokehMiui::GetRawDepthImage(void*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo11MiBokehMiui16GetRawDepthImageEPvb(void) {
    ALOGD("_ZN6mialgo11MiBokehMiui16GetRawDepthImageEPvb() called");
    return 0;
}

/* Demangled: mialgo::MiFragmentMiui::~MiFragmentMiui() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiFragmentMiuiD1Ev(void) {
    ALOGD("_ZN6mialgo14MiFragmentMiuiD1Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaService::createSession(mialgo::GraphDescriptor*, mialgo::SessionOutput*, mialgo::MiaSessionCb*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaService13createSessionEPNS_15GraphDescriptorEPNS_13SessionOutputEPNS_12MiaSessionCbE(void) {
    ALOGD("_ZN6mialgo10MiaService13createSessionEPNS_15GraphDescriptorEPNS_13SessionOutputEPNS_12MiaSessionCbE() called");
    return 0;
}

/* Demangled: mialgo::MiaSession::onFrameComing(mialgo::mia_node_type_t, mialgo::mia_port_id, android::sp<mialgo::MiaImage>) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaSession13onFrameComingENS_15mia_node_type_tENS_11mia_port_idEN7android2spINS_8MiaImageEEE(void) {
    ALOGD("_ZN6mialgo10MiaSession13onFrameComingENS_15mia_node_type_tENS_11mia_port_idEN7android2spINS_8MiaImageEEE() called");
    return 0;
}

/* Demangled: android::Vector<mialgo::MiaSession*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN6mialgo10MiaSessionEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN6mialgo10MiaSessionEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeHdr::MiaNodeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo10MiaNodeHdrC2Ev(void) {
    ALOGD("_ZN6mialgo10MiaNodeHdrC2Ev() called");
    return 0;
}

/* Demangled: mialgo::MiaNodeMiBokeh::ProcessBuffer(android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&, android::sp<mialgo::MiaImage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo14MiaNodeMiBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_(void) {
    ALOGD("_ZN6mialgo14MiaNodeMiBokeh13ProcessBufferERN7android2spINS_8MiaImageEEES5_S5_() called");
    return 0;
}

/* Exported Object: vtable for mialgo::MiaNodeMiBokeh */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6mialgo14MiaNodeMiBokehE = NULL;

/* Demangled: mialgo::MiaNodeCaptureBokeh::processImage(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6mialgo19MiaNodeCaptureBokeh12processImageEPv(void) {
    ALOGD("_ZN6mialgo19MiaNodeCaptureBokeh12processImageEPv() called");
    return 0;
}
