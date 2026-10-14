/*
 * Reverse-Engineered ABI Specification for: libchromanr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libchromanr.so
 */

#ifndef BEGONIA_RE_LIBCHROMANR_H
#define BEGONIA_RE_LIBCHROMANR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN8chromaNR8SwNrCoreD0Ev */
/* Demangled: chromaNR::SwNrCore::~SwNrCore() */
int _ZN8chromaNR8SwNrCoreD0Ev(void);

/* Symbol: _ZN8chromaNR9IChromaNR14createInstanceEv */
/* Demangled: chromaNR::IChromaNR::createInstance() */
int _ZN8chromaNR9IChromaNR14createInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<chromaNR::SwNrCore, std::__1::allocator<chromaNR::SwNrCore> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEEE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEEE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::operator=(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEaSEPS2_(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::sp(NSCam::v3::IImageStreamInfo*) */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_(void);

/* Symbol: _ZN8chromaNR8SwNrCoreC2Ev */
/* Demangled: chromaNR::SwNrCore::SwNrCore() */
int _ZN8chromaNR8SwNrCoreC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::BufPlane>&) */
int _ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN8chromaNR8SwNrCore9dumpParamERKNS_13ChromaNRParamE */
/* Demangled: chromaNR::SwNrCore::dumpParam(chromaNR::ChromaNRParam const&) */
int _ZN8chromaNR8SwNrCore9dumpParamERKNS_13ChromaNRParamE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE12do_constructEPvj(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN8chromaNR8SwNrCoreC1Ev */
/* Demangled: chromaNR::SwNrCore::SwNrCore() */
int _ZN8chromaNR8SwNrCoreC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE10do_destroyEPvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN8chromaNR8SwNrCoreD2Ev */
/* Demangled: chromaNR::SwNrCore::~SwNrCore() */
int _ZN8chromaNR8SwNrCoreD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZN8chromaNR12BufferHolderD2Ev */
/* Demangled: chromaNR::BufferHolder::~BufferHolder() */
int _ZN8chromaNR12BufferHolderD2Ev(void);

/* Symbol: _ZN8chromaNR8SwNrCore10doChromaNRERKNS_13ChromaNRParamE */
/* Demangled: chromaNR::SwNrCore::doChromaNR(chromaNR::ChromaNRParam const&) */
int _ZN8chromaNR8SwNrCore10doChromaNRERKNS_13ChromaNRParamE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZTVN8chromaNR8SwNrCoreE */
/* Demangled: vtable for chromaNR::SwNrCore */
extern void* _ZTVN8chromaNR8SwNrCoreE;

/* Symbol: _ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBufferHeap>::sp(NSCam::IImageBufferHeap*) */
int _ZN7android2spIN5NSCam16IImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZN8chromaNR12BufferHolderC2EPK13native_handle */
/* Demangled: chromaNR::BufferHolder::BufferHolder(native_handle const*) */
int _ZN8chromaNR12BufferHolderC2EPK13native_handle(void);

/* Symbol: _ZN8chromaNR8SwNrCore10dumpBufferEPN5NSCam12IImageBufferEPKc */
/* Demangled: chromaNR::SwNrCore::dumpBuffer(NSCam::IImageBuffer*, char const*) */
int _ZN8chromaNR8SwNrCore10dumpBufferEPN5NSCam12IImageBufferEPKc(void);

/* Symbol: _ZN8chromaNR8SwNrCore17createImageBufferERKNS_13ChromaNRParamERNS_12BufferHolderE */
/* Demangled: chromaNR::SwNrCore::createImageBuffer(chromaNR::ChromaNRParam const&, chromaNR::BufferHolder&) */
int _ZN8chromaNR8SwNrCore17createImageBufferERKNS_13ChromaNRParamERNS_12BufferHolderE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void);

/* Symbol: _ZN8chromaNR8SwNrCore21createImageBufferHeapERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKN7android2spIN5NSCam2v316IImageStreamInfoEEEPK13native_handleii */
/* Demangled: chromaNR::SwNrCore::createImageBufferHeap(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<NSCam::v3::IImageStreamInfo> const&, native_handle const*, int, int) */
int _ZN8chromaNR8SwNrCore21createImageBufferHeapERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKN7android2spIN5NSCam2v316IImageStreamInfoEEEPK13native_handleii(void);

/* Symbol: _ZN8chromaNR8SwNrCore21createImageStreamInfoERKNS_13ChromaNRParamE */
/* Demangled: chromaNR::SwNrCore::createImageStreamInfo(chromaNR::ChromaNRParam const&) */
int _ZN8chromaNR8SwNrCore21createImageStreamInfoERKNS_13ChromaNRParamE(void);

/* Symbol: _ZN8chromaNR8SwNrCoreD1Ev */
/* Demangled: chromaNR::SwNrCore::~SwNrCore() */
int _ZN8chromaNR8SwNrCoreD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<chromaNR::SwNrCore, std::__1::allocator<chromaNR::SwNrCore> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6resizeEj */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::resize(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6resizeEj(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN8chromaNR12BufferHolderD1Ev */
/* Demangled: chromaNR::BufferHolder::~BufferHolder() */
int _ZN8chromaNR12BufferHolderD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__append(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: _ZN8chromaNR12BufferHolderC1EPK13native_handle */
/* Demangled: chromaNR::BufferHolder::BufferHolder(native_handle const*) */
int _ZN8chromaNR12BufferHolderC1EPK13native_handle(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::IImageBuffer> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12IImageBufferEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<chromaNR::SwNrCore, std::__1::allocator<chromaNR::SwNrCore> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8chromaNR8SwNrCoreENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCHROMANR_H */
