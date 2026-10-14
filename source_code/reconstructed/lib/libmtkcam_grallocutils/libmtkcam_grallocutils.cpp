/*
 * Reverse-Engineered Source for: libmtkcam_grallocutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_grallocutils"

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
#include "libmtkcam_grallocutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::GrallocAllocator::Allocator::Allocator(NSCam::GrallocMapper::Mapper const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16GrallocAllocator9AllocatorC1ERKNS_13GrallocMapper6MapperE(void) {
    ALOGD("_ZN5NSCam16GrallocAllocator9AllocatorC1ERKNS_13GrallocMapper6MapperE() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::importBuffer(android::hardware::hidl_handle const&, native_handle const**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::lock(native_handle const*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiP13android_ycbcr(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiP13android_ycbcr() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEclEOS14_SV_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEclEOS14_SV_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEclEOS14_SV_() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::lock(native_handle const*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPvPiSG_(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPvPiSG_() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13GrallocMapper6MapperC1Ev(void) {
    ALOGD("_ZN5NSCam13GrallocMapper6MapperC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSCam::IGrallocHelper::singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam14IGrallocHelper9singletonEv(void) {
    ALOGD("_ZN5NSCam14IGrallocHelper9singletonEv() called");
    return 0;
}

/* Demangled: NSCam::GrallocAllocator::Allocator::free(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16GrallocAllocator9Allocator4freeEPK13native_handle(void) {
    ALOGD("_ZNK5NSCam16GrallocAllocator9Allocator4freeEPK13native_handle() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::graphics::mapper::V4_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V4_0::IMapper>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::graphics::allocator::V4_0::IAllocator>::operator=(android::sp<android::hardware::graphics::allocator::V4_0::IAllocator>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware8graphics9allocator4V4_010IAllocatorEEaSEOS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware8graphics9allocator4V4_010IAllocatorEEaSEOS6_() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS5_9allocatorISC_EEEE(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS5_9allocatorISC_EEEE() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::createDescriptor(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, android::hardware::hidl_vec<unsigned char>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEPNS3_8hidl_vecIhEE(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEPNS3_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCam::GrallocAllocator::Allocator::allocate(android::hardware::hidl_vec<unsigned char>, unsigned int, unsigned int*, native_handle const**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16GrallocAllocator9Allocator8allocateEN7android8hardware8hidl_vecIhEEjPjPPK13native_handle(void) {
    ALOGD("_ZNK5NSCam16GrallocAllocator9Allocator8allocateEN7android8hardware8hidl_vecIhEEjPjPPK13native_handle() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::freeBuffer(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper10freeBufferEPK13native_handle(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper10freeBufferEPK13native_handle() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE = NULL;

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEE = NULL;

/* Demangled: NSCam::GrallocAllocator::Allocator::Allocator(NSCam::GrallocMapper::Mapper const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16GrallocAllocator9AllocatorC2ERKNS_13GrallocMapper6MapperE(void) {
    ALOGD("_ZN5NSCam16GrallocAllocator9AllocatorC2ERKNS_13GrallocMapper6MapperE() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEPNS0_6__baseIS15_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEPNS0_6__baseIS15_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEPNS0_6__baseIS15_EE() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayoutComponent, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayoutComponent> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::lock(native_handle const*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, int, void**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPv(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPv() called");
    return 0;
}

/* Demangled: NSCam::GrallocAllocator::Allocator::allocate(unsigned int, unsigned int, android::hardware::graphics::common::V1_2::PixelFormat, unsigned int, unsigned long long, native_handle const**, unsigned int*, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16GrallocAllocator9Allocator8allocateEjjN7android8hardware8graphics6common4V1_211PixelFormatEjyPPK13native_handlePjyNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE(void) {
    ALOGD("_ZNK5NSCam16GrallocAllocator9Allocator8allocateEjjN7android8hardware8graphics6common4V1_211PixelFormatEjyPPK13native_handlePjyNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NSCam::GrallocMapper::Mapper::Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13GrallocMapper6MapperC2Ev(void) {
    ALOGD("_ZN5NSCam13GrallocMapper6MapperC2Ev() called");
    return 0;
}

/* Demangled: int NSCam::GrallocMapper::Mapper::get<std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> > >(native_handle const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*), std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13GrallocMapper6Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_(void) {
    ALOGD("_ZNK5NSCam13GrallocMapper6Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
