/*
 * Reverse-Engineered Source for: android.hardware.graphics.allocator@4.0-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_graphics_allocator_4_0_impl_mediatek"

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
#include "android_hardware_graphics_allocator_4_0_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vtable for arm::allocator::GrallocAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3arm9allocator16GrallocAllocatorE = NULL;

/* Demangled: mali_gralloc_dump_buffer_add(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z28mali_gralloc_dump_buffer_addP16private_handle_t(void) {
    ALOGD("_Z28mali_gralloc_dump_buffer_addP16private_handle_t() called");
    return 0;
}

/* Exported Object: dpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* dpu_runtime_caps = NULL;

/* Exported Object: num_ip_formats */
extern "C" __attribute__((visibility("default"))) void* num_ip_formats = NULL;

/* Demangled: mali_gralloc_ion_sync_end(private_handle_t const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _Z25mali_gralloc_ion_sync_endPK16private_handle_tbb(void) {
    ALOGD("_Z25mali_gralloc_ion_sync_endPK16private_handle_tbb() called");
    return 0;
}

/* Demangled: mali_gralloc_select_format(unsigned long long, mali_gralloc_format_type, unsigned long long, int, unsigned long long*, mtk_gralloc_usage_mode*) */
extern "C" __attribute__((visibility("default"))) int _Z26mali_gralloc_select_formaty24mali_gralloc_format_typeyiPyP22mtk_gralloc_usage_mode(void) {
    ALOGD("_Z26mali_gralloc_select_formaty24mali_gralloc_format_typeyiPyP22mtk_gralloc_usage_mode() called");
    return 0;
}

/* Demangled: get_format_ext(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z14get_format_extyy(void) {
    ALOGD("_Z14get_format_extyy() called");
    return 0;
}

/* Demangled: sanitize_formats() */
extern "C" __attribute__((visibility("default"))) int _Z16sanitize_formatsv(void) {
    ALOGD("_Z16sanitize_formatsv() called");
    return 0;
}

/* Demangled: arm::mapper::common::shared_metadata_size() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common20shared_metadata_sizeEv(void) {
    ALOGD("_ZN3arm6mapper6common20shared_metadata_sizeEv() called");
    return 0;
}

/* Demangled: mali_gralloc_derive_format_and_size(buffer_descriptor_t*) */
extern "C" __attribute__((visibility("default"))) int _Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t(void) {
    ALOGD("_Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t() called");
    return 0;
}

/* Exported Object: formats */
extern "C" __attribute__((visibility("default"))) void* formats = NULL;

/* Demangled: get_base_format(unsigned long long, unsigned long long, mali_gralloc_format_type, bool) */
extern "C" __attribute__((visibility("default"))) int _Z15get_base_formatyy24mali_gralloc_format_typeb(void) {
    ALOGD("_Z15get_base_formatyy24mali_gralloc_format_typeb() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_buffer_erase(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z30mali_gralloc_dump_buffer_eraseP16private_handle_t(void) {
    ALOGD("_Z30mali_gralloc_dump_buffer_eraseP16private_handle_t() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_unmap(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z22mali_gralloc_ion_unmapP16private_handle_t(void) {
    ALOGD("_Z22mali_gralloc_ion_unmapP16private_handle_t() called");
    return 0;
}

/* Demangled: arm::mapper::common::shared_metadata_init(void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE(void) {
    ALOGD("_ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE() called");
    return 0;
}

/* Exported Object: gpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* gpu_runtime_caps = NULL;

/* Demangled: ion_device::check_buffers_sharable(unsigned long long const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device22check_buffers_sharableEPKyj(void) {
    ALOGD("_ZN10ion_device22check_buffers_sharableEPKyj() called");
    return 0;
}

/* Demangled: arm::allocator::GrallocAllocator::GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator16GrallocAllocatorC2Ev(void) {
    ALOGD("_ZN3arm9allocator16GrallocAllocatorC2Ev() called");
    return 0;
}

/* Demangled: gralloc_shared_memory_allocate(char const*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z30gralloc_shared_memory_allocatePKcy(void) {
    ALOGD("_Z30gralloc_shared_memory_allocatePKcy() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void) {
    ALOGD("_ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_free(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z21mali_gralloc_ion_freeP16private_handle_t(void) {
    ALOGD("_Z21mali_gralloc_ion_freeP16private_handle_t() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void) {
    ALOGD("_ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_allocate(unsigned long long const*, unsigned int, native_handle const**, bool*) */
extern "C" __attribute__((visibility("default"))) int _Z25mali_gralloc_ion_allocatePKyjPPK13native_handlePb(void) {
    ALOGD("_Z25mali_gralloc_ion_allocatePKyjPPK13native_handlePb() called");
    return 0;
}

/* Demangled: init_afbc(unsigned char*, unsigned long long, bool, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z9init_afbcPhybii(void) {
    ALOGD("_Z9init_afbcPhybii() called");
    return 0;
}

/* Demangled: lcm(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z3lcmjj(void) {
    ALOGD("_Z3lcmjj() called");
    return 0;
}

/* Exported Object: cpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* cpu_runtime_caps = NULL;

/* Demangled: mali_gralloc_dump_buffers(android::String8&, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z25mali_gralloc_dump_buffersRN7android7String8EPj(void) {
    ALOGD("_Z25mali_gralloc_dump_buffersRN7android7String8EPj() called");
    return 0;
}

/* Demangled: arm::allocator::GrallocAllocator::allocate(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, android::hardware::hidl_vec<android::hardware::hidl_handle> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator16GrallocAllocator8allocateERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEjRKNS4_INS3_11hidl_handleEEEEEE(void) {
    ALOGD("_ZN3arm9allocator16GrallocAllocator8allocateERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEjRKNS4_INS3_11hidl_handleEEEEEE() called");
    return 0;
}

/* Demangled: arm::allocator::GrallocAllocator::GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator16GrallocAllocatorC1Ev(void) {
    ALOGD("_ZN3arm9allocator16GrallocAllocatorC1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to arm::allocator::GrallocAllocator::~GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N3arm9allocator16GrallocAllocatorD1Ev(void) {
    ALOGD("_ZTv0_n12_N3arm9allocator16GrallocAllocatorD1Ev() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_dataspace(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Dataspace>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE(void) {
    ALOGD("_ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_sync_start(private_handle_t const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _Z27mali_gralloc_ion_sync_startPK16private_handle_tbb(void) {
    ALOGD("_Z27mali_gralloc_ion_sync_startPK16private_handle_tbb() called");
    return 0;
}

/* Exported Object: VTT for arm::allocator::GrallocAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN3arm9allocator16GrallocAllocatorE = NULL;

/* Demangled: arm::mapper::common::get_crop_rect(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Rect>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE(void) {
    ALOGD("_ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_internal(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z26mali_gralloc_dump_internalPjPc(void) {
    ALOGD("_Z26mali_gralloc_dump_internalPjPc() called");
    return 0;
}

/* Exported Object: guard variable for ion_device::get_inst()::dev */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10ion_device8get_instEvE3dev = NULL;

/* Demangled: arm::mapper::common::get_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void) {
    ALOGD("_ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE() called");
    return 0;
}

/* Demangled: arm::allocator::GrallocAllocator::~GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator16GrallocAllocatorD2Ev(void) {
    ALOGD("_ZN3arm9allocator16GrallocAllocatorD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::graphics::allocator::V4_0::IAllocator-in-arm::allocator::GrallocAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3arm9allocator16GrallocAllocatorE0_N7android8hardware8graphics9allocator4V4_010IAllocatorE = NULL;

/* Demangled: virtual thunk to arm::allocator::GrallocAllocator::~GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N3arm9allocator16GrallocAllocatorD0Ev(void) {
    ALOGD("_ZTv0_n12_N3arm9allocator16GrallocAllocatorD0Ev() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void) {
    ALOGD("_ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE() called");
    return 0;
}

/* Demangled: get_ip_format_index(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19get_ip_format_indexj(void) {
    ALOGD("_Z19get_ip_format_indexj() called");
    return 0;
}

/* Demangled: void std::__1::vector<private_handle_t*, std::__1::allocator<private_handle_t*> >::__push_back_slow_path<private_handle_t* const&>(private_handle_t* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_crop_rect(private_handle_t const*, aidl::android::hardware::graphics::common::Rect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE(void) {
    ALOGD("_ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE() called");
    return 0;
}

/* Exported Object: dpu_aeu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* dpu_aeu_runtime_caps = NULL;

/* Exported Object: ion_device::get_inst()::dev */
extern "C" __attribute__((visibility("default"))) void* _ZZN10ion_device8get_instEvE3dev = NULL;

/* Demangled: arm::allocator::common::allocate(buffer_descriptor_t const&, unsigned int, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, android::hardware::hidl_vec<android::hardware::hidl_handle> const&)>, std::__1::function<int (buffer_descriptor_t const*, native_handle const**)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator6common8allocateERK19buffer_descriptor_tjNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjRKNS8_8hidl_vecINS8_11hidl_handleEEEEEENS6_IFiPS3_PPK13native_handleEEE(void) {
    ALOGD("_ZN3arm9allocator6common8allocateERK19buffer_descriptor_tjNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjRKNS8_8hidl_vecINS8_11hidl_handleEEEEEENS6_IFiPS3_PPK13native_handleEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-arm::allocator::GrallocAllocator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3arm9allocator16GrallocAllocatorE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: arm::mapper::common::set_dataspace(private_handle_t const*, aidl::android::hardware::graphics::common::Dataspace const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE(void) {
    ALOGD("_ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_name(private_handle_t const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: arm::allocator::GrallocAllocator::~GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator16GrallocAllocatorD1Ev(void) {
    ALOGD("_ZN3arm9allocator16GrallocAllocatorD1Ev() called");
    return 0;
}

/* Demangled: mali_gralloc_buffer_free(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z24mali_gralloc_buffer_freePK13native_handle(void) {
    ALOGD("_Z24mali_gralloc_buffer_freePK13native_handle() called");
    return 0;
}

/* Demangled: get_alloc_type(unsigned long long, unsigned int, unsigned long long, AllocType*) */
extern "C" __attribute__((visibility("default"))) int _Z14get_alloc_typeyjyP9AllocType(void) {
    ALOGD("_Z14get_alloc_typeyjyP9AllocType() called");
    return 0;
}

/* Demangled: void std::__1::vector<fmt_props, std::__1::allocator<fmt_props> >::__push_back_slow_path<fmt_props const&>(fmt_props const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: ion_device::alloc_from_ion_heap(unsigned long long, unsigned int, ion_heap_type, unsigned int, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device19alloc_from_ion_heapEyj13ion_heap_typejjPi(void) {
    ALOGD("_ZN10ion_device19alloc_from_ion_heapEyj13ion_heap_typejjPi() called");
    return 0;
}

/* Demangled: get_supported_format(unsigned int, unsigned long long, unsigned short, unsigned short, unsigned long long, unsigned long long, fmt_props*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_supported_formatjyttyyP9fmt_props(void) {
    ALOGD("_Z20get_supported_formatjyttyyP9fmt_props() called");
    return 0;
}

/* Exported Object: cam_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* cam_runtime_caps = NULL;

/* Exported Object: vpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* vpu_runtime_caps = NULL;

/* Demangled: ion_device::open_and_query_ion() */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device18open_and_query_ionEv(void) {
    ALOGD("_ZN10ion_device18open_and_query_ionEv() called");
    return 0;
}

/* Demangled: mali_gralloc_get_caps */
extern "C" __attribute__((visibility("default"))) int mali_gralloc_get_caps(void) {
    ALOGD("mali_gralloc_get_caps() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_blend_mode(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::BlendMode>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE(void) {
    ALOGD("_ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_blend_mode(private_handle_t const*, aidl::android::hardware::graphics::common::BlendMode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE(void) {
    ALOGD("_ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE() called");
    return 0;
}

/* Demangled: get_format_index(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16get_format_indexj(void) {
    ALOGD("_Z16get_format_indexj() called");
    return 0;
}

/* Demangled: mali_gralloc_adjust_dimensions(unsigned long long, unsigned long long, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z30mali_gralloc_adjust_dimensionsyyPiS_(void) {
    ALOGD("_Z30mali_gralloc_adjust_dimensionsyyPiS_() called");
    return 0;
}

/* Exported Object: num_formats */
extern "C" __attribute__((visibility("default"))) void* num_formats = NULL;

/* Demangled: mali_gralloc_dump_string(android::String8&, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z24mali_gralloc_dump_stringRN7android7String8EPKcz(void) {
    ALOGD("_Z24mali_gralloc_dump_stringRN7android7String8EPKcz() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_close() */
extern "C" __attribute__((visibility("default"))) int _Z22mali_gralloc_ion_closev(void) {
    ALOGD("_Z22mali_gralloc_ion_closev() called");
    return 0;
}

/* Demangled: arm::allocator::GrallocAllocator::~GrallocAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm9allocator16GrallocAllocatorD0Ev(void) {
    ALOGD("_ZN3arm9allocator16GrallocAllocatorD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::hidl_handle, std::__1::allocator<android::hardware::hidl_handle> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE7reserveEj() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IAllocator */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IAllocator(void) {
    ALOGD("HIDL_FETCH_IAllocator() called");
    return 0;
}

/* Demangled: get_format_dataspace(unsigned int, unsigned long long, int, int, android_dataspace_t*, mali_gralloc_yuv_info*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_format_dataspacejyiiP19android_dataspace_tP21mali_gralloc_yuv_info(void) {
    ALOGD("_Z20get_format_dataspacejyiiP19android_dataspace_tP21mali_gralloc_yuv_info() called");
    return 0;
}

/* Exported Object: formats_ip_support */
extern "C" __attribute__((visibility("default"))) void* formats_ip_support = NULL;

/* Demangled: is_power2(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z9is_power2h(void) {
    ALOGD("_Z9is_power2h() called");
    return 0;
}

/* Demangled: ion_device::pick_ion_heap(unsigned long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device13pick_ion_heapEyii(void) {
    ALOGD("_ZN10ion_device13pick_ion_heapEyii() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE() called");
    return 0;
}

/* Demangled: gralloc_shared_memory_free(int, void*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z26gralloc_shared_memory_freeiPvy(void) {
    ALOGD("_Z26gralloc_shared_memory_freeiPvy() called");
    return 0;
}

/* Demangled: get_ip_capabilities() */
extern "C" __attribute__((visibility("default"))) int _Z19get_ip_capabilitiesv(void) {
    ALOGD("_Z19get_ip_capabilitiesv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::hidl_handle, std::__1::allocator<android::hardware::hidl_handle> >::__emplace_back_slow_path<android::hardware::hidl_handle>(android::hardware::hidl_handle&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_() called");
    return 0;
}

/* Demangled: get_internal_format(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z19get_internal_formatjb(void) {
    ALOGD("_Z19get_internal_formatjb() called");
    return 0;
}

/* Demangled: grade_format(fmt_props const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12grade_formatRK9fmt_propsj(void) {
    ALOGD("_Z12grade_formatRK9fmt_propsj() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_map(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z20mali_gralloc_ion_mapP16private_handle_t(void) {
    ALOGD("_Z20mali_gralloc_ion_mapP16private_handle_t() called");
    return 0;
}

/* Demangled: mali_gralloc_buffer_allocate(unsigned long long const*, unsigned int, native_handle const**, bool*) */
extern "C" __attribute__((visibility("default"))) int _Z28mali_gralloc_buffer_allocatePKyjPPK13native_handlePb(void) {
    ALOGD("_Z28mali_gralloc_buffer_allocatePKyjPPK13native_handlePb() called");
    return 0;
}

/* Demangled: is_subsampled_yuv(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17is_subsampled_yuvj(void) {
    ALOGD("_Z17is_subsampled_yuvj() called");
    return 0;
}
