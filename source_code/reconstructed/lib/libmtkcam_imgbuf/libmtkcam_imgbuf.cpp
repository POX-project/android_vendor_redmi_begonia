/*
 * Reverse-Engineered Source for: libmtkcam_imgbuf.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_imgbuf"

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
#include "libmtkcam_imgbuf.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setImgDesc(NSCam::ImageDescId, long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer10setImgDescENS_11ImageDescIdExi(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer10setImgDescENS_11ImageDescIdExi() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSImageBufferHeap::BaseImageBufferHeap */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam17NSImageBufferHeap19BaseImageBufferHeapE = NULL;

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(unsigned int, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2EjRKj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEEC2EjRKj() called");
    return 0;
}

/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impUninit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZThn8_N19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::setBitstreamSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n52_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj(void) {
    ALOGD("_ZTv0_n52_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::IImageBufferHeap */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16IImageBufferHeapE = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufStridesInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInBytesEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInBytesEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufVA(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n100_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj(void) {
    ALOGD("_ZTv0_n100_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp<NSCam::IIonImageBufferHeap>(NSCam::IIonImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getPlaneBitsPerPixel(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getPlaneBitsPerPixelEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getPlaneBitsPerPixelEj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgDesc(NSCam::ImageDescId, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n68_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx(void) {
    ALOGD("_ZTv0_n68_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap>::operator=(NSCam::NSImageBufferHeap::BaseImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::unlockBuf(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::printLocked(android::Printer&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11printLockedERN7android7PrinterEj(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11printLockedERN7android7PrinterEj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgDesc(NSCam::ImageDescId, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp<NSCam::IGrallocImageBufferHeap>(NSCam::IGrallocImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_23IGrallocImageBufferHeapEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_23IGrallocImageBufferHeapEEEPT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, std::__1::allocator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSImageBufferHeap::BaseImageBufferHeap-in-ImageBufferHeapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC19ImageBufferHeapImpl8_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapE = NULL;

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSImageBuffer::BaseImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam13NSImageBuffer15BaseImageBufferE = NULL;

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::lockBufLocked(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13lockBufLockedEPKci(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13lockBufLockedEPKci() called");
    return 0;
}

/* Demangled: android::wp<NSCam::NSImageBufferHeap::BaseImageBufferHeap>::operator=(NSCam::NSImageBufferHeap::BaseImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_(void) {
    ALOGD("_ZN7android2wpIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSImageBufferHeap::BaseImageBufferHeap */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam17NSImageBufferHeap19BaseImageBufferHeapE = NULL;

/* Demangled: NSCam::IImageBufferAllocator::alloc_ion(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IImageBufferAllocator::ExtraParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IImageBufferAllocator9alloc_ionEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi(void) {
    ALOGD("_ZN5NSCam21IImageBufferAllocator9alloc_ionEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::loadFromFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer12loadFromFileEPKc(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer12loadFromFileEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffers_FromBlobHeap(NSCam::ImageBufferInfo const&, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_SideBySide(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6resizeEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::setColorArrangement(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::BaseImageBufferHeap(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapC2EPKc(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapC2EPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_SideBySide(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n148_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi(void) {
    ALOGD("_ZTv0_n148_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapID(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj(void) {
    ALOGD("_ZTv0_n88_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufScanlines(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer15getBufScanlinesEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer15getBufScanlinesEj() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2IPKjEET_NS_9enable_ifIXaasr21__is_forward_iteratorIS7_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueES7_E4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2IPKjEET_NS_9enable_ifIXaasr21__is_forward_iteratorIS7_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueES7_E4typeE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEEC2IPKjEET_NS_9enable_ifIXaasr21__is_forward_iteratorIS7_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueES7_E4typeE() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl6createEPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1Ei(void) {
    ALOGD("_ZN19ImageBufferHeapImpl6createEPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1Ei() called");
    return 0;
}

/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impLockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZThn8_N19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::impLockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZN19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::ImageBufferHeapImpl(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImplC2EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E(void) {
    ALOGD("_ZN19ImageBufferHeapImplC2EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBufferD1Ev(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getImgDesc(NSCam::ImageDescId, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer10getImgDescENS_11ImageDescIdERx(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer10getImgDescENS_11ImageDescIdERx() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::IManager::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap8IManager3getEv(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap8IManager3getEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEE5clearEv(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__list_iterator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, void*> std::__1::list<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, std::__1::allocator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo> >::emplace<>(std::__1::__list_const_iterator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE7emplaceIJEEENS_15__list_iteratorIS4_PvEENS_21__list_const_iteratorIS4_SA_EEDpOT_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE7emplaceIJEEENS_15__list_iteratorIS4_PvEENS_21__list_const_iteratorIS4_SA_EEDpOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufStridesInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n108_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj(void) {
    ALOGD("_ZTv0_n108_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufPA(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufPAEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufPAEj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::onCreate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer8onCreateEv(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer8onCreateEv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufSizeInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer17getBufSizeInBytesEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer17getBufSizeInBytesEj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::impUnlockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZN19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufSizeInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n140_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj(void) {
    ALOGD("_ZTv0_n140_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::__clone(std::__1::__function::__base<void ()>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Demangled: toAHWBufferFormat(int) */
extern "C" __attribute__((visibility("default"))) int _Z17toAHWBufferFormati(void) {
    ALOGD("_Z17toAHWBufferFormati() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::impUninit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZN19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::saveToFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer10saveToFileEPKc(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer10saveToFileEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::lockBufLocked(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer13lockBufLockedEPKci(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer13lockBufLockedEPKci() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::unlockBufLocked(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer15unlockBufLockedEPKc(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer15unlockBufLockedEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufOffsetInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getBufOffsetInBytesEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getBufOffsetInBytesEj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEEE = NULL;

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onCreate(NSCam::MSize const&, int, unsigned int, NSCam::SecType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS_5MSizeEijNS_7SecTypeEi(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS_5MSizeEijNS_7SecTypeEi() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapIDCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufVA(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufStridesInPixel(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInPixelEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInPixelEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IDebuggeeCookie>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::lockBuf(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEE = NULL;

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::unlockBuf(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer9unlockBufEPKc(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer9unlockBufEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv(void) {
    ALOGD("_ZTv0_n16_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpQueryBufSizeInBytes(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap23helpQueryBufSizeInBytesEjj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap23helpQueryBufSizeInBytesEjj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::lockBuf(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n124_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci(void) {
    ALOGD("_ZTv0_n124_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffers_FromBlobHeap(NSCam::ImageBufferInfo const&, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n152_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci(void) {
    ALOGD("_ZTv0_n152_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::lockBuf(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer7lockBufEPKci(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer7lockBufEPKci() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD2Ev(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD2Ev() called");
    return 0;
}

/* Exported Object: VTT for ImageBufferHeapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT19ImageBufferHeapImpl = NULL;

/* Demangled: NSCam::ImgBufCreator::generateFormat(NSCam::IImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13ImgBufCreator14generateFormatEPNS_16IImageBufferHeapE(void) {
    ALOGD("_ZN5NSCam13ImgBufCreator14generateFormatEPNS_16IImageBufferHeapE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: NSCam::NSImageBuffer::BaseImageBuffer::mfgFileCacheEn */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam13NSImageBuffer15BaseImageBuffer14mfgFileCacheEnE = NULL;

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE = NULL;

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer(NSCam::ImgBufCreator*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer(NSCam::ImgBufCreator*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE(void) {
    ALOGD("_ZTv0_n136_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE = NULL;

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, int, NSCam::MSize const&, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufSizeInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj(void) {
    ALOGD("_ZTv0_n104_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj() called");
    return 0;
}

/* Demangled: NSCam::IIonImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IIonImageBufferHeap::AllocExtraParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19IIonImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi(void) {
    ALOGD("_ZN5NSCam19IIonImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi() called");
    return 0;
}

/* Demangled: NSCam::IGrallocImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IGrallocImageBufferHeap::AllocExtraParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23IGrallocImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi(void) {
    ALOGD("_ZN5NSCam23IGrallocImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufStridesInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IImageBufferAllocator::alloc_gb(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IImageBufferAllocator::ExtraParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IImageBufferAllocator8alloc_gbEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi(void) {
    ALOGD("_ZN5NSCam21IImageBufferAllocator8alloc_gbEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEEE = NULL;

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::ImageBufferHeapImpl(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImplC1EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E(void) {
    ALOGD("_ZN19ImageBufferHeapImplC1EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getPlaneBitsPerPixel(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::setImgDesc(NSCam::ImageDescId, long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi(void) {
    ALOGD("_ZTv0_n64_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi() called");
    return 0;
}

/* Demangled: NSCam::IGraphicImageBufferHeap::create(char const*, unsigned int, NSCam::MSize, int, native_handle const**, int, int, NSCam::SecType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23IGraphicImageBufferHeap6createEPKcjNS_5MSizeEiPPK13native_handleiiNS_7SecTypeE(void) {
    ALOGD("_ZN5NSCam23IGraphicImageBufferHeap6createEPKcjNS_5MSizeEiPPK13native_handleiiNS_7SecTypeE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFileCache>::operator=(android::sp<NSCam::IFileCache>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::doUnmapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo const&, NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl14doUnmapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE(void) {
    ALOGD("_ZN19ImageBufferHeapImpl14doUnmapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setColorArrangement(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer19setColorArrangementEi(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer19setColorArrangementEi() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpFlushCache(NSCam::eCacheCtrl, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpFlushCacheENS_10eCacheCtrlEPKNS1_21HelperParamFlushCacheEj(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpFlushCacheENS_10eCacheCtrlEPKNS1_21HelperParamFlushCacheEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::ImageBufferHeap-in-ImageBufferHeapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC19ImageBufferHeapImpl0_N5NSCam15ImageBufferHeapE = NULL;

/* Demangled: virtual thunk to NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::syncCache(NSCam::eCacheCtrl) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::setColorArrangement(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi(void) {
    ALOGD("_ZTv0_n56_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setExtParam(NSCam::MSize const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer11setExtParamERKNS_5MSizeEj(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer11setExtParamERKNS_5MSizeEj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::setBitstreamSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj() called");
    return 0;
}

/* Demangled: NSCam::IImageBufferAllocator::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IImageBufferAllocator11getInstanceEv(void) {
    ALOGD("_ZN5NSCam21IImageBufferAllocator11getInstanceEv() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::doMapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo const&, NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl12doMapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE(void) {
    ALOGD("_ZN19ImageBufferHeapImpl12doMapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE() called");
    return 0;
}

/* Demangled: NSCam::IIonDeviceProvider::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18IIonDeviceProvider3getEv(void) {
    ALOGD("_ZN5NSCam18IIonDeviceProvider3getEv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapID(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impInit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZThn8_N19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IIonDevice>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam10IIonDeviceEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam10IIonDeviceEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSImageBufferHeap::IRegistrationCookie>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam17NSImageBufferHeap19IRegistrationCookieEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam17NSImageBufferHeap19IRegistrationCookieEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, int, NSCam::MSize const&, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n144_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj(void) {
    ALOGD("_ZTv0_n144_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for ImageBufferHeapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV19ImageBufferHeapImpl = NULL;

/* Demangled: NSCam::ISecureImageBufferHeapAllocator::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam31ISecureImageBufferHeapAllocator11getInstanceEv(void) {
    ALOGD("_ZN5NSCam31ISecureImageBufferHeapAllocator11getInstanceEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufPA(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj(void) {
    ALOGD("_ZTv0_n96_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBufferD2Ev(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBufferD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgBitsPerPixel() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv(void) {
    ALOGD("_ZTv0_n36_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpUnmapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamMapPA const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16helpUnmapPhyAddrEPKcRKNS1_16HelperParamMapPAE(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16helpUnmapPhyAddrEPKcRKNS1_16HelperParamMapPAE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: std::__1::function<void ()>::operator=(std::__1::function<void ()> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18functionIFvvEEaSERKS2_(void) {
    ALOGD("_ZNSt3__18functionIFvvEEaSERKS2_() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getExtOffsetInBytes(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getExtOffsetInBytesEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getExtOffsetInBytesEj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::setImgDesc(NSCam::ImageDescId, long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpCheckBufStrides(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap19helpCheckBufStridesEjj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap19helpCheckBufStridesEjj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufPA(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj() called");
    return 0;
}

/* Demangled: NSCam::IImageBufferAllocator::alloc(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IImageBufferAllocator::ExtraParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IImageBufferAllocator5allocEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi(void) {
    ALOGD("_ZN5NSCam21IImageBufferAllocator5allocEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi() called");
    return 0;
}

/* Demangled: NSCam::ImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_14PortBufInfo_v1Ei(void) {
    ALOGD("_ZN5NSCam15ImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_14PortBufInfo_v1Ei() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setBitstreamSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer16setBitstreamSizeEj(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer16setBitstreamSizeEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBuffer::BaseImageBuffer::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onCreate(NSCam::NSImageBufferHeap::BaseImageBufferHeap::OnCreate const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS1_8OnCreateE(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS1_8OnCreateE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::updateImgInfo(NSCam::MSize const&, int, unsigned int const*, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j(void) {
    ALOGD("_ZTv0_n72_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j() called");
    return 0;
}

/* Demangled: NSCam::IDummyImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_dummy const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IDummyImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_17PortBufInfo_dummyEi(void) {
    ALOGD("_ZN5NSCam21IDummyImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_17PortBufInfo_dummyEi() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBufferD0Ev(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBufferD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::updateImgInfo(NSCam::MSize const&, int, unsigned int const*, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpMapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamMapPA&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpMapPhyAddrEPKcRNS1_16HelperParamMapPAE(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpMapPhyAddrEPKcRNS1_16HelperParamMapPAE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::unlockBuf(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n128_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc(void) {
    ALOGD("_ZTv0_n128_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc() called");
    return 0;
}

/* Demangled: ImageBufferHeapImpl::impInit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZN19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: NSCam::ISecureImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::ISecureImageBufferHeap::AllocExtraParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam22ISecureImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi(void) {
    ALOGD("_ZN5NSCam22ISecureImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCam::IGraphicImageBufferHeap::create(char const*, ANativeWindowBuffer*, int, int, bool, NSCam::SecType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23IGraphicImageBufferHeap6createEPKcP19ANativeWindowBufferiibNS_7SecTypeE(void) {
    ALOGD("_ZN5NSCam23IGraphicImageBufferHeap6createEPKcP19ANativeWindowBufferiibNS_7SecTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::print(android::Printer&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap5printERN7android7PrinterEj(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap5printERN7android7PrinterEj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiiEEEE = NULL;

/* Demangled: NSCam::IImageBufferAllocator::free(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IImageBufferAllocator4freeEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam21IImageBufferAllocator4freeEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getImgBitsPerPixel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer18getImgBitsPerPixelEv(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer18getImgBitsPerPixelEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IGraphicImageBufferHeap::castFrom(NSCam::IImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23IGraphicImageBufferHeap8castFromEPNS_16IImageBufferHeapE(void) {
    ALOGD("_ZN5NSCam23IGraphicImageBufferHeap8castFromEPNS_16IImageBufferHeapE() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufVA(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufVAEj(void) {
    ALOGD("_ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufVAEj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgBitsPerPixel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv(void) {
    ALOGD("_ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getPlaneBitsPerPixel(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj(void) {
    ALOGD("_ZTv0_n40_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impUnlockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void) {
    ALOGD("_ZThn8_N19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::initLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10initLockedEv(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10initLockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::dumpInfoLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14dumpInfoLockedEv(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14dumpInfoLockedEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap>::sp(NSCam::NSImageBufferHeap::BaseImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEC2EPS3_() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, std::__1::allocator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo> >::erase(std::__1::__list_const_iterator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void) {
    ALOGD("_ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::syncCache(NSCam::eCacheCtrl) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n132_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE(void) {
    ALOGD("_ZTv0_n132_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE() called");
    return 0;
}

/* Demangled: NSCam::IGraphicImageBufferHeap::create(char const*, unsigned int, unsigned int, unsigned int, native_handle const**, int, int, bool, NSCam::SecType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam23IGraphicImageBufferHeap6createEPKcjjjPPK13native_handleiibNS_7SecTypeE(void) {
    ALOGD("_ZN5NSCam23IGraphicImageBufferHeap6createEPKcjjjPPK13native_handleiibNS_7SecTypeE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7destroyEv() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSImageBuffer::BaseImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13NSImageBuffer15BaseImageBufferE = NULL;

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::uninitLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap12uninitLockedEv(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap12uninitLockedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapIDCount() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n92_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv(void) {
    ALOGD("_ZTv0_n92_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEclEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEclEv() called");
    return 0;
}

/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::toWorldSharedMemory(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13NSImageBuffer15BaseImageBuffer19toWorldSharedMemoryEjj(void) {
    ALOGD("_ZN5NSCam13NSImageBuffer15BaseImageBuffer19toWorldSharedMemoryEjj() called");
    return 0;
}

/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::unlockBufLocked(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15unlockBufLockedEPKc(void) {
    ALOGD("_ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15unlockBufLockedEPKc() called");
    return 0;
}

/* Demangled: NSCam::IIonImageBufferHeapAllocator::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam28IIonImageBufferHeapAllocator11getInstanceEv(void) {
    ALOGD("_ZN5NSCam28IIonImageBufferHeapAllocator11getInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
