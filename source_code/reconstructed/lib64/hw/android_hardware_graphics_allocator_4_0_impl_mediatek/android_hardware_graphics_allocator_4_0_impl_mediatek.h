/*
 * Reverse-Engineered ABI Specification for: android.hardware.graphics.allocator@4.0-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.graphics.allocator@4.0-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_ALLOCATOR_4_0_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_ALLOCATOR_4_0_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTVN3arm9allocator16GrallocAllocatorE */
/* Demangled: vtable for arm::allocator::GrallocAllocator */
extern void* _ZTVN3arm9allocator16GrallocAllocatorE;

/* Symbol: _ZTv0_n24_N3arm9allocator16GrallocAllocatorD0Ev */
/* Demangled: virtual thunk to arm::allocator::GrallocAllocator::~GrallocAllocator() */
int _ZTv0_n24_N3arm9allocator16GrallocAllocatorD0Ev(void);

/* Symbol: _Z28mali_gralloc_dump_buffer_addP16private_handle_t */
/* Demangled: mali_gralloc_dump_buffer_add(private_handle_t*) */
int _Z28mali_gralloc_dump_buffer_addP16private_handle_t(void);

/* Symbol: dpu_runtime_caps */
/* Demangled: dpu_runtime_caps */
extern void* dpu_runtime_caps;

/* Symbol: num_ip_formats */
/* Demangled: num_ip_formats */
extern void* num_ip_formats;

/* Symbol: _Z25mali_gralloc_ion_sync_endPK16private_handle_tbb */
/* Demangled: mali_gralloc_ion_sync_end(private_handle_t const*, bool, bool) */
int _Z25mali_gralloc_ion_sync_endPK16private_handle_tbb(void);

/* Symbol: _Z28mali_gralloc_buffer_allocatePKmjPPK13native_handlePb */
/* Demangled: mali_gralloc_buffer_allocate(unsigned long const*, unsigned int, native_handle const**, bool*) */
int _Z28mali_gralloc_buffer_allocatePKmjPPK13native_handlePb(void);

/* Symbol: _Z16sanitize_formatsv */
/* Demangled: sanitize_formats() */
int _Z16sanitize_formatsv(void);

/* Symbol: _ZN3arm6mapper6common20shared_metadata_sizeEv */
/* Demangled: arm::mapper::common::shared_metadata_size() */
int _ZN3arm6mapper6common20shared_metadata_sizeEv(void);

/* Symbol: _Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t */
/* Demangled: mali_gralloc_derive_format_and_size(buffer_descriptor_t*) */
int _Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t(void);

/* Symbol: formats */
/* Demangled: formats */
extern void* formats;

/* Symbol: _Z20get_supported_formatjmttmmP9fmt_props */
/* Demangled: get_supported_format(unsigned int, unsigned long, unsigned short, unsigned short, unsigned long, unsigned long, fmt_props*) */
int _Z20get_supported_formatjmttmmP9fmt_props(void);

/* Symbol: _Z30mali_gralloc_dump_buffer_eraseP16private_handle_t */
/* Demangled: mali_gralloc_dump_buffer_erase(private_handle_t*) */
int _Z30mali_gralloc_dump_buffer_eraseP16private_handle_t(void);

/* Symbol: _Z22mali_gralloc_ion_unmapP16private_handle_t */
/* Demangled: mali_gralloc_ion_unmap(private_handle_t*) */
int _Z22mali_gralloc_ion_unmapP16private_handle_t(void);

/* Symbol: _ZN10ion_device19alloc_from_ion_heapEmm13ion_heap_typejjPi */
/* Demangled: ion_device::alloc_from_ion_heap(unsigned long, unsigned long, ion_heap_type, unsigned int, unsigned int, int*) */
int _ZN10ion_device19alloc_from_ion_heapEmm13ion_heap_typejjPi(void);

/* Symbol: _ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE */
/* Demangled: arm::mapper::common::shared_metadata_init(void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE(void);

/* Symbol: gpu_runtime_caps */
/* Demangled: gpu_runtime_caps */
extern void* gpu_runtime_caps;

/* Symbol: _ZN3arm9allocator16GrallocAllocatorC2Ev */
/* Demangled: arm::allocator::GrallocAllocator::GrallocAllocator() */
int _ZN3arm9allocator16GrallocAllocatorC2Ev(void);

/* Symbol: _ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE */
/* Demangled: arm::mapper::common::get_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) */
int _ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void);

/* Symbol: _Z21mali_gralloc_ion_freeP16private_handle_t */
/* Demangled: mali_gralloc_ion_free(private_handle_t*) */
int _Z21mali_gralloc_ion_freeP16private_handle_t(void);

/* Symbol: _ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE */
/* Demangled: arm::mapper::common::set_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086> const&) */
int _ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void);

/* Symbol: _Z26mali_gralloc_select_formatm24mali_gralloc_format_typemiPmP22mtk_gralloc_usage_mode */
/* Demangled: mali_gralloc_select_format(unsigned long, mali_gralloc_format_type, unsigned long, int, unsigned long*, mtk_gralloc_usage_mode*) */
int _Z26mali_gralloc_select_formatm24mali_gralloc_format_typemiPmP22mtk_gralloc_usage_mode(void);

/* Symbol: _Z14get_alloc_typemjmP9AllocType */
/* Demangled: get_alloc_type(unsigned long, unsigned int, unsigned long, AllocType*) */
int _Z14get_alloc_typemjmP9AllocType(void);

/* Symbol: _Z26gralloc_shared_memory_freeiPvm */
/* Demangled: gralloc_shared_memory_free(int, void*, unsigned long) */
int _Z26gralloc_shared_memory_freeiPvm(void);

/* Symbol: _Z3lcmjj */
/* Demangled: lcm(unsigned int, unsigned int) */
int _Z3lcmjj(void);

/* Symbol: cpu_runtime_caps */
/* Demangled: cpu_runtime_caps */
extern void* cpu_runtime_caps;

/* Symbol: _Z25mali_gralloc_dump_buffersRN7android7String8EPj */
/* Demangled: mali_gralloc_dump_buffers(android::String8&, unsigned int*) */
int _Z25mali_gralloc_dump_buffersRN7android7String8EPj(void);

/* Symbol: _ZN10ion_device22check_buffers_sharableEPKmj */
/* Demangled: ion_device::check_buffers_sharable(unsigned long const*, unsigned int) */
int _ZN10ion_device22check_buffers_sharableEPKmj(void);

/* Symbol: _ZN3arm9allocator16GrallocAllocator8allocateERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEjRKNS4_INS3_11hidl_handleEEEEEE */
/* Demangled: arm::allocator::GrallocAllocator::allocate(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, android::hardware::hidl_vec<android::hardware::hidl_handle> const&)>) */
int _ZN3arm9allocator16GrallocAllocator8allocateERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEjRKNS4_INS3_11hidl_handleEEEEEE(void);

/* Symbol: _ZN3arm9allocator16GrallocAllocatorC1Ev */
/* Demangled: arm::allocator::GrallocAllocator::GrallocAllocator() */
int _ZN3arm9allocator16GrallocAllocatorC1Ev(void);

/* Symbol: _ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE */
/* Demangled: arm::mapper::common::get_dataspace(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Dataspace>*) */
int _ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE(void);

/* Symbol: _Z27mali_gralloc_ion_sync_startPK16private_handle_tbb */
/* Demangled: mali_gralloc_ion_sync_start(private_handle_t const*, bool, bool) */
int _Z27mali_gralloc_ion_sync_startPK16private_handle_tbb(void);

/* Symbol: _ZTTN3arm9allocator16GrallocAllocatorE */
/* Demangled: VTT for arm::allocator::GrallocAllocator */
extern void* _ZTTN3arm9allocator16GrallocAllocatorE;

/* Symbol: _ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE */
/* Demangled: arm::mapper::common::get_crop_rect(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Rect>*) */
int _ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE(void);

/* Symbol: _ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE */
/* Demangled: arm::mapper::common::get_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) */
int _ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void);

/* Symbol: _Z26mali_gralloc_dump_internalPjPc */
/* Demangled: mali_gralloc_dump_internal(unsigned int*, char*) */
int _Z26mali_gralloc_dump_internalPjPc(void);

/* Symbol: _ZGVZN10ion_device8get_instEvE3dev */
/* Demangled: guard variable for ion_device::get_inst()::dev */
extern void* _ZGVZN10ion_device8get_instEvE3dev;

/* Symbol: _ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE */
/* Demangled: arm::mapper::common::get_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) */
int _ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void);

/* Symbol: _Z15get_base_formatmm24mali_gralloc_format_typeb */
/* Demangled: get_base_format(unsigned long, unsigned long, mali_gralloc_format_type, bool) */
int _Z15get_base_formatmm24mali_gralloc_format_typeb(void);

/* Symbol: _ZN3arm9allocator16GrallocAllocatorD2Ev */
/* Demangled: arm::allocator::GrallocAllocator::~GrallocAllocator() */
int _ZN3arm9allocator16GrallocAllocatorD2Ev(void);

/* Symbol: _ZTCN3arm9allocator16GrallocAllocatorE0_N7android8hardware8graphics9allocator4V4_010IAllocatorE */
/* Demangled: construction vtable for android::hardware::graphics::allocator::V4_0::IAllocator-in-arm::allocator::GrallocAllocator */
extern void* _ZTCN3arm9allocator16GrallocAllocatorE0_N7android8hardware8graphics9allocator4V4_010IAllocatorE;

/* Symbol: _ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE */
/* Demangled: arm::mapper::common::set_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3> const&) */
int _ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void);

/* Symbol: _Z19get_ip_format_indexj */
/* Demangled: get_ip_format_index(unsigned int) */
int _Z19get_ip_format_indexj(void);

/* Symbol: _ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<private_handle_t*, std::__1::allocator<private_handle_t*> >::__push_back_slow_path<private_handle_t* const&>(private_handle_t* const&) */
int _ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _Z20get_format_dataspacejmiiP19android_dataspace_tP21mali_gralloc_yuv_info */
/* Demangled: get_format_dataspace(unsigned int, unsigned long, int, int, android_dataspace_t*, mali_gralloc_yuv_info*) */
int _Z20get_format_dataspacejmiiP19android_dataspace_tP21mali_gralloc_yuv_info(void);

/* Symbol: _ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE */
/* Demangled: arm::mapper::common::set_crop_rect(private_handle_t const*, aidl::android::hardware::graphics::common::Rect const&) */
int _ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE(void);

/* Symbol: _Z25mali_gralloc_ion_allocatePKmjPPK13native_handlePb */
/* Demangled: mali_gralloc_ion_allocate(unsigned long const*, unsigned int, native_handle const**, bool*) */
int _Z25mali_gralloc_ion_allocatePKmjPPK13native_handlePb(void);

/* Symbol: dpu_aeu_runtime_caps */
/* Demangled: dpu_aeu_runtime_caps */
extern void* dpu_aeu_runtime_caps;

/* Symbol: _ZN10ion_device13pick_ion_heapEmii */
/* Demangled: ion_device::pick_ion_heap(unsigned long, int, int) */
int _ZN10ion_device13pick_ion_heapEmii(void);

/* Symbol: _ZZN10ion_device8get_instEvE3dev */
/* Demangled: ion_device::get_inst()::dev */
extern void* _ZZN10ion_device8get_instEvE3dev;

/* Symbol: _ZN3arm9allocator6common8allocateERK19buffer_descriptor_tjNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjRKNS8_8hidl_vecINS8_11hidl_handleEEEEEENS6_IFiPS3_PPK13native_handleEEE */
/* Demangled: arm::allocator::common::allocate(buffer_descriptor_t const&, unsigned int, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, android::hardware::hidl_vec<android::hardware::hidl_handle> const&)>, std::__1::function<int (buffer_descriptor_t const*, native_handle const**)>) */
int _ZN3arm9allocator6common8allocateERK19buffer_descriptor_tjNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjRKNS8_8hidl_vecINS8_11hidl_handleEEEEEENS6_IFiPS3_PPK13native_handleEEE(void);

/* Symbol: _ZTCN3arm9allocator16GrallocAllocatorE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-arm::allocator::GrallocAllocator */
extern void* _ZTCN3arm9allocator16GrallocAllocatorE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE */
/* Demangled: arm::mapper::common::set_dataspace(private_handle_t const*, aidl::android::hardware::graphics::common::Dataspace const&) */
int _ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE(void);

/* Symbol: _ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: arm::mapper::common::get_name(private_handle_t const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN3arm9allocator16GrallocAllocatorD1Ev */
/* Demangled: arm::allocator::GrallocAllocator::~GrallocAllocator() */
int _ZN3arm9allocator16GrallocAllocatorD1Ev(void);

/* Symbol: _Z24mali_gralloc_buffer_freePK13native_handle */
/* Demangled: mali_gralloc_buffer_free(native_handle const*) */
int _Z24mali_gralloc_buffer_freePK13native_handle(void);

/* Symbol: _Z30gralloc_shared_memory_allocatePKcm */
/* Demangled: gralloc_shared_memory_allocate(char const*, unsigned long) */
int _Z30gralloc_shared_memory_allocatePKcm(void);

/* Symbol: _Z14get_format_extmm */
/* Demangled: get_format_ext(unsigned long, unsigned long) */
int _Z14get_format_extmm(void);

/* Symbol: _ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<fmt_props, std::__1::allocator<fmt_props> >::__push_back_slow_path<fmt_props const&>(fmt_props const&) */
int _ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: cam_runtime_caps */
/* Demangled: cam_runtime_caps */
extern void* cam_runtime_caps;

/* Symbol: vpu_runtime_caps */
/* Demangled: vpu_runtime_caps */
extern void* vpu_runtime_caps;

/* Symbol: _ZN10ion_device18open_and_query_ionEv */
/* Demangled: ion_device::open_and_query_ion() */
int _ZN10ion_device18open_and_query_ionEv(void);

/* Symbol: mali_gralloc_get_caps */
/* Demangled: mali_gralloc_get_caps */
int mali_gralloc_get_caps(void);

/* Symbol: _ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE */
/* Demangled: arm::mapper::common::get_blend_mode(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::BlendMode>*) */
int _ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE(void);

/* Symbol: _ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE */
/* Demangled: arm::mapper::common::set_blend_mode(private_handle_t const*, aidl::android::hardware::graphics::common::BlendMode const&) */
int _ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE(void);

/* Symbol: _Z16get_format_indexj */
/* Demangled: get_format_index(unsigned int) */
int _Z16get_format_indexj(void);

/* Symbol: num_formats */
/* Demangled: num_formats */
extern void* num_formats;

/* Symbol: _Z24mali_gralloc_dump_stringRN7android7String8EPKcz */
/* Demangled: mali_gralloc_dump_string(android::String8&, char const*, ...) */
int _Z24mali_gralloc_dump_stringRN7android7String8EPKcz(void);

/* Symbol: _Z22mali_gralloc_ion_closev */
/* Demangled: mali_gralloc_ion_close() */
int _Z22mali_gralloc_ion_closev(void);

/* Symbol: _ZN3arm9allocator16GrallocAllocatorD0Ev */
/* Demangled: arm::allocator::GrallocAllocator::~GrallocAllocator() */
int _ZN3arm9allocator16GrallocAllocatorD0Ev(void);

/* Symbol: HIDL_FETCH_IAllocator */
/* Demangled: HIDL_FETCH_IAllocator */
int HIDL_FETCH_IAllocator(void);

/* Symbol: _Z9init_afbcPhmbii */
/* Demangled: init_afbc(unsigned char*, unsigned long, bool, int, int) */
int _Z9init_afbcPhmbii(void);

/* Symbol: formats_ip_support */
/* Demangled: formats_ip_support */
extern void* formats_ip_support;

/* Symbol: _Z9is_power2h */
/* Demangled: is_power2(unsigned char) */
int _Z9is_power2h(void);

/* Symbol: _ZTv0_n24_N3arm9allocator16GrallocAllocatorD1Ev */
/* Demangled: virtual thunk to arm::allocator::GrallocAllocator::~GrallocAllocator() */
int _ZTv0_n24_N3arm9allocator16GrallocAllocatorD1Ev(void);

/* Symbol: _ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE */
/* Demangled: arm::mapper::common::set_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > const&) */
int _ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void);

/* Symbol: _Z30mali_gralloc_adjust_dimensionsmmPiS_ */
/* Demangled: mali_gralloc_adjust_dimensions(unsigned long, unsigned long, int*, int*) */
int _Z30mali_gralloc_adjust_dimensionsmmPiS_(void);

/* Symbol: _Z19get_ip_capabilitiesv */
/* Demangled: get_ip_capabilities() */
int _Z19get_ip_capabilitiesv(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::hardware::hidl_handle, std::__1::allocator<android::hardware::hidl_handle> >::__emplace_back_slow_path<android::hardware::hidl_handle>(android::hardware::hidl_handle&&) */
int _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE7reserveEm */
/* Demangled: std::__1::vector<android::hardware::hidl_handle, std::__1::allocator<android::hardware::hidl_handle> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE7reserveEm(void);

/* Symbol: _Z19get_internal_formatjb */
/* Demangled: get_internal_format(unsigned int, bool) */
int _Z19get_internal_formatjb(void);

/* Symbol: _Z12grade_formatRK9fmt_propsj */
/* Demangled: grade_format(fmt_props const&, unsigned int) */
int _Z12grade_formatRK9fmt_propsj(void);

/* Symbol: _Z20mali_gralloc_ion_mapP16private_handle_t */
/* Demangled: mali_gralloc_ion_map(private_handle_t*) */
int _Z20mali_gralloc_ion_mapP16private_handle_t(void);

/* Symbol: _Z17is_subsampled_yuvj */
/* Demangled: is_subsampled_yuv(unsigned int) */
int _Z17is_subsampled_yuvj(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_ALLOCATOR_4_0_IMPL_MEDIATEK_H */
