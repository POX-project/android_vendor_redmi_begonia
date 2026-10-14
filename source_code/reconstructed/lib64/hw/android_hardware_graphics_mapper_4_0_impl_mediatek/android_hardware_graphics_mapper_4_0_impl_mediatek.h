/*
 * Reverse-Engineered ABI Specification for: android.hardware.graphics.mapper@4.0-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.graphics.mapper@4.0-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_MAPPER_4_0_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_MAPPER_4_0_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z30mali_gralloc_reference_releasePK13native_handleb */
/* Demangled: mali_gralloc_reference_release(native_handle const*, bool) */
int _Z30mali_gralloc_reference_releasePK13native_handleb(void);

/* Symbol: _Z28mali_gralloc_dump_buffer_addP16private_handle_t */
/* Demangled: mali_gralloc_dump_buffer_add(private_handle_t*) */
int _Z28mali_gralloc_dump_buffer_addP16private_handle_t(void);

/* Symbol: _ZN10ion_device22check_buffers_sharableEPKmj */
/* Demangled: ion_device::check_buffers_sharable(unsigned long const*, unsigned int) */
int _ZN10ion_device22check_buffers_sharableEPKmj(void);

/* Symbol: _ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE */
/* Demangled: arm::mapper::common::set_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3> const&) */
int _ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void);

/* Symbol: _Z24mali_gralloc_buffer_freePK13native_handle */
/* Demangled: mali_gralloc_buffer_free(native_handle const*) */
int _Z24mali_gralloc_buffer_freePK13native_handle(void);

/* Symbol: _Z16sanitize_formatsv */
/* Demangled: sanitize_formats() */
int _Z16sanitize_formatsv(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper18rereadLockedBufferEPv */
/* Demangled: arm::mapper::GrallocMapper::rereadLockedBuffer(void*) */
int _ZN3arm6mapper13GrallocMapper18rereadLockedBufferEPv(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper4lockEPvmRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE */
/* Demangled: arm::mapper::GrallocMapper::lock(void*, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
int _ZN3arm6mapper13GrallocMapper4lockEPvmRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE(void);

/* Symbol: _ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE */
/* Demangled: arm::mapper::common::get_crop_rect(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Rect>*) */
int _ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE(void);

/* Symbol: _ZNSt3__16vectorINS0_IN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEEENS7_IS9_EEE18__construct_at_endIPKS9_EENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESG_SG_m */
/* Demangled: _ZNSt3__16vectorINS0_IN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEEENS7_IS9_EEE18__construct_at_endIPKS9_EENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESG_SG_m */
int _ZNSt3__16vectorINS0_IN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEEENS7_IS9_EEE18__construct_at_endIPKS9_EENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESG_SG_m(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE */
/* Demangled: arm::mapper::GrallocMapper::importBuffer(android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
int _ZN3arm6mapper13GrallocMapper12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE(void);

/* Symbol: _ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: arm::mapper::common::get_name(private_handle_t const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _Z22mali_gralloc_ion_closev */
/* Demangled: mali_gralloc_ion_close() */
int _Z22mali_gralloc_ion_closev(void);

/* Symbol: _ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE */
/* Demangled: arm::mapper::common::get_dataspace(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Dataspace>*) */
int _ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE(void);

/* Symbol: _Z20mali_gralloc_ion_mapP16private_handle_t */
/* Demangled: mali_gralloc_ion_map(private_handle_t*) */
int _Z20mali_gralloc_ion_mapP16private_handle_t(void);

/* Symbol: _ZN3arm6mapper6common16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE */
/* Demangled: arm::mapper::common::getTransportSize(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, unsigned int)>) */
int _ZN3arm6mapper6common16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE(void);

/* Symbol: _Z16get_format_indexj */
/* Demangled: get_format_index(unsigned int) */
int _Z16get_format_indexj(void);

/* Symbol: _ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE */
/* Demangled: arm::mapper::common::shared_metadata_init(void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE(void);

/* Symbol: cpu_runtime_caps */
/* Demangled: cpu_runtime_caps */
extern void* cpu_runtime_caps;

/* Symbol: gpu_runtime_caps */
/* Demangled: gpu_runtime_caps */
extern void* gpu_runtime_caps;

/* Symbol: _ZN3arm6mapper6common11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE */
/* Demangled: arm::mapper::common::dumpBuffers(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump> const&)>) */
int _ZN3arm6mapper6common11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE(void);

/* Symbol: _ZTv0_n24_N3arm6mapper13GrallocMapperD1Ev */
/* Demangled: virtual thunk to arm::mapper::GrallocMapper::~GrallocMapper() */
int _ZTv0_n24_N3arm6mapper13GrallocMapperD1Ev(void);

/* Symbol: _Z29mali_gralloc_reference_retainPK13native_handle */
/* Demangled: mali_gralloc_reference_retain(native_handle const*) */
int _Z29mali_gralloc_reference_retainPK13native_handle(void);

/* Symbol: _ZN10ion_device19alloc_from_ion_heapEmm13ion_heap_typejjPi */
/* Demangled: ion_device::alloc_from_ion_heap(unsigned long, unsigned long, ion_heap_type, unsigned int, unsigned int, int*) */
int _ZN10ion_device19alloc_from_ion_heapEmm13ion_heap_typejjPi(void);

/* Symbol: mali_gralloc_get_caps */
/* Demangled: mali_gralloc_get_caps */
int mali_gralloc_get_caps(void);

/* Symbol: _ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE */
/* Demangled: arm::mapper::common::set_dataspace(private_handle_t const*, aidl::android::hardware::graphics::common::Dataspace const&) */
int _ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE(void);

/* Symbol: _ZN3arm6mapper13GrallocMapperC1Ev */
/* Demangled: arm::mapper::GrallocMapper::GrallocMapper() */
int _ZN3arm6mapper13GrallocMapperC1Ev(void);

/* Symbol: _ZN3arm6mapper13GrallocMapperD0Ev */
/* Demangled: arm::mapper::GrallocMapper::~GrallocMapper() */
int _ZN3arm6mapper13GrallocMapperD0Ev(void);

/* Symbol: _ZN3arm6mapper6common27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE */
/* Demangled: arm::mapper::common::getFromBufferDescriptorInfo(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3arm6mapper6common27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE(void);

/* Symbol: _Z32mali_gralloc_get_num_flex_planesPK13native_handlePj */
/* Demangled: mali_gralloc_get_num_flex_planes(native_handle const*, unsigned int*) */
int _Z32mali_gralloc_get_num_flex_planesPK13native_handlePj(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE */
/* Demangled: arm::mapper::GrallocMapper::getTransportSize(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, unsigned int)>) */
int _ZN3arm6mapper13GrallocMapper16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE(void);

/* Symbol: _ZN20RegisteredHandlePool3getEPKv */
/* Demangled: RegisteredHandlePool::get(void const*) */
int _ZN20RegisteredHandlePool3getEPKv(void);

/* Symbol: _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE */
/* Demangled: std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<native_handle const*, void*>*>) */
int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE(void);

/* Symbol: _Z9init_afbcPhmbii */
/* Demangled: init_afbc(unsigned char*, unsigned long, bool, int, int) */
int _Z9init_afbcPhmbii(void);

/* Symbol: cam_runtime_caps */
/* Demangled: cam_runtime_caps */
extern void* cam_runtime_caps;

/* Symbol: _ZN3arm6mapper13GrallocMapper17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE */
/* Demangled: arm::mapper::GrallocMapper::flushLockedBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
int _ZN3arm6mapper13GrallocMapper17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void);

/* Symbol: _ZN3arm6mapper6common4lockEPvmRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE */
/* Demangled: arm::mapper::common::lock(void*, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
int _ZN3arm6mapper6common4lockEPvmRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE(void);

/* Symbol: _Z17mali_gralloc_lockPK13native_handlemiiiiPPv */
/* Demangled: mali_gralloc_lock(native_handle const*, unsigned long, int, int, int, int, void**) */
int _Z17mali_gralloc_lockPK13native_handlemiiiiPPv(void);

/* Symbol: _Z24mali_gralloc_dump_stringRN7android7String8EPKcz */
/* Demangled: mali_gralloc_dump_string(android::String8&, char const*, ...) */
int _Z24mali_gralloc_dump_stringRN7android7String8EPKcz(void);

/* Symbol: _Z22mali_gralloc_lock_flexPK13native_handlemiiiiP19android_flex_layout */
/* Demangled: mali_gralloc_lock_flex(native_handle const*, unsigned long, int, int, int, int, android_flex_layout*) */
int _Z22mali_gralloc_lock_flexPK13native_handlemiiiiP19android_flex_layout(void);

/* Symbol: _Z26mali_gralloc_dump_internalPjPc */
/* Demangled: mali_gralloc_dump_internal(unsigned int*, char*) */
int _Z26mali_gralloc_dump_internalPjPc(void);

/* Symbol: _Z19get_ip_capabilitiesv */
/* Demangled: get_ip_capabilities() */
int _Z19get_ip_capabilitiesv(void);

/* Symbol: dpu_runtime_caps */
/* Demangled: dpu_runtime_caps */
extern void* dpu_runtime_caps;

/* Symbol: _ZN3arm6mapper6common10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE */
/* Demangled: arm::mapper::common::dumpBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&)>) */
int _ZN3arm6mapper6common10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE(void);

/* Symbol: _Z23mali_gralloc_lock_ycbcrPK13native_handlemiiiiP13android_ycbcr */
/* Demangled: mali_gralloc_lock_ycbcr(native_handle const*, unsigned long, int, int, int, int, android_ycbcr*) */
int _Z23mali_gralloc_lock_ycbcrPK13native_handlemiiiiP13android_ycbcr(void);

/* Symbol: _Z28mali_gralloc_buffer_allocatePKmjPPK13native_handlePb */
/* Demangled: mali_gralloc_buffer_allocate(unsigned long const*, unsigned int, native_handle const**, bool*) */
int _Z28mali_gralloc_buffer_allocatePKmjPPK13native_handlePb(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE */
/* Demangled: arm::mapper::GrallocMapper::dumpBuffers(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump> const&)>) */
int _ZN3arm6mapper13GrallocMapper11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE(void);

/* Symbol: _ZN20RegisteredHandlePool8for_eachENSt3__18functionIFvRKPK13native_handleEEE */
/* Demangled: RegisteredHandlePool::for_each(std::__1::function<void (native_handle const* const&)>) */
int _ZN20RegisteredHandlePool8for_eachENSt3__18functionIFvRKPK13native_handleEEE(void);

/* Symbol: _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<native_handle const*, void*>*>, bool> std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::__emplace_unique_key_args<native_handle const*, native_handle const* const&>(native_handle const* const&, native_handle const* const&) */
int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN3arm6mapper6common12set_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS6_8hidl_vecIhEE */
/* Demangled: arm::mapper::common::set_metadata(private_handle_t const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3arm6mapper6common12set_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE */
/* Demangled: arm::mapper::common::get_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) */
int _ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEmRKl */
/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long, long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEmRKl(void);

/* Symbol: _ZN3arm6mapper13GrallocMapperC2Ev */
/* Demangled: arm::mapper::GrallocMapper::GrallocMapper() */
int _ZN3arm6mapper13GrallocMapperC2Ev(void);

/* Symbol: _ZN3arm6mapper13GrallocMapperD1Ev */
/* Demangled: arm::mapper::GrallocMapper::~GrallocMapper() */
int _ZN3arm6mapper13GrallocMapperD1Ev(void);

/* Symbol: _ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<fmt_props, std::__1::allocator<fmt_props> >::__push_back_slow_path<fmt_props const&>(fmt_props const&) */
int _ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE */
/* Demangled: arm::mapper::GrallocMapper::getFromBufferDescriptorInfo(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3arm6mapper13GrallocMapper27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN3arm6mapper6common18rereadLockedBufferEPv */
/* Demangled: arm::mapper::common::rereadLockedBuffer(void*) */
int _ZN3arm6mapper6common18rereadLockedBufferEPv(void);

/* Symbol: _ZTCN3arm6mapper13GrallocMapperE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-arm::mapper::GrallocMapper */
extern void* _ZTCN3arm6mapper13GrallocMapperE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN20RegisteredHandlePool3addEPK13native_handle */
/* Demangled: RegisteredHandlePool::add(native_handle const*) */
int _ZN20RegisteredHandlePool3addEPK13native_handle(void);

/* Symbol: _Z30mali_gralloc_dump_buffer_eraseP16private_handle_t */
/* Demangled: mali_gralloc_dump_buffer_erase(private_handle_t*) */
int _Z30mali_gralloc_dump_buffer_eraseP16private_handle_t(void);

/* Symbol: _ZN10ion_device18open_and_query_ionEv */
/* Demangled: ion_device::open_and_query_ion() */
int _ZN10ion_device18open_and_query_ionEv(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE */
/* Demangled: arm::mapper::GrallocMapper::set(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3arm6mapper13GrallocMapper3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE(void);

/* Symbol: gRegisteredHandles */
/* Demangled: gRegisteredHandles */
extern void* gRegisteredHandles;

/* Symbol: _ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE */
/* Demangled: arm::mapper::common::set_blend_mode(private_handle_t const*, aidl::android::hardware::graphics::common::BlendMode const&) */
int _ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE(void);

/* Symbol: _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::__push_back_slow_path<aidl::android::hardware::graphics::common::PlaneLayout const&>(aidl::android::hardware::graphics::common::PlaneLayout const&) */
int _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE7reserveEm */
/* Demangled: std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE7reserveEm(void);

/* Symbol: _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common4RectENS_9allocatorIS6_EEEC2Em */
/* Demangled: std::__1::vector<aidl::android::hardware::graphics::common::Rect, std::__1::allocator<aidl::android::hardware::graphics::common::Rect> >::vector(unsigned long) */
int _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common4RectENS_9allocatorIS6_EEEC2Em(void);

/* Symbol: _Z26gralloc_shared_memory_freeiPvm */
/* Demangled: gralloc_shared_memory_free(int, void*, unsigned long) */
int _Z26gralloc_shared_memory_freeiPvm(void);

/* Symbol: _Z27mali_gralloc_ion_sync_startPK16private_handle_tbb */
/* Demangled: mali_gralloc_ion_sync_start(private_handle_t const*, bool, bool) */
int _Z27mali_gralloc_ion_sync_startPK16private_handle_tbb(void);

/* Symbol: _Z24drm_modifier_from_handlePK16private_handle_t */
/* Demangled: drm_modifier_from_handle(private_handle_t const*) */
int _Z24drm_modifier_from_handlePK16private_handle_t(void);

/* Symbol: _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayoutComponent, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayoutComponent> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _Z12grade_formatRK9fmt_propsj */
/* Demangled: grade_format(fmt_props const&, unsigned int) */
int _Z12grade_formatRK9fmt_propsj(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper10freeBufferEPv */
/* Demangled: arm::mapper::GrallocMapper::freeBuffer(void*) */
int _ZN3arm6mapper13GrallocMapper10freeBufferEPv(void);

/* Symbol: _ZN3arm6mapper6common3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE */
/* Demangled: arm::mapper::common::set(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3arm6mapper6common3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE(void);

/* Symbol: _Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t */
/* Demangled: mali_gralloc_derive_format_and_size(buffer_descriptor_t*) */
int _Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t(void);

/* Symbol: _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEm(void);

/* Symbol: _ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE */
/* Demangled: arm::mapper::common::set_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086> const&) */
int _ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void);

/* Symbol: _ZN10ion_device13pick_ion_heapEmii */
/* Demangled: ion_device::pick_ion_heap(unsigned long, int, int) */
int _ZN10ion_device13pick_ion_heapEmii(void);

/* Symbol: _ZZN10ion_device8get_instEvE3dev */
/* Demangled: ion_device::get_inst()::dev */
extern void* _ZZN10ion_device8get_instEvE3dev;

/* Symbol: _ZN3arm6mapper13GrallocMapper11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE */
/* Demangled: arm::mapper::GrallocMapper::isSupported(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, bool)>) */
int _ZN3arm6mapper13GrallocMapper11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE(void);

/* Symbol: _ZTTN3arm6mapper13GrallocMapperE */
/* Demangled: VTT for arm::mapper::GrallocMapper */
extern void* _ZTTN3arm6mapper13GrallocMapperE;

/* Symbol: _ZN3arm6mapper6common12get_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS9_5ErrorERKNS6_8hidl_vecIhEEEEE */
/* Demangled: arm::mapper::common::get_metadata(private_handle_t const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3arm6mapper6common12get_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS9_5ErrorERKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump> >::__push_back_slow_path<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&>(android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&) */
int _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE */
/* Demangled: arm::mapper::common::get_blend_mode(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::BlendMode>*) */
int _ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE(void);

/* Symbol: _Z14get_alloc_typemjmP9AllocType */
/* Demangled: get_alloc_type(unsigned long, unsigned int, unsigned long, AllocType*) */
int _Z14get_alloc_typemjmP9AllocType(void);

/* Symbol: num_formats */
/* Demangled: num_formats */
extern void* num_formats;

/* Symbol: num_ip_formats */
/* Demangled: num_ip_formats */
extern void* num_ip_formats;

/* Symbol: _ZN3arm6mapper6common26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE */
/* Demangled: arm::mapper::common::listSupportedMetadataTypes(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::MetadataTypeDescription> const&)>) */
int _ZN3arm6mapper6common26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE(void);

/* Symbol: _ZTCN3arm6mapper13GrallocMapperE0_N7android8hardware8graphics6mapper4V4_07IMapperE */
/* Demangled: construction vtable for android::hardware::graphics::mapper::V4_0::IMapper-in-arm::mapper::GrallocMapper */
extern void* _ZTCN3arm6mapper13GrallocMapperE0_N7android8hardware8graphics6mapper4V4_07IMapperE;

/* Symbol: _ZN20RegisteredHandlePool6removeEPv */
/* Demangled: RegisteredHandlePool::remove(void*) */
int _ZN20RegisteredHandlePool6removeEPv(void);

/* Symbol: _ZN3arm6mapper6common17decodeArmPlaneFdsERN7android8hardware8hidl_vecIhEEPNSt3__16vectorIlNS7_9allocatorIlEEEE */
/* Demangled: arm::mapper::common::decodeArmPlaneFds(android::hardware::hidl_vec<unsigned char>&, std::__1::vector<long, std::__1::allocator<long> >*) */
int _ZN3arm6mapper6common17decodeArmPlaneFdsERN7android8hardware8hidl_vecIhEEPNSt3__16vectorIlNS7_9allocatorIlEEEE(void);

/* Symbol: _Z21mali_gralloc_ion_freeP16private_handle_t */
/* Demangled: mali_gralloc_ion_free(private_handle_t*) */
int _Z21mali_gralloc_ion_freeP16private_handle_t(void);

/* Symbol: _Z14get_format_extmm */
/* Demangled: get_format_ext(unsigned long, unsigned long) */
int _Z14get_format_extmm(void);

/* Symbol: _Z19get_ip_format_indexj */
/* Demangled: get_ip_format_index(unsigned int) */
int _Z19get_ip_format_indexj(void);

/* Symbol: _Z17is_subsampled_yuvj */
/* Demangled: is_subsampled_yuv(unsigned int) */
int _Z17is_subsampled_yuvj(void);

/* Symbol: _ZN3arm6mapper6common3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE */
/* Demangled: arm::mapper::common::get(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3arm6mapper6common3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEm(void);

/* Symbol: _Z22drm_fourcc_from_handlePK16private_handle_t */
/* Demangled: drm_fourcc_from_handle(private_handle_t const*) */
int _Z22drm_fourcc_from_handlePK16private_handle_t(void);

/* Symbol: _Z15get_base_formatmm24mali_gralloc_format_typeb */
/* Demangled: get_base_format(unsigned long, unsigned long, mali_gralloc_format_type, bool) */
int _Z15get_base_formatmm24mali_gralloc_format_typeb(void);

/* Symbol: _ZN3arm6mapper13GrallocMapperD2Ev */
/* Demangled: arm::mapper::GrallocMapper::~GrallocMapper() */
int _ZN3arm6mapper13GrallocMapperD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump> >::__push_back_slow_path<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump>(android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump&&) */
int _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void);

/* Symbol: _ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE */
/* Demangled: arm::mapper::common::get_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) */
int _ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void);

/* Symbol: _Z19get_internal_formatjb */
/* Demangled: get_internal_format(unsigned int, bool) */
int _Z19get_internal_formatjb(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE */
/* Demangled: arm::mapper::GrallocMapper::createDescriptor(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3arm6mapper13GrallocMapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_mEEE */
/* Demangled: arm::mapper::GrallocMapper::getReservedRegion(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*, unsigned long)>) */
int _ZN3arm6mapper13GrallocMapper17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_mEEE(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE */
/* Demangled: arm::mapper::GrallocMapper::get(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3arm6mapper13GrallocMapper3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN3arm6mapper6common10freeBufferEPv */
/* Demangled: arm::mapper::common::freeBuffer(void*) */
int _ZN3arm6mapper6common10freeBufferEPv(void);

/* Symbol: formats */
/* Demangled: formats */
extern void* formats;

/* Symbol: _ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE */
/* Demangled: arm::mapper::common::get_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) */
int _ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void);

/* Symbol: _Z25mali_gralloc_ion_allocatePKmjPPK13native_handlePb */
/* Demangled: mali_gralloc_ion_allocate(unsigned long const*, unsigned int, native_handle const**, bool*) */
int _Z25mali_gralloc_ion_allocatePKmjPPK13native_handlePb(void);

/* Symbol: _Z20get_supported_formatjmttmmP9fmt_props */
/* Demangled: get_supported_format(unsigned int, unsigned long, unsigned short, unsigned short, unsigned long, unsigned long, fmt_props*) */
int _Z20get_supported_formatjmttmmP9fmt_props(void);

/* Symbol: dpu_aeu_runtime_caps */
/* Demangled: dpu_aeu_runtime_caps */
extern void* dpu_aeu_runtime_caps;

/* Symbol: formats_ip_support */
/* Demangled: formats_ip_support */
extern void* formats_ip_support;

/* Symbol: vpu_runtime_caps */
/* Demangled: vpu_runtime_caps */
extern void* vpu_runtime_caps;

/* Symbol: _Z22mali_gralloc_ion_unmapP16private_handle_t */
/* Demangled: mali_gralloc_ion_unmap(private_handle_t*) */
int _Z22mali_gralloc_ion_unmapP16private_handle_t(void);

/* Symbol: _Z9is_power2h */
/* Demangled: is_power2(unsigned char) */
int _Z9is_power2h(void);

/* Symbol: _ZTVN3arm6mapper13GrallocMapperE */
/* Demangled: vtable for arm::mapper::GrallocMapper */
extern void* _ZTVN3arm6mapper13GrallocMapperE;

/* Symbol: _Z19mali_gralloc_unlockPK13native_handle */
/* Demangled: mali_gralloc_unlock(native_handle const*) */
int _Z19mali_gralloc_unlockPK13native_handle(void);

/* Symbol: _ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE */
/* Demangled: arm::mapper::common::set_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > const&) */
int _ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void);

/* Symbol: _Z30mali_gralloc_adjust_dimensionsmmPiS_ */
/* Demangled: mali_gralloc_adjust_dimensions(unsigned long, unsigned long, int*, int*) */
int _Z30mali_gralloc_adjust_dimensionsmmPiS_(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj */
/* Demangled: arm::mapper::GrallocMapper::validateBufferSize(void*, android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, unsigned int) */
int _ZN3arm6mapper13GrallocMapper18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE */
/* Demangled: arm::mapper::GrallocMapper::listSupportedMetadataTypes(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::MetadataTypeDescription> const&)>) */
int _ZN3arm6mapper13GrallocMapper26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE(void);

/* Symbol: _ZN3arm6mapper6common17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_mEEE */
/* Demangled: arm::mapper::common::getReservedRegion(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*, unsigned long)>) */
int _ZN3arm6mapper6common17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_mEEE(void);

/* Symbol: _Z30validate_lock_input_parametersPK13native_handleiiiim */
/* Demangled: validate_lock_input_parameters(native_handle const*, int, int, int, int, unsigned long) */
int _Z30validate_lock_input_parametersPK13native_handleiiiim(void);

/* Symbol: HIDL_FETCH_IMapper */
/* Demangled: HIDL_FETCH_IMapper */
int HIDL_FETCH_IMapper(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE */
/* Demangled: arm::mapper::GrallocMapper::unlock(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
int _ZN3arm6mapper13GrallocMapper6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE */
/* Demangled: std::__1::vector<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump> >::__swap_out_circular_buffer(std::__1::__split_buffer<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump>&>&) */
int _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE(void);

/* Symbol: _Z20get_format_dataspacejmiiP19android_dataspace_tP21mali_gralloc_yuv_info */
/* Demangled: get_format_dataspace(unsigned int, unsigned long, int, int, android_dataspace_t*, mali_gralloc_yuv_info*) */
int _Z20get_format_dataspacejmiiP19android_dataspace_tP21mali_gralloc_yuv_info(void);

/* Symbol: _ZGVZN10ion_device8get_instEvE3dev */
/* Demangled: guard variable for ion_device::get_inst()::dev */
extern void* _ZGVZN10ion_device8get_instEvE3dev;

/* Symbol: _ZN3arm6mapper6common12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE */
/* Demangled: arm::mapper::common::importBuffer(android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
int _ZN3arm6mapper6common12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE(void);

/* Symbol: _ZN3arm6mapper6common18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj */
/* Demangled: arm::mapper::common::validateBufferSize(void*, android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, unsigned int) */
int _ZN3arm6mapper6common18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj(void);

/* Symbol: _Z25mali_gralloc_ion_sync_endPK16private_handle_tbb */
/* Demangled: mali_gralloc_ion_sync_end(private_handle_t const*, bool, bool) */
int _Z25mali_gralloc_ion_sync_endPK16private_handle_tbb(void);

/* Symbol: _Z3lcmjj */
/* Demangled: lcm(unsigned int, unsigned int) */
int _Z3lcmjj(void);

/* Symbol: _Z25mali_gralloc_dump_buffersRN7android7String8EPj */
/* Demangled: mali_gralloc_dump_buffers(android::String8&, unsigned int*) */
int _Z25mali_gralloc_dump_buffersRN7android7String8EPj(void);

/* Symbol: _ZN3arm6mapper13GrallocMapper10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE */
/* Demangled: arm::mapper::GrallocMapper::dumpBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&)>) */
int _ZN3arm6mapper13GrallocMapper10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE(void);

/* Symbol: _ZN3arm6mapper6common11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE */
/* Demangled: arm::mapper::common::isSupported(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, bool)>) */
int _ZN3arm6mapper6common11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE(void);

/* Symbol: _ZN3arm6mapper6common17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE */
/* Demangled: arm::mapper::common::flushLockedBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
int _ZN3arm6mapper6common17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void);

/* Symbol: _ZN3arm6mapper6common6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE */
/* Demangled: arm::mapper::common::unlock(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
int _ZN3arm6mapper6common6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void);

/* Symbol: _ZTv0_n24_N3arm6mapper13GrallocMapperD0Ev */
/* Demangled: virtual thunk to arm::mapper::GrallocMapper::~GrallocMapper() */
int _ZTv0_n24_N3arm6mapper13GrallocMapperD0Ev(void);

/* Symbol: _ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<private_handle_t*, std::__1::allocator<private_handle_t*> >::__push_back_slow_path<private_handle_t* const&>(private_handle_t* const&) */
int _ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _Z30gralloc_shared_memory_allocatePKcm */
/* Demangled: gralloc_shared_memory_allocate(char const*, unsigned long) */
int _Z30gralloc_shared_memory_allocatePKcm(void);

/* Symbol: _ZN3arm6mapper6common20shared_metadata_sizeEv */
/* Demangled: arm::mapper::common::shared_metadata_size() */
int _ZN3arm6mapper6common20shared_metadata_sizeEv(void);

/* Symbol: _ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE */
/* Demangled: arm::mapper::common::set_crop_rect(private_handle_t const*, aidl::android::hardware::graphics::common::Rect const&) */
int _ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE(void);

/* Symbol: _Z26mali_gralloc_select_formatm24mali_gralloc_format_typemiPmP22mtk_gralloc_usage_mode */
/* Demangled: mali_gralloc_select_format(unsigned long, mali_gralloc_format_type, unsigned long, int, unsigned long*, mtk_gralloc_usage_mode*) */
int _Z26mali_gralloc_select_formatm24mali_gralloc_format_typemiPmP22mtk_gralloc_usage_mode(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_MAPPER_4_0_IMPL_MEDIATEK_H */
