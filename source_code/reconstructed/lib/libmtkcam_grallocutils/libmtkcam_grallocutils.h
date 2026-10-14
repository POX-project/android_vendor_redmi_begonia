/*
 * Reverse-Engineered ABI Specification for: libmtkcam_grallocutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_grallocutils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_GRALLOCUTILS_H
#define BEGONIA_RE_LIBMTKCAM_GRALLOCUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam16GrallocAllocator9AllocatorC1ERKNS_13GrallocMapper6MapperE */
/* Demangled: NSCam::GrallocAllocator::Allocator::Allocator(NSCam::GrallocMapper::Mapper const&) */
int _ZN5NSCam16GrallocAllocator9AllocatorC1ERKNS_13GrallocMapper6MapperE(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle */
/* Demangled: NSCam::GrallocMapper::Mapper::importBuffer(android::hardware::hidl_handle const&, native_handle const**) const */
int _ZNK5NSCam13GrallocMapper6Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiP13android_ycbcr */
/* Demangled: NSCam::GrallocMapper::Mapper::lock(native_handle const*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, int, android_ycbcr*) const */
int _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiP13android_ycbcr(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEclEOS14_SV_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEclEOS14_SV_ */
int _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEclEOS14_SV_(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPvPiSG_ */
/* Demangled: NSCam::GrallocMapper::Mapper::lock(native_handle const*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, int, void**, int*, int*) const */
int _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPvPiSG_(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN5NSCam13GrallocMapper6MapperC1Ev */
/* Demangled: NSCam::GrallocMapper::Mapper::Mapper() */
int _ZN5NSCam13GrallocMapper6MapperC1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN5NSCam14IGrallocHelper9singletonEv */
/* Demangled: NSCam::IGrallocHelper::singleton() */
int _ZN5NSCam14IGrallocHelper9singletonEv(void);

/* Symbol: _ZNK5NSCam16GrallocAllocator9Allocator4freeEPK13native_handle */
/* Demangled: NSCam::GrallocAllocator::Allocator::free(native_handle const*) const */
int _ZNK5NSCam16GrallocAllocator9Allocator4freeEPK13native_handle(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvj(void);

/* Symbol: _ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_ */
/* Demangled: android::sp<android::hardware::graphics::mapper::V4_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V4_0::IMapper>&&) */
int _ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE18destroy_deallocateEv(void);

/* Symbol: _ZN7android2spINS_8hardware8graphics9allocator4V4_010IAllocatorEEaSEOS6_ */
/* Demangled: android::sp<android::hardware::graphics::allocator::V4_0::IAllocator>::operator=(android::sp<android::hardware::graphics::allocator::V4_0::IAllocator>&&) */
int _ZN7android2spINS_8hardware8graphics9allocator4V4_010IAllocatorEEaSEOS6_(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS5_9allocatorISC_EEEE */
/* Demangled: NSCam::GrallocMapper::Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK5NSCam13GrallocMapper6Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS5_9allocatorISC_EEEE(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEPNS3_8hidl_vecIhEE */
/* Demangled: NSCam::GrallocMapper::Mapper::createDescriptor(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, android::hardware::hidl_vec<unsigned char>*) const */
int _ZNK5NSCam13GrallocMapper6Mapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEPNS3_8hidl_vecIhEE(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZNK5NSCam16GrallocAllocator9Allocator8allocateEN7android8hardware8hidl_vecIhEEjPjPPK13native_handle */
/* Demangled: NSCam::GrallocAllocator::Allocator::allocate(android::hardware::hidl_vec<unsigned char>, unsigned int, unsigned int*, native_handle const**) const */
int _ZNK5NSCam16GrallocAllocator9Allocator8allocateEN7android8hardware8hidl_vecIhEEjPjPPK13native_handle(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper10freeBufferEPK13native_handle */
/* Demangled: NSCam::GrallocMapper::Mapper::freeBuffer(native_handle const*) const */
int _ZNK5NSCam13GrallocMapper6Mapper10freeBufferEPK13native_handle(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE */
/* Demangled: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE;

/* Symbol: _ZTVNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EEE;

/* Symbol: _ZN5NSCam16GrallocAllocator9AllocatorC2ERKNS_13GrallocMapper6MapperE */
/* Demangled: NSCam::GrallocAllocator::Allocator::Allocator(NSCam::GrallocMapper::Mapper const&) */
int _ZN5NSCam16GrallocAllocator9AllocatorC2ERKNS_13GrallocMapper6MapperE(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper6unlockEPK13native_handle */
/* Demangled: NSCam::GrallocMapper::Mapper::unlock(native_handle const*) const */
int _ZNK5NSCam13GrallocMapper6Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEPNS0_6__baseIS15_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEPNS0_6__baseIS15_EE */
int _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEPNS0_6__baseIS15_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK5NSCam13GrallocMapper6Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISC_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSK_8hidl_vecIhEEPT_ESX_EUlRKSW_SV_E_NSD_IS12_EEFvNSN_5ErrorESV_EE7destroyEv(void);

/* Symbol: _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayoutComponent, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayoutComponent> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPv */
/* Demangled: NSCam::GrallocMapper::Mapper::lock(native_handle const*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, int, void**) const */
int _ZNK5NSCam13GrallocMapper6Mapper4lockEPK13native_handleyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectEiPPv(void);

/* Symbol: _ZNK5NSCam16GrallocAllocator9Allocator8allocateEjjN7android8hardware8graphics6common4V1_211PixelFormatEjyPPK13native_handlePjyNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE */
/* Demangled: NSCam::GrallocAllocator::Allocator::allocate(unsigned int, unsigned int, android::hardware::graphics::common::V1_2::PixelFormat, unsigned int, unsigned long long, native_handle const**, unsigned int*, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) const */
int _ZNK5NSCam16GrallocAllocator9Allocator8allocateEjjN7android8hardware8graphics6common4V1_211PixelFormatEjyPPK13native_handlePjyNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvj(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN5NSCam13GrallocMapper6MapperC2Ev */
/* Demangled: NSCam::GrallocMapper::Mapper::Mapper() */
int _ZN5NSCam13GrallocMapper6MapperC2Ev(void);

/* Symbol: _ZNK5NSCam13GrallocMapper6Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_ */
/* Demangled: int NSCam::GrallocMapper::Mapper::get<std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> > >(native_handle const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*), std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK5NSCam13GrallocMapper6Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_GRALLOCUTILS_H */
