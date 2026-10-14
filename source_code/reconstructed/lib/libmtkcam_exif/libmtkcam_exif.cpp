/*
 * Reverse-Engineered Source for: libmtkcam_exif.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_exif"

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
#include "libmtkcam_exif.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::DebugExifUtils::setDebugExif(NSCam::DebugExifUtils::DebugExifType, unsigned int, unsigned int, unsigned int, void const*, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjjPKvPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjjPKvPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: ExifUtils::mySwap16ByOrder(unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils15mySwap16ByOrderEtt(void) {
    ALOGD("_ZN9ExifUtils15mySwap16ByOrderEtt() called");
    return 0;
}

/* Demangled: ExifUtils::read32(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils6read32EPv(void) {
    ALOGD("_ZN9ExifUtils6read32EPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: ExifUtils::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils4initEj(void) {
    ALOGD("_ZN9ExifUtils4initEj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListNodeDelete(unsigned int, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdListNodeDeleteEjt(void) {
    ALOGD("_ZN9ExifUtils17ifdListNodeDeleteEjt() called");
    return 0;
}

/* Demangled: StdExif::appendDebugInfo(int, int, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif15appendDebugInfoEiiPPh(void) {
    ALOGD("_ZN7StdExif15appendDebugInfoEiiPPh() called");
    return 0;
}

/* Demangled: StdExif::init(ExifParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif4initERK10ExifParamsi(void) {
    ALOGD("_ZN7StdExif4initERK10ExifParamsi() called");
    return 0;
}

/* Exported Object: vtable for StdExif */
extern "C" __attribute__((visibility("default"))) void* _ZTV7StdExif = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: ExifUtils::exifErrPrint(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils12exifErrPrintEPhj(void) {
    ALOGD("_ZN9ExifUtils12exifErrPrintEPhj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListNodeModify(unsigned short, unsigned short, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdListNodeModifyEttPv(void) {
    ALOGD("_ZN9ExifUtils17ifdListNodeModifyEttPv() called");
    return 0;
}

/* Demangled: ExifUtils::write16(void*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils7write16EPvt(void) {
    ALOGD("_ZN9ExifUtils7write16EPvt() called");
    return 0;
}

/* Demangled: ExifUtils::ExifUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtilsC2Ev(void) {
    ALOGD("_ZN9ExifUtilsC2Ev() called");
    return 0;
}

/* Demangled: StdExif::make(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif4makeEjRj(void) {
    ALOGD("_ZN7StdExif4makeEjRj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: ExifUtils::ifdZeroIFDValInit(ifdNode_t*, zeroIFDList_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdZeroIFDValInitEP9ifdNode_tP13zeroIFDList_t(void) {
    ALOGD("_ZN9ExifUtils17ifdZeroIFDValInitEP9ifdNode_tP13zeroIFDList_t() called");
    return 0;
}

/* Demangled: ExifUtils::ifdValueInit() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils12ifdValueInitEv(void) {
    ALOGD("_ZN9ExifUtils12ifdValueInitEv() called");
    return 0;
}

/* Demangled: ExifUtils::ExifUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtilsC1Ev(void) {
    ALOGD("_ZN9ExifUtilsC1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: ExifUtils::ifdGpsIFDValInit(ifdNode_t*, gpsIFDList_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils16ifdGpsIFDValInitEP9ifdNode_tP12gpsIFDList_t(void) {
    ALOGD("_ZN9ExifUtils16ifdGpsIFDValInitEP9ifdNode_tP12gpsIFDList_t() called");
    return 0;
}

/* Demangled: StdExif::StdExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExifC2Ev(void) {
    ALOGD("_ZN7StdExifC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::vector(unsigned int, unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEEC2EjRKh(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEEC2EjRKh() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEEE = NULL;

/* Demangled: ExifUtils::ifdListNodeInsert(unsigned int, ifdNode_t*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdListNodeInsertEjP9ifdNode_tPv(void) {
    ALOGD("_ZN9ExifUtils17ifdListNodeInsertEjP9ifdNode_tPv() called");
    return 0;
}

/* Demangled: ExifUtils::exifIFDValueSizeof(unsigned short, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils18exifIFDValueSizeofEtj(void) {
    ALOGD("_ZN9ExifUtils18exifIFDValueSizeofEtj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListHeadNodeSet(unsigned int, ifdNode_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils18ifdListHeadNodeSetEjP9ifdNode_t(void) {
    ALOGD("_ZN9ExifUtils18ifdListHeadNodeSetEjP9ifdNode_t() called");
    return 0;
}

/* Demangled: ExifUtils::read16(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils6read16EPv(void) {
    ALOGD("_ZN9ExifUtils6read16EPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListValBufGet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils16ifdListValBufGetEj(void) {
    ALOGD("_ZN9ExifUtils16ifdListValBufGetEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Exported Object: vtable for ExifIdMap */
extern "C" __attribute__((visibility("default"))) void* _ZTV9ExifIdMap = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListNodeInfoGet(unsigned short, unsigned short, ifdNode_t**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils18ifdListNodeInfoGetEttPP9ifdNode_tPj(void) {
    ALOGD("_ZN9ExifUtils18ifdListNodeInfoGetEttPP9ifdNode_tPj() called");
    return 0;
}

/* Demangled: StdExif::setCamCommonDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif21setCamCommonDebugInfoEv(void) {
    ALOGD("_ZN7StdExif21setCamCommonDebugInfoEv() called");
    return 0;
}

/* Demangled: StdExif::StdExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExifC1Ev(void) {
    ALOGD("_ZN7StdExifC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: ExifUtils::idfListHeadNodeGet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils18idfListHeadNodeGetEj(void) {
    ALOGD("_ZN9ExifUtils18idfListHeadNodeGetEj() called");
    return 0;
}

/* Demangled: StdExif::appendCamDebugInfo(unsigned int, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif18appendCamDebugInfoEjPPh(void) {
    ALOGD("_ZN7StdExif18appendCamDebugInfoEjPPh() called");
    return 0;
}

/* Demangled: StdExif::determineExifOrientation(unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif24determineExifOrientationEjii(void) {
    ALOGD("_ZN7StdExif24determineExifOrientationEjii() called");
    return 0;
}

/* Demangled: StdExif::reset(ExifParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif5resetERK10ExifParamsi(void) {
    ALOGD("_ZN7StdExif5resetERK10ExifParamsi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEEE = NULL;

/* Exported Object: vtable for android::Vector<DbgInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI7DbgInfoEE = NULL;

/* Demangled: NSCam::DebugExifUtils::setDebugExif(NSCam::DebugExifUtils::DebugExifType, unsigned int, unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > const&, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjRKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam14DebugExifUtils12setDebugExifENS0_13DebugExifTypeEjjRKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListValBufSizeof(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils19ifdListValBufSizeofEj(void) {
    ALOGD("_ZN9ExifUtils19ifdListValBufSizeofEj() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Exported Object: NSCam::Exif::icc_profile_srgb */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam4Exif16icc_profile_srgbE = NULL;

/* Demangled: StdExif::sendCommand(int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif11sendCommandEiiji(void) {
    ALOGD("_ZN7StdExif11sendCommandEiiji() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils13ifdListUninitEv(void) {
    ALOGD("_ZN9ExifUtils13ifdListUninitEv() called");
    return 0;
}

/* Demangled: ExifUtils::mySwap16(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils8mySwap16Et(void) {
    ALOGD("_ZN9ExifUtils8mySwap16Et() called");
    return 0;
}

/* Demangled: ExifUtils::mySwap32(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils8mySwap32Ej(void) {
    ALOGD("_ZN9ExifUtils8mySwap32Ej() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<DbgInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI7DbgInfoE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorI7DbgInfoE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListNodeAlloc(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils16ifdListNodeAllocEj(void) {
    ALOGD("_ZN9ExifUtils16ifdListNodeAllocEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<DbgInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI7DbgInfoE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI7DbgInfoE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: ExifUtils::exifAPP1Write(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils13exifAPP1WriteEPhPj(void) {
    ALOGD("_ZN9ExifUtils13exifAPP1WriteEPhPj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListInit() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils11ifdListInitEv(void) {
    ALOGD("_ZN9ExifUtils11ifdListInitEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: android::Vector<DbgInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI7DbgInfoE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI7DbgInfoE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdExifIFDValInit(ifdNode_t*, exifIFDList_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdExifIFDValInitEP9ifdNode_tP13exifIFDList_t(void) {
    ALOGD("_ZN9ExifUtils17ifdExifIFDValInitEP9ifdNode_tP13exifIFDList_t() called");
    return 0;
}

/* Demangled: ExifUtils::~ExifUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtilsD2Ev(void) {
    ALOGD("_ZN9ExifUtilsD2Ev() called");
    return 0;
}

/* Demangled: StdExif::getCamDebugInfo(unsigned char*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif15getCamDebugInfoEPhji(void) {
    ALOGD("_ZN7StdExif15getCamDebugInfoEPhji() called");
    return 0;
}

/* Demangled: StdExif::getHeaderSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7StdExif13getHeaderSizeEv(void) {
    ALOGD("_ZNK7StdExif13getHeaderSizeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: ExifUtils::mySwap32ByOrder(unsigned short, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils15mySwap32ByOrderEtj(void) {
    ALOGD("_ZN9ExifUtils15mySwap32ByOrderEtj() called");
    return 0;
}

/* Demangled: StdExif::setMaxThumbnail(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif15setMaxThumbnailEj(void) {
    ALOGD("_ZN7StdExif15setMaxThumbnailEj() called");
    return 0;
}

/* Demangled: android::Vector<DbgInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI7DbgInfoE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorI7DbgInfoE12do_constructEPvj() called");
    return 0;
}

/* Demangled: ExifUtils::ifdFirstIFDValInit(ifdNode_t*, firstIFDList_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils18ifdFirstIFDValInitEP9ifdNode_tP14firstIFDList_t(void) {
    ALOGD("_ZN9ExifUtils18ifdFirstIFDValInitEP9ifdNode_tP14firstIFDList_t() called");
    return 0;
}

/* Demangled: StdExif::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif6uninitEv(void) {
    ALOGD("_ZN7StdExif6uninitEv() called");
    return 0;
}

/* Demangled: ExifUtils::exifSOIWrite(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils12exifSOIWriteEPhPj(void) {
    ALOGD("_ZN9ExifUtils12exifSOIWriteEPhPj() called");
    return 0;
}

/* Demangled: ExifUtils::write32(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils7write32EPvj(void) {
    ALOGD("_ZN9ExifUtils7write32EPvj() called");
    return 0;
}

/* Demangled: ExifUtils::~ExifUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtilsD1Ev(void) {
    ALOGD("_ZN9ExifUtilsD1Ev() called");
    return 0;
}

/* Exported Object: vtable for ExifUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTV9ExifUtils = NULL;

/* Demangled: StdExif::~StdExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExifD2Ev(void) {
    ALOGD("_ZN7StdExifD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListNodeCntGet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdListNodeCntGetEj(void) {
    ALOGD("_ZN9ExifUtils17ifdListNodeCntGetEj() called");
    return 0;
}

/* Demangled: ExifUtils::exifApp1SizeGet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9ExifUtils15exifApp1SizeGetEv(void) {
    ALOGD("_ZNK9ExifUtils15exifApp1SizeGetEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<DbgInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI7DbgInfoE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI7DbgInfoE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: StdExif::updateDbgExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif13updateDbgExifEv(void) {
    ALOGD("_ZN7StdExif13updateDbgExifEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EjEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: ExifUtils::~ExifUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtilsD0Ev(void) {
    ALOGD("_ZN9ExifUtilsD0Ev() called");
    return 0;
}

/* Demangled: StdExif::~StdExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExifD1Ev(void) {
    ALOGD("_ZN7StdExifD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<DbgInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI7DbgInfoE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI7DbgInfoE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: ExifUtils::ifdItopIFDValInit(ifdNode_t*, itopIFDList_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils17ifdItopIFDValInitEP9ifdNode_tP13itopIFDList_t(void) {
    ALOGD("_ZN9ExifUtils17ifdItopIFDValInitEP9ifdNode_tP13itopIFDList_t() called");
    return 0;
}

/* Demangled: ExifUtils::ifdListSizeof() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9ExifUtils13ifdListSizeofEv(void) {
    ALOGD("_ZNK9ExifUtils13ifdListSizeofEv() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: ExifUtils::exifApp1Make(exifImageInfo_s*, exifAPP1Info_s*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils12exifApp1MakeEP15exifImageInfo_sP14exifAPP1Info_sPj(void) {
    ALOGD("_ZN9ExifUtils12exifApp1MakeEP15exifImageInfo_sP14exifAPP1Info_sPj() called");
    return 0;
}

/* Demangled: StdExif::~StdExif() */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExifD0Ev(void) {
    ALOGD("_ZN7StdExifD0Ev() called");
    return 0;
}

/* Demangled: ExifUtils::exifAppnMake(unsigned int, unsigned char*, unsigned char*, unsigned int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils12exifAppnMakeEjPhS0_jPjj(void) {
    ALOGD("_ZN9ExifUtils12exifAppnMakeEjPhS0_jPjj() called");
    return 0;
}

/* Exported Object: NSCam::Exif::icc_profile_display_p3 */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam4Exif22icc_profile_display_p3E = NULL;

/* Demangled: StdExif::updateStdExif(exifAPP1Info_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN7StdExif13updateStdExifEP14exifAPP1Info_s(void) {
    ALOGD("_ZN7StdExif13updateStdExifEP14exifAPP1Info_s() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: ExifUtils::exifTagUpdate(exifImageInfo_s*, exifAPP1Info_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils13exifTagUpdateEP15exifImageInfo_sP14exifAPP1Info_s(void) {
    ALOGD("_ZN9ExifUtils13exifTagUpdateEP15exifImageInfo_sP14exifAPP1Info_s() called");
    return 0;
}

/* Demangled: ExifUtils::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils6uninitEv(void) {
    ALOGD("_ZN9ExifUtils6uninitEv() called");
    return 0;
}

/* Demangled: ExifUtils::exifMemcmp(unsigned char*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9ExifUtils10exifMemcmpEPhS0_j(void) {
    ALOGD("_ZN9ExifUtils10exifMemcmpEPhS0_j() called");
    return 0;
}

/* Demangled: ExifUtils::exifApp1Sizeof() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9ExifUtils14exifApp1SizeofEv(void) {
    ALOGD("_ZNK9ExifUtils14exifApp1SizeofEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
