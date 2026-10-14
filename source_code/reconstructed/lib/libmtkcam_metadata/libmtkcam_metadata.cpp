/*
 * Reverse-Engineered Source for: libmtkcam_metadata.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_metadata"

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
#include "libmtkcam_metadata.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::addTagMap(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSet9addTagMapEjj(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSet9addTagMapEjj() called");
    return 0;
}

/* Demangled: android::MetadataConverter::dumpAll(NSCam::IMetadata const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter7dumpAllERKN5NSCam9IMetadataEi(void) {
    ALOGD("_ZNK7android17MetadataConverter7dumpAllERKN5NSCam9IMetadataEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::IMetadata const&, NSCam::Type2Type<NSCam::IMetadata>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKS0_NS_9Type2TypeIS0_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKS0_NS_9Type2TypeIS0_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::getStorageSP() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata12getStorageSPEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata12getStorageSPEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_10shared_ptrIN7android6VectorIhEEEERNS_9allocatorIS5_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::Content(void const*, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentC2EPKvjRi(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentC2EPKvjRi() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(int const&, NSCam::Type2Type<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKiNS_9Type2TypeIiEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKiNS_9Type2TypeIiEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6Memory4sizeEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6Memory4sizeEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata5clearEv(void) {
    ALOGD("_ZN5NSCam9IMetadata5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadataConverter::createInstance(NSCam::IMetadataTagSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18IMetadataConverter14createInstanceERKNS_15IMetadataTagSetE(void) {
    ALOGD("_ZN5NSCam18IMetadataConverter14createInstanceERKNS_15IMetadataTagSetE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android::MetadataConverter::convert(camera_metadata const*, NSCam::IMetadata&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter7convertEPK15camera_metadataRN5NSCam9IMetadataE(void) {
    ALOGD("_ZNK7android17MetadataConverter7convertEPK15camera_metadataRN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, long long const*, unsigned int, NSCam::Type2Type<long long>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKxjNS_9Type2TypeIxEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKxjNS_9Type2TypeIxEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SN_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SN_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MPoint const&, NSCam::Type2Type<NSCam::MPoint>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_6MPointENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKNS_6MPointENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata(std::__1::shared_ptr<NSCam::IMetadata::Storage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC1ERKNSt3__110shared_ptrINS0_7StorageEEE(void) {
    ALOGD("_ZN5NSCam9IMetadataC1ERKNSt3__110shared_ptrINS0_7StorageEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MRational>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_9MRationalEEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_9MRationalEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::entryAt(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7entryAtEj(void) {
    ALOGD("_ZNK5NSCam9IMetadata7entryAtEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet(NSCam::IMetadataTagSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetC2ERKS0_(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MSize const*, unsigned int, NSCam::Type2Type<NSCam::MSize>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MSizeEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MSizeEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::IEntry(NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryC2ERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryC2ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, unsigned char*, unsigned int, NSCam::Type2Type<unsigned char>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPhjNS_9Type2TypeIhEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPhjNS_9Type2TypeIhEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::unflatten(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata9unflattenEPvj(void) {
    ALOGD("_ZN5NSCam9IMetadata9unflattenEPvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::unflatten(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7Content9unflattenEPKvj(void) {
    ALOGD("_ZN5NSCam9IMetadata7Content9unflattenEPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::Content(NSCam::IMetadata::Content&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentC1ERS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentC1ERS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRational const&, NSCam::Type2Type<NSCam::MRational>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_9MRationalENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_9MRationalENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(float const*, unsigned int, NSCam::Type2Type<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKfjNS_9Type2TypeIfEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKfjNS_9Type2TypeIfEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::operator=(NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryaSERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryaSERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::tag() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry3tagEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry3tagEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Storage::Storage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7StorageC2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7StorageC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE6resizeEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::MetadataConverter::freeCameraMetadata(camera_metadata*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter18freeCameraMetadataEP15camera_metadata(void) {
    ALOGD("_ZNK7android17MetadataConverter18freeCameraMetadataEP15camera_metadata() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<android::Vector<unsigned char> > std::__1::shared_ptr<android::Vector<unsigned char> >::make_shared<>() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN7android6VectorIhEEE11make_sharedIJEEES4_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN7android6VectorIhEEE11make_sharedIJEEES4_DpOT_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(long long const*, unsigned int, NSCam::Type2Type<long long>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKxjNS_9Type2TypeIxEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKxjNS_9Type2TypeIxEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Storage, std::__1::allocator<NSCam::IMetadata::Storage> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: DefaultMetadataTagSetImp::DefaultMetadataTagSetImp() */
extern "C" __attribute__((visibility("default"))) int _ZN24DefaultMetadataTagSetImpC2Ev(void) {
    ALOGD("_ZN24DefaultMetadataTagSetImpC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE6insertINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISD_E9referenceEEE5valueENS8_IPS3_EEE4typeESB_SD_SD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE6insertINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISD_E9referenceEEE5valueENS8_IPS3_EEE4typeESB_SD_SD_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE6insertINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISD_E9referenceEEE5valueENS8_IPS3_EEE4typeESB_SD_SD_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::IMetadata::Memory const&, NSCam::Type2Type<NSCam::IMetadata::Memory>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS0_6MemoryENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS0_6MemoryENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Storage::Storage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7StorageC1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7StorageC1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataConverter>::sp<android::MetadataConverter>(android::MetadataConverter*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam18IMetadataConverterEEC2INS_17MetadataConverterEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam18IMetadataConverterEEC2INS_17MetadataConverterEEEPT_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(int const*, unsigned int, NSCam::Type2Type<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKijNS_9Type2TypeIiEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKijNS_9Type2TypeIiEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(long long const&, NSCam::Type2Type<long long>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKxNS_9Type2TypeIxEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKxNS_9Type2TypeIxEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::Implementor::Implementor(NSCam::IMetadataTagSet::Implementor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSet11ImplementorC1ERKS1_(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSet11ImplementorC1ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::getDumpFilenamePrefix(char*, int, NSCam::IMetadata const*, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21getDumpFilenamePrefixEPciPKNS_9IMetadataES3_(void) {
    ALOGD("_ZN5NSCam21getDumpFilenamePrefixEPciPKNS_9IMetadataES3_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::getDataSP() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6Memory9getDataSPEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6Memory9getDataSPEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory&&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC2EOS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC2EOS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::update(unsigned int, NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6updateEjRKNS0_6IEntryE(void) {
    ALOGD("_ZN5NSCam9IMetadata6updateEjRKNS0_6IEntryE() called");
    return 0;
}

/* Demangled: DefaultMetadataTagSetImp::DefaultMetadataTagSetImp() */
extern "C" __attribute__((visibility("default"))) int _ZN24DefaultMetadataTagSetImpC1Ev(void) {
    ALOGD("_ZN24DefaultMetadataTagSetImpC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::isEmpty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7isEmptyEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata7isEmptyEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC2EPKvj(void) {
    ALOGD("_ZN5NSCam9IMetadataC2EPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::~IMetadata() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataD2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadataD2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IMetadata::Storage>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam9IMetadata7StorageEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam9IMetadata7StorageEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::MetadataConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17MetadataConverterE = NULL;

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRational const*, unsigned int, NSCam::Type2Type<NSCam::MRational>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_9MRationalEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKNS_9MRationalEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::update(NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6updateERKNS0_6IEntryE(void) {
    ALOGD("_ZN5NSCam9IMetadata6updateERKNS0_6IEntryE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::IMetadata::Storage::Item>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::~IMetadata() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataD1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadataD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::vector(std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2ERKS8_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<int>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIiEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIiEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::appendVector(NSCam::IMetadata::Memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory12appendVectorERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory12appendVectorERKS1_() called");
    return 0;
}

/* Exported Object: vtable for DefaultMetadataTagSetImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV24DefaultMetadataTagSetImp = NULL;

/* Exported Object: vtable for VendorTagDescriptorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV23VendorTagDescriptorImpl = NULL;

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MSize>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MSizeEEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MSizeEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: NSCam::IMetadata::IEntry::push_back(float const&, NSCam::Type2Type<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKfNS_9Type2TypeIfEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKfNS_9Type2TypeIfEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::operator!=(NSCam::IMetadata::Memory const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6MemoryneERKS1_(void) {
    ALOGD("_ZNK5NSCam9IMetadata6MemoryneERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::operator+=(NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadatapLERKS0_(void) {
    ALOGD("_ZN5NSCam9IMetadatapLERKS0_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::Content(void const*, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentC1EPKvjRi(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentC1EPKvjRi() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::vector(std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2ERKS8_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<unsigned char>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIhEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIhEE() called");
    return 0;
}

/* Demangled: void std::__1::lock<std::__1::mutex, std::__1::mutex>(std::__1::mutex&, std::__1::mutex&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_(void) {
    ALOGD("_ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata::Storage, std::__1::allocator<NSCam::IMetadata::Storage> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>&, NSCam::IMetadata::Storage::Item*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EEPS4_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EEPS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::IMetadataTagSet::Implementor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15IMetadataTagSet11ImplementorE = NULL;

/* Demangled: NSCam::IMetadata::Content::~Content() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentD2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEE18__construct_at_endINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESE_SE_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEE18__construct_at_endINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESE_SE_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEE18__construct_at_endINS_11__wrap_iterIPKS3_EEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESE_SE_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(double const*, unsigned int, NSCam::Type2Type<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKdjNS_9Type2TypeIdEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKdjNS_9Type2TypeIdEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::IMetadata const&, NSCam::Type2Type<NSCam::IMetadata>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKS0_NS_9Type2TypeIS0_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKS0_NS_9Type2TypeIS0_EE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Content, std::__1::allocator<NSCam::IMetadata::Content> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::~Content() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentD1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentD1Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int, std::__1::shared_ptr<NSCam::IMetadata::Content>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryC1EjNSt3__110shared_ptrINS0_7ContentEEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryC1EjNSt3__110shared_ptrINS0_7ContentEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory5clearEv(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory5clearEv() called");
    return 0;
}

/* Exported Object: NSCam::IMetadata::Storage::mStatNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam9IMetadata7Storage8mStatNumE = NULL;

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEEE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::update(int, void const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7Content6updateEiPKvji(void) {
    ALOGD("_ZN5NSCam9IMetadata7Content6updateEiPKvji() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<float>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIfEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIfEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC2ERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC2ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata(NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC2ERKS0_(void) {
    ALOGD("_ZN5NSCam9IMetadataC2ERKS0_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::flatten(void*, unsigned int, unsigned int const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7flattenEPvjPKji(void) {
    ALOGD("_ZNK5NSCam9IMetadata7flattenEPvjPKji() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__detach(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::vector(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2Ej(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEEC2Ej() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry5clearEv(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry5clearEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MSize const*, unsigned int, NSCam::Type2Type<NSCam::MSize>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MSizeEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MSizeEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory&&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC1EOS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC1EOS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::operator=(NSCam::IMetadata::Memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryaSERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryaSERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::operator=(NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataaSERKS0_(void) {
    ALOGD("_ZN5NSCam9IMetadataaSERKS0_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::operator+(NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataplERKS0_(void) {
    ALOGD("_ZN5NSCam9IMetadataplERKS0_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::operator=(NSCam::IMetadataTagSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetaSERKS0_(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetaSERKS0_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC1EPKvj(void) {
    ALOGD("_ZN5NSCam9IMetadataC1EPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRect const&, NSCam::Type2Type<NSCam::MRect>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MRectENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MRectENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MPoint const*, unsigned int, NSCam::Type2Type<NSCam::MPoint>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_6MPointEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKNS_6MPointEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::__move_range(NSCam::IVendorTagDescriptor::VendorTagSection*, NSCam::IVendorTagDescriptor::VendorTagSection*, NSCam::IVendorTagDescriptor::VendorTagSection*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE12__move_rangeEPS3_S7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE12__move_rangeEPS3_S7_S7_() called");
    return 0;
}

/* Exported Object: vtable for TagInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTV7TagInfo = NULL;

/* Demangled: NSCam::IMetadata::Content::remove(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7Content6removeEi(void) {
    ALOGD("_ZN5NSCam9IMetadata7Content6removeEi() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::Vector<unsigned char>, std::__1::allocator<android::Vector<unsigned char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS6_EEEENS7_IS9_EEEE = NULL;

/* Demangled: NSCam::IMetadata::Content::getMetadata(int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7Content11getMetadataEii(void) {
    ALOGD("_ZNK5NSCam9IMetadata7Content11getMetadataEii() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, double const&, NSCam::Type2Type<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKdNS_9Type2TypeIdEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKdNS_9Type2TypeIdEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry4typeEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry4typeEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<double>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIdEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIdEE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::insert(std::__1::__wrap_iter<NSCam::IMetadata::Storage::Item const*>, NSCam::IMetadata::Storage::Item&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6insertENS_11__wrap_iterIPKS4_EEOS4_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6insertENS_11__wrap_iterIPKS4_EEOS4_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::getMemory(int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7Content9getMemoryEii(void) {
    ALOGD("_ZNK5NSCam9IMetadata7Content9getMemoryEii() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::IEntry(NSCam::IMetadata::IEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryC1ERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryC1ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MRect*, unsigned int, NSCam::Type2Type<NSCam::MRect>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MRectEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MRectEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory6resizeEj(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory6resizeEj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__vdeallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE13__vdeallocateEv(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE13__vdeallocateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, unsigned char const&, NSCam::Type2Type<unsigned char>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKhNS_9Type2TypeIhEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKhNS_9Type2TypeIhEE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::IMetadata::Memory const&, NSCam::Type2Type<NSCam::IMetadata::Memory>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKNS0_6MemoryENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKNS0_6MemoryENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(double const&, NSCam::Type2Type<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKdNS_9Type2TypeIdEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKdNS_9Type2TypeIdEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::dump(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata4dumpEi(void) {
    ALOGD("_ZN5NSCam9IMetadata4dumpEi() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadataC2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MSize const&, NSCam::Type2Type<NSCam::MSize>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MSizeENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_5MSizeENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::count() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry5countEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry5countEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::itemAt(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6Memory6itemAtEj(void) {
    ALOGD("_ZNK5NSCam9IMetadata6Memory6itemAtEj() called");
    return 0;
}

/* Demangled: android::MetadataConverter::getCameraMetadataSize(camera_metadata const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter21getCameraMetadataSizeEPK15camera_metadata(void) {
    ALOGD("_ZNK7android17MetadataConverter21getCameraMetadataSizeEPK15camera_metadata() called");
    return 0;
}

/* Exported Object: NSCam::IMetadata::Content::mStatNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam9IMetadata7Content8mStatNumE = NULL;

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::count() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata5countEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata5countEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::getMtkTag(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15IMetadataTagSet9getMtkTagEj(void) {
    ALOGD("_ZNK5NSCam15IMetadataTagSet9getMtkTagEj() called");
    return 0;
}

/* Demangled: android::MetadataConverter::MetadataConverter(NSCam::IMetadataTagSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MetadataConverterC2ERKN5NSCam15IMetadataTagSetE(void) {
    ALOGD("_ZN7android17MetadataConverterC2ERKN5NSCam15IMetadataTagSetE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::Vector<unsigned char>, std::__1::allocator<android::Vector<unsigned char> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadataC1Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata(std::__1::shared_ptr<NSCam::IMetadata::Storage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC2ERKNSt3__110shared_ptrINS0_7StorageEEE(void) {
    ALOGD("_ZN5NSCam9IMetadataC2ERKNSt3__110shared_ptrINS0_7StorageEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__move_assign(std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::editArray(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory9editArrayERj(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory9editArrayERj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::vector(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2Ej(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEC2Ej() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceINS_6vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS6_EEEENS7_IS9_EEEE = NULL;

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MPoint>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_6MPointEEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_6MPointEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::Implementor::Implementor(NSCam::IMetadataTagSet::Implementor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSet11ImplementorC2ERKS1_(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSet11ImplementorC2ERKS1_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE6resizeEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC2EPKvj(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC2EPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__move_range(NSCam::IMetadata::Storage::Item*, NSCam::IMetadata::Storage::Item*, NSCam::IMetadata::Storage::Item*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE12__move_rangeEPS4_S8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE12__move_rangeEPS4_S8_S8_() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::~IMetadataTagSet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetD2Ev(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetD2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::getAndroidTag(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15IMetadataTagSet13getAndroidTagEj(void) {
    ALOGD("_ZNK5NSCam15IMetadataTagSet13getAndroidTagEj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::getBasicData(int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7Content12getBasicDataEii(void) {
    ALOGD("_ZNK5NSCam9IMetadata7Content12getBasicDataEii() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, unsigned char const*, unsigned int, NSCam::Type2Type<unsigned char>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKhjNS_9Type2TypeIhEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKhjNS_9Type2TypeIhEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Content, std::__1::allocator<NSCam::IMetadata::Content> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::sort() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata4sortEv(void) {
    ALOGD("_ZN5NSCam9IMetadata4sortEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item>&>::push_back(NSCam::IMetadata::Storage::Item&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam9IMetadata7Storage4ItemERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: android::MetadataConverter::MetadataConverter(NSCam::IMetadataTagSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MetadataConverterC1ERKN5NSCam15IMetadataTagSetE(void) {
    ALOGD("_ZN7android17MetadataConverterC1ERKN5NSCam15IMetadataTagSetE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::Content() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentC2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIhEE = NULL;

/* Exported Object: NSCam::IMetadata::Content::_typeSize() const::sizeTable */
extern "C" __attribute__((visibility("default"))) void* _ZZNK5NSCam9IMetadata7Content9_typeSizeEvE9sizeTable = NULL;

/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int, std::__1::shared_ptr<NSCam::IMetadata::Content>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryC2EjNSt3__110shared_ptrINS0_7ContentEEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryC2EjNSt3__110shared_ptrINS0_7ContentEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, float*, unsigned int, NSCam::Type2Type<float>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPfjNS_9Type2TypeIfEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPfjNS_9Type2TypeIfEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::~IMetadataTagSet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetD1Ev(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > > >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrINS_6vectorINS0_IN7android6VectorIhEEEENS_9allocatorIS5_EEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrINS_6vectorINS0_IN7android6VectorIhEEEENS_9allocatorIS5_EEEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::editArray() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory9editArrayEv(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory9editArrayEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::entryFor(unsigned int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata8entryForEji(void) {
    ALOGD("_ZNK5NSCam9IMetadata8entryForEji() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::Content() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentC1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentC1Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, long long*, unsigned int, NSCam::Type2Type<long long>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPxjNS_9Type2TypeIxEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPxjNS_9Type2TypeIxEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(unsigned char const*, unsigned int, NSCam::Type2Type<unsigned char>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKhjNS_9Type2TypeIhEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKhjNS_9Type2TypeIhEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::~IMetadataTagSet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetD0Ev(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetD0Ev() called");
    return 0;
}

/* Demangled: android::MetadataConverter::dump(NSCam::IMetadata const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter4dumpERKN5NSCam9IMetadataEi(void) {
    ALOGD("_ZNK7android17MetadataConverter4dumpERKN5NSCam9IMetadataEi() called");
    return 0;
}

/* Exported Object: VTT for android::MetadataConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android17MetadataConverterE = NULL;

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, int*, unsigned int, NSCam::Type2Type<int>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPijNS_9Type2TypeIiEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPijNS_9Type2TypeIiEE() called");
    return 0;
}

/* Demangled: android::MetadataConverter::print(NSCam::IMetadata const&, unsigned int, unsigned int, android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter5printERKN5NSCam9IMetadataEjjRKNS_7String8E(void) {
    ALOGD("_ZNK7android17MetadataConverter5printERKN5NSCam9IMetadataEjjRKNS_7String8E() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam20IVendorTagDescriptor16VendorTagSectionERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRect const*, unsigned int, NSCam::Type2Type<NSCam::MRect>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MRectEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_5MRectEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MSize const&, NSCam::Type2Type<NSCam::MSize>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MSizeENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MSizeENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::~Memory() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryD2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE6resizeEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::getType(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15IMetadataTagSet7getTypeEj(void) {
    ALOGD("_ZNK5NSCam15IMetadataTagSet7getTypeEj() called");
    return 0;
}

/* Demangled: android::MetadataConverter::convertFromHidl(void const*, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MetadataConverter15convertFromHidlEPKvRN5NSCam9IMetadataE(void) {
    ALOGD("_ZN7android17MetadataConverter15convertFromHidlEPKvRN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Storage::flatten(void*, unsigned int, unsigned int const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7Storage7flattenEPvjPKji(void) {
    ALOGD("_ZNK5NSCam9IMetadata7Storage7flattenEPvjPKji() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<long long>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIxEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIxEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(std::__1::shared_ptr<android::Vector<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC2ERKNSt3__110shared_ptrIN7android6VectorIhEEEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC2ERKNSt3__110shared_ptrIN7android6VectorIhEEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::array(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6Memory5arrayERj(void) {
    ALOGD("_ZNK5NSCam9IMetadata6Memory5arrayERj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::MRect>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MRectEEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS_5MRectEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::takeEntryFor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata12takeEntryForEj(void) {
    ALOGD("_ZN5NSCam9IMetadata12takeEntryForEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::addTag(unsigned int, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSet6addTagEjPKci(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSet6addTagEjPKci() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::IMetadataTagSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15IMetadataTagSetE = NULL;

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::IMetadata::Memory>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS0_6MemoryEEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeINS0_6MemoryEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::~Memory() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryD1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryD1Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::flattenSize(unsigned int const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata11flattenSizeEPKji(void) {
    ALOGD("_ZNK5NSCam9IMetadata11flattenSizeEPKji() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata::Storage, std::__1::allocator<NSCam::IMetadata::Storage> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7StorageENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::flattenSize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7Content11flattenSizeEv(void) {
    ALOGD("_ZN5NSCam9IMetadata7Content11flattenSizeEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::flatten(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7Content7flattenEPvj(void) {
    ALOGD("_ZN5NSCam9IMetadata7Content7flattenEPvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(NSCam::IMetadata::Memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC1ERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC1ERKS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IMetadata(NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadataC1ERKS0_(void) {
    ALOGD("_ZN5NSCam9IMetadataC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, int const&, NSCam::Type2Type<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKiNS_9Type2TypeIiEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKiNS_9Type2TypeIiEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::remove(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6removeEj(void) {
    ALOGD("_ZN5NSCam9IMetadata6removeEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet(NSCam::IMetadataTagSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetC1ERKS0_(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetC1ERKS0_() called");
    return 0;
}

/* Demangled: DefaultMetadataTagSetImp::getTagSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK24DefaultMetadataTagSetImp9getTagSetEv(void) {
    ALOGD("_ZNK24DefaultMetadataTagSetImp9getTagSetEv() called");
    return 0;
}

/* Exported Object: NSCam::IMetadata::Storage::mStatSize */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam9IMetadata7Storage9mStatSizeE = NULL;

/* Demangled: NSCam::IMetadata::Content::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7Content5clearEv(void) {
    ALOGD("_ZN5NSCam9IMetadata7Content5clearEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRational const&, NSCam::Type2Type<NSCam::MRational>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_9MRationalENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKNS_9MRationalENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC1EPKvj(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC1EPKvj() called");
    return 0;
}

/* Demangled: NSCam::IDefaultMetadataTagSet::singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam22IDefaultMetadataTagSet9singletonEv(void) {
    ALOGD("_ZN5NSCam22IDefaultMetadataTagSet9singletonEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, float const*, unsigned int, NSCam::Type2Type<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKfjNS_9Type2TypeIfEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKfjNS_9Type2TypeIfEE() called");
    return 0;
}

/* Demangled: android::sp<TagInfo>::sp(TagInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI7TagInfoEC2EPS1_(void) {
    ALOGD("_ZN7android2spI7TagInfoEC2EPS1_() called");
    return 0;
}

/* Demangled: android::MetadataConverter::convertToHidl(NSCam::IMetadata const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MetadataConverter13convertToHidlERKN5NSCam9IMetadataEPv(void) {
    ALOGD("_ZN7android17MetadataConverter13convertToHidlERKN5NSCam9IMetadataEPv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::vector(std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEEC2ERKS6_() called");
    return 0;
}

/* Exported Object: NSCam::IMetadata::Content::mStatSize */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam9IMetadata7Content9mStatSizeE = NULL;

/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MRational const*, unsigned int, NSCam::Type2Type<NSCam::MRational>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_9MRationalEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_9MRationalEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(unsigned char const&, NSCam::Type2Type<unsigned char>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKhNS_9Type2TypeIhEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKhNS_9Type2TypeIhEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Storage::flattenSize(unsigned int const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata7Storage11flattenSizeEPKji(void) {
    ALOGD("_ZNK5NSCam9IMetadata7Storage11flattenSizeEPKji() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MPoint const*, unsigned int, NSCam::Type2Type<NSCam::MPoint>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_6MPointEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKNS_6MPointEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, double*, unsigned int, NSCam::Type2Type<double>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPdjNS_9Type2TypeIdEE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPdjNS_9Type2TypeIdEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::isEmpty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry7isEmptyEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry7isEmptyEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::appendVector(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory12appendVectorERKN7android6VectorIhEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory12appendVectorERKN7android6VectorIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IMetadataConverter-in-android::MetadataConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android17MetadataConverterE0_N5NSCam18IMetadataConverterE = NULL;

/* Demangled: NSCam::getVendorTagDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam22getVendorTagDescriptorEv(void) {
    ALOGD("_ZN5NSCam22getVendorTagDescriptorEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::~IEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryD2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<android::Vector<unsigned char> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN7android6VectorIhEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN7android6VectorIhEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, int const*, unsigned int, NSCam::Type2Type<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKijNS_9Type2TypeIiEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKijNS_9Type2TypeIiEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, NSCam::MPoint const&, NSCam::Type2Type<NSCam::MPoint>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_6MPointENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKNS_6MPointENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::data() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry4dataEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry4dataEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::Type2Type<NSCam::IMetadata>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIS0_EE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjNS_9Type2TypeIS0_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MPoint*, unsigned int, NSCam::Type2Type<NSCam::MPoint>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_6MPointEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_6MPointEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::array() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6Memory5arrayEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6Memory5arrayEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IMetadata::Storage::Item, std::__1::allocator<NSCam::IMetadata::Storage::Item> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam9IMetadata7Storage4ItemENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetC2Ev(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetC2Ev() called");
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

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE8__appendEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory(std::__1::shared_ptr<android::Vector<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC1ERKNSt3__110shared_ptrIN7android6VectorIhEEEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC1ERKNSt3__110shared_ptrIN7android6VectorIhEEEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::Implementor::operator=(NSCam::IMetadataTagSet::Implementor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSet11ImplementoraSERKS1_(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSet11ImplementoraSERKS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::MetadataConverter::convert(NSCam::IMetadata const&, camera_metadata*&, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MetadataConverter7convertERKN5NSCam9IMetadataERP15camera_metadataPj(void) {
    ALOGD("_ZNK7android17MetadataConverter7convertERKN5NSCam9IMetadataERP15camera_metadataPj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection>&>&, NSCam::IVendorTagDescriptor::VendorTagSection*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EEPS3_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EEPS3_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, long long const&, NSCam::Type2Type<long long>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKxNS_9Type2TypeIxEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKxNS_9Type2TypeIxEE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRect const&, NSCam::Type2Type<NSCam::MRect>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MRectENS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backERKNS_5MRectENS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::~IEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryD1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryD1Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Storage::~Storage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7StorageD2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7StorageD2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::getName(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15IMetadataTagSet7getNameEj(void) {
    ALOGD("_ZNK5NSCam15IMetadataTagSet7getNameEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__emplace_multi<std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&>(std::__1::pair<unsigned int const, NSCam::IVendorTagDescriptor::VendorTag> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKjS4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MRational*, unsigned int, NSCam::Type2Type<NSCam::MRational>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_9MRationalEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_9MRationalEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadataTagSet::IMetadataTagSet() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IMetadataTagSetC1Ev(void) {
    ALOGD("_ZN5NSCam15IMetadataTagSetC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > > >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrINS_6vectorINS0_IN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrINS_6vectorINS0_IN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<android::Vector<unsigned char> >, std::__1::allocator<std::__1::shared_ptr<android::Vector<unsigned char> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android6VectorIhEEEENS_9allocatorIS5_EEE8__appendEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::removeAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry8removeAtEj(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry8removeAtEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata::Content, std::__1::allocator<NSCam::IMetadata::Content> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadata7ContentENS_9allocatorIS3_EEEE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::IVendorTagDescriptor::VendorTag> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam20IVendorTagDescriptor9VendorTagEEENS_19__map_value_compareIjS5_NS_4lessIjEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
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

/* Demangled: std::__1::__shared_ptr_emplace<android::Vector<unsigned char>, std::__1::allocator<android::Vector<unsigned char> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android6VectorIhEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Storage::~Storage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7StorageD1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata7StorageD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::itemAt(unsigned int, NSCam::MSize*, unsigned int, NSCam::Type2Type<NSCam::MSize>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MSizeEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry6itemAtEjPNS_5MSizeEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::operator==(NSCam::IMetadata::Memory const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6MemoryeqERKS1_(void) {
    ALOGD("_ZNK5NSCam9IMetadata6MemoryeqERKS1_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::IVendorTagDescriptor::VendorTagSection, std::__1::allocator<NSCam::IVendorTagDescriptor::VendorTagSection> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam20IVendorTagDescriptor16VendorTagSectionENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::getContentSP() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam9IMetadata6IEntry12getContentSPEv(void) {
    ALOGD("_ZNK5NSCam9IMetadata6IEntry12getContentSPEv() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::operator=(NSCam::IMetadata::Memory&&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryaSEOS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryaSEOS1_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Content::Content(NSCam::IMetadata::Content&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata7ContentC2ERS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata7ContentC2ERS1_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadata7StorageEEENS_9allocatorIS5_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::push_back(NSCam::MRect const*, unsigned int, NSCam::Type2Type<NSCam::MRect>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MRectEjNS_9Type2TypeIS2_EE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry9push_backEPKNS_5MRectEjNS_9Type2TypeIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryC2Ej(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryC2Ej() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC2Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC2Ev() called");
    return 0;
}

/* Demangled: android::sp<TagInfo>::operator=(android::sp<TagInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI7TagInfoEaSERKS2_(void) {
    ALOGD("_ZN7android2spI7TagInfoEaSERKS2_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, float const&, NSCam::Type2Type<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKfNS_9Type2TypeIfEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjRKfNS_9Type2TypeIfEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::IMetadata::Storage>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata::Storage> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_10shared_ptrIN5NSCam9IMetadata7StorageEEERNS_9allocatorIS5_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::IEntry(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntryC1Ej(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntryC1Ej() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::Memory() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6MemoryC1Ev(void) {
    ALOGD("_ZN5NSCam9IMetadata6MemoryC1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IMetadata::Content>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam9IMetadata7ContentEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam9IMetadata7ContentEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::Memory::append(NSCam::IMetadata::Memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6Memory6appendERKS1_(void) {
    ALOGD("_ZN5NSCam9IMetadata6Memory6appendERKS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<TagInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spI7TagInfoEEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: NSCam::IMetadata::IEntry::replaceItemAt(unsigned int, double const*, unsigned int, NSCam::Type2Type<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKdjNS_9Type2TypeIdEE(void) {
    ALOGD("_ZN5NSCam9IMetadata6IEntry13replaceItemAtEjPKdjNS_9Type2TypeIdEE() called");
    return 0;
}
