/*
 * Reverse-Engineered ABI Specification for: libmtkcam_imgbuf.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_imgbuf.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_IMGBUF_H
#define BEGONIA_RE_LIBMTKCAM_IMGBUF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer10setImgDescENS_11ImageDescIdExi */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setImgDesc(NSCam::ImageDescId, long long, int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer10setImgDescENS_11ImageDescIdExi(void);

/* Symbol: _ZTTN5NSCam17NSImageBufferHeap19BaseImageBufferHeapE */
/* Demangled: VTT for NSCam::NSImageBufferHeap::BaseImageBufferHeap */
extern void* _ZTTN5NSCam17NSImageBufferHeap19BaseImageBufferHeapE;

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2EjRKj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(unsigned int, unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2EjRKj(void);

/* Symbol: _ZThn8_N19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impUninit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZThn8_N19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, unsigned int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTv0_n52_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::setBitstreamSize(unsigned int) */
int _ZTv0_n52_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj(void);

/* Symbol: _ZTVN5NSCam16IImageBufferHeapE */
/* Demangled: vtable for NSCam::IImageBufferHeap */
extern void* _ZTVN5NSCam16IImageBufferHeapE;

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInBytesEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufStridesInBytes(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInBytesEj(void);

/* Symbol: _ZTv0_n100_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufVA(unsigned int) const */
int _ZTv0_n100_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj(void);

/* Symbol: _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_ */
/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp<NSCam::IIonImageBufferHeap>(NSCam::IIonImageBufferHeap*) */
int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_19IIonImageBufferHeapEEEPT_(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getPlaneBitsPerPixelEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getPlaneBitsPerPixel(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getPlaneBitsPerPixelEj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTv0_n68_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgDesc(NSCam::ImageDescId, long long&) const */
int _ZTv0_n68_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_ */
/* Demangled: android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap>::operator=(NSCam::NSImageBufferHeap::BaseImageBufferHeap*) */
int _ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::unlockBuf(char const*) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11printLockedERN7android7PrinterEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::printLocked(android::Printer&, unsigned int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11printLockedERN7android7PrinterEj(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgDesc(NSCam::ImageDescId, long long&) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap10getImgDescENS_11ImageDescIdERx(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEj */
/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE8__appendEj(void);

/* Symbol: _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_23IGrallocImageBufferHeapEEEPT_ */
/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp<NSCam::IGrallocImageBufferHeap>(NSCam::IGrallocImageBufferHeap*) */
int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2INS1_23IGrallocImageBufferHeapEEEPT_(void);

/* Symbol: _ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD1Ev */
/* Demangled: virtual thunk to NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
int _ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD1Ev(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, std::__1::allocator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo> >::clear() */
int _ZNSt3__110__list_impIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZTC19ImageBufferHeapImpl8_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapE */
/* Demangled: construction vtable for NSCam::NSImageBufferHeap::BaseImageBufferHeap-in-ImageBufferHeapImpl */
extern void* _ZTC19ImageBufferHeapImpl8_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapE;

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTTN5NSCam13NSImageBuffer15BaseImageBufferE */
/* Demangled: VTT for NSCam::NSImageBuffer::BaseImageBuffer */
extern void* _ZTTN5NSCam13NSImageBuffer15BaseImageBufferE;

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13lockBufLockedEPKci */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::lockBufLocked(char const*, int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13lockBufLockedEPKci(void);

/* Symbol: _ZN7android2wpIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_ */
/* Demangled: android::wp<NSCam::NSImageBufferHeap::BaseImageBufferHeap>::operator=(NSCam::NSImageBufferHeap::BaseImageBufferHeap*) */
int _ZN7android2wpIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEaSEPS3_(void);

/* Symbol: _ZTVN5NSCam17NSImageBufferHeap19BaseImageBufferHeapE */
/* Demangled: vtable for NSCam::NSImageBufferHeap::BaseImageBufferHeap */
extern void* _ZTVN5NSCam17NSImageBufferHeap19BaseImageBufferHeapE;

/* Symbol: _ZN5NSCam21IImageBufferAllocator9alloc_ionEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi */
/* Demangled: NSCam::IImageBufferAllocator::alloc_ion(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IImageBufferAllocator::ExtraParam const&, int) */
int _ZN5NSCam21IImageBufferAllocator9alloc_ionEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer12loadFromFileEPKc */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::loadFromFile(char const*) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer12loadFromFileEPKc(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffers_FromBlobHeap(NSCam::ImageBufferInfo const&, char const*, int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_SideBySide(int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*>&>&) */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6resizeEj */
/* Demangled: std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::resize(unsigned int) */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6resizeEj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::setColorArrangement(int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapC2EPKc */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::BaseImageBufferHeap(char const*) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapC2EPKc(void);

/* Symbol: _ZTv0_n148_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_SideBySide(int) */
int _ZTv0_n148_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap28createImageBuffer_SideBySideEi(void);

/* Symbol: _ZTv0_n88_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapID(unsigned int) const */
int _ZTv0_n88_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE12do_constructEPvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer15getBufScanlinesEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufScanlines(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer15getBufScanlinesEj(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::__clone() const */
int _ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2IPKjEET_NS_9enable_ifIXaasr21__is_forward_iteratorIS7_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueES7_E4typeE */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2IPKjEET_NS_9enable_ifIXaasr21__is_forward_iteratorIS7_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueES7_E4typeE */
int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2IPKjEET_NS_9enable_ifIXaasr21__is_forward_iteratorIS7_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueES7_E4typeE(void);

/* Symbol: _ZN19ImageBufferHeapImpl6createEPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1Ei */
/* Demangled: ImageBufferHeapImpl::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&, int) */
int _ZN19ImageBufferHeapImpl6createEPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1Ei(void);

/* Symbol: _ZThn8_N19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impLockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZThn8_N19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: ImageBufferHeapImpl::impLockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZN19ImageBufferHeapImpl10impLockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: _ZN19ImageBufferHeapImplC2EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E */
/* Demangled: ImageBufferHeapImpl::ImageBufferHeapImpl(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&) */
int _ZN19ImageBufferHeapImplC2EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBufferD1Ev */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
int _ZN5NSCam13NSImageBuffer15BaseImageBufferD1Ev(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer10getImgDescENS_11ImageDescIdERx */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getImgDesc(NSCam::ImageDescId, long long&) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer10getImgDescENS_11ImageDescIdERx(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap8IManager3getEv */
/* Demangled: NSCam::NSImageBufferHeap::IManager::get() */
int _ZN5NSCam17NSImageBufferHeap8IManager3getEv(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEE5clearEv */
/* Demangled: android::sp<NSCam::IImageBuffer>::clear() */
int _ZN7android2spIN5NSCam12IImageBufferEE5clearEv(void);

/* Symbol: _ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE7emplaceIJEEENS_15__list_iteratorIS4_PvEENS_21__list_const_iteratorIS4_SA_EEDpOT_ */
/* Demangled: std::__1::__list_iterator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, void*> std::__1::list<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, std::__1::allocator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo> >::emplace<>(std::__1::__list_const_iterator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, void*>) */
int _ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE7emplaceIJEEENS_15__list_iteratorIS4_PvEENS_21__list_const_iteratorIS4_SA_EEDpOT_(void);

/* Symbol: _ZTv0_n108_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufStridesInBytes(unsigned int) const */
int _ZTv0_n108_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufPAEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufPA(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufPAEj(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer8onCreateEv */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::onCreate() */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer8onCreateEv(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer17getBufSizeInBytesEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufSizeInBytes(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer17getBufSizeInBytesEj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: ImageBufferHeapImpl::impUnlockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZN19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE12do_constructEPvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> >::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEE12do_constructEPvj(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufSizeInBytes(unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTv0_n140_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, unsigned int) */
int _ZTv0_n140_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjj(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::__clone(std::__1::__function::__base<void ()>*) const */
int _ZNKSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _Z17toAHWBufferFormati */
/* Demangled: toAHWBufferFormat(int) */
int _Z17toAHWBufferFormati(void);

/* Symbol: _ZN19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: ImageBufferHeapImpl::impUninit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZN19ImageBufferHeapImpl9impUninitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer10saveToFileEPKc */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::saveToFile(char const*) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer10saveToFileEPKc(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer13lockBufLockedEPKci */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::lockBufLocked(char const*, int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer13lockBufLockedEPKci(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer15unlockBufLockedEPKc */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::unlockBufLocked(char const*) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer15unlockBufLockedEPKc(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getBufOffsetInBytesEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufOffsetInBytes(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getBufOffsetInBytesEj(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSImageBuffer::BaseImageBuffer::ImgBufInfo> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam13NSImageBuffer15BaseImageBuffer10ImgBufInfoEEEEE;

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS_5MSizeEijNS_7SecTypeEi */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onCreate(NSCam::MSize const&, int, unsigned int, NSCam::SecType, int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS_5MSizeEijNS_7SecTypeEi(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapIDCount() const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufVA(unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufVAEj(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInPixelEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufStridesInPixel(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer20getBufStridesInPixelEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IDebuggeeCookie>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::lockBuf(char const*, int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()> */
extern void* _ZTVNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEE;

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer9unlockBufEPKc */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::unlockBuf(char const*) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer9unlockBufEPKc(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZTv0_n16_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::onFirstRef() */
int _ZTv0_n16_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv(void);

/* Symbol: _ZTv0_n20_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::onLastStrongRef(void const*) */
int _ZTv0_n20_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap23helpQueryBufSizeInBytesEjj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpQueryBufSizeInBytes(unsigned int, unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap23helpQueryBufSizeInBytesEjj(void);

/* Symbol: _ZTv0_n124_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::lockBuf(char const*, int) */
int _ZTv0_n124_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap7lockBufEPKci(void);

/* Symbol: _ZTv0_n152_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffers_FromBlobHeap(NSCam::ImageBufferInfo const&, char const*, int) */
int _ZTv0_n152_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap31createImageBuffers_FromBlobHeapERKNS_15ImageBufferInfoEPKci(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer7lockBufEPKci */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::lockBuf(char const*, int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer7lockBufEPKci(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onLastStrongRef(void const*) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD2Ev */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD2Ev(void);

/* Symbol: _ZTT19ImageBufferHeapImpl */
/* Demangled: VTT for ImageBufferHeapImpl */
extern void* _ZTT19ImageBufferHeapImpl;

/* Symbol: _ZN5NSCam13ImgBufCreator14generateFormatEPNS_16IImageBufferHeapE */
/* Demangled: NSCam::ImgBufCreator::generateFormat(NSCam::IImageBufferHeap*) */
int _ZN5NSCam13ImgBufCreator14generateFormatEPNS_16IImageBufferHeapE(void);

/* Symbol: _ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
int _ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE18destroy_deallocateEv(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer14mfgFileCacheEnE */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::mfgFileCacheEn */
extern void* _ZN5NSCam13NSImageBuffer15BaseImageBuffer14mfgFileCacheEnE;

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE;

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer(NSCam::ImgBufCreator*) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTv0_n136_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer(NSCam::ImgBufCreator*) */
int _ZTv0_n136_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap17createImageBufferEPNS_13ImgBufCreatorE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE */
/* Demangled: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE;

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, int, NSCam::MSize const&, unsigned int const*) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj(void);

/* Symbol: _ZTv0_n104_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufSizeInBytes(unsigned int) const */
int _ZTv0_n104_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap17getBufSizeInBytesEj(void);

/* Symbol: _ZN5NSCam19IIonImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi */
/* Demangled: NSCam::IIonImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IIonImageBufferHeap::AllocExtraParam const&, int) */
int _ZN5NSCam19IIonImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi(void);

/* Symbol: _ZN5NSCam23IGrallocImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi */
/* Demangled: NSCam::IGrallocImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IGrallocImageBufferHeap::AllocExtraParam const&, int) */
int _ZN5NSCam23IGrallocImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufStridesInBytes(unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getBufStridesInBytesEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam21IImageBufferAllocator8alloc_gbEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi */
/* Demangled: NSCam::IImageBufferAllocator::alloc_gb(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IImageBufferAllocator::ExtraParam const&, int) */
int _ZN5NSCam21IImageBufferAllocator8alloc_gbEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj(void);

/* Symbol: _ZN19ImageBufferHeapImplC1EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E */
/* Demangled: ImageBufferHeapImpl::ImageBufferHeapImpl(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&) */
int _ZN19ImageBufferHeapImplC1EPKcRKN5NSCam21IImageBufferAllocator8ImgParamERKNS2_14PortBufInfo_v1E(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeapD0Ev(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getPlaneBitsPerPixel(unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: _ZTv0_n64_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::setImgDesc(NSCam::ImageDescId, long long, int) */
int _ZTv0_n64_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi(void);

/* Symbol: _ZN5NSCam23IGraphicImageBufferHeap6createEPKcjNS_5MSizeEiPPK13native_handleiiNS_7SecTypeE */
/* Demangled: NSCam::IGraphicImageBufferHeap::create(char const*, unsigned int, NSCam::MSize, int, native_handle const**, int, int, NSCam::SecType) */
int _ZN5NSCam23IGraphicImageBufferHeap6createEPKcjNS_5MSizeEiPPK13native_handleiiNS_7SecTypeE(void);

/* Symbol: _ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_ */
/* Demangled: android::sp<NSCam::IFileCache>::operator=(android::sp<NSCam::IFileCache>&&) */
int _ZN7android2spIN5NSCam10IFileCacheEEaSEOS3_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj(void);

/* Symbol: _ZN19ImageBufferHeapImpl14doUnmapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE */
/* Demangled: ImageBufferHeapImpl::doUnmapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo const&, NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo&) */
int _ZN19ImageBufferHeapImpl14doUnmapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer19setColorArrangementEi */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setColorArrangement(int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer19setColorArrangementEi(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpFlushCacheENS_10eCacheCtrlEPKNS1_21HelperParamFlushCacheEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpFlushCache(NSCam::eCacheCtrl, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache const*, unsigned int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpFlushCacheENS_10eCacheCtrlEPKNS1_21HelperParamFlushCacheEj(void);

/* Symbol: _ZTC19ImageBufferHeapImpl0_N5NSCam15ImageBufferHeapE */
/* Demangled: construction vtable for NSCam::ImageBufferHeap-in-ImageBufferHeapImpl */
extern void* _ZTC19ImageBufferHeapImpl0_N5NSCam15ImageBufferHeapE;

/* Symbol: _ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD0Ev */
/* Demangled: virtual thunk to NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
int _ZTv0_n12_N5NSCam13NSImageBuffer15BaseImageBufferD0Ev(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::syncCache(NSCam::eCacheCtrl) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE(void);

/* Symbol: _ZTv0_n56_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::setColorArrangement(int) */
int _ZTv0_n56_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap19setColorArrangementEi(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer11setExtParamERKNS_5MSizeEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setExtParam(NSCam::MSize const&, unsigned int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer11setExtParamERKNS_5MSizeEj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::setBitstreamSize(unsigned int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16setBitstreamSizeEj(void);

/* Symbol: _ZN5NSCam21IImageBufferAllocator11getInstanceEv */
/* Demangled: NSCam::IImageBufferAllocator::getInstance() */
int _ZN5NSCam21IImageBufferAllocator11getInstanceEv(void);

/* Symbol: _ZN19ImageBufferHeapImpl12doMapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE */
/* Demangled: ImageBufferHeapImpl::doMapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo const&, NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo&) */
int _ZN19ImageBufferHeapImpl12doMapPhyAddrEPKcRKN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoERNS4_7BufInfoE(void);

/* Symbol: _ZN5NSCam18IIonDeviceProvider3getEv */
/* Demangled: NSCam::IIonDeviceProvider::get() */
int _ZN5NSCam18IIonDeviceProvider3getEv(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapID(unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap9getHeapIDEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE12do_constructEPvj(void);

/* Symbol: _ZThn8_N19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impInit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZThn8_N19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE12do_constructEPvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam10IIonDeviceEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IIonDevice>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam10IIonDeviceEED2Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam17NSImageBufferHeap19IRegistrationCookieEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSImageBufferHeap::IRegistrationCookie>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam17NSImageBufferHeap19IRegistrationCookieEED2Ev(void);

/* Symbol: _ZTv0_n144_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::createImageBuffer_FromBlobHeap(unsigned int, int, NSCam::MSize const&, unsigned int const*) */
int _ZTv0_n144_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap30createImageBuffer_FromBlobHeapEjiRKNS_5MSizeEPKj(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTV19ImageBufferHeapImpl */
/* Demangled: vtable for ImageBufferHeapImpl */
extern void* _ZTV19ImageBufferHeapImpl;

/* Symbol: _ZN5NSCam31ISecureImageBufferHeapAllocator11getInstanceEv */
/* Demangled: NSCam::ISecureImageBufferHeapAllocator::getInstance() */
int _ZN5NSCam31ISecureImageBufferHeapAllocator11getInstanceEv(void);

/* Symbol: _ZTv0_n96_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufPA(unsigned int) const */
int _ZTv0_n96_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBufferD2Ev */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
int _ZN5NSCam13NSImageBuffer15BaseImageBufferD2Ev(void);

/* Symbol: _ZTv0_n36_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgBitsPerPixel() const */
int _ZTv0_n36_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onFirstRef() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10onFirstRefEv(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16helpUnmapPhyAddrEPKcRKNS1_16HelperParamMapPAE */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpUnmapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamMapPA const&) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap16helpUnmapPhyAddrEPKcRKNS1_16HelperParamMapPAE(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZNSt3__18functionIFvvEEaSERKS2_ */
/* Demangled: std::__1::function<void ()>::operator=(std::__1::function<void ()> const&) */
int _ZNSt3__18functionIFvvEEaSERKS2_(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getExtOffsetInBytesEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getExtOffsetInBytes(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer19getExtOffsetInBytesEj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::setImgDesc(NSCam::ImageDescId, long long, int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10setImgDescENS_11ImageDescIdExi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap19helpCheckBufStridesEjj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpCheckBufStrides(unsigned int, unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap19helpCheckBufStridesEjj(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getBufPA(unsigned int) const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap8getBufPAEj(void);

/* Symbol: _ZN5NSCam21IImageBufferAllocator5allocEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi */
/* Demangled: NSCam::IImageBufferAllocator::alloc(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::IImageBufferAllocator::ExtraParam const&, int) */
int _ZN5NSCam21IImageBufferAllocator5allocEPKcRKNS0_8ImgParamERKNS0_10ExtraParamEi(void);

/* Symbol: _ZN5NSCam15ImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_14PortBufInfo_v1Ei */
/* Demangled: NSCam::ImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_v1 const&, int) */
int _ZN5NSCam15ImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_14PortBufInfo_v1Ei(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer16setBitstreamSizeEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::setBitstreamSize(unsigned int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer16setBitstreamSizeEj(void);

/* Symbol: _ZTv0_n20_N5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::NSImageBuffer::BaseImageBuffer::onLastStrongRef(void const*) */
int _ZTv0_n20_N5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS1_8OnCreateE */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::onCreate(NSCam::NSImageBufferHeap::BaseImageBufferHeap::OnCreate const&) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8onCreateERKNS1_8OnCreateE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE8do_splatEPvPKvj(void);

/* Symbol: _ZTv0_n72_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::updateImgInfo(NSCam::MSize const&, int, unsigned int const*, unsigned int const*, unsigned int) */
int _ZTv0_n72_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j(void);

/* Symbol: _ZN5NSCam21IDummyImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_17PortBufInfo_dummyEi */
/* Demangled: NSCam::IDummyImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::PortBufInfo_dummy const&, int) */
int _ZN5NSCam21IDummyImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS_17PortBufInfo_dummyEi(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBufferD0Ev */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::~BaseImageBuffer() */
int _ZN5NSCam13NSImageBuffer15BaseImageBufferD0Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::updateImgInfo(NSCam::MSize const&, int, unsigned int const*, unsigned int const*, unsigned int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap13updateImgInfoERKNS_5MSizeEiPKjS6_j(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE7do_copyEPvPKvj(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpMapPhyAddrEPKcRNS1_16HelperParamMapPAE */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::helpMapPhyAddr(char const*, NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamMapPA&) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14helpMapPhyAddrEPKcRNS1_16HelperParamMapPAE(void);

/* Symbol: _ZTv0_n128_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::unlockBuf(char const*) */
int _ZTv0_n128_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9unlockBufEPKc(void);

/* Symbol: _ZN19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: ImageBufferHeapImpl::impInit(android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZN19ImageBufferHeapImpl7impInitERKN7android6VectorINS0_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: _ZN5NSCam22ISecureImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi */
/* Demangled: NSCam::ISecureImageBufferHeap::create(char const*, NSCam::IImageBufferAllocator::ImgParam const&, NSCam::ISecureImageBufferHeap::AllocExtraParam const&, int) */
int _ZN5NSCam22ISecureImageBufferHeap6createEPKcRKNS_21IImageBufferAllocator8ImgParamERKNS0_15AllocExtraParamEi(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN5NSCam23IGraphicImageBufferHeap6createEPKcP19ANativeWindowBufferiibNS_7SecTypeE */
/* Demangled: NSCam::IGraphicImageBufferHeap::create(char const*, ANativeWindowBuffer*, int, int, bool, NSCam::SecType) */
int _ZN5NSCam23IGraphicImageBufferHeap6createEPKcP19ANativeWindowBufferiibNS_7SecTypeE(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap5printERN7android7PrinterEj */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::print(android::Printer&, unsigned int) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap5printERN7android7PrinterEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiiEEEE;

/* Symbol: _ZN5NSCam21IImageBufferAllocator4freeEPNS_12IImageBufferE */
/* Demangled: NSCam::IImageBufferAllocator::free(NSCam::IImageBuffer*) */
int _ZN5NSCam21IImageBufferAllocator4freeEPNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::onLastStrongRef(void const*) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer15onLastStrongRefEPKv(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer18getImgBitsPerPixelEv */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getImgBitsPerPixel() const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer18getImgBitsPerPixelEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HeapInfo> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap8HeapInfoEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam23IGraphicImageBufferHeap8castFromEPNS_16IImageBufferHeapE */
/* Demangled: NSCam::IGraphicImageBufferHeap::castFrom(NSCam::IImageBufferHeap*) */
int _ZN5NSCam23IGraphicImageBufferHeap8castFromEPNS_16IImageBufferHeapE(void);

/* Symbol: _ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufVAEj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::getBufVA(unsigned int) const */
int _ZNK5NSCam13NSImageBuffer15BaseImageBuffer8getBufVAEj(void);

/* Symbol: _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::getImgBitsPerPixel() const */
int _ZNK5NSCam17NSImageBufferHeap19BaseImageBufferHeap18getImgBitsPerPixelEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEE10do_destroyEPvj(void);

/* Symbol: _ZTv0_n40_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getPlaneBitsPerPixel(unsigned int) const */
int _ZTv0_n40_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap20getPlaneBitsPerPixelEj(void);

/* Symbol: _ZThn8_N19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE */
/* Demangled: non-virtual thunk to ImageBufferHeapImpl::impUnlockBuf(char const*, int, android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> > const&) */
int _ZThn8_N19ImageBufferHeapImpl12impUnlockBufEPKciRKN7android6VectorINS2_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEEE(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufInfo> >::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap7BufInfoEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10initLockedEv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::initLocked() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap10initLockedEv(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14dumpInfoLockedEv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::dumpInfoLocked() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap14dumpInfoLockedEv(void);

/* Symbol: _ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEC2EPS3_ */
/* Demangled: android::sp<NSCam::NSImageBufferHeap::BaseImageBufferHeap>::sp(NSCam::NSImageBufferHeap::BaseImageBufferHeap*) */
int _ZN7android2spIN5NSCam17NSImageBufferHeap19BaseImageBufferHeapEEC2EPS3_(void);

/* Symbol: _ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE */
/* Demangled: std::__1::list<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, std::__1::allocator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo> >::erase(std::__1::__list_const_iterator<NSCam::NSImageBufferHeap::BaseImageBufferHeap::BufLockInfo, void*>) */
int _ZNSt3__14listIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap11BufLockInfoENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void);

/* Symbol: _ZTv0_n132_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::syncCache(NSCam::eCacheCtrl) */
int _ZTv0_n132_N5NSCam17NSImageBufferHeap19BaseImageBufferHeap9syncCacheENS_10eCacheCtrlE(void);

/* Symbol: _ZN5NSCam23IGraphicImageBufferHeap6createEPKcjjjPPK13native_handleiibNS_7SecTypeE */
/* Demangled: NSCam::IGraphicImageBufferHeap::create(char const*, unsigned int, unsigned int, unsigned int, native_handle const**, int, int, bool, NSCam::SecType) */
int _ZN5NSCam23IGraphicImageBufferHeap6createEPKcjjjPPK13native_handleiibNS_7SecTypeE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::destroy() */
int _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEE7destroyEv(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZTVN5NSCam13NSImageBuffer15BaseImageBufferE */
/* Demangled: vtable for NSCam::NSImageBuffer::BaseImageBuffer */
extern void* _ZTVN5NSCam13NSImageBuffer15BaseImageBufferE;

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap12uninitLockedEv */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::uninitLocked() */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap12uninitLockedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEEE */
/* Demangled: vtable for android::Vector<NSCam::NSImageBufferHeap::BaseImageBufferHeap::HelperParamFlushCache> */
extern void* _ZTVN7android6VectorIN5NSCam17NSImageBufferHeap19BaseImageBufferHeap21HelperParamFlushCacheEEE;

/* Symbol: _ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::~BaseImageBufferHeap() */
int _ZTv0_n12_N5NSCam17NSImageBufferHeap19BaseImageBufferHeapD1Ev(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZTv0_n92_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv */
/* Demangled: virtual thunk to NSCam::NSImageBufferHeap::BaseImageBufferHeap::getHeapIDCount() const */
int _ZTv0_n92_NK5NSCam17NSImageBufferHeap19BaseImageBufferHeap14getHeapIDCountEv(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEclEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&>, std::__1::allocator<std::__1::__bind<bool (&)(unsigned int, unsigned int, unsigned int), unsigned int&, unsigned int&, unsigned int&> >, void ()>::operator()() */
int _ZNSt3__110__function6__funcINS_6__bindIRFbjjjEJRjS5_S5_EEENS_9allocatorIS6_EEFvvEEclEv(void);

/* Symbol: _ZN5NSCam13NSImageBuffer15BaseImageBuffer19toWorldSharedMemoryEjj */
/* Demangled: NSCam::NSImageBuffer::BaseImageBuffer::toWorldSharedMemory(unsigned int, unsigned int) */
int _ZN5NSCam13NSImageBuffer15BaseImageBuffer19toWorldSharedMemoryEjj(void);

/* Symbol: _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15unlockBufLockedEPKc */
/* Demangled: NSCam::NSImageBufferHeap::BaseImageBufferHeap::unlockBufLocked(char const*) */
int _ZN5NSCam17NSImageBufferHeap19BaseImageBufferHeap15unlockBufLockedEPKc(void);

/* Symbol: _ZN5NSCam28IIonImageBufferHeapAllocator11getInstanceEv */
/* Demangled: NSCam::IIonImageBufferHeapAllocator::getInstance() */
int _ZN5NSCam28IIonImageBufferHeapAllocator11getInstanceEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_IMGBUF_H */
