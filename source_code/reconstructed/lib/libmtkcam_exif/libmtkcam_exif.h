/*
 * Reverse-Engineered ABI Specification for: libmtkcam_exif.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_exif.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_EXIF_H
#define BEGONIA_RE_LIBMTKCAM_EXIF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjjPKvPNS_9IMetadataE */
/* Demangled: NSCam::DebugExifUtils::setDebugExif(NSCam::DebugExifUtils::DebugExifType, unsigned int, unsigned int, unsigned int, void const*, NSCam::IMetadata*) */
int _ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjjPKvPNS_9IMetadataE(void);

/* Symbol: _ZN9ExifUtils15mySwap16ByOrderEtt */
/* Demangled: ExifUtils::mySwap16ByOrder(unsigned short, unsigned short) */
int _ZN9ExifUtils15mySwap16ByOrderEtt(void);

/* Symbol: _ZN9ExifUtils6read32EPv */
/* Demangled: ExifUtils::read32(void*) */
int _ZN9ExifUtils6read32EPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvj(void);

/* Symbol: _ZN9ExifUtils4initEj */
/* Demangled: ExifUtils::init(unsigned int) */
int _ZN9ExifUtils4initEj(void);

/* Symbol: _ZN9ExifUtils17ifdListNodeDeleteEjt */
/* Demangled: ExifUtils::ifdListNodeDelete(unsigned int, unsigned short) */
int _ZN9ExifUtils17ifdListNodeDeleteEjt(void);

/* Symbol: _ZN7StdExif15appendDebugInfoEiiPPh */
/* Demangled: StdExif::appendDebugInfo(int, int, unsigned char**) */
int _ZN7StdExif15appendDebugInfoEiiPPh(void);

/* Symbol: _ZN7StdExif4initERK10ExifParamsi */
/* Demangled: StdExif::init(ExifParams const&, int) */
int _ZN7StdExif4initERK10ExifParamsi(void);

/* Symbol: _ZTV7StdExif */
/* Demangled: vtable for StdExif */
extern void* _ZTV7StdExif;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN9ExifUtils12exifErrPrintEPhj */
/* Demangled: ExifUtils::exifErrPrint(unsigned char*, unsigned int) */
int _ZN9ExifUtils12exifErrPrintEPhj(void);

/* Symbol: _ZN9ExifUtils17ifdListNodeModifyEttPv */
/* Demangled: ExifUtils::ifdListNodeModify(unsigned short, unsigned short, void*) */
int _ZN9ExifUtils17ifdListNodeModifyEttPv(void);

/* Symbol: _ZN9ExifUtils7write16EPvt */
/* Demangled: ExifUtils::write16(void*, unsigned short) */
int _ZN9ExifUtils7write16EPvt(void);

/* Symbol: _ZN9ExifUtilsC2Ev */
/* Demangled: ExifUtils::ExifUtils() */
int _ZN9ExifUtilsC2Ev(void);

/* Symbol: _ZN7StdExif4makeEjRj */
/* Demangled: StdExif::make(unsigned int, unsigned int&) */
int _ZN7StdExif4makeEjRj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN9ExifUtils17ifdZeroIFDValInitEP9ifdNode_tP13zeroIFDList_t */
/* Demangled: ExifUtils::ifdZeroIFDValInit(ifdNode_t*, zeroIFDList_t*) */
int _ZN9ExifUtils17ifdZeroIFDValInitEP9ifdNode_tP13zeroIFDList_t(void);

/* Symbol: _ZN9ExifUtils12ifdValueInitEv */
/* Demangled: ExifUtils::ifdValueInit() */
int _ZN9ExifUtils12ifdValueInitEv(void);

/* Symbol: _ZN9ExifUtilsC1Ev */
/* Demangled: ExifUtils::ExifUtils() */
int _ZN9ExifUtilsC1Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN9ExifUtils16ifdGpsIFDValInitEP9ifdNode_tP12gpsIFDList_t */
/* Demangled: ExifUtils::ifdGpsIFDValInit(ifdNode_t*, gpsIFDList_t*) */
int _ZN9ExifUtils16ifdGpsIFDValInitEP9ifdNode_tP12gpsIFDList_t(void);

/* Symbol: _ZN7StdExifC2Ev */
/* Demangled: StdExif::StdExif() */
int _ZN7StdExifC2Ev(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEEC2EjRKh */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::vector(unsigned int, unsigned char const&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEEC2EjRKh(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEEE;

/* Symbol: _ZN9ExifUtils17ifdListNodeInsertEjP9ifdNode_tPv */
/* Demangled: ExifUtils::ifdListNodeInsert(unsigned int, ifdNode_t*, void*) */
int _ZN9ExifUtils17ifdListNodeInsertEjP9ifdNode_tPv(void);

/* Symbol: _ZN9ExifUtils18exifIFDValueSizeofEtj */
/* Demangled: ExifUtils::exifIFDValueSizeof(unsigned short, unsigned int) */
int _ZN9ExifUtils18exifIFDValueSizeofEtj(void);

/* Symbol: _ZN9ExifUtils18ifdListHeadNodeSetEjP9ifdNode_t */
/* Demangled: ExifUtils::ifdListHeadNodeSet(unsigned int, ifdNode_t*) */
int _ZN9ExifUtils18ifdListHeadNodeSetEjP9ifdNode_t(void);

/* Symbol: _ZN9ExifUtils6read16EPv */
/* Demangled: ExifUtils::read16(void*) */
int _ZN9ExifUtils6read16EPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN9ExifUtils16ifdListValBufGetEj */
/* Demangled: ExifUtils::ifdListValBufGet(unsigned int) */
int _ZN9ExifUtils16ifdListValBufGetEj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZTV9ExifIdMap */
/* Demangled: vtable for ExifIdMap */
extern void* _ZTV9ExifIdMap;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN9ExifUtils18ifdListNodeInfoGetEttPP9ifdNode_tPj */
/* Demangled: ExifUtils::ifdListNodeInfoGet(unsigned short, unsigned short, ifdNode_t**, unsigned int*) */
int _ZN9ExifUtils18ifdListNodeInfoGetEttPP9ifdNode_tPj(void);

/* Symbol: _ZN7StdExif21setCamCommonDebugInfoEv */
/* Demangled: StdExif::setCamCommonDebugInfo() */
int _ZN7StdExif21setCamCommonDebugInfoEv(void);

/* Symbol: _ZN7StdExifC1Ev */
/* Demangled: StdExif::StdExif() */
int _ZN7StdExifC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN9ExifUtils18idfListHeadNodeGetEj */
/* Demangled: ExifUtils::idfListHeadNodeGet(unsigned int) */
int _ZN9ExifUtils18idfListHeadNodeGetEj(void);

/* Symbol: _ZN7StdExif18appendCamDebugInfoEjPPh */
/* Demangled: StdExif::appendCamDebugInfo(unsigned int, unsigned char**) */
int _ZN7StdExif18appendCamDebugInfoEjPPh(void);

/* Symbol: _ZN7StdExif24determineExifOrientationEjii */
/* Demangled: StdExif::determineExifOrientation(unsigned int, int, int) */
int _ZN7StdExif24determineExifOrientationEjii(void);

/* Symbol: _ZN7StdExif5resetERK10ExifParamsi */
/* Demangled: StdExif::reset(ExifParams const&, int) */
int _ZN7StdExif5resetERK10ExifParamsi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_compareEPKvS6_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEEE;

/* Symbol: _ZTVN7android6VectorI7DbgInfoEE */
/* Demangled: vtable for android::Vector<DbgInfo> */
extern void* _ZTVN7android6VectorI7DbgInfoEE;

/* Symbol: _ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjRKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE */
/* Demangled: NSCam::DebugExifUtils::setDebugExif(NSCam::DebugExifUtils::DebugExifType, unsigned int, unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > const&, NSCam::IMetadata*) */
int _ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjRKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE(void);

/* Symbol: _ZN9ExifUtils19ifdListValBufSizeofEj */
/* Demangled: ExifUtils::ifdListValBufSizeof(unsigned int) */
int _ZN9ExifUtils19ifdListValBufSizeofEj(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam4Exif16icc_profile_srgbE */
/* Demangled: NSCam::Exif::icc_profile_srgb */
extern void* _ZN5NSCam4Exif16icc_profile_srgbE;

/* Symbol: _ZN7StdExif11sendCommandEiiji */
/* Demangled: StdExif::sendCommand(int, int, unsigned int, int) */
int _ZN7StdExif11sendCommandEiiji(void);

/* Symbol: _ZN9ExifUtils13ifdListUninitEv */
/* Demangled: ExifUtils::ifdListUninit() */
int _ZN9ExifUtils13ifdListUninitEv(void);

/* Symbol: _ZN9ExifUtils8mySwap16Et */
/* Demangled: ExifUtils::mySwap16(unsigned short) */
int _ZN9ExifUtils8mySwap16Et(void);

/* Symbol: _ZN9ExifUtils8mySwap32Ej */
/* Demangled: ExifUtils::mySwap32(unsigned int) */
int _ZN9ExifUtils8mySwap32Ej(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI7DbgInfoE10do_destroyEPvj */
/* Demangled: android::Vector<DbgInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorI7DbgInfoE10do_destroyEPvj(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN9ExifUtils16ifdListNodeAllocEj */
/* Demangled: ExifUtils::ifdListNodeAlloc(unsigned int) */
int _ZN9ExifUtils16ifdListNodeAllocEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI7DbgInfoE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<DbgInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI7DbgInfoE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN9ExifUtils13exifAPP1WriteEPhPj */
/* Demangled: ExifUtils::exifAPP1Write(unsigned char*, unsigned int*) */
int _ZN9ExifUtils13exifAPP1WriteEPhPj(void);

/* Symbol: _ZN9ExifUtils11ifdListInitEv */
/* Demangled: ExifUtils::ifdListInit() */
int _ZN9ExifUtils11ifdListInitEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZNK7android6VectorI7DbgInfoE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<DbgInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI7DbgInfoE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN9ExifUtils17ifdExifIFDValInitEP9ifdNode_tP13exifIFDList_t */
/* Demangled: ExifUtils::ifdExifIFDValInit(ifdNode_t*, exifIFDList_t*) */
int _ZN9ExifUtils17ifdExifIFDValInitEP9ifdNode_tP13exifIFDList_t(void);

/* Symbol: _ZN9ExifUtilsD2Ev */
/* Demangled: ExifUtils::~ExifUtils() */
int _ZN9ExifUtilsD2Ev(void);

/* Symbol: _ZN7StdExif15getCamDebugInfoEPhji */
/* Demangled: StdExif::getCamDebugInfo(unsigned char*, unsigned int, int) */
int _ZN7StdExif15getCamDebugInfoEPhji(void);

/* Symbol: _ZNK7StdExif13getHeaderSizeEv */
/* Demangled: StdExif::getHeaderSize() const */
int _ZNK7StdExif13getHeaderSizeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvj(void);

/* Symbol: _ZN9ExifUtils15mySwap32ByOrderEtj */
/* Demangled: ExifUtils::mySwap32ByOrder(unsigned short, unsigned int) */
int _ZN9ExifUtils15mySwap32ByOrderEtj(void);

/* Symbol: _ZN7StdExif15setMaxThumbnailEj */
/* Demangled: StdExif::setMaxThumbnail(unsigned int) */
int _ZN7StdExif15setMaxThumbnailEj(void);

/* Symbol: _ZNK7android6VectorI7DbgInfoE12do_constructEPvj */
/* Demangled: android::Vector<DbgInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorI7DbgInfoE12do_constructEPvj(void);

/* Symbol: _ZN9ExifUtils18ifdFirstIFDValInitEP9ifdNode_tP14firstIFDList_t */
/* Demangled: ExifUtils::ifdFirstIFDValInit(ifdNode_t*, firstIFDList_t*) */
int _ZN9ExifUtils18ifdFirstIFDValInitEP9ifdNode_tP14firstIFDList_t(void);

/* Symbol: _ZN7StdExif6uninitEv */
/* Demangled: StdExif::uninit() */
int _ZN7StdExif6uninitEv(void);

/* Symbol: _ZN9ExifUtils12exifSOIWriteEPhPj */
/* Demangled: ExifUtils::exifSOIWrite(unsigned char*, unsigned int*) */
int _ZN9ExifUtils12exifSOIWriteEPhPj(void);

/* Symbol: _ZN9ExifUtils7write32EPvj */
/* Demangled: ExifUtils::write32(void*, unsigned int) */
int _ZN9ExifUtils7write32EPvj(void);

/* Symbol: _ZN9ExifUtilsD1Ev */
/* Demangled: ExifUtils::~ExifUtils() */
int _ZN9ExifUtilsD1Ev(void);

/* Symbol: _ZTV9ExifUtils */
/* Demangled: vtable for ExifUtils */
extern void* _ZTV9ExifUtils;

/* Symbol: _ZN7StdExifD2Ev */
/* Demangled: StdExif::~StdExif() */
int _ZN7StdExifD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN9ExifUtils17ifdListNodeCntGetEj */
/* Demangled: ExifUtils::ifdListNodeCntGet(unsigned int) */
int _ZN9ExifUtils17ifdListNodeCntGetEj(void);

/* Symbol: _ZNK9ExifUtils15exifApp1SizeGetEv */
/* Demangled: ExifUtils::exifApp1SizeGet() const */
int _ZNK9ExifUtils15exifApp1SizeGetEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorI7DbgInfoE7do_copyEPvPKvj */
/* Demangled: android::Vector<DbgInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI7DbgInfoE7do_copyEPvPKvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN7StdExif13updateDbgExifEv */
/* Demangled: StdExif::updateDbgExif() */
int _ZN7StdExif13updateDbgExifEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN9ExifUtilsD0Ev */
/* Demangled: ExifUtils::~ExifUtils() */
int _ZN9ExifUtilsD0Ev(void);

/* Symbol: _ZN7StdExifD1Ev */
/* Demangled: StdExif::~StdExif() */
int _ZN7StdExifD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI7DbgInfoE8do_splatEPvPKvj */
/* Demangled: android::Vector<DbgInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI7DbgInfoE8do_splatEPvPKvj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN9ExifUtils17ifdItopIFDValInitEP9ifdNode_tP13itopIFDList_t */
/* Demangled: ExifUtils::ifdItopIFDValInit(ifdNode_t*, itopIFDList_t*) */
int _ZN9ExifUtils17ifdItopIFDValInitEP9ifdNode_tP13itopIFDList_t(void);

/* Symbol: _ZNK9ExifUtils13ifdListSizeofEv */
/* Demangled: ExifUtils::ifdListSizeof() const */
int _ZNK9ExifUtils13ifdListSizeofEv(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN9ExifUtils12exifApp1MakeEP15exifImageInfo_sP14exifAPP1Info_sPj */
/* Demangled: ExifUtils::exifApp1Make(exifImageInfo_s*, exifAPP1Info_s*, unsigned int*) */
int _ZN9ExifUtils12exifApp1MakeEP15exifImageInfo_sP14exifAPP1Info_sPj(void);

/* Symbol: _ZN7StdExifD0Ev */
/* Demangled: StdExif::~StdExif() */
int _ZN7StdExifD0Ev(void);

/* Symbol: _ZN9ExifUtils12exifAppnMakeEjPhS0_jPjj */
/* Demangled: ExifUtils::exifAppnMake(unsigned int, unsigned char*, unsigned char*, unsigned int, unsigned int*, unsigned int) */
int _ZN9ExifUtils12exifAppnMakeEjPhS0_jPjj(void);

/* Symbol: _ZN5NSCam4Exif22icc_profile_display_p3E */
/* Demangled: NSCam::Exif::icc_profile_display_p3 */
extern void* _ZN5NSCam4Exif22icc_profile_display_p3E;

/* Symbol: _ZN7StdExif13updateStdExifEP14exifAPP1Info_s */
/* Demangled: StdExif::updateStdExif(exifAPP1Info_s*) */
int _ZN7StdExif13updateStdExifEP14exifAPP1Info_s(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN9ExifUtils13exifTagUpdateEP15exifImageInfo_sP14exifAPP1Info_s */
/* Demangled: ExifUtils::exifTagUpdate(exifImageInfo_s*, exifAPP1Info_s*) */
int _ZN9ExifUtils13exifTagUpdateEP15exifImageInfo_sP14exifAPP1Info_s(void);

/* Symbol: _ZN9ExifUtils6uninitEv */
/* Demangled: ExifUtils::uninit() */
int _ZN9ExifUtils6uninitEv(void);

/* Symbol: _ZN9ExifUtils10exifMemcmpEPhS0_j */
/* Demangled: ExifUtils::exifMemcmp(unsigned char*, unsigned char*, unsigned int) */
int _ZN9ExifUtils10exifMemcmpEPhS0_j(void);

/* Symbol: _ZNK9ExifUtils14exifApp1SizeofEv */
/* Demangled: ExifUtils::exifApp1Sizeof() const */
int _ZNK9ExifUtils14exifApp1SizeofEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_EXIF_H */
