/*
 * Reverse-Engineered ABI Specification for: libmtkcam_metadata.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_metadata.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_METADATA_H
#define BEGONIA_RE_LIBMTKCAM_METADATA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZN5NSCam15IMetadataTagSet9addTagMapEjj */
/* Demangled: NSCam::IMetadataTagSet::addTagMap(unsigned int, unsigned int) */
int _ZN5NSCam15IMetadataTagSet9addTagMapEjj(void);

/* Symbol: _ZNK7android17MetadataConverter7dumpAllERKN5NSCam9IMetadataEi */
/* Demangled: android::MetadataConverter::dumpAll(NSCam::IMetadata const&, int) const */
int _ZNK7android17MetadataConverter7dumpAllERKN5NSCam9IMetadataEi(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKS0_NS_9Type2TypeIS0_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::IMetadata const&, NSCam::Type2Type<NSCam::IMetadata>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKS0_NS_9Type2TypeIS0_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_destroyEPvj(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNK5NSCam9IMetadata12getStorageSPEv */
/* Demangled: NSCam::IMetadata::getStorageSP() const */
int _ZNK5NSCam9IMetadata12getStorageSPEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&) */
int _ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEEC2EjjS8_(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentC2EPKvjRi */
/* Demangled: NSCam::IMetadata::Content::Content(void const*, unsigned int, int&) */
int _ZN5NSCam9IMetadata7ContentC2EPKvjRi(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKiNS_9Type2TypeIiEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(int const&, NSCam::Type2Type<int>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKiNS_9Type2TypeIiEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6Memory4sizeEv */
/* Demangled: NSCam::IMetadata::Memory::size() const */
int _ZNK5NSCam9IMetadata6Memory4sizeEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN5NSCam9IMetadata5clearEv */
/* Demangled: NSCam::IMetadata::clear() */
int _ZN5NSCam9IMetadata5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam18IMetadataConverter14createInstanceERKNS_15IMetadataTagSetE */
/* Demangled: NSCam::IMetadataConverter::createInstance(NSCam::IMetadataTagSet const&) */
int _ZN5NSCam18IMetadataConverter14createInstanceERKNS_15IMetadataTagSetE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZNK7android17MetadataConverter7convertEPK15camera_metadataRN5NSCam9IMetadataE */
/* Demangled: android::MetadataConverter::convert(camera_metadata const*, NSCam::IMetadata&) const */
int _ZNK7android17MetadataConverter7convertEPK15camera_metadataRN5NSCam9IMetadataE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKxjNS_9Type2TypeIxEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, long long const*, unsigned int, NSCam::Type2Type<long long>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKxjNS_9Type2TypeIxEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SN_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SN_iEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKNS_6MPointENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MPoint const&, NSCam::Type2Type<NSCam::MPoint>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_6MPointENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadataC1ERKNSt3__110shared_ptrINS0_7StorageEEE */
/* Demangled: NSCam::IMetadata::IMetadata(std::__1::shared_ptr<NSCam::IMetadata::Storage> const&) */
int _ZN5NSCam9IMetadataC1ERKNSt3__110shared_ptrINS0_7StorageEEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_9MRationalEEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MRational>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_9MRationalEEE(void);

/* Symbol: _ZNK5NSCam9IMetadata7entryAtEj */
/* Demangled: NSCam::IMetadata::entryAt(unsigned int) const */
int _ZNK5NSCam9IMetadata7entryAtEj(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetC2ERKS0_ */
/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet(NSCam::IMetadataTagSet const&) */
int _ZN5NSCam15IMetadataTagSetC2ERKS0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MSizeEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MSize const*, unsigned int, NSCam::Type2Type<NSCam::MSize>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MSizeEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryC2ERKS1_ */
/* Demangled: NSCam::IMetadata::IEntry::IEntry(NSCam::IMetadata::IEntry const&) */
int _ZN5NSCam9IMetadata6IEntryC2ERKS1_(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPhjNS_9Type2TypeIhEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, unsigned char*, unsigned int, NSCam::Type2Type<unsigned char>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPhjNS_9Type2TypeIhEE(void);

/* Symbol: _ZN5NSCam9IMetadata9unflattenEPvj */
/* Demangled: NSCam::IMetadata::unflatten(void*, unsigned int) */
int _ZN5NSCam9IMetadata9unflattenEPvj(void);

/* Symbol: _ZN5NSCam9IMetadata7Content9unflattenEPKvj */
/* Demangled: NSCam::IMetadata::Content::unflatten(void const*, unsigned int) */
int _ZN5NSCam9IMetadata7Content9unflattenEPKvj(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentC1ERS1_ */
/* Demangled: NSCam::IMetadata::Content::Content(NSCam::IMetadata::Content&) */
int _ZN5NSCam9IMetadata7ContentC1ERS1_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_9MRationalENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRational const&, NSCam::Type2Type<NSCam::MRational>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_9MRationalENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKfjNS_9Type2TypeIfEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(float const*, unsigned int, NSCam::Type2Type<float>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKfjNS_9Type2TypeIfEE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryaSERKS1_ */
/* Demangled: NSCam::IMetadata::IEntry::operator=(NSCam::IMetadata::IEntry const&) */
int _ZN5NSCam9IMetadata6IEntryaSERKS1_(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry3tagEv */
/* Demangled: NSCam::IMetadata::IEntry::tag() const */
int _ZNK5NSCam9IMetadata6IEntry3tagEv(void);

/* Symbol: _ZN5NSCam9IMetadata7StorageC2Ev */
/* Demangled: NSCam::IMetadata::Storage::Storage() */
int _ZN5NSCam9IMetadata7StorageC2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE6resizeEj */
/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::resize(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE6resizeEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android17MetadataConverter18freeCameraMetadataEP15camera_metadata */
/* Demangled: android::MetadataConverter::freeCameraMetadata(camera_metadata*) const */
int _ZNK7android17MetadataConverter18freeCameraMetadataEP15camera_metadata(void);

/* Symbol: _ZNSt3__110shared_ptrIN7android6VectorIhEEE11make_sharedIJEEES4_DpOT_ */
/* Demangled: std::__1::shared_ptr<android::Vector<unsigned char> > std::__1::shared_ptr<android::Vector<unsigned char> >::make_shared<>() */
int _ZNSt3__110shared_ptrIN7android6VectorIhEEE11make_sharedIJEEES4_DpOT_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKxjNS_9Type2TypeIxEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(long long const*, unsigned int, NSCam::Type2Type<long long>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKxjNS_9Type2TypeIxEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Storage, std::__1::allocator<NSCam::IMetadata::Storage> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>&) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN24DefaultMetadataTagSetImpC2Ev */
/* Demangled: DefaultMetadataTagSetImp::DefaultMetadataTagSetImp() */
int _ZN24DefaultMetadataTagSetImpC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE6insertINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISD_E9referenceEEE5valueENS8_IPS3_EEE4typeESB_SD_SD_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE6insertINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISD_E9referenceEEE5valueENS8_IPS3_EEE4typeESB_SD_SD_ */
int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE6insertINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISD_E9referenceEEE5valueENS8_IPS3_EEE4typeESB_SD_SD_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS0_6MemoryENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::IMetadata::Memory const&, NSCam::Type2Type<NSCam::IMetadata::Memory>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS0_6MemoryENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata7StorageC1Ev */
/* Demangled: NSCam::IMetadata::Storage::Storage() */
int _ZN5NSCam9IMetadata7StorageC1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam18IMetadataConverterEEC2INS_17MetadataConverterEEEPT_ */
/* Demangled: android::sp<NSCam::IMetadataConverter>::sp<android::MetadataConverter>(android::MetadataConverter*) */
int _ZN7android2spIN5NSCam18IMetadataConverterEEC2INS_17MetadataConverterEEEPT_(void);

/* Symbol: _ZNK7android6VectorIhE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKijNS_9Type2TypeIiEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(int const*, unsigned int, NSCam::Type2Type<int>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKijNS_9Type2TypeIiEE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKxNS_9Type2TypeIxEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(long long const&, NSCam::Type2Type<long long>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKxNS_9Type2TypeIxEE(void);

/* Symbol: _ZN5NSCam15IMetadataTagSet11ImplementorC1ERKS1_ */
/* Demangled: NSCam::IMetadataTagSet::Implementor::Implementor(NSCam::IMetadataTagSet::Implementor const&) */
int _ZN5NSCam15IMetadataTagSet11ImplementorC1ERKS1_(void);

/* Symbol: _ZN5NSCam21getDumpFilenamePrefixEPciPKNS_9IMetadataES3_ */
/* Demangled: NSCam::getDumpFilenamePrefix(char*, int, NSCam::IMetadata const*, NSCam::IMetadata const*) */
int _ZN5NSCam21getDumpFilenamePrefixEPciPKNS_9IMetadataES3_(void);

/* Symbol: _ZNK5NSCam9IMetadata6Memory9getDataSPEv */
/* Demangled: NSCam::IMetadata::Memory::getDataSP() const */
int _ZNK5NSCam9IMetadata6Memory9getDataSPEv(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC2EOS1_ */
/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory&&) */
int _ZN5NSCam9IMetadata6MemoryC2EOS1_(void);

/* Symbol: _ZN5NSCam9IMetadata6updateEjRKNS0_6IEntryE */
/* Demangled: NSCam::IMetadata::update(unsigned int, NSCam::IMetadata::IEntry const&) */
int _ZN5NSCam9IMetadata6updateEjRKNS0_6IEntryE(void);

/* Symbol: _ZN24DefaultMetadataTagSetImpC1Ev */
/* Demangled: DefaultMetadataTagSetImp::DefaultMetadataTagSetImp() */
int _ZN24DefaultMetadataTagSetImpC1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK5NSCam9IMetadata7isEmptyEv */
/* Demangled: NSCam::IMetadata::isEmpty() const */
int _ZNK5NSCam9IMetadata7isEmptyEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZN5NSCam9IMetadataC2EPKvj */
/* Demangled: NSCam::IMetadata::IMetadata(void const*, unsigned int) */
int _ZN5NSCam9IMetadataC2EPKvj(void);

/* Symbol: _ZN5NSCam9IMetadataD2Ev */
/* Demangled: NSCam::IMetadata::~IMetadata() */
int _ZN5NSCam9IMetadataD2Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam9IMetadata7StorageEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IMetadata::Storage>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam9IMetadata7StorageEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android17MetadataConverterE */
/* Demangled: vtable for android::MetadataConverter */
extern void* _ZTVN7android17MetadataConverterE;

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_9MRationalEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRational const*, unsigned int, NSCam::Type2Type<NSCam::MRational>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_9MRationalEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6updateERKNS0_6IEntryE */
/* Demangled: NSCam::IMetadata::update(NSCam::IMetadata::IEntry const&) */
int _ZN5NSCam9IMetadata6updateERKNS0_6IEntryE(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::IMetadata::Storage::Item>&) */
int _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN5NSCam9IMetadataD1Ev */
/* Demangled: NSCam::IMetadata::~IMetadata() */
int _ZN5NSCam9IMetadataD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2ERKS8_ */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::vector(std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2ERKS8_(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIiEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<int>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIiEE(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory12appendVectorERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::appendVector(NSCam::IMetadata::Memory const&) */
int _ZN5NSCam9IMetadata6Memory12appendVectorERKS1_(void);

/* Symbol: _ZTV24DefaultMetadataTagSetImp */
/* Demangled: vtable for DefaultMetadataTagSetImp */
extern void* _ZTV24DefaultMetadataTagSetImp;

/* Symbol: _ZTV23VendorTagDescriptorImpl */
/* Demangled: vtable for VendorTagDescriptorImpl */
extern void* _ZTV23VendorTagDescriptorImpl;

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MSizeEEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MSize>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MSizeEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKfNS_9Type2TypeIfEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(float const&, NSCam::Type2Type<float>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKfNS_9Type2TypeIfEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6MemoryneERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::operator!=(NSCam::IMetadata::Memory const&) const */
int _ZNK5NSCam9IMetadata6MemoryneERKS1_(void);

/* Symbol: _ZN5NSCam9IMetadatapLERKS0_ */
/* Demangled: NSCam::IMetadata::operator+=(NSCam::IMetadata const&) */
int _ZN5NSCam9IMetadatapLERKS0_(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentC1EPKvjRi */
/* Demangled: NSCam::IMetadata::Content::Content(void const*, unsigned int, int&) */
int _ZN5NSCam9IMetadata7ContentC1EPKvjRi(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2ERKS8_ */
/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::vector(std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2ERKS8_(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIhEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<unsigned char>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIhEE(void);

/* Symbol: _ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_ */
/* Demangled: void std::__1::lock<std::__1::mutex, std::__1::mutex>(std::__1::mutex&, std::__1::mutex&) */
int _ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata::Storage, std::__1::allocator<NSCam::IMetadata::Storage> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EEPS4_ */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>&, NSCam::IMetadata::Storage::Item*) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EEPS4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void);

/* Symbol: _ZTVN5NSCam15IMetadataTagSet11ImplementorE */
/* Demangled: vtable for NSCam::IMetadataTagSet::Implementor */
extern void* _ZTVN5NSCam15IMetadataTagSet11ImplementorE;

/* Symbol: _ZN5NSCam9IMetadata7ContentD2Ev */
/* Demangled: NSCam::IMetadata::Content::~Content() */
int _ZN5NSCam9IMetadata7ContentD2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEE18__construct_at_endINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESE_SE_ */
/* Demangled: _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEE18__construct_at_endINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESE_SE_ */
int _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEE18__construct_at_endINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESE_SE_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKdjNS_9Type2TypeIdEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(double const*, unsigned int, NSCam::Type2Type<double>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKdjNS_9Type2TypeIdEE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKS0_NS_9Type2TypeIS0_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::IMetadata const&, NSCam::Type2Type<NSCam::IMetadata>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKS0_NS_9Type2TypeIS0_EE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Content, std::__1::allocator<NSCam::IMetadata::Content> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentD1Ev */
/* Demangled: NSCam::IMetadata::Content::~Content() */
int _ZN5NSCam9IMetadata7ContentD1Ev(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryC1EjNSt3__110shared_ptrINS0_7ContentEEE */
/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int, std::__1::shared_ptr<NSCam::IMetadata::Content>) */
int _ZN5NSCam9IMetadata6IEntryC1EjNSt3__110shared_ptrINS0_7ContentEEE(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory5clearEv */
/* Demangled: NSCam::IMetadata::Memory::clear() */
int _ZN5NSCam9IMetadata6Memory5clearEv(void);

/* Symbol: _ZN5NSCam9IMetadata7Storage8mStatNumE */
/* Demangled: NSCam::IMetadata::Storage::mStatNum */
extern void* _ZN5NSCam9IMetadata7Storage8mStatNumE;

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__append(unsigned int) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEEE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam9IMetadata7Content6updateEiPKvji */
/* Demangled: NSCam::IMetadata::Content::update(int, void const*, unsigned int, int) */
int _ZN5NSCam9IMetadata7Content6updateEiPKvji(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIfEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<float>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIfEE(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC2ERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory const&) */
int _ZN5NSCam9IMetadata6MemoryC2ERKS1_(void);

/* Symbol: _ZN5NSCam9IMetadataC2ERKS0_ */
/* Demangled: NSCam::IMetadata::IMetadata(NSCam::IMetadata const&) */
int _ZN5NSCam9IMetadataC2ERKS0_(void);

/* Symbol: _ZNK5NSCam9IMetadata7flattenEPvjPKji */
/* Demangled: NSCam::IMetadata::flatten(void*, unsigned int, unsigned int const*, int) const */
int _ZNK5NSCam9IMetadata7flattenEPvjPKji(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__detach(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2Ej */
/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::vector(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2Ej(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry5clearEv */
/* Demangled: NSCam::IMetadata::IEntry::clear() */
int _ZN5NSCam9IMetadata6IEntry5clearEv(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MSizeEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MSize const*, unsigned int, NSCam::Type2Type<NSCam::MSize>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MSizeEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC1EOS1_ */
/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory&&) */
int _ZN5NSCam9IMetadata6MemoryC1EOS1_(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryaSERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::operator=(NSCam::IMetadata::Memory const&) */
int _ZN5NSCam9IMetadata6MemoryaSERKS1_(void);

/* Symbol: _ZN5NSCam9IMetadataaSERKS0_ */
/* Demangled: NSCam::IMetadata::operator=(NSCam::IMetadata const&) */
int _ZN5NSCam9IMetadataaSERKS0_(void);

/* Symbol: _ZN5NSCam9IMetadataplERKS0_ */
/* Demangled: NSCam::IMetadata::operator+(NSCam::IMetadata const&) */
int _ZN5NSCam9IMetadataplERKS0_(void);

/* Symbol: _ZNK7android6VectorIhE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetaSERKS0_ */
/* Demangled: NSCam::IMetadataTagSet::operator=(NSCam::IMetadataTagSet const&) */
int _ZN5NSCam15IMetadataTagSetaSERKS0_(void);

/* Symbol: _ZN5NSCam9IMetadataC1EPKvj */
/* Demangled: NSCam::IMetadata::IMetadata(void const*, unsigned int) */
int _ZN5NSCam9IMetadataC1EPKvj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MRectENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRect const&, NSCam::Type2Type<NSCam::MRect>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MRectENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_6MPointEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MPoint const*, unsigned int, NSCam::Type2Type<NSCam::MPoint>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_6MPointEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE12__move_rangeEPS3_S7_S7_ */
/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::__move_range(NSCam::IVendorTagDescriptor::VendorTagSection*, NSCam::IVendorTagDescriptor::VendorTagSection*, NSCam::IVendorTagDescriptor::VendorTagSection*) */
int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE12__move_rangeEPS3_S7_S7_(void);

/* Symbol: _ZTV7TagInfo */
/* Demangled: vtable for TagInfo */
extern void* _ZTV7TagInfo;

/* Symbol: _ZN5NSCam9IMetadata7Content6removeEi */
/* Demangled: NSCam::IMetadata::Content::remove(int) */
int _ZN5NSCam9IMetadata7Content6removeEi(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE11__vallocateEj(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::Vector<unsigned char>, std::__1::allocator<android::Vector<unsigned char> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEEE;

/* Symbol: _ZNK5NSCam9IMetadata7Content11getMetadataEii */
/* Demangled: NSCam::IMetadata::Content::getMetadata(int, int) const */
int _ZNK5NSCam9IMetadata7Content11getMetadataEii(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKdNS_9Type2TypeIdEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, double const&, NSCam::Type2Type<double>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKdNS_9Type2TypeIdEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry4typeEv */
/* Demangled: NSCam::IMetadata::IEntry::type() const */
int _ZNK5NSCam9IMetadata6IEntry4typeEv(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIdEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<double>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIdEE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6insertENS_11__wrap_iterIPKS4_EEOS4_ */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::insert(std::__1::__wrap_iter<NSCam::IMetadata::Storage::Item const*>, NSCam::IMetadata::Storage::Item&&) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6insertENS_11__wrap_iterIPKS4_EEOS4_(void);

/* Symbol: _ZNK5NSCam9IMetadata7Content9getMemoryEii */
/* Demangled: NSCam::IMetadata::Content::getMemory(int, int) const */
int _ZNK5NSCam9IMetadata7Content9getMemoryEii(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryC1ERKS1_ */
/* Demangled: NSCam::IMetadata::IEntry::IEntry(NSCam::IMetadata::IEntry const&) */
int _ZN5NSCam9IMetadata6IEntryC1ERKS1_(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MRectEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MRect*, unsigned int, NSCam::Type2Type<NSCam::MRect>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MRectEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory6resizeEj */
/* Demangled: NSCam::IMetadata::Memory::resize(unsigned int) */
int _ZN5NSCam9IMetadata6Memory6resizeEj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE13__vdeallocateEv */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__vdeallocate() */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE13__vdeallocateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKhNS_9Type2TypeIhEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, unsigned char const&, NSCam::Type2Type<unsigned char>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKhNS_9Type2TypeIhEE(void);

/* Symbol: _ZNK7android6VectorIhE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIhE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKNS0_6MemoryENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::IMetadata::Memory const&, NSCam::Type2Type<NSCam::IMetadata::Memory>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKNS0_6MemoryENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKdNS_9Type2TypeIdEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(double const&, NSCam::Type2Type<double>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKdNS_9Type2TypeIdEE(void);

/* Symbol: _ZN5NSCam9IMetadata4dumpEi */
/* Demangled: NSCam::IMetadata::dump(int) */
int _ZN5NSCam9IMetadata4dumpEi(void);

/* Symbol: _ZN5NSCam9IMetadataC2Ev */
/* Demangled: NSCam::IMetadata::IMetadata() */
int _ZN5NSCam9IMetadataC2Ev(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MSizeENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MSize const&, NSCam::Type2Type<NSCam::MSize>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MSizeENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry5countEv */
/* Demangled: NSCam::IMetadata::IEntry::count() const */
int _ZNK5NSCam9IMetadata6IEntry5countEv(void);

/* Symbol: _ZNK5NSCam9IMetadata6Memory6itemAtEj */
/* Demangled: NSCam::IMetadata::Memory::itemAt(unsigned int) const */
int _ZNK5NSCam9IMetadata6Memory6itemAtEj(void);

/* Symbol: _ZNK7android17MetadataConverter21getCameraMetadataSizeEPK15camera_metadata */
/* Demangled: android::MetadataConverter::getCameraMetadataSize(camera_metadata const*) const */
int _ZNK7android17MetadataConverter21getCameraMetadataSizeEPK15camera_metadata(void);

/* Symbol: _ZN5NSCam9IMetadata7Content8mStatNumE */
/* Demangled: NSCam::IMetadata::Content::mStatNum */
extern void* _ZN5NSCam9IMetadata7Content8mStatNumE;

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&>&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata5countEv */
/* Demangled: NSCam::IMetadata::count() const */
int _ZNK5NSCam9IMetadata5countEv(void);

/* Symbol: _ZNK5NSCam15IMetadataTagSet9getMtkTagEj */
/* Demangled: NSCam::IMetadataTagSet::getMtkTag(unsigned int) const */
int _ZNK5NSCam15IMetadataTagSet9getMtkTagEj(void);

/* Symbol: _ZN7android17MetadataConverterC2ERKN5NSCam15IMetadataTagSetE */
/* Demangled: android::MetadataConverter::MetadataConverter(NSCam::IMetadataTagSet const&) */
int _ZN7android17MetadataConverterC2ERKN5NSCam15IMetadataTagSetE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::Vector<unsigned char>, std::__1::allocator<android::Vector<unsigned char> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam9IMetadataC1Ev */
/* Demangled: NSCam::IMetadata::IMetadata() */
int _ZN5NSCam9IMetadataC1Ev(void);

/* Symbol: _ZN5NSCam9IMetadataC2ERKNSt3__110shared_ptrINS0_7StorageEEE */
/* Demangled: NSCam::IMetadata::IMetadata(std::__1::shared_ptr<NSCam::IMetadata::Storage> const&) */
int _ZN5NSCam9IMetadataC2ERKNSt3__110shared_ptrINS0_7StorageEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__move_assign(std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory9editArrayERj */
/* Demangled: NSCam::IMetadata::Memory::editArray(unsigned int&) */
int _ZN5NSCam9IMetadata6Memory9editArrayERj(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2Ej */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::vector(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2Ej(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEEE;

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_6MPointEEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MPoint>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_6MPointEEE(void);

/* Symbol: _ZN5NSCam15IMetadataTagSet11ImplementorC2ERKS1_ */
/* Demangled: NSCam::IMetadataTagSet::Implementor::Implementor(NSCam::IMetadataTagSet::Implementor const&) */
int _ZN5NSCam15IMetadataTagSet11ImplementorC2ERKS1_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE6resizeEj */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::resize(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE6resizeEj(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC2EPKvj */
/* Demangled: NSCam::IMetadata::Memory::Memory(void const*, unsigned int) */
int _ZN5NSCam9IMetadata6MemoryC2EPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE12__move_rangeEPS4_S8_S8_ */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__move_range(NSCam::IMetadata::Storage::Item*, NSCam::IMetadata::Storage::Item*, NSCam::IMetadata::Storage::Item*) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE12__move_rangeEPS4_S8_S8_(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetD2Ev */
/* Demangled: NSCam::IMetadataTagSet::~IMetadataTagSet() */
int _ZN5NSCam15IMetadataTagSetD2Ev(void);

/* Symbol: _ZNK5NSCam15IMetadataTagSet13getAndroidTagEj */
/* Demangled: NSCam::IMetadataTagSet::getAndroidTag(unsigned int) const */
int _ZNK5NSCam15IMetadataTagSet13getAndroidTagEj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZNK5NSCam9IMetadata7Content12getBasicDataEii */
/* Demangled: NSCam::IMetadata::Content::getBasicData(int, int) const */
int _ZNK5NSCam9IMetadata7Content12getBasicDataEii(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKhjNS_9Type2TypeIhEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, unsigned char const*, unsigned int, NSCam::Type2Type<unsigned char>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKhjNS_9Type2TypeIhEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Content, std::__1::allocator<NSCam::IMetadata::Content> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam9IMetadata4sortEv */
/* Demangled: NSCam::IMetadata::sort() */
int _ZN5NSCam9IMetadata4sortEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>::push_back(NSCam::IMetadata::Storage::Item&&) */
int _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN7android17MetadataConverterC1ERKN5NSCam15IMetadataTagSetE */
/* Demangled: android::MetadataConverter::MetadataConverter(NSCam::IMetadataTagSet const&) */
int _ZN7android17MetadataConverterC1ERKN5NSCam15IMetadataTagSetE(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentC2Ev */
/* Demangled: NSCam::IMetadata::Content::Content() */
int _ZN5NSCam9IMetadata7ContentC2Ev(void);

/* Symbol: _ZTVN7android6VectorIhEE */
/* Demangled: vtable for android::Vector<unsigned char> */
extern void* _ZTVN7android6VectorIhEE;

/* Symbol: _ZZNK5NSCam9IMetadata7Content9_typeSizeEvE9sizeTable */
/* Demangled: NSCam::IMetadata::Content::_typeSize() const::sizeTable */
extern void* _ZZNK5NSCam9IMetadata7Content9_typeSizeEvE9sizeTable;

/* Symbol: _ZN5NSCam9IMetadata6IEntryC2EjNSt3__110shared_ptrINS0_7ContentEEE */
/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int, std::__1::shared_ptr<NSCam::IMetadata::Content>) */
int _ZN5NSCam9IMetadata6IEntryC2EjNSt3__110shared_ptrINS0_7ContentEEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPfjNS_9Type2TypeIfEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, float*, unsigned int, NSCam::Type2Type<float>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPfjNS_9Type2TypeIfEE(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetD1Ev */
/* Demangled: NSCam::IMetadataTagSet::~IMetadataTagSet() */
int _ZN5NSCam15IMetadataTagSetD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrINS_6vectorINS0_IN7android6VectorIhEEEENS_9allocatorIS5_EEEEED2Ev */
/* Demangled: std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > >::~shared_ptr() */
int _ZNSt3__110shared_ptrINS_6vectorINS0_IN7android6VectorIhEEEENS_9allocatorIS5_EEEEED2Ev(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory9editArrayEv */
/* Demangled: NSCam::IMetadata::Memory::editArray() */
int _ZN5NSCam9IMetadata6Memory9editArrayEv(void);

/* Symbol: _ZNK5NSCam9IMetadata8entryForEji */
/* Demangled: NSCam::IMetadata::entryFor(unsigned int, int) const */
int _ZNK5NSCam9IMetadata8entryForEji(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentC1Ev */
/* Demangled: NSCam::IMetadata::Content::Content() */
int _ZN5NSCam9IMetadata7ContentC1Ev(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPxjNS_9Type2TypeIxEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, long long*, unsigned int, NSCam::Type2Type<long long>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPxjNS_9Type2TypeIxEE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKhjNS_9Type2TypeIhEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(unsigned char const*, unsigned int, NSCam::Type2Type<unsigned char>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKhjNS_9Type2TypeIhEE(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetD0Ev */
/* Demangled: NSCam::IMetadataTagSet::~IMetadataTagSet() */
int _ZN5NSCam15IMetadataTagSetD0Ev(void);

/* Symbol: _ZNK7android17MetadataConverter4dumpERKN5NSCam9IMetadataEi */
/* Demangled: android::MetadataConverter::dump(NSCam::IMetadata const&, int) const */
int _ZNK7android17MetadataConverter4dumpERKN5NSCam9IMetadataEi(void);

/* Symbol: _ZTTN7android17MetadataConverterE */
/* Demangled: VTT for android::MetadataConverter */
extern void* _ZTTN7android17MetadataConverterE;

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPijNS_9Type2TypeIiEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, int*, unsigned int, NSCam::Type2Type<int>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPijNS_9Type2TypeIiEE(void);

/* Symbol: _ZNK7android17MetadataConverter5printERKN5NSCam9IMetadataEjjRKNS_7String8E */
/* Demangled: android::MetadataConverter::print(NSCam::IMetadata const&, unsigned int, unsigned int, android::String8 const&) const */
int _ZNK7android17MetadataConverter5printERKN5NSCam9IMetadataEjjRKNS_7String8E(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&) */
int _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MRectEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRect const*, unsigned int, NSCam::Type2Type<NSCam::MRect>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MRectEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MSizeENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MSize const&, NSCam::Type2Type<NSCam::MSize>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MSizeENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryD2Ev */
/* Demangled: NSCam::IMetadata::Memory::~Memory() */
int _ZN5NSCam9IMetadata6MemoryD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6resizeEj */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::resize(unsigned int) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6resizeEj(void);

/* Symbol: _ZNK5NSCam15IMetadataTagSet7getTypeEj */
/* Demangled: NSCam::IMetadataTagSet::getType(unsigned int) const */
int _ZNK5NSCam15IMetadataTagSet7getTypeEj(void);

/* Symbol: _ZN7android17MetadataConverter15convertFromHidlEPKvRN5NSCam9IMetadataE */
/* Demangled: android::MetadataConverter::convertFromHidl(void const*, NSCam::IMetadata&) */
int _ZN7android17MetadataConverter15convertFromHidlEPKvRN5NSCam9IMetadataE(void);

/* Symbol: _ZNK5NSCam9IMetadata7Storage7flattenEPvjPKji */
/* Demangled: NSCam::IMetadata::Storage::flatten(void*, unsigned int, unsigned int const*, int) const */
int _ZNK5NSCam9IMetadata7Storage7flattenEPvjPKji(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIxEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<long long>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIxEE(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC2ERKNSt3__110shared_ptrIN7android6VectorIhEEEE */
/* Demangled: NSCam::IMetadata::Memory::Memory(std::__1::shared_ptr<android::Vector<unsigned char> > const&) */
int _ZN5NSCam9IMetadata6MemoryC2ERKNSt3__110shared_ptrIN7android6VectorIhEEEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6Memory5arrayERj */
/* Demangled: NSCam::IMetadata::Memory::array(unsigned int&) const */
int _ZNK5NSCam9IMetadata6Memory5arrayERj(void);

/* Symbol: _ZNK7android6VectorIhE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE8do_splatEPvPKvj(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MRectEEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MRect>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MRectEEE(void);

/* Symbol: _ZN5NSCam9IMetadata12takeEntryForEj */
/* Demangled: NSCam::IMetadata::takeEntryFor(unsigned int) */
int _ZN5NSCam9IMetadata12takeEntryForEj(void);

/* Symbol: _ZN5NSCam15IMetadataTagSet6addTagEjPKci */
/* Demangled: NSCam::IMetadataTagSet::addTag(unsigned int, char const*, int) */
int _ZN5NSCam15IMetadataTagSet6addTagEjPKci(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN5NSCam15IMetadataTagSetE */
/* Demangled: vtable for NSCam::IMetadataTagSet */
extern void* _ZTVN5NSCam15IMetadataTagSetE;

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS0_6MemoryEEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::IMetadata::Memory>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS0_6MemoryEEE(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryD1Ev */
/* Demangled: NSCam::IMetadata::Memory::~Memory() */
int _ZN5NSCam9IMetadata6MemoryD1Ev(void);

/* Symbol: _ZNK5NSCam9IMetadata11flattenSizeEPKji */
/* Demangled: NSCam::IMetadata::flattenSize(unsigned int const*, int) const */
int _ZNK5NSCam9IMetadata11flattenSizeEPKji(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Storage, std::__1::allocator<NSCam::IMetadata::Storage> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN5NSCam9IMetadata7Content11flattenSizeEv */
/* Demangled: NSCam::IMetadata::Content::flattenSize() */
int _ZN5NSCam9IMetadata7Content11flattenSizeEv(void);

/* Symbol: _ZN5NSCam9IMetadata7Content7flattenEPvj */
/* Demangled: NSCam::IMetadata::Content::flatten(void*, unsigned int) */
int _ZN5NSCam9IMetadata7Content7flattenEPvj(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC1ERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory const&) */
int _ZN5NSCam9IMetadata6MemoryC1ERKS1_(void);

/* Symbol: _ZN5NSCam9IMetadataC1ERKS0_ */
/* Demangled: NSCam::IMetadata::IMetadata(NSCam::IMetadata const&) */
int _ZN5NSCam9IMetadataC1ERKS0_(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE */
/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&>&) */
int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKiNS_9Type2TypeIiEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, int const&, NSCam::Type2Type<int>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKiNS_9Type2TypeIiEE(void);

/* Symbol: _ZN5NSCam9IMetadata6removeEj */
/* Demangled: NSCam::IMetadata::remove(unsigned int) */
int _ZN5NSCam9IMetadata6removeEj(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetC1ERKS0_ */
/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet(NSCam::IMetadataTagSet const&) */
int _ZN5NSCam15IMetadataTagSetC1ERKS0_(void);

/* Symbol: _ZNK24DefaultMetadataTagSetImp9getTagSetEv */
/* Demangled: DefaultMetadataTagSetImp::getTagSet() const */
int _ZNK24DefaultMetadataTagSetImp9getTagSetEv(void);

/* Symbol: _ZN5NSCam9IMetadata7Storage9mStatSizeE */
/* Demangled: NSCam::IMetadata::Storage::mStatSize */
extern void* _ZN5NSCam9IMetadata7Storage9mStatSizeE;

/* Symbol: _ZN5NSCam9IMetadata7Content5clearEv */
/* Demangled: NSCam::IMetadata::Content::clear() */
int _ZN5NSCam9IMetadata7Content5clearEv(void);

/* Symbol: _ZNK7android6VectorIhE12do_constructEPvj */
/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIhE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKNS_9MRationalENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRational const&, NSCam::Type2Type<NSCam::MRational>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_9MRationalENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC1EPKvj */
/* Demangled: NSCam::IMetadata::Memory::Memory(void const*, unsigned int) */
int _ZN5NSCam9IMetadata6MemoryC1EPKvj(void);

/* Symbol: _ZN5NSCam22IDefaultMetadataTagSet9singletonEv */
/* Demangled: NSCam::IDefaultMetadataTagSet::singleton() */
int _ZN5NSCam22IDefaultMetadataTagSet9singletonEv(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKfjNS_9Type2TypeIfEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, float const*, unsigned int, NSCam::Type2Type<float>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKfjNS_9Type2TypeIfEE(void);

/* Symbol: _ZN7android2spI7TagInfoEC2EPS1_ */
/* Demangled: android::sp<TagInfo>::sp(TagInfo*) */
int _ZN7android2spI7TagInfoEC2EPS1_(void);

/* Symbol: _ZN7android17MetadataConverter13convertToHidlERKN5NSCam9IMetadataEPv */
/* Demangled: android::MetadataConverter::convertToHidl(NSCam::IMetadata const&, void*) */
int _ZN7android17MetadataConverter13convertToHidlERKN5NSCam9IMetadataEPv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_ */
/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::vector(std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> > const&) */
int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_(void);

/* Symbol: _ZN5NSCam9IMetadata7Content9mStatSizeE */
/* Demangled: NSCam::IMetadata::Content::mStatSize */
extern void* _ZN5NSCam9IMetadata7Content9mStatSizeE;

/* Symbol: _ZNK7android6VectorIhE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_9MRationalEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRational const*, unsigned int, NSCam::Type2Type<NSCam::MRational>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_9MRationalEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKhNS_9Type2TypeIhEE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(unsigned char const&, NSCam::Type2Type<unsigned char>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKhNS_9Type2TypeIhEE(void);

/* Symbol: _ZNK5NSCam9IMetadata7Storage11flattenSizeEPKji */
/* Demangled: NSCam::IMetadata::Storage::flattenSize(unsigned int const*, int) const */
int _ZNK5NSCam9IMetadata7Storage11flattenSizeEPKji(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_6MPointEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MPoint const*, unsigned int, NSCam::Type2Type<NSCam::MPoint>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_6MPointEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPdjNS_9Type2TypeIdEE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, double*, unsigned int, NSCam::Type2Type<double>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPdjNS_9Type2TypeIdEE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry7isEmptyEv */
/* Demangled: NSCam::IMetadata::IEntry::isEmpty() const */
int _ZNK5NSCam9IMetadata6IEntry7isEmptyEv(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory12appendVectorERKN7android6VectorIhEE */
/* Demangled: NSCam::IMetadata::Memory::appendVector(android::Vector<unsigned char> const&) */
int _ZN5NSCam9IMetadata6Memory12appendVectorERKN7android6VectorIhEE(void);

/* Symbol: _ZTCN7android17MetadataConverterE0_N5NSCam18IMetadataConverterE */
/* Demangled: construction vtable for NSCam::IMetadataConverter-in-android::MetadataConverter */
extern void* _ZTCN7android17MetadataConverterE0_N5NSCam18IMetadataConverterE;

/* Symbol: _ZN5NSCam22getVendorTagDescriptorEv */
/* Demangled: NSCam::getVendorTagDescriptor() */
int _ZN5NSCam22getVendorTagDescriptorEv(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryD2Ev */
/* Demangled: NSCam::IMetadata::IEntry::~IEntry() */
int _ZN5NSCam9IMetadata6IEntryD2Ev(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZNSt3__110shared_ptrIN7android6VectorIhEEED2Ev */
/* Demangled: std::__1::shared_ptr<android::Vector<unsigned char> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN7android6VectorIhEEED2Ev(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKijNS_9Type2TypeIiEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, int const*, unsigned int, NSCam::Type2Type<int>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKijNS_9Type2TypeIiEE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_6MPointENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MPoint const&, NSCam::Type2Type<NSCam::MPoint>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_6MPointENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry4dataEv */
/* Demangled: NSCam::IMetadata::IEntry::data() const */
int _ZNK5NSCam9IMetadata6IEntry4dataEv(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIS0_EE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::IMetadata>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIS0_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_6MPointEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MPoint*, unsigned int, NSCam::Type2Type<NSCam::MPoint>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_6MPointEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata6Memory5arrayEv */
/* Demangled: NSCam::IMetadata::Memory::array() const */
int _ZNK5NSCam9IMetadata6Memory5arrayEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetC2Ev */
/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet() */
int _ZN5NSCam15IMetadataTagSetC2Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE8__appendEj(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC1ERKNSt3__110shared_ptrIN7android6VectorIhEEEE */
/* Demangled: NSCam::IMetadata::Memory::Memory(std::__1::shared_ptr<android::Vector<unsigned char> > const&) */
int _ZN5NSCam9IMetadata6MemoryC1ERKNSt3__110shared_ptrIN7android6VectorIhEEEE(void);

/* Symbol: _ZN5NSCam15IMetadataTagSet11ImplementoraSERKS1_ */
/* Demangled: NSCam::IMetadataTagSet::Implementor::operator=(NSCam::IMetadataTagSet::Implementor const&) */
int _ZN5NSCam15IMetadataTagSet11ImplementoraSERKS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android17MetadataConverter7convertERKN5NSCam9IMetadataERP15camera_metadataPj */
/* Demangled: android::MetadataConverter::convert(NSCam::IMetadata const&, camera_metadata*&, unsigned int*) const */
int _ZNK7android17MetadataConverter7convertERKN5NSCam9IMetadataERP15camera_metadataPj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EEPS3_ */
/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&>&, NSCam::IVendorTagDescriptor::VendorTagSection*) */
int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EEPS3_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKxNS_9Type2TypeIxEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, long long const&, NSCam::Type2Type<long long>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKxNS_9Type2TypeIxEE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MRectENS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRect const&, NSCam::Type2Type<NSCam::MRect>) */
int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MRectENS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryD1Ev */
/* Demangled: NSCam::IMetadata::IEntry::~IEntry() */
int _ZN5NSCam9IMetadata6IEntryD1Ev(void);

/* Symbol: _ZN5NSCam9IMetadata7StorageD2Ev */
/* Demangled: NSCam::IMetadata::Storage::~Storage() */
int _ZN5NSCam9IMetadata7StorageD2Ev(void);

/* Symbol: _ZNK5NSCam15IMetadataTagSet7getNameEj */
/* Demangled: NSCam::IMetadataTagSet::getName(unsigned int) const */
int _ZNK5NSCam15IMetadataTagSet7getNameEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__emplace_multi<std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&>(std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_9MRationalEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MRational*, unsigned int, NSCam::Type2Type<NSCam::MRational>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_9MRationalEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam15IMetadataTagSetC1Ev */
/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet() */
int _ZN5NSCam15IMetadataTagSetC1Ev(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZNSt3__110shared_ptrINS_6vectorINS0_IN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEEED2Ev */
/* Demangled: std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > >::~shared_ptr() */
int _ZNSt3__110shared_ptrINS_6vectorINS0_IN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEEED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE8__appendEj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry8removeAtEj */
/* Demangled: NSCam::IMetadata::IEntry::removeAt(unsigned int) */
int _ZN5NSCam9IMetadata6IEntry8removeAtEj(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata::Content, std::__1::allocator<NSCam::IMetadata::Content> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::Vector<unsigned char>, std::__1::allocator<android::Vector<unsigned char> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam9IMetadata7StorageD1Ev */
/* Demangled: NSCam::IMetadata::Storage::~Storage() */
int _ZN5NSCam9IMetadata7StorageD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE11__vallocateEj(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MSizeEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MSize*, unsigned int, NSCam::Type2Type<NSCam::MSize>) const */
int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MSizeEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZNK5NSCam9IMetadata6MemoryeqERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::operator==(NSCam::IMetadata::Memory const&) const */
int _ZNK5NSCam9IMetadata6MemoryeqERKS1_(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZNK5NSCam9IMetadata6IEntry12getContentSPEv */
/* Demangled: NSCam::IMetadata::IEntry::getContentSP() const */
int _ZNK5NSCam9IMetadata6IEntry12getContentSPEv(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryaSEOS1_ */
/* Demangled: NSCam::IMetadata::Memory::operator=(NSCam::IMetadata::Memory&&) */
int _ZN5NSCam9IMetadata6MemoryaSEOS1_(void);

/* Symbol: _ZN5NSCam9IMetadata7ContentC2ERS1_ */
/* Demangled: NSCam::IMetadata::Content::Content(NSCam::IMetadata::Content&) */
int _ZN5NSCam9IMetadata7ContentC2ERS1_(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MRectEjNS_9Type2TypeIS2_EE */
/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRect const*, unsigned int, NSCam::Type2Type<NSCam::MRect>) */
int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MRectEjNS_9Type2TypeIS2_EE(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryC2Ej */
/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int) */
int _ZN5NSCam9IMetadata6IEntryC2Ej(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC2Ev */
/* Demangled: NSCam::IMetadata::Memory::Memory() */
int _ZN5NSCam9IMetadata6MemoryC2Ev(void);

/* Symbol: _ZN7android2spI7TagInfoEaSERKS2_ */
/* Demangled: android::sp<TagInfo>::operator=(android::sp<TagInfo> const&) */
int _ZN7android2spI7TagInfoEaSERKS2_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKfNS_9Type2TypeIfEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, float const&, NSCam::Type2Type<float>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKfNS_9Type2TypeIfEE(void);

/* Symbol: _ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&) */
int _ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEEC2EjjS8_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntryC1Ej */
/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int) */
int _ZN5NSCam9IMetadata6IEntryC1Ej(void);

/* Symbol: _ZN5NSCam9IMetadata6MemoryC1Ev */
/* Demangled: NSCam::IMetadata::Memory::Memory() */
int _ZN5NSCam9IMetadata6MemoryC1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam9IMetadata7ContentEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IMetadata::Content>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam9IMetadata7ContentEED2Ev(void);

/* Symbol: _ZN5NSCam9IMetadata6Memory6appendERKS1_ */
/* Demangled: NSCam::IMetadata::Memory::append(NSCam::IMetadata::Memory const&) */
int _ZN5NSCam9IMetadata6Memory6appendERKS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKdjNS_9Type2TypeIdEE */
/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, double const*, unsigned int, NSCam::Type2Type<double>) */
int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKdjNS_9Type2TypeIdEE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_METADATA_H */
