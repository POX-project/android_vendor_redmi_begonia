/*
 * Reverse-Engineered Source for: android.hardware.graphics.mapper@4.0-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_graphics_mapper_4_0_impl_mediatek"

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
#include "android_hardware_graphics_mapper_4_0_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: virtual thunk to arm::mapper::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N3arm6mapper13GrallocMapperD1Ev(void) {
    ALOGD("_ZTv0_n12_N3arm6mapper13GrallocMapperD1Ev() called");
    return 0;
}

/* Demangled: mali_gralloc_reference_release(native_handle const*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z30mali_gralloc_reference_releasePK13native_handleb(void) {
    ALOGD("_Z30mali_gralloc_reference_releasePK13native_handleb() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_buffer_add(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z28mali_gralloc_dump_buffer_addP16private_handle_t(void) {
    ALOGD("_Z28mali_gralloc_dump_buffer_addP16private_handle_t() called");
    return 0;
}

/* Demangled: ion_device::check_buffers_sharable(unsigned long long const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device22check_buffers_sharableEPKyj(void) {
    ALOGD("_ZN10ion_device22check_buffers_sharableEPKyj() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void) {
    ALOGD("_ZN3arm6mapper6common12set_cta861_3EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE() called");
    return 0;
}

/* Demangled: mali_gralloc_buffer_free(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z24mali_gralloc_buffer_freePK13native_handle(void) {
    ALOGD("_Z24mali_gralloc_buffer_freePK13native_handle() called");
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

/* Demangled: ion_device::alloc_from_ion_heap(unsigned long long, unsigned int, ion_heap_type, unsigned int, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device19alloc_from_ion_heapEyj13ion_heap_typejjPi(void) {
    ALOGD("_ZN10ion_device19alloc_from_ion_heapEyj13ion_heap_typejjPi() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::rereadLockedBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper18rereadLockedBufferEPv(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper18rereadLockedBufferEPv() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_crop_rect(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Rect>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE(void) {
    ALOGD("_ZN3arm6mapper6common13get_crop_rectEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common4RectEEE() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::importBuffer(android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_name(private_handle_t const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN3arm6mapper6common8get_nameEPK16private_handle_tPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_close() */
extern "C" __attribute__((visibility("default"))) int _Z22mali_gralloc_ion_closev(void) {
    ALOGD("_Z22mali_gralloc_ion_closev() called");
    return 0;
}

/* Demangled: mali_gralloc_lock(native_handle const*, unsigned long long, int, int, int, int, void**) */
extern "C" __attribute__((visibility("default"))) int _Z17mali_gralloc_lockPK13native_handleyiiiiPPv(void) {
    ALOGD("_Z17mali_gralloc_lockPK13native_handleyiiiiPPv() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_dataspace(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Dataspace>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE(void) {
    ALOGD("_ZN3arm6mapper6common13get_dataspaceEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9DataspaceEEE() called");
    return 0;
}

/* Demangled: get_alloc_type(unsigned long long, unsigned int, unsigned long long, AllocType*) */
extern "C" __attribute__((visibility("default"))) int _Z14get_alloc_typeyjyP9AllocType(void) {
    ALOGD("_Z14get_alloc_typeyjyP9AllocType() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_map(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z20mali_gralloc_ion_mapP16private_handle_t(void) {
    ALOGD("_Z20mali_gralloc_ion_mapP16private_handle_t() called");
    return 0;
}

/* Demangled: arm::mapper::common::getTransportSize(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE(void) {
    ALOGD("_ZN3arm6mapper6common16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE() called");
    return 0;
}

/* Demangled: get_format_index(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16get_format_indexj(void) {
    ALOGD("_Z16get_format_indexj() called");
    return 0;
}

/* Demangled: arm::mapper::common::shared_metadata_init(void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE(void) {
    ALOGD("_ZN3arm6mapper6common20shared_metadata_initEPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE() called");
    return 0;
}

/* Exported Object: cpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* cpu_runtime_caps = NULL;

/* Exported Object: gpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* gpu_runtime_caps = NULL;

/* Demangled: arm::mapper::common::dumpBuffers(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE() called");
    return 0;
}

/* Demangled: validate_lock_input_parameters(native_handle const*, int, int, int, int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z30validate_lock_input_parametersPK13native_handleiiiiy(void) {
    ALOGD("_Z30validate_lock_input_parametersPK13native_handleiiiiy() called");
    return 0;
}

/* Demangled: mali_gralloc_reference_retain(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z29mali_gralloc_reference_retainPK13native_handle(void) {
    ALOGD("_Z29mali_gralloc_reference_retainPK13native_handle() called");
    return 0;
}

/* Demangled: mali_gralloc_get_caps */
extern "C" __attribute__((visibility("default"))) int mali_gralloc_get_caps(void) {
    ALOGD("mali_gralloc_get_caps() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_dataspace(private_handle_t const*, aidl::android::hardware::graphics::common::Dataspace const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE(void) {
    ALOGD("_ZN3arm6mapper6common13set_dataspaceEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9DataspaceE() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::lock(void*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper4lockEPvyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper4lockEPvyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapperC1Ev(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapperC1Ev() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapperD0Ev(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapperD0Ev() called");
    return 0;
}

/* Demangled: arm::mapper::common::getFromBufferDescriptorInfo(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: mali_gralloc_lock_flex(native_handle const*, unsigned long long, int, int, int, int, android_flex_layout*) */
extern "C" __attribute__((visibility("default"))) int _Z22mali_gralloc_lock_flexPK13native_handleyiiiiP19android_flex_layout(void) {
    ALOGD("_Z22mali_gralloc_lock_flexPK13native_handleyiiiiP19android_flex_layout() called");
    return 0;
}

/* Demangled: mali_gralloc_get_num_flex_planes(native_handle const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z32mali_gralloc_get_num_flex_planesPK13native_handlePj(void) {
    ALOGD("_Z32mali_gralloc_get_num_flex_planesPK13native_handlePj() called");
    return 0;
}

/* Demangled: gralloc_shared_memory_allocate(char const*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z30gralloc_shared_memory_allocatePKcy(void) {
    ALOGD("_Z30gralloc_shared_memory_allocatePKcy() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::getTransportSize(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, unsigned int, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper16getTransportSizeEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorEjjEEE() called");
    return 0;
}

/* Demangled: RegisteredHandlePool::get(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20RegisteredHandlePool3getEPKv(void) {
    ALOGD("_ZN20RegisteredHandlePool3getEPKv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<native_handle const*, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE() called");
    return 0;
}

/* Demangled: init_afbc(unsigned char*, unsigned long long, bool, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z9init_afbcPhybii(void) {
    ALOGD("_Z9init_afbcPhybii() called");
    return 0;
}

/* Exported Object: cam_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* cam_runtime_caps = NULL;

/* Demangled: arm::mapper::GrallocMapper::flushLockedBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE() called");
    return 0;
}

/* Demangled: mali_gralloc_lock_ycbcr(native_handle const*, unsigned long long, int, int, int, int, android_ycbcr*) */
extern "C" __attribute__((visibility("default"))) int _Z23mali_gralloc_lock_ycbcrPK13native_handleyiiiiP13android_ycbcr(void) {
    ALOGD("_Z23mali_gralloc_lock_ycbcrPK13native_handleyiiiiP13android_ycbcr() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_string(android::String8&, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z24mali_gralloc_dump_stringRN7android7String8EPKcz(void) {
    ALOGD("_Z24mali_gralloc_dump_stringRN7android7String8EPKcz() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_internal(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z26mali_gralloc_dump_internalPjPc(void) {
    ALOGD("_Z26mali_gralloc_dump_internalPjPc() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::__erase_unique<native_handle const*>(native_handle const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE14__erase_uniqueIS3_EEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE14__erase_uniqueIS3_EEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<long long, std::__1::allocator<long long> >::__append(unsigned int, long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIxNS_9allocatorIxEEE8__appendEjRKx(void) {
    ALOGD("_ZNSt3__16vectorIxNS_9allocatorIxEEE8__appendEjRKx() called");
    return 0;
}

/* Demangled: get_ip_capabilities() */
extern "C" __attribute__((visibility("default"))) int _Z19get_ip_capabilitiesv(void) {
    ALOGD("_Z19get_ip_capabilitiesv() called");
    return 0;
}

/* Exported Object: dpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* dpu_runtime_caps = NULL;

/* Demangled: arm::mapper::common::dumpBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE(void) {
    ALOGD("_ZN3arm6mapper6common10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::lock(void*, unsigned long long, android::hardware::graphics::mapper::V4_0::IMapper::Rect const&, android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common4lockEPvyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE(void) {
    ALOGD("_ZN3arm6mapper6common4lockEPvyRKN7android8hardware8graphics6mapper4V4_07IMapper4RectERKNS4_11hidl_handleENSt3__18functionIFvNS7_5ErrorES2_EEE() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::dumpBuffers(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper11dumpBuffersENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper10BufferDumpEEEEEE() called");
    return 0;
}

/* Demangled: RegisteredHandlePool::for_each(std::__1::function<void (native_handle const* const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN20RegisteredHandlePool8for_eachENSt3__18functionIFvRKPK13native_handleEEE(void) {
    ALOGD("_ZN20RegisteredHandlePool8for_eachENSt3__18functionIFvRKPK13native_handleEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<native_handle const*, void*>*>, bool> std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::__emplace_unique_key_args<native_handle const*, native_handle const* const&>(native_handle const* const&, native_handle const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: get_supported_format(unsigned int, unsigned long long, unsigned short, unsigned short, unsigned long long, unsigned long long, fmt_props*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_supported_formatjyttyyP9fmt_props(void) {
    ALOGD("_Z20get_supported_formatjyttyyP9fmt_props() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_metadata(private_handle_t const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12set_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN3arm6mapper6common12set_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void) {
    ALOGD("_ZN3arm6mapper6common13get_smpte2086EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE() called");
    return 0;
}

/* Demangled: std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE7reserveEj() called");
    return 0;
}

/* Demangled: std::__1::vector<aidl::android::hardware::graphics::common::Rect, std::__1::allocator<aidl::android::hardware::graphics::common::Rect> >::vector(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common4RectENS_9allocatorIS6_EEEC2Ej(void) {
    ALOGD("_ZNSt3__16vectorIN4aidl7android8hardware8graphics6common4RectENS_9allocatorIS6_EEEC2Ej() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapperC2Ev(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapperC2Ev() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapperD1Ev(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapperD1Ev() called");
    return 0;
}

/* Demangled: mali_gralloc_select_format(unsigned long long, mali_gralloc_format_type, unsigned long long, int, unsigned long long*, mtk_gralloc_usage_mode*) */
extern "C" __attribute__((visibility("default"))) int _Z26mali_gralloc_select_formaty24mali_gralloc_format_typeyiPyP22mtk_gralloc_usage_mode(void) {
    ALOGD("_Z26mali_gralloc_select_formaty24mali_gralloc_format_typeyiPyP22mtk_gralloc_usage_mode() called");
    return 0;
}

/* Demangled: void std::__1::vector<fmt_props, std::__1::allocator<fmt_props> >::__push_back_slow_path<fmt_props const&>(fmt_props const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI9fmt_propsNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::getFromBufferDescriptorInfo(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper27getFromBufferDescriptorInfoERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoERKNS7_12MetadataTypeENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::rereadLockedBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common18rereadLockedBufferEPv(void) {
    ALOGD("_ZN3arm6mapper6common18rereadLockedBufferEPv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-arm::mapper::GrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3arm6mapper13GrallocMapperE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: RegisteredHandlePool::add(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20RegisteredHandlePool3addEPK13native_handle(void) {
    ALOGD("_ZN20RegisteredHandlePool3addEPK13native_handle() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj() called");
    return 0;
}

/* Demangled: mali_gralloc_buffer_allocate(unsigned long long const*, unsigned int, native_handle const**, bool*) */
extern "C" __attribute__((visibility("default"))) int _Z28mali_gralloc_buffer_allocatePKyjPPK13native_handlePb(void) {
    ALOGD("_Z28mali_gralloc_buffer_allocatePKyjPPK13native_handlePb() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_buffer_erase(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z30mali_gralloc_dump_buffer_eraseP16private_handle_t(void) {
    ALOGD("_Z30mali_gralloc_dump_buffer_eraseP16private_handle_t() called");
    return 0;
}

/* Demangled: ion_device::open_and_query_ion() */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device18open_and_query_ionEv(void) {
    ALOGD("_ZN10ion_device18open_and_query_ionEv() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::set(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: gRegisteredHandles */
extern "C" __attribute__((visibility("default"))) void* gRegisteredHandles = NULL;

/* Demangled: arm::mapper::common::set_blend_mode(private_handle_t const*, aidl::android::hardware::graphics::common::BlendMode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE(void) {
    ALOGD("_ZN3arm6mapper6common14set_blend_modeEPK16private_handle_tRKN4aidl7android8hardware8graphics6common9BlendModeE() called");
    return 0;
}

/* Demangled: arm::mapper::common::decodeArmPlaneFds(android::hardware::hidl_vec<unsigned char>&, std::__1::vector<long long, std::__1::allocator<long long> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common17decodeArmPlaneFdsERN7android8hardware8hidl_vecIhEEPNSt3__16vectorIxNS7_9allocatorIxEEEE(void) {
    ALOGD("_ZN3arm6mapper6common17decodeArmPlaneFdsERN7android8hardware8hidl_vecIhEEPNSt3__16vectorIxNS7_9allocatorIxEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::__push_back_slow_path<aidl::android::hardware::graphics::common::PlaneLayout const&>(aidl::android::hardware::graphics::common::PlaneLayout const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_sync_start(private_handle_t const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _Z27mali_gralloc_ion_sync_startPK16private_handle_tbb(void) {
    ALOGD("_Z27mali_gralloc_ion_sync_startPK16private_handle_tbb() called");
    return 0;
}

/* Demangled: drm_modifier_from_handle(private_handle_t const*) */
extern "C" __attribute__((visibility("default"))) int _Z24drm_modifier_from_handlePK16private_handle_t(void) {
    ALOGD("_Z24drm_modifier_from_handlePK16private_handle_t() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayoutComponent, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayoutComponent> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: grade_format(fmt_props const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12grade_formatRK9fmt_propsj(void) {
    ALOGD("_Z12grade_formatRK9fmt_propsj() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::freeBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper10freeBufferEPv(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper10freeBufferEPv() called");
    return 0;
}

/* Demangled: arm::mapper::common::set(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE(void) {
    ALOGD("_ZN3arm6mapper6common3setEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeERKNS4_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mali_gralloc_derive_format_and_size(buffer_descriptor_t*) */
extern "C" __attribute__((visibility("default"))) int _Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t(void) {
    ALOGD("_Z35mali_gralloc_derive_format_and_sizeP19buffer_descriptor_t() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_smpte2086(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void) {
    ALOGD("_ZN3arm6mapper6common13set_smpte2086EPK16private_handle_tRKNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE() called");
    return 0;
}

/* Demangled: ion_device::pick_ion_heap(unsigned long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ion_device13pick_ion_heapEyii(void) {
    ALOGD("_ZN10ion_device13pick_ion_heapEyii() called");
    return 0;
}

/* Exported Object: ion_device::get_inst()::dev */
extern "C" __attribute__((visibility("default"))) void* _ZZN10ion_device8get_instEvE3dev = NULL;

/* Demangled: arm::mapper::GrallocMapper::isSupported(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE() called");
    return 0;
}

/* Exported Object: VTT for arm::mapper::GrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN3arm6mapper13GrallocMapperE = NULL;

/* Demangled: arm::mapper::common::get_metadata(private_handle_t const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12get_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS9_5ErrorERKNS6_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common12get_metadataEPK16private_handle_tRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS9_5ErrorERKNS6_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump> >::__push_back_slow_path<android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&>(android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<native_handle const*, std::__1::hash<native_handle const*>, std::__1::equal_to<native_handle const*>, std::__1::allocator<native_handle const*> >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIPK13native_handleNS_4hashIS3_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_blend_mode(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::BlendMode>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE(void) {
    ALOGD("_ZN3arm6mapper6common14get_blend_modeEPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common9BlendModeEEE() called");
    return 0;
}

/* Exported Object: num_formats */
extern "C" __attribute__((visibility("default"))) void* num_formats = NULL;

/* Exported Object: num_ip_formats */
extern "C" __attribute__((visibility("default"))) void* num_ip_formats = NULL;

/* Demangled: arm::mapper::common::listSupportedMetadataTypes(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::MetadataTypeDescription> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::graphics::mapper::V4_0::IMapper-in-arm::mapper::GrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3arm6mapper13GrallocMapperE0_N7android8hardware8graphics6mapper4V4_07IMapperE = NULL;

/* Demangled: RegisteredHandlePool::remove(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN20RegisteredHandlePool6removeEPv(void) {
    ALOGD("_ZN20RegisteredHandlePool6removeEPv() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_free(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z21mali_gralloc_ion_freeP16private_handle_t(void) {
    ALOGD("_Z21mali_gralloc_ion_freeP16private_handle_t() called");
    return 0;
}

/* Demangled: get_ip_format_index(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19get_ip_format_indexj(void) {
    ALOGD("_Z19get_ip_format_indexj() called");
    return 0;
}

/* Demangled: is_subsampled_yuv(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17is_subsampled_yuvj(void) {
    ALOGD("_Z17is_subsampled_yuvj() called");
    return 0;
}

/* Demangled: arm::mapper::common::get(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to arm::mapper::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N3arm6mapper13GrallocMapperD0Ev(void) {
    ALOGD("_ZTv0_n12_N3arm6mapper13GrallocMapperD0Ev() called");
    return 0;
}

/* Demangled: drm_fourcc_from_handle(private_handle_t const*) */
extern "C" __attribute__((visibility("default"))) int _Z22drm_fourcc_from_handlePK16private_handle_t(void) {
    ALOGD("_Z22drm_fourcc_from_handlePK16private_handle_t() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapperD2Ev(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapperD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump> >::__push_back_slow_path<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump>(android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_() called");
    return 0;
}

/* Demangled: arm::mapper::common::get_cta861_3(private_handle_t const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void) {
    ALOGD("_ZN3arm6mapper6common12get_cta861_3EPK16private_handle_tPNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE() called");
    return 0;
}

/* Demangled: get_internal_format(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z19get_internal_formatjb(void) {
    ALOGD("_Z19get_internal_formatjb() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::createDescriptor(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper16createDescriptorERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorERKNS3_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::getReservedRegion(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_yEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_yEEE() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::get(void*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper3getEPvRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeENSt3__18functionIFvNS7_5ErrorERKNS4_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::freeBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common10freeBufferEPv(void) {
    ALOGD("_ZN3arm6mapper6common10freeBufferEPv() called");
    return 0;
}

/* Exported Object: formats */
extern "C" __attribute__((visibility("default"))) void* formats = NULL;

/* Demangled: arm::mapper::common::get_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common16get_smpte2094_40EPK16private_handle_tPNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_allocate(unsigned long long const*, unsigned int, native_handle const**, bool*) */
extern "C" __attribute__((visibility("default"))) int _Z25mali_gralloc_ion_allocatePKyjPPK13native_handlePb(void) {
    ALOGD("_Z25mali_gralloc_ion_allocatePKyjPPK13native_handlePb() called");
    return 0;
}

/* Exported Object: dpu_aeu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* dpu_aeu_runtime_caps = NULL;

/* Exported Object: formats_ip_support */
extern "C" __attribute__((visibility("default"))) void* formats_ip_support = NULL;

/* Exported Object: vpu_runtime_caps */
extern "C" __attribute__((visibility("default"))) void* vpu_runtime_caps = NULL;

/* Demangled: mali_gralloc_ion_unmap(private_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z22mali_gralloc_ion_unmapP16private_handle_t(void) {
    ALOGD("_Z22mali_gralloc_ion_unmapP16private_handle_t() called");
    return 0;
}

/* Demangled: is_power2(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z9is_power2h(void) {
    ALOGD("_Z9is_power2h() called");
    return 0;
}

/* Exported Object: vtable for arm::mapper::GrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3arm6mapper13GrallocMapperE = NULL;

/* Demangled: mali_gralloc_unlock(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z19mali_gralloc_unlockPK13native_handle(void) {
    ALOGD("_Z19mali_gralloc_unlockPK13native_handle() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_smpte2094_40(private_handle_t const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE(void) {
    ALOGD("_ZN3arm6mapper6common16set_smpte2094_40EPK16private_handle_tRKNSt3__18optionalINS5_6vectorIhNS5_9allocatorIhEEEEEE() called");
    return 0;
}

/* Demangled: mali_gralloc_adjust_dimensions(unsigned long long, unsigned long long, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z30mali_gralloc_adjust_dimensionsyyPiS_(void) {
    ALOGD("_Z30mali_gralloc_adjust_dimensionsyyPiS_() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::validateBufferSize(void*, android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::listSupportedMetadataTypes(std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_vec<android::hardware::graphics::mapper::V4_0::IMapper::MetadataTypeDescription> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper26listSupportedMetadataTypesENSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS5_8hidl_vecINS8_7IMapper23MetadataTypeDescriptionEEEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::getReservedRegion(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_yEEE(void) {
    ALOGD("_ZN3arm6mapper6common17getReservedRegionEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorES2_yEEE() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IMapper */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMapper(void) {
    ALOGD("HIDL_FETCH_IMapper() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::unlock(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump> >::__swap_out_circular_buffer(std::__1::__split_buffer<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump, std::__1::allocator<android::hardware::graphics::mapper::V4_0::IMapper::MetadataDump>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware8graphics6mapper4V4_07IMapper12MetadataDumpENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE() called");
    return 0;
}

/* Demangled: get_format_dataspace(unsigned int, unsigned long long, int, int, android_dataspace_t*, mali_gralloc_yuv_info*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_format_dataspacejyiiP19android_dataspace_tP21mali_gralloc_yuv_info(void) {
    ALOGD("_Z20get_format_dataspacejyiiP19android_dataspace_tP21mali_gralloc_yuv_info() called");
    return 0;
}

/* Exported Object: guard variable for ion_device::get_inst()::dev */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10ion_device8get_instEvE3dev = NULL;

/* Demangled: arm::mapper::common::importBuffer(android::hardware::hidl_handle const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, void*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE(void) {
    ALOGD("_ZN3arm6mapper6common12importBufferERKN7android8hardware11hidl_handleENSt3__18functionIFvNS3_8graphics6mapper4V4_05ErrorEPvEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::validateBufferSize(void*, android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj(void) {
    ALOGD("_ZN3arm6mapper6common18validateBufferSizeEPvRKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoEj() called");
    return 0;
}

/* Demangled: mali_gralloc_ion_sync_end(private_handle_t const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _Z25mali_gralloc_ion_sync_endPK16private_handle_tbb(void) {
    ALOGD("_Z25mali_gralloc_ion_sync_endPK16private_handle_tbb() called");
    return 0;
}

/* Demangled: gralloc_shared_memory_free(int, void*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z26gralloc_shared_memory_freeiPvy(void) {
    ALOGD("_Z26gralloc_shared_memory_freeiPvy() called");
    return 0;
}

/* Demangled: lcm(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z3lcmjj(void) {
    ALOGD("_Z3lcmjj() called");
    return 0;
}

/* Demangled: mali_gralloc_dump_buffers(android::String8&, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z25mali_gralloc_dump_buffersRN7android7String8EPj(void) {
    ALOGD("_Z25mali_gralloc_dump_buffersRN7android7String8EPj() called");
    return 0;
}

/* Demangled: arm::mapper::GrallocMapper::dumpBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper13GrallocMapper10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE(void) {
    ALOGD("_ZN3arm6mapper13GrallocMapper10dumpBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS9_7IMapper10BufferDumpEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::isSupported(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo const&, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE(void) {
    ALOGD("_ZN3arm6mapper6common11isSupportedERKN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoENSt3__18functionIFvNS6_5ErrorEbEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::flushLockedBuffer(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void) {
    ALOGD("_ZN3arm6mapper6common17flushLockedBufferEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE() called");
    return 0;
}

/* Demangled: arm::mapper::common::unlock(void*, std::__1::function<void (android::hardware::graphics::mapper::V4_0::Error, android::hardware::hidl_handle const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE(void) {
    ALOGD("_ZN3arm6mapper6common6unlockEPvNSt3__18functionIFvN7android8hardware8graphics6mapper4V4_05ErrorERKNS6_11hidl_handleEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<private_handle_t*, std::__1::allocator<private_handle_t*> >::__push_back_slow_path<private_handle_t* const&>(private_handle_t* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP16private_handle_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: arm::mapper::common::shared_metadata_size() */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common20shared_metadata_sizeEv(void) {
    ALOGD("_ZN3arm6mapper6common20shared_metadata_sizeEv() called");
    return 0;
}

/* Demangled: arm::mapper::common::set_crop_rect(private_handle_t const*, aidl::android::hardware::graphics::common::Rect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE(void) {
    ALOGD("_ZN3arm6mapper6common13set_crop_rectEPK16private_handle_tRKN4aidl7android8hardware8graphics6common4RectE() called");
    return 0;
}

/* Demangled: get_base_format(unsigned long long, unsigned long long, mali_gralloc_format_type, bool) */
extern "C" __attribute__((visibility("default"))) int _Z15get_base_formatyy24mali_gralloc_format_typeb(void) {
    ALOGD("_Z15get_base_formatyy24mali_gralloc_format_typeb() called");
    return 0;
}
