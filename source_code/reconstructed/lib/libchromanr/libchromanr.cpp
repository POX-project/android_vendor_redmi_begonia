/*
 * Reverse-Engineered Source for: libchromanr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libchromanr"

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
#include "libchromanr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: chromaNR::SwNrCore::~SwNrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCoreD0Ev(void) {
    ALOGD("_ZN8chromaNR8SwNrCoreD0Ev() called");
    return 0;
}

/* Demangled: chromaNR::IChromaNR::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR9IChromaNR14createInstanceEv(void) {
    ALOGD("_ZN8chromaNR9IChromaNR14createInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<chromaNR::SwNrCore, std::__1::allocator<chromaNR::SwNrCore> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEEE = NULL;

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

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEEE = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::sp(NSCam::v3::IImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::SwNrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCoreC2Ev(void) {
    ALOGD("_ZN8chromaNR8SwNrCoreC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::BufPlane>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::dumpParam(chromaNR::ChromaNRParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCore9dumpParamERKNS_13ChromaNRParamE(void) {
    ALOGD("_ZN8chromaNR8SwNrCore9dumpParamERKNS_13ChromaNRParamE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
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

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: chromaNR::SwNrCore::SwNrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCoreC1Ev(void) {
    ALOGD("_ZN8chromaNR8SwNrCoreC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::~SwNrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCoreD2Ev(void) {
    ALOGD("_ZN8chromaNR8SwNrCoreD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: chromaNR::BufferHolder::~BufferHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR12BufferHolderD2Ev(void) {
    ALOGD("_ZN8chromaNR12BufferHolderD2Ev() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::doChromaNR(chromaNR::ChromaNRParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCore10doChromaNRERKNS_13ChromaNRParamE(void) {
    ALOGD("_ZN8chromaNR8SwNrCore10doChromaNRERKNS_13ChromaNRParamE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Exported Object: vtable for chromaNR::SwNrCore */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8chromaNR8SwNrCoreE = NULL;

/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp(NSCam::IImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: chromaNR::BufferHolder::BufferHolder(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR12BufferHolderC2EPK13native_handle(void) {
    ALOGD("_ZN8chromaNR12BufferHolderC2EPK13native_handle() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::dumpBuffer(NSCam::IImageBuffer*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCore10dumpBufferEPN5NSCam12IImageBufferEPKc(void) {
    ALOGD("_ZN8chromaNR8SwNrCore10dumpBufferEPN5NSCam12IImageBufferEPKc() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::createImageBuffer(chromaNR::ChromaNRParam const&, chromaNR::BufferHolder&) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCore17createImageBufferERKNS_13ChromaNRParamERNS_12BufferHolderE(void) {
    ALOGD("_ZN8chromaNR8SwNrCore17createImageBufferERKNS_13ChromaNRParamERNS_12BufferHolderE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::createImageBufferHeap(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<NSCam::v3::IImageStreamInfo> const&, native_handle const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCore21createImageBufferHeapERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKN7android2spIN5NSCam2v316IImageStreamInfoEEEPK13native_handleii(void) {
    ALOGD("_ZN8chromaNR8SwNrCore21createImageBufferHeapERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKN7android2spIN5NSCam2v316IImageStreamInfoEEEPK13native_handleii() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::createImageStreamInfo(chromaNR::ChromaNRParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCore21createImageStreamInfoERKNS_13ChromaNRParamE(void) {
    ALOGD("_ZN8chromaNR8SwNrCore21createImageStreamInfoERKNS_13ChromaNRParamE() called");
    return 0;
}

/* Demangled: chromaNR::SwNrCore::~SwNrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR8SwNrCoreD1Ev(void) {
    ALOGD("_ZN8chromaNR8SwNrCoreD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<chromaNR::SwNrCore, std::__1::allocator<chromaNR::SwNrCore> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6resizeEj() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: chromaNR::BufferHolder::~BufferHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR12BufferHolderD1Ev(void) {
    ALOGD("_ZN8chromaNR12BufferHolderD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEj() called");
    return 0;
}

/* Demangled: chromaNR::BufferHolder::BufferHolder(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8chromaNR12BufferHolderC1EPK13native_handle(void) {
    ALOGD("_ZN8chromaNR12BufferHolderC1EPK13native_handle() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<chromaNR::SwNrCore, std::__1::allocator<chromaNR::SwNrCore> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}
