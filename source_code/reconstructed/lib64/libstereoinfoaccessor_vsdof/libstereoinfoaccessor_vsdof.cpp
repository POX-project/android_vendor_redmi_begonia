/*
 * Reverse-Engineered Source for: libstereoinfoaccessor_vsdof.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libstereoinfoaccessor_vsdof"

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
#include "libstereoinfoaccessor_vsdof.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: WXMPMeta_GetVersionInfo_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetVersionInfo_1(void) {
    ALOGD("WXMPMeta_GetVersionInfo_1() called");
    return 0;
}

/* Demangled: WXMPMeta_SetProperty_Float_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetProperty_Float_1(void) {
    ALOGD("WXMPMeta_SetProperty_Float_1() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParser4readEv(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParser4readEv() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::writeStructItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser15writeStructItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser15writeStructItemEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::initSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser15initSimpleValueEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser15initSimpleValueEv() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::~XMP_HomeGrownLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLockD1Ev(void) {
    ALOGD("_ZN17XMP_HomeGrownLockD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRNS_4pairIS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SN_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRNS_4pairIS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SN_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::~XmpMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaD2Ev(void) {
    ALOGD("_ZN6stereo7XmpMetaD2Ev() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntEPKc(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntEPKc() called");
    return 0;
}

/* Demangled: stereo::JsonParser::~JsonParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParserD1Ev(void) {
    ALOGD("_ZN6stereo10JsonParserD1Ev() called");
    return 0;
}

/* Demangled: stereo::Utils::isFileExist(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils11isFileExistEPKc(void) {
    ALOGD("_ZN6stereo5Utils11isFileExistEPKc() called");
    return 0;
}

/* Demangled: XMPMeta::DumpObject(int (*)(void*, char const*, unsigned int), void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta10DumpObjectEPFiPvPKcjES0_(void) {
    ALOGD("_ZNK7XMPMeta10DumpObjectEPFiPvPKcjES0_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64ERKS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64ERKS6_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::EncodeToBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64ERKS6_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64ERKS6_PS6_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Exported Object: vtable for stereo::SegmentMaskInfoParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo21SegmentMaskInfoParserE = NULL;

/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoDepthInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DuplicateSubtree(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DuplicateSubtreeERK8TXMPMetaIS6_EPS9_PKcSE_SE_SE_j(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DuplicateSubtreeERK8TXMPMetaIS6_EPS9_PKcSE_SE_SE_j() called");
    return 0;
}

/* Demangled: XMPIterator::XMPIterator(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorC1EPKcS1_j(void) {
    ALOGD("_ZN11XMPIteratorC1EPKcS1_j() called");
    return 0;
}

/* Demangled: XMPIterator::~XMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorD1Ev(void) {
    ALOGD("_ZN11XMPIteratorD1Ev() called");
    return 0;
}

/* Demangled: WXMPUtils_DecodeFromBase64_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_DecodeFromBase64_1(void) {
    ALOGD("WXMPUtils_DecodeFromBase64_1() called");
    return 0;
}

/* Exported Object: void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseStringToStream<0u, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::StackStream<char> >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::StackStream<char>&)::escape */
extern "C" __attribute__((visibility("default"))) void* _ZZN9rapidjson13GenericReaderINS_4UTF8IcEES2_NS_12CrtAllocatorEE19ParseStringToStreamILj0ES2_S2_NS_18EncodedInputStreamIS2_NS_12MemoryStreamEEENS4_11StackStreamIcEEEEvRT2_RT3_E6escape = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: XMPMeta::DeleteStructField(char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta17DeleteStructFieldEPKcS1_S1_S1_(void) {
    ALOGD("_ZN7XMPMeta17DeleteStructFieldEPKcS1_S1_S1_() called");
    return 0;
}

/* Demangled: WXMPMeta_DoesStructFieldExist_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DoesStructFieldExist_1(void) {
    ALOGD("WXMPMeta_DoesStructFieldExist_1() called");
    return 0;
}

/* Demangled: WXMPMeta_SerializeToBuffer_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SerializeToBuffer_1(void) {
    ALOGD("WXMPMeta_SerializeToBuffer_1() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGDepthMime() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getGDepthMimeEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getGDepthMimeEv() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfo::~SegmentMaskInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15SegmentMaskInfoD0Ev(void) {
    ALOGD("_ZN6stereo15SegmentMaskInfoD0Ev() called");
    return 0;
}

/* Demangled: RDF_Parser::ParseTypeResourcePropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser32ParseTypeResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser32ParseTypeResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: stereo::Utils::checkOrCreateDir(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils16checkOrCreateDirEPKc(void) {
    ALOGD("_ZN6stereo5Utils16checkOrCreateDirEPKc() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoBufferInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo16StereoBufferInfoE = NULL;

/* Exported Object: vtable for stereo::StereoCaptureInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo17StereoCaptureInfoE = NULL;

/* Demangled: stereo::StereoDepthInfoParser::readBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser14readBufferItemEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser14readBufferItemEv() called");
    return 0;
}

/* Demangled: stereo::CustomizedDataPacker::CustomizedDataPacker(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPackerC2EPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo20CustomizedDataPackerC2EPNS_8PackInfoE() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::writeXmp(stereo::BufferTypeOutputStream&, stereo::Section*, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker8writeXmpERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS4_NS5_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN6stereo9JpgPacker8writeXmpERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS4_NS5_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: XMP_Node::GetLocalURI(char const**, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XMP_Node11GetLocalURIEPPKcPj(void) {
    ALOGD("_ZNK8XMP_Node11GetLocalURIEPPKcPj() called");
    return 0;
}

/* Demangled: XMPMeta::~XMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMetaD1Ev(void) {
    ALOGD("_ZN7XMPMetaD1Ev() called");
    return 0;
}

/* Exported Object: kXMPCore_EmbeddedVersion */
extern "C" __attribute__((visibility("default"))) void* kXMPCore_EmbeddedVersion = NULL;

/* Demangled: WXMPMeta_GetQualifier_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetQualifier_1(void) {
    ALOGD("WXMPMeta_GetQualifier_1() called");
    return 0;
}

/* Demangled: NormalizeLangValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z18NormalizeLangValuePNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z18NormalizeLangValuePNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE7reserveEm() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToDate(char const*, XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateEPKcP12XMP_DateTime(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateEPKcP12XMP_DateTime() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperator5writeEv(void) {
    ALOGD("_ZN6stereo15XmpMetaOperator5writeEv() called");
    return 0;
}

/* Demangled: stereo::JsonParser::getValueBoolFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser22getValueBoolFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void) {
    ALOGD("_ZN6stereo10JsonParser22getValueBoolFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::writeSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser16writeSimpleValueEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser16writeSimpleValueEv() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::getXmpCommonHeader(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, int, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPacker18getXmpCommonHeaderENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiRNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo9XmpPacker18getXmpCommonHeaderENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiRNS_12StereoBufferE() called");
    return 0;
}

/* Exported Object: UTF8_to_UTF32LE */
extern "C" __attribute__((visibility("default"))) void* UTF8_to_UTF32LE = NULL;

/* Demangled: stereo::StereoInfoJsonParser::getPosX() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser7getPosXEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser7getPosXEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: stereo::SegmentMaskInfoParser::~SegmentMaskInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParserD1Ev(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParserD1Ev() called");
    return 0;
}

/* Demangled: WXMPMeta_SetLocalizedText_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetLocalizedText_1(void) {
    ALOGD("WXMPMeta_SetLocalizedText_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Date(char const*, char const*, XMP_DateTime*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_DateEPKcS9_P12XMP_DateTimePj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_DateEPKcS9_P12XMP_DateTimePj() called");
    return 0;
}

/* Demangled: void std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >::__push_back_slow_path<stereo::StereoBigBuffer* const&>(stereo::StereoBigBuffer* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6stereo15StereoBigBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6stereo15StereoBigBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<stereo::FaceDetectionInfo*, std::__1::allocator<stereo::FaceDetectionInfo*> >::__push_back_slow_path<stereo::FaceDetectionInfo* const&>(stereo::FaceDetectionInfo* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6stereo17FaceDetectionInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6stereo17FaceDetectionInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoCaptureInfoParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo23StereoCaptureInfoParserE = NULL;

/* Demangled: stereo::BufferTypeOutputStream::~BufferTypeOutputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamD2Ev(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamD2Ev() called");
    return 0;
}

/* Exported Object: vtable for stereo::JsonParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo10JsonParserE = NULL;

/* Demangled: stereo::CustomizedDataPacker::pack() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPacker4packEv(void) {
    ALOGD("_ZN6stereo20CustomizedDataPacker4packEv() called");
    return 0;
}

/* Exported Object: VTT for stereo::StereoInfoAccessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6stereo18StereoInfoAccessorE = NULL;

/* Demangled: XMPUtils::ComposeLangSelector(char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils19ComposeLangSelectorEPKcS1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils19ComposeLangSelectorEPKcS1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, void*>*, long> std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> > > >::__emplace_hint_multi<std::__1::pair<unsigned long const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, void*>*, long>, std::__1::pair<unsigned long const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE20__emplace_hint_multiIJRNS2_IKmSA_EEEEENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEENS_21__tree_const_iteratorISB_SQ_lEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE20__emplace_hint_multiIJRNS2_IKmSA_EEEEENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEENS_21__tree_const_iteratorISB_SQ_lEEDpOT_() called");
    return 0;
}

/* Exported Object: vtable for stereo::CustomizedMetaOperator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo22CustomizedMetaOperatorE = NULL;

/* Demangled: stereo::ReadWriteLockFileUtils::unlock(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22ReadWriteLockFileUtils6unlockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo22ReadWriteLockFileUtils6unlockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMPMeta::DeleteProperty(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta14DeletePropertyEPKcS1_(void) {
    ALOGD("_ZN7XMPMeta14DeletePropertyEPKcS1_() called");
    return 0;
}

/* Exported Object: CodePoint_to_UTF16LE */
extern "C" __attribute__((visibility("default"))) void* CodePoint_to_UTF16LE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: WXMPMeta_GetGlobalOptions_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetGlobalOptions_1(void) {
    ALOGD("WXMPMeta_GetGlobalOptions_1() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::writeSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser16writeSimpleValueEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser16writeSimpleValueEv() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::~StereoBufferInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserD1Ev(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserD1Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::FIXED_BUFFER_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17FIXED_BUFFER_SIZEE = NULL;

/* Demangled: WXMPMeta_Erase_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_Erase_1(void) {
    ALOGD("WXMPMeta_Erase_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::size() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream4sizeEv(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream4sizeEv() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser5writeEv(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser5writeEv() called");
    return 0;
}

/* Demangled: virtual thunk to stereo::StereoInfoAccessor::~StereoInfoAccessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6stereo18StereoInfoAccessorD1Ev(void) {
    ALOGD("_ZTv0_n24_N6stereo18StereoInfoAccessorD1Ev() called");
    return 0;
}

/* Demangled: RDF_Parser::NodeElementList(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser15NodeElementListEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser15NodeElementListEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: XMPMeta::SetLocalizedText(char const*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16SetLocalizedTextEPKcS1_S1_S1_S1_j(void) {
    ALOGD("_ZN7XMPMeta16SetLocalizedTextEPKcS1_S1_S1_S1_j() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::XMP_HomeGrownLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLockC1Ev(void) {
    ALOGD("_ZN17XMP_HomeGrownLockC1Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_RKS6_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_RKS6_j() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(__XMPMeta__*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EP11__XMPMeta__(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EP11__XMPMeta__() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SerializeToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: XMPMeta::RegisterNamespace(char const*, char const*, char const**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta17RegisterNamespaceEPKcS1_PS1_Pj(void) {
    ALOGD("_ZN7XMPMeta17RegisterNamespaceEPKcS1_PS1_Pj() called");
    return 0;
}

/* Exported Object: voidDouble */
extern "C" __attribute__((visibility("default"))) void* voidDouble = NULL;

/* Demangled: WXMPMeta_SetQualifier_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetQualifier_1(void) {
    ALOGD("WXMPMeta_SetQualifier_1() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamC2Ei(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamC2Ei() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfo::~StereoCaptureInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo17StereoCaptureInfoD0Ev(void) {
    ALOGD("_ZN6stereo17StereoCaptureInfoD0Ev() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::unpack() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker6unpackEv(void) {
    ALOGD("_ZN6stereo9JpgPacker6unpackEv() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToUTCTime(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils16ConvertToUTCTimeEP12XMP_DateTime(void) {
    ALOGD("_ZN8XMPUtils16ConvertToUTCTimeEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::toBuffer(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream8toBufferERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream8toBufferERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEERKT_() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::readSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser15readSimpleValueEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser15readSimpleValueEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::JpgPacker(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPackerC1EPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo9JpgPackerC1EPNS_8PackInfoE() called");
    return 0;
}

/* Demangled: SwapUTF16(unsigned short const*, unsigned short*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z9SwapUTF16PKtPtm(void) {
    ALOGD("_Z9SwapUTF16PKtPtm() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToInt_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToInt_1(void) {
    ALOGD("WXMPUtils_ConvertToInt_1() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::~StereoInfoJsonParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParserD1Ev(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParserD1Ev() called");
    return 0;
}

/* Exported Object: vtable for ExpatAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTV12ExpatAdapter = NULL;

/* Demangled: stereo::Utils::intToHexString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils14intToHexStringEi(void) {
    ALOGD("_ZN6stereo5Utils14intToHexStringEi() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::~StereoInfoAccessor() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessorD1Ev(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessorD1Ev() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMeta9serializeEv(void) {
    ALOGD("_ZN6stereo14CustomizedMeta9serializeEv() called");
    return 0;
}

/* Exported Object: stereo::BufferManager::mBuffers */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo13BufferManager8mBuffersE = NULL;

/* Demangled: stereo::StereoInfoJsonParser::getGImageMime() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getGImageMimeEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getGImageMimeEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoDepthInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser9serializeEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser9serializeEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_DEBUG_BUFFER */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17TYPE_DEBUG_BUFFERE = NULL;

/* Demangled: stereo::JpgPacker::checkAppSectionTypeInStream(stereo::BufferTypeInputStream&, stereo::Section*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker27checkAppSectionTypeInStreamERNS_21BufferTypeInputStreamEPNS_7SectionE(void) {
    ALOGD("_ZN6stereo9JpgPacker27checkAppSectionTypeInStreamERNS_21BufferTypeInputStreamEPNS_7SectionE() called");
    return 0;
}

/* Demangled: XMPUtils::CurrentDateTime(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils15CurrentDateTimeEP12XMP_DateTime(void) {
    ALOGD("_ZN8XMPUtils15CurrentDateTimeEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::getPropertyBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMeta17getPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo14CustomizedMeta17getPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: WXMPMeta_SetObjectOptions_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetObjectOptions_1(void) {
    ALOGD("WXMPMeta_SetObjectOptions_1() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFaceRect(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser11getFaceRectEi(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser11getFaceRectEi() called");
    return 0;
}

/* Demangled: XMPMeta::SetObjectOptions(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16SetObjectOptionsEj(void) {
    ALOGD("_ZN7XMPMeta16SetObjectOptionsEj() called");
    return 0;
}

/* Demangled: XMPIterator::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIterator10InitializeEv(void) {
    ALOGD("_ZN11XMPIterator10InitializeEv() called");
    return 0;
}

/* Demangled: WXMPMeta_SetObjectName_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetObjectName_1(void) {
    ALOGD("WXMPMeta_SetObjectName_1() called");
    return 0;
}

/* Demangled: WXMPUtils_RemoveProperties_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_RemoveProperties_1(void) {
    ALOGD("WXMPUtils_RemoveProperties_1() called");
    return 0;
}

/* Exported Object: vtable for XMP_Node */
extern "C" __attribute__((visibility("default"))) void* _ZTV8XMP_Node = NULL;

/* Demangled: XMPMeta::XMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMetaC1Ev(void) {
    ALOGD("_ZN7XMPMetaC1Ev() called");
    return 0;
}

/* Demangled: CloneOffspring(XMP_Node const*, XMP_Node*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z14CloneOffspringPK8XMP_NodePS_b(void) {
    ALOGD("_Z14CloneOffspringPK8XMP_NodePS_b() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetStructField(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_RKS6_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_RKS6_j() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoConfigInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo16StereoConfigInfoE = NULL;

/* Demangled: ExpatAdapter::~ExpatAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN12ExpatAdapterD0Ev(void) {
    ALOGD("_ZN12ExpatAdapterD0Ev() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToInt(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils12ConvertToIntEPKc(void) {
    ALOGD("_ZN8XMPUtils12ConvertToIntEPKc() called");
    return 0;
}

/* Demangled: void std::__1::__inplace_merge<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115__inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeEl(void) {
    ALOGD("_ZNSt3__115__inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeEl() called");
    return 0;
}

/* Exported Object: UTF16LE_to_UTF32LE */
extern "C" __attribute__((visibility("default"))) void* UTF16LE_to_UTF32LE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_multi<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__emplace_multiIJRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__emplace_multiIJRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEDpOT_() called");
    return 0;
}

/* Demangled: WXMPUtils_DuplicateSubtree_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_DuplicateSubtree_1(void) {
    ALOGD("WXMPUtils_DuplicateSubtree_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetObjectName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13GetObjectNameEPS6_(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13GetObjectNameEPS6_() called");
    return 0;
}

/* Demangled: XMPMeta::GetGlobalOptions() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16GetGlobalOptionsEv(void) {
    ALOGD("_ZN7XMPMeta16GetGlobalOptionsEv() called");
    return 0;
}

/* Demangled: void std::__1::__stable_sort<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__stable_sortIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeEl(void) {
    ALOGD("_ZNSt3__113__stable_sortIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeEl() called");
    return 0;
}

/* Demangled: void std::__1::__stable_sort_move<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__stable_sort_moveIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeE(void) {
    ALOGD("_ZNSt3__118__stable_sort_moveIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeE() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::XmpMeta(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaC1ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo7XmpMetaC1ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteLocalizedText(char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19DeleteLocalizedTextEPKcS9_S9_S9_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19DeleteLocalizedTextEPKcS9_S9_S9_() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Exported Object: vtable for stereo::BufferTypeOutputStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo22BufferTypeOutputStreamE = NULL;

/* Demangled: stereo::JpgPacker::~JpgPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPackerD1Ev(void) {
    ALOGD("_ZN6stereo9JpgPackerD1Ev() called");
    return 0;
}

/* Demangled: MD5Init(MD5_CTX*) */
extern "C" __attribute__((visibility("default"))) int _Z7MD5InitP7MD5_CTX(void) {
    ALOGD("_Z7MD5InitP7MD5_CTX() called");
    return 0;
}

/* Exported Object: vtable for stereo::XmpPacker */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo9XmpPackerE = NULL;

/* Demangled: XMPUtils::ConvertFromDate(XMP_DateTime const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils15ConvertFromDateERK12XMP_DateTimePNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils15ConvertFromDateERK12XMP_DateTimePNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperator4readEv(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperator4readEv() called");
    return 0;
}

/* Demangled: CloneSubtree(XMP_Node const*, XMP_Node*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z12CloneSubtreePK8XMP_NodePS_b(void) {
    ALOGD("_Z12CloneSubtreePK8XMP_NodePS_b() called");
    return 0;
}

/* Demangled: XMPMeta::ProcessXMLBuffer(char const*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16ProcessXMLBufferEPKcjb(void) {
    ALOGD("_ZN7XMPMeta16ProcessXMLBufferEPKcjb() called");
    return 0;
}

/* Demangled: DumpClearString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int (*)(void*, char const*, unsigned int), void*) */
extern "C" __attribute__((visibility("default"))) int _Z15DumpClearStringRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFiPvPKcjES8_(void) {
    ALOGD("_Z15DumpClearStringRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFiPvPKcjES8_() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::registerNamespace(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6stereo7XmpMeta17registerNamespaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZNK6stereo7XmpMeta17registerNamespaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: stereo::StereoConfigInfoParser::getBufferItemInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser21getBufferItemInstanceEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser21getBufferItemInstanceEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_CLEAR_IMAGE */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils16TYPE_CLEAR_IMAGEE = NULL;

/* Demangled: void std::__1::vector<StructItem*, std::__1::allocator<StructItem*> >::__push_back_slow_path<StructItem* const&>(StructItem* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10StructItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10StructItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: WXMPIterator_PropCTor_1 */
extern "C" __attribute__((visibility("default"))) int WXMPIterator_PropCTor_1(void) {
    ALOGD("WXMPIterator_PropCTor_1() called");
    return 0;
}

/* Demangled: stereo::BufferManager::pushBigBuffer(stereo::StereoBigBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13BufferManager13pushBigBufferEPNS_15StereoBigBufferE(void) {
    ALOGD("_ZN6stereo13BufferManager13pushBigBufferEPNS_15StereoBigBufferE() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamC2Ev(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamC2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoRWLock*> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoRWLock*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SA_EEEEENSJ_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SA_EEEEENSJ_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::~GoogleStereoInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserD2Ev(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserD2Ev() called");
    return 0;
}

/* Exported Object: vtable for stereo::GoogleStereoInfoParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo22GoogleStereoInfoParserE = NULL;

/* Demangled: stereo::SegmentMaskInfoParser::getSimpleValueInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser22getSimpleValueInstanceEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser22getSimpleValueInstanceEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::writeRefocusImage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoConfigInfo&, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor17writeRefocusImageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_16StereoConfigInfoERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor17writeRefocusImageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_16StereoConfigInfoERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: XMPMeta::DoesArrayItemExist(char const*, char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta18DoesArrayItemExistEPKcS1_i(void) {
    ALOGD("_ZNK7XMPMeta18DoesArrayItemExistEPKcS1_i() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::ReleaseFromWrite() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLock16ReleaseFromWriteEv(void) {
    ALOGD("_ZN17XMP_HomeGrownLock16ReleaseFromWriteEv() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_Ej(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_Ej() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::~XmpMetaOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperatorD2Ev(void) {
    ALOGD("_ZN6stereo15XmpMetaOperatorD2Ev() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::initSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser15initSimpleValueEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser15initSimpleValueEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::~StereoDepthInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserD2Ev(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >::__push_back_slow_path<XMP_Node* const&>(XMP_Node* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: XMPMeta::GetNamespacePrefix(char const*, char const**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta18GetNamespacePrefixEPKcPS1_Pj(void) {
    ALOGD("_ZN7XMPMeta18GetNamespacePrefixEPKcPS1_Pj() called");
    return 0;
}

/* Demangled: XMPMeta::DoesPropertyExist(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta17DoesPropertyExistEPKcS1_(void) {
    ALOGD("_ZNK7XMPMeta17DoesPropertyExistEPKcS1_() called");
    return 0;
}

/* Demangled: XMPUtils::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils10InitializeEv(void) {
    ALOGD("_ZN8XMPUtils10InitializeEv() called");
    return 0;
}

/* Demangled: WXMPMeta_SetProperty_Int64_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetProperty_Int64_1(void) {
    ALOGD("WXMPMeta_SetProperty_Int64_1() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::dumpJsonBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParser14dumpJsonBufferENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParser14dumpJsonBufferENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: XMPMeta::ResetErrorCallbackLimit(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta23ResetErrorCallbackLimitEj(void) {
    ALOGD("_ZN7XMPMeta23ResetErrorCallbackLimitEj() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToInt64(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils14ConvertToInt64EPKc(void) {
    ALOGD("_ZN8XMPUtils14ConvertToInt64EPKc() called");
    return 0;
}

/* Demangled: XMP_NamespaceTable::Dump(int (*)(void*, char const*, unsigned int), void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18XMP_NamespaceTable4DumpEPFiPvPKcjES0_(void) {
    ALOGD("_ZNK18XMP_NamespaceTable4DumpEPFiPvPKcjES0_() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfo::~StereoBufferInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16StereoBufferInfoD2Ev(void) {
    ALOGD("_ZN6stereo16StereoBufferInfoD2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser5writeEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser5writeEv() called");
    return 0;
}

/* Demangled: stereo::PackUtils::intToByteBuffer(int, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9PackUtils15intToByteBufferEiRNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo9PackUtils15intToByteBufferEiRNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: XMPUtils::DecodeFromBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils16DecodeFromBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils16DecodeFromBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::writeCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser17writeCustDataItemEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser17writeCustDataItemEv() called");
    return 0;
}

/* Demangled: XMPMeta::Erase() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta5EraseEv(void) {
    ALOGD("_ZN7XMPMeta5EraseEv() called");
    return 0;
}

/* Demangled: stereo::StereoBigBuffer::~StereoBigBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBufferD2Ev(void) {
    ALOGD("_ZN6stereo15StereoBigBufferD2Ev() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::grow(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream4growEi(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream4growEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<stereo::StereoBuffer, std::__1::allocator<stereo::StereoBuffer> >::__push_back_slow_path<stereo::StereoBuffer const&>(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getJpsHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getJpsHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getJpsHeightEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetNamespaceURI(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetNamespaceURIEPKcPS6_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetNamespaceURIEPKcPS6_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: stereo::XmpMeta::XmpMeta(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaC2ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo7XmpMetaC2ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ParseFromBuffer(char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ParseFromBufferEPKcjj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ParseFromBufferEPKcjj() called");
    return 0;
}

/* Demangled: DeleteEmptySchema(XMP_Node*) */
extern "C" __attribute__((visibility("default"))) int _Z17DeleteEmptySchemaP8XMP_Node(void) {
    ALOGD("_Z17DeleteEmptySchemaP8XMP_Node() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::AppendArrayItem(char const*, char const*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jS9_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jS9_j() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMaskHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getMaskHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getMaskHeightEv() called");
    return 0;
}

/* Demangled: stereo::Utils::writeBufferToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils17writeBufferToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo5Utils17writeBufferToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::readCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser16readCustDataItemEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser16readCustDataItemEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::readStereoDepthInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor19readStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor19readStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: SortNamedNodes(std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >&) */
extern "C" __attribute__((visibility("default"))) int _Z14SortNamedNodesRNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEE(void) {
    ALOGD("_Z14SortNamedNodesRNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: XML_Node::Serialize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node9SerializeEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XML_Node9SerializeEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoBigBuffer::StereoBigBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBufferC2Ej(void) {
    ALOGD("_ZN6stereo15StereoBigBufferC2Ej() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::getStructItemInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser21getStructItemInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser21getStructItemInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeFieldSelector(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_RKS6_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_RKS6_PS6_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE14__assign_multiINS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEEEvT_SM_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE14__assign_multiINS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEEEvT_SM_() called");
    return 0;
}

/* Demangled: WXMPMeta_DecrementRefCount_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DecrementRefCount_1(void) {
    ALOGD("WXMPMeta_DecrementRefCount_1() called");
    return 0;
}

/* Demangled: WXMPMeta_GetNamespaceURI_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetNamespaceURI_1(void) {
    ALOGD("WXMPMeta_GetNamespaceURI_1() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::~XmpPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPackerD1Ev(void) {
    ALOGD("_ZN6stereo9XmpPackerD1Ev() called");
    return 0;
}

/* Demangled: WXMPMeta_GetStructField_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetStructField_1(void) {
    ALOGD("WXMPMeta_GetStructField_1() called");
    return 0;
}

/* Demangled: WXMPMeta_SetDefaultErrorCallback_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetDefaultErrorCallback_1(void) {
    ALOGD("WXMPMeta_SetDefaultErrorCallback_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToLocalTime(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18ConvertToLocalTimeEP12XMP_DateTime(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18ConvertToLocalTimeEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::~CustomizedMetaOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperatorD2Ev(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperatorD2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfo::~StereoDepthInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoDepthInfoD0Ev(void) {
    ALOGD("_ZN6stereo15StereoDepthInfoD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getDepthBufferHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser20getDepthBufferHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser20getDepthBufferHeightEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: XMPUtils::ApplyTemplate(XMPMeta*, XMPMeta const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils13ApplyTemplateEP7XMPMetaRKS0_j(void) {
    ALOGD("_ZN8XMPUtils13ApplyTemplateEP7XMPMetaRKS0_j() called");
    return 0;
}

/* Exported Object: UTF32LE_to_UTF16LE */
extern "C" __attribute__((visibility("default"))) void* UTF32LE_to_UTF16LE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: DeleteSubtree(std::__1::__wrap_iter<XMP_Node**>) */
extern "C" __attribute__((visibility("default"))) int _Z13DeleteSubtreeNSt3__111__wrap_iterIPP8XMP_NodeEE(void) {
    ALOGD("_Z13DeleteSubtreeNSt3__111__wrap_iterIPP8XMP_NodeEE() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::setStructField(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMeta14setStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_S9_(void) {
    ALOGD("_ZN6stereo7XmpMeta14setStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_S9_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesStructFieldExist(char const*, char const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20DoesStructFieldExistEPKcS9_S9_S9_(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20DoesStructFieldExistEPKcS9_S9_S9_() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoBigBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo15StereoBigBufferE = NULL;

/* Exported Object: stereo::PackUtils::MAX_LEN_FOR_REAL_XMP_DATA_PER_APP1 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils34MAX_LEN_FOR_REAL_XMP_DATA_PER_APP1E = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::GoogleStereoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserC2EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserC2EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::SOS */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils3SOSE = NULL;

/* Demangled: unsigned int std::__1::__sort4<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRPFbP8XMP_NodeS2_EPS2_EEjT0_S7_S7_S7_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRPFbP8XMP_NodeS2_EPS2_EEjT0_S7_S7_S7_T_() called");
    return 0;
}

/* Demangled: SwapUTF32(unsigned int const*, unsigned int*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z9SwapUTF32PKjPjm(void) {
    ALOGD("_Z9SwapUTF32PKjPjm() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::~BufferTypeInputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStreamD0Ev(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStreamD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getDepthRotation() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser16getDepthRotationEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser16getDepthRotationEv() called");
    return 0;
}

/* Demangled: WXMPUtils_SetTimeZone_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_SetTimeZone_1(void) {
    ALOGD("WXMPUtils_SetTimeZone_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::RemoveProperties(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16RemovePropertiesEP8TXMPMetaIS6_EPKcSC_j(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16RemovePropertiesEP8TXMPMetaIS6_EPKcSC_j() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::readBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser14readBufferItemEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser14readBufferItemEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_UNKNOW_APP15 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17TYPE_UNKNOW_APP15E = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::AppendArrayItem(char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jRKS6_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jRKS6_j() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoBufferInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::__push_back_slow_path<XPathStepInfo>(XPathStepInfo&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: XMP_NamespaceTable::XMP_NamespaceTable(XMP_NamespaceTable const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18XMP_NamespaceTableC1ERKS_(void) {
    ALOGD("_ZN18XMP_NamespaceTableC1ERKS_() called");
    return 0;
}

/* Demangled: XML_Node::GetLeafContentValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XML_Node19GetLeafContentValueEv(void) {
    ALOGD("_ZNK8XML_Node19GetLeafContentValueEv() called");
    return 0;
}

/* Demangled: XMPMeta::DoesStructFieldExist(char const*, char const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta20DoesStructFieldExistEPKcS1_S1_S1_(void) {
    ALOGD("_ZNK7XMPMeta20DoesStructFieldExistEPKcS1_S1_S1_() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::getStructField(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6stereo7XmpMeta14getStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_PS7_(void) {
    ALOGD("_ZNK6stereo7XmpMeta14getStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_PS7_() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::readSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser15readSimpleValueEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser15readSimpleValueEv() called");
    return 0;
}

/* Demangled: XMPIterator::XMPIterator(XMPMeta const&, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorC1ERK7XMPMetaPKcS4_j(void) {
    ALOGD("_ZN11XMPIteratorC1ERK7XMPMetaPKcS4_j() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::write(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream5writeERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream5writeERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: void std::__1::vector<BufferItem*, std::__1::allocator<BufferItem*> >::__push_back_slow_path<BufferItem* const&>(BufferItem* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10BufferItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10BufferItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: stereo::PackUtils::byteBufferToInt(stereo::StereoBuffer const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9PackUtils15byteBufferToIntERKNS_12StereoBufferEii(void) {
    ALOGD("_ZN6stereo9PackUtils15byteBufferToIntERKNS_12StereoBufferEii() called");
    return 0;
}

/* Exported Object: void_wResult */
extern "C" __attribute__((visibility("default"))) void* void_wResult = NULL;

/* Demangled: stereo::XmpMeta::getPropertyBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6stereo7XmpMeta17getPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE(void) {
    ALOGD("_ZNK6stereo7XmpMeta17getPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::CustomizedDataPacker::unpack() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPacker6unpackEv(void) {
    ALOGD("_ZN6stereo20CustomizedDataPacker6unpackEv() called");
    return 0;
}

/* Demangled: XMPMeta::SetProperty_Int64(char const*, char const*, long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta17SetProperty_Int64EPKcS1_xj(void) {
    ALOGD("_ZN7XMPMeta17SetProperty_Int64EPKcS1_xj() called");
    return 0;
}

/* Demangled: XMPMeta::GetProperty_Int64(char const*, char const*, long long*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta17GetProperty_Int64EPKcS1_PxPj(void) {
    ALOGD("_ZNK7XMPMeta17GetProperty_Int64EPKcS1_PxPj() called");
    return 0;
}

/* Demangled: Initialize_LibUtils */
extern "C" __attribute__((visibility("default"))) int Initialize_LibUtils(void) {
    ALOGD("Initialize_LibUtils() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11GetPropertyEPKcS9_PS6_Pj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11GetPropertyEPKcS9_PS6_Pj() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperator9serializeEv(void) {
    ALOGD("_ZN6stereo15XmpMetaOperator9serializeEv() called");
    return 0;
}

/* Demangled: RDF_Parser::AddChildNode(XMP_Node*, XML_Node const&, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser12AddChildNodeEP8XMP_NodeRK8XML_NodePKcb(void) {
    ALOGD("_ZN10RDF_Parser12AddChildNodeEP8XMP_NodeRK8XML_NodePKcb() called");
    return 0;
}

/* Demangled: FindChildNode(XMP_Node*, char const*, bool, std::__1::__wrap_iter<XMP_Node**>*) */
extern "C" __attribute__((visibility("default"))) int _Z13FindChildNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE(void) {
    ALOGD("_Z13FindChildNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE() called");
    return 0;
}

/* Demangled: WXMPIterator_IncrementRefCount_1 */
extern "C" __attribute__((visibility("default"))) int WXMPIterator_IncrementRefCount_1(void) {
    ALOGD("WXMPIterator_IncrementRefCount_1() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_STANDARD_XMP */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17TYPE_STANDARD_XMPE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SB_EEEEENSK_INS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SB_EEEEENSK_INS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcSD_j(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcSD_j() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromBool(bool, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromBoolEbPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromBoolEbPS6_() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::initSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser15initSimpleValueEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser15initSimpleValueEv() called");
    return 0;
}

/* Demangled: RDF_Parser::ParseTypeOtherPropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser29ParseTypeOtherPropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser29ParseTypeOtherPropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: ExpandXPath(char const*, char const*, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >*) */
extern "C" __attribute__((visibility("default"))) int _Z11ExpandXPathPKcS0_PNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_Z11ExpandXPathPKcS0_PNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: Terminate_LibUtils */
extern "C" __attribute__((visibility("default"))) int Terminate_LibUtils(void) {
    ALOGD("Terminate_LibUtils() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, stereo::GoogleStereoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserC1ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserC1ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetQualifier(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_RKS6_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_RKS6_j() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToBool(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolERKS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolERKS6_() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::getSimpleValueInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser22getSimpleValueInstanceEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser22getSimpleValueInstanceEv() called");
    return 0;
}

/* Demangled: WXMPMeta_ResetErrorCallbackLimit_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_ResetErrorCallbackLimit_1(void) {
    ALOGD("WXMPMeta_ResetErrorCallbackLimit_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetNamespacePrefix(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18GetNamespacePrefixEPKcPS6_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18GetNamespacePrefixEPKcPS6_() called");
    return 0;
}

/* Demangled: stereo::ReadWriteLockFileUtils::readLock(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22ReadWriteLockFileUtils8readLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo22ReadWriteLockFileUtils8readLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeFieldSelector(char const*, char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_S9_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_S9_PS6_() called");
    return 0;
}

/* Demangled: XMPMeta::Clone(XMPMeta*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta5CloneEPS_j(void) {
    ALOGD("_ZNK7XMPMeta5CloneEPS_j() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFaceRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getFaceRatioEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getFaceRatioEv() called");
    return 0;
}

/* Demangled: FromUTF16Native(unsigned short const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z15FromUTF16NativePKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_Z15FromUTF16NativePKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WXMPMeta_SetProperty_Bool_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetProperty_Bool_1(void) {
    ALOGD("WXMPMeta_SetProperty_Bool_1() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetClientString(void*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::WRITE_XMP_AFTER_SOI */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils19WRITE_XMP_AFTER_SOIE = NULL;

/* Exported Object: UTF8_to_UTF16LE */
extern "C" __attribute__((visibility("default"))) void* UTF8_to_UTF16LE = NULL;

/* Demangled: stereo::XmpMeta::XmpMeta(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaC1EPKci(void) {
    ALOGD("_ZN6stereo7XmpMetaC1EPKci() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::~StereoCaptureInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParserD0Ev(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParserD0Ev() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::~XMP_HomeGrownLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLockD2Ev(void) {
    ALOGD("_ZN17XMP_HomeGrownLockD2Ev() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::PackageForJPEG(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14PackageForJPEGERK8TXMPMetaIS6_EPS6_SC_SC_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14PackageForJPEGERK8TXMPMetaIS6_EPS6_SC_SC_() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::read(stereo::StereoBuffer&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferEii(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferEii() called");
    return 0;
}

/* Demangled: stereo::JsonParser::~JsonParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParserD2Ev(void) {
    ALOGD("_ZN6stereo10JsonParserD2Ev() called");
    return 0;
}

/* Demangled: stereo::Utils::buffer2Str(stereo::StereoBuffer const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEjj(void) {
    ALOGD("_ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEjj() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::SegmentMaskInfoParser(stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::SegmentMaskInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParserC2ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParserC2ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE() called");
    return 0;
}

/* Demangled: XMPMeta::SetProperty_Float(char const*, char const*, double, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta17SetProperty_FloatEPKcS1_dj(void) {
    ALOGD("_ZN7XMPMeta17SetProperty_FloatEPKcS1_dj() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser5writeEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser5writeEv() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetTimeZone(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetTimeZoneEP12XMP_DateTime(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetTimeZoneEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::StereoInfoJsonParser(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParserC1ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParserC1ERKNS_12StereoBufferE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::kHexDigits */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils10kHexDigitsE = NULL;

/* Demangled: ExpatAdapter::ParseBuffer(void const*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12ExpatAdapter11ParseBufferEPKvmb(void) {
    ALOGD("_ZN12ExpatAdapter11ParseBufferEPKvmb() called");
    return 0;
}

/* Exported Object: sRegisteredAliasMap */
extern "C" __attribute__((visibility("default"))) void* sRegisteredAliasMap = NULL;

/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::MergeFromJPEG(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13MergeFromJPEGEP8TXMPMetaIS6_ERKS9_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13MergeFromJPEGEP8TXMPMetaIS6_ERKS9_() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::readUnsignedShort() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream17readUnsignedShortEv(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream17readUnsignedShortEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_EXIF */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils9TYPE_EXIFE = NULL;

/* Exported Object: voidBool */
extern "C" __attribute__((visibility("default"))) void* voidBool = NULL;

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::read(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferE() called");
    return 0;
}

/* Exported Object: voidInt32 */
extern "C" __attribute__((visibility("default"))) void* voidInt32 = NULL;

/* Demangled: WXMPMeta_DumpObject_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DumpObject_1(void) {
    ALOGD("WXMPMeta_DumpObject_1() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::ensureCapacity(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream14ensureCapacityEi(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream14ensureCapacityEi() called");
    return 0;
}

/* Demangled: XMPIterator::~XMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorD2Ev(void) {
    ALOGD("_ZN11XMPIteratorD2Ev() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeQualifierPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeQualifierPathEPKcS9_S9_S9_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeQualifierPathEPKcS9_S9_S9_PS6_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getJpsWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser11getJpsWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser11getJpsWidthEv() called");
    return 0;
}

/* Exported Object: UTF32BE_to_UTF8 */
extern "C" __attribute__((visibility("default"))) void* UTF32BE_to_UTF8 = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Bool(char const*, char const*, bool*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_BoolEPKcS9_PbPj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_BoolEPKcS9_PbPj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfo::~SegmentMaskInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15SegmentMaskInfoD1Ev(void) {
    ALOGD("_ZN6stereo15SegmentMaskInfoD1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParser9serializeEv(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParser9serializeEv() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToBool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolEPKc(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolEPKc() called");
    return 0;
}

/* Demangled: XMPMeta::Terminate() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta9TerminateEv(void) {
    ALOGD("_ZN7XMPMeta9TerminateEv() called");
    return 0;
}

/* Demangled: XMPMeta::~XMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMetaD2Ev(void) {
    ALOGD("_ZN7XMPMetaD2Ev() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcS9_j(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcS9_j() called");
    return 0;
}

/* Demangled: stereo::JsonParser::getValueDoubleFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser24getValueDoubleFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void) {
    ALOGD("_ZN6stereo10JsonParser24getValueDoubleFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_() called");
    return 0;
}

/* Demangled: stereo::ParserFactory::getParserInstance(int, void*, stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13ParserFactory17getParserInstanceEiPvRKNS_12StereoBufferES4_PNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEE(void) {
    ALOGD("_ZN6stereo13ParserFactory17getParserInstanceEiPvRKNS_12StereoBufferES4_PNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEE() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::initCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser16initCustDataItemEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser16initCustDataItemEv() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::CustomizedMeta(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMetaC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void) {
    ALOGD("_ZN6stereo14CustomizedMetaC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE() called");
    return 0;
}

/* Demangled: WXMPUtils_ApplyTemplate_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ApplyTemplate_1(void) {
    ALOGD("WXMPUtils_ApplyTemplate_1() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::MD5_BYTE_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils14MD5_BYTE_COUNTE = NULL;

/* Demangled: XMPIterator::Skip(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIterator4SkipEj(void) {
    ALOGD("_ZN11XMPIterator4SkipEj() called");
    return 0;
}

/* Demangled: XMPMeta::GetProperty(char const*, char const*, char const**, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta11GetPropertyEPKcS1_PS1_PjS3_(void) {
    ALOGD("_ZNK7XMPMeta11GetPropertyEPKcS1_PS1_PjS3_() called");
    return 0;
}

/* Demangled: NormalizeLangArray(XMP_Node*) */
extern "C" __attribute__((visibility("default"))) int _Z18NormalizeLangArrayP8XMP_Node(void) {
    ALOGD("_Z18NormalizeLangArrayP8XMP_Node() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CompareDateTime(XMP_DateTime const&, XMP_DateTime const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CompareDateTimeERK12XMP_DateTimeSA_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CompareDateTimeERK12XMP_DateTimeSA_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getPosY() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser7getPosYEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser7getPosYEv() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::~SegmentMaskInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParserD2Ev(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParserD2Ev() called");
    return 0;
}

/* Demangled: XMPMeta::GetStructField(char const*, char const*, char const*, char const*, char const**, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta14GetStructFieldEPKcS1_S1_S1_PS1_PjS3_(void) {
    ALOGD("_ZNK7XMPMeta14GetStructFieldEPKcS1_S1_S1_PS1_PjS3_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CatenateArrayItems(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, char const*, char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18CatenateArrayItemsERK8TXMPMetaIS6_EPKcSD_SD_SD_jPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18CatenateArrayItemsERK8TXMPMetaIS6_EPKcSD_SD_SD_jPS6_() called");
    return 0;
}

/* Exported Object: vtable for stereo::XmpMetaOperator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo15XmpMetaOperatorE = NULL;

/* Demangled: std::__1::__vector_base<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorIiNS_9allocatorIiEEEENS2_IS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorIiNS_9allocatorIiEEEENS2_IS4_EEED2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::StereoInfoJsonParser(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParserC2ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParserC2ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: XMPMeta::GetProperty_Float(char const*, char const*, double*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta17GetProperty_FloatEPKcS1_PdPj(void) {
    ALOGD("_ZNK7XMPMeta17GetProperty_FloatEPKcS1_PdPj() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Skip(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SkipEj(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SkipEj() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::initStructItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser14initStructItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser14initStructItemEv() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::readSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser15readSimpleValueEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser15readSimpleValueEv() called");
    return 0;
}

/* Demangled: WXMPMeta_DoesArrayItemExist_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DoesArrayItemExist_1(void) {
    ALOGD("WXMPMeta_DoesArrayItemExist_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetObjectOptions(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetObjectOptionsEj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetObjectOptionsEj() called");
    return 0;
}

/* Demangled: stereo::Utils::buffer2Str(stereo::StereoBuffer const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEj(void) {
    ALOGD("_ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEj() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToFloat(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils14ConvertToFloatEPKc(void) {
    ALOGD("_ZN8XMPUtils14ConvertToFloatEPKc() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Bool(char const*, char const*, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_BoolEPKcS9_bj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_BoolEPKcS9_bj() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser9serializeEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser9serializeEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoDepthInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE() called");
    return 0;
}

/* Demangled: RDF_Parser::ResourcePropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser23ResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser23ResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: XMPMeta::SetObjectName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta13SetObjectNameEPKc(void) {
    ALOGD("_ZN7XMPMeta13SetObjectNameEPKc() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcSD_j(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcSD_j() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: stereo::StereoBufferInfoParser::~StereoBufferInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserD2Ev(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserD2Ev() called");
    return 0;
}

/* Demangled: XMPMeta::SetProperty(char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta11SetPropertyEPKcS1_S1_j(void) {
    ALOGD("_ZN7XMPMeta11SetPropertyEPKcS1_S1_j() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ResetErrorCallbackLimit(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23ResetErrorCallbackLimitEj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23ResetErrorCallbackLimitEj() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::makeExtXmpData(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPacker14makeExtXmpDataERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo9XmpPacker14makeExtXmpDataERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: ToUTF32(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z7ToUTF32PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_Z7ToUTF32PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::XMP_HomeGrownLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLockC2Ev(void) {
    ALOGD("_ZN17XMP_HomeGrownLockC2Ev() called");
    return 0;
}

/* Demangled: XMP_NamespaceTable::XMP_NamespaceTable(XMP_NamespaceTable const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18XMP_NamespaceTableC2ERKS_(void) {
    ALOGD("_ZN18XMP_NamespaceTableC2ERKS_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetGlobalOptions() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetGlobalOptionsEv(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetGlobalOptionsEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::getMtkChaVerifyLevel(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor20getMtkChaVerifyLevelERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor20getMtkChaVerifyLevelERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: void std::__1::vector<XML_Node*, std::__1::allocator<XML_Node*> >::__push_back_slow_path<XML_Node* const&>(XML_Node* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: WXMPMeta_SetProperty_Int_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetProperty_Int_1(void) {
    ALOGD("WXMPMeta_SetProperty_Int_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CurrentDateTime(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CurrentDateTimeEP12XMP_DateTime(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CurrentDateTimeEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfo::~StereoCaptureInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo17StereoCaptureInfoD1Ev(void) {
    ALOGD("_ZN6stereo17StereoCaptureInfoD1Ev() called");
    return 0;
}

/* Demangled: stereo::CustomizedDataPacker::~CustomizedDataPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPackerD0Ev(void) {
    ALOGD("_ZN6stereo20CustomizedDataPackerD0Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::MAX_BYTE_PER_APP1 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17MAX_BYTE_PER_APP1E = NULL;

/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_() called");
    return 0;
}

/* Demangled: XMPMeta::GetProperty_Int(char const*, char const*, int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta15GetProperty_IntEPKcS1_PiPj(void) {
    ALOGD("_ZNK7XMPMeta15GetProperty_IntEPKcS1_PiPj() called");
    return 0;
}

/* Demangled: VerifySetOptions(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16VerifySetOptionsjPKc(void) {
    ALOGD("_Z16VerifySetOptionsjPKc() called");
    return 0;
}

/* Exported Object: CodePoint_from_UTF16BE */
extern "C" __attribute__((visibility("default"))) void* CodePoint_from_UTF16BE = NULL;

/* Demangled: WXMPMeta_DumpNamespaces_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DumpNamespaces_1(void) {
    ALOGD("WXMPMeta_DumpNamespaces_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToDate_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToDate_1(void) {
    ALOGD("WXMPUtils_ConvertToDate_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Int64(char const*, char const*, long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_Int64EPKcS9_xj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_Int64EPKcS9_xj() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::~StereoInfoJsonParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParserD2Ev(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParserD2Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DumpNamespaces(int (*)(void*, char const*, unsigned int), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DumpNamespacesEPFiPvPKcjES8_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DumpNamespacesEPFiPvPKcjES8_() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoInfoJsonParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo20StereoInfoJsonParserE = NULL;

/* Exported Object: stereo::PackUtils::STR_TERMINATOR_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils21STR_TERMINATOR_LENGTHE = NULL;

/* Demangled: stereo::StereoInfoAccessor::~StereoInfoAccessor() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessorD2Ev(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessorD2Ev() called");
    return 0;
}

/* Demangled: XMP_NewExpatAdapter */
extern "C" __attribute__((visibility("default"))) int XMP_NewExpatAdapter(void) {
    ALOGD("XMP_NewExpatAdapter() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::~CustomizedMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMetaD0Ev(void) {
    ALOGD("_ZN6stereo14CustomizedMetaD0Ev() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::getBufferItemInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser21getBufferItemInstanceEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser21getBufferItemInstanceEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::JpgPacker(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPackerC2EPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo9JpgPackerC2EPNS_8PackInfoE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcj() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::writeImageBuffer(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker16writeImageBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE(void) {
    ALOGD("_ZN6stereo9JpgPacker16writeImageBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::APP1 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils4APP1E = NULL;

/* Demangled: ExpatAdapter::ExpatAdapter(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12ExpatAdapterC1Eb(void) {
    ALOGD("_ZN12ExpatAdapterC1Eb() called");
    return 0;
}

/* Demangled: WXMPMeta_DoesQualifierExist_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DoesQualifierExist_1(void) {
    ALOGD("WXMPMeta_DoesQualifierExist_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteProperty(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DeletePropertyEPKcS9_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DeletePropertyEPKcS9_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: XMPMeta::XMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMetaC2Ev(void) {
    ALOGD("_ZN7XMPMetaC2Ev() called");
    return 0;
}

/* Demangled: ExpatAdapter::~ExpatAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN12ExpatAdapterD1Ev(void) {
    ALOGD("_ZN12ExpatAdapterD1Ev() called");
    return 0;
}

/* Demangled: RDF_Parser::AddQualifierNode(XMP_Node*, XML_Node const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRK8XML_Node(void) {
    ALOGD("_ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRK8XML_Node() called");
    return 0;
}

/* Demangled: XMPUtils::ComposeStructFieldPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils22ComposeStructFieldPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils22ComposeStructFieldPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Terminate() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE9TerminateEv(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE9TerminateEv() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToUTCTime(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertToUTCTimeEP12XMP_DateTime(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertToUTCTimeEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: XMPMeta::DeleteQualifier(char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15DeleteQualifierEPKcS1_S1_S1_(void) {
    ALOGD("_ZN7XMPMeta15DeleteQualifierEPKcS1_S1_S1_() called");
    return 0;
}

/* Demangled: ToUTF16(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z7ToUTF16PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_Z7ToUTF16PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetQualifier(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetQualifierEPKcS9_S9_S9_PS6_Pj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetQualifierEPKcS9_S9_S9_PS6_Pj() called");
    return 0;
}

/* Exported Object: vtable for stereo::XmpMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo7XmpMetaE = NULL;

/* Demangled: stereo::StereoInfoJsonParser::getGoogleDepthWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser19getGoogleDepthWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser19getGoogleDepthWidthEv() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::~StereoConfigInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserD0Ev(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserD0Ev() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::~JpgPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPackerD2Ev(void) {
    ALOGD("_ZN6stereo9JpgPackerD2Ev() called");
    return 0;
}

/* Demangled: XMP_ReadWriteLock::Release() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_ReadWriteLock7ReleaseEv(void) {
    ALOGD("_ZN17XMP_ReadWriteLock7ReleaseEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_(void) {
    ALOGD("_ZNSt3__16__sortIRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::setPropertyString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMeta17setPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void) {
    ALOGD("_ZN6stereo7XmpMeta17setPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::getSimpleValueInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser22getSimpleValueInstanceEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser22getSimpleValueInstanceEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev() called");
    return 0;
}

/* Demangled: stereo::MetaOperatorFactory::getOperatorInstance(int, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo19MetaOperatorFactory19getOperatorInstanceEiRKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEE(void) {
    ALOGD("_ZN6stereo19MetaOperatorFactory19getOperatorInstanceEiRKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEE() called");
    return 0;
}

/* Exported Object: xdefaultName */
extern "C" __attribute__((visibility("default"))) void* xdefaultName = NULL;

/* Demangled: stereo::XmpMeta::XmpMeta(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaC2EPKci(void) {
    ALOGD("_ZN6stereo7XmpMetaC2EPKci() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMetaBufferWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser18getMetaBufferWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser18getMetaBufferWidthEv() called");
    return 0;
}

/* Demangled: XMPMeta::Sort() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta4SortEv(void) {
    ALOGD("_ZN7XMPMeta4SortEv() called");
    return 0;
}

/* Demangled: WXMPUtils_EncodeToBase64_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_EncodeToBase64_1(void) {
    ALOGD("WXMPUtils_EncodeToBase64_1() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::WRITE_XMP_BEFORE_FIRST_APP1 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils27WRITE_XMP_BEFORE_FIRST_APP1E = NULL;

/* Demangled: XMPIterator::XMPIterator(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorC2EPKcS1_j(void) {
    ALOGD("_ZN11XMPIteratorC2EPKcS1_j() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CountArrayItems(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CountArrayItemsEPKcS9_(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CountArrayItemsEPKcS9_() called");
    return 0;
}

/* Exported Object: vtable for stereo::GoogleStereoInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo16GoogleStereoInfoE = NULL;

/* Demangled: stereo::JpgPacker::makeJpgSections(int, std::__1::vector<stereo::StereoBuffer, std::__1::allocator<stereo::StereoBuffer> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker15makeJpgSectionsEiPNSt3__16vectorINS_12StereoBufferENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6stereo9JpgPacker15makeJpgSectionsEiPNSt3__16vectorINS_12StereoBufferENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: WXMPMeta_SetGlobalOptions_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetGlobalOptions_1(void) {
    ALOGD("WXMPMeta_SetGlobalOptions_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Float(char const*, char const*, double, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_FloatEPKcS9_dj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_FloatEPKcS9_dj() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFocusType() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getFocusTypeEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getFocusTypeEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMtkChaVerifyLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser20getMtkChaVerifyLevelEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser20getMtkChaVerifyLevelEv() called");
    return 0;
}

/* Demangled: XMPMeta::SetGlobalOptions(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16SetGlobalOptionsEj(void) {
    ALOGD("_ZN7XMPMeta16SetGlobalOptionsEj() called");
    return 0;
}

/* Demangled: WXMPMeta_DeleteArrayItem_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DeleteArrayItem_1(void) {
    ALOGD("WXMPMeta_DeleteArrayItem_1() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: XMPMeta::SetStructField(char const*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta14SetStructFieldEPKcS1_S1_S1_S1_j(void) {
    ALOGD("_ZN7XMPMeta14SetStructFieldEPKcS1_S1_S1_S1_j() called");
    return 0;
}

/* Demangled: XMPIterator::Terminate() */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIterator9TerminateEv(void) {
    ALOGD("_ZN11XMPIterator9TerminateEv() called");
    return 0;
}

/* Demangled: XMPIterator::XMPIterator(XMPMeta const&, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorC2ERK7XMPMetaPKcS4_j(void) {
    ALOGD("_ZN11XMPIteratorC2ERK7XMPMetaPKcS4_j() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::XmpMetaOperator(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperatorC1ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo15XmpMetaOperatorC1ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMaskSize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser11getMaskSizeEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser11getMaskSizeEv() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfo::~GoogleStereoInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16GoogleStereoInfoD0Ev(void) {
    ALOGD("_ZN6stereo16GoogleStereoInfoD0Ev() called");
    return 0;
}

/* Demangled: WXMPMeta_Terminate_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_Terminate_1(void) {
    ALOGD("WXMPMeta_Terminate_1() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::getSimpleValueInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser22getSimpleValueInstanceEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser22getSimpleValueInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: stereo::PackUtils::XMP_COMMON_HEADER_LEN */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils21XMP_COMMON_HEADER_LENE = NULL;

/* Demangled: LookupLangItem(XMP_Node const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _Z14LookupLangItemPK8XMP_NodeRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_Z14LookupLangItemPK8XMP_NodeRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseI13XPathStepInfoNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseI13XPathStepInfoNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromInt(long, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertFromIntElPKcPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertFromIntElPKcPS6_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

/* Demangled: stereo::StereoConfigInfoParser::writeCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser17writeCustDataItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser17writeCustDataItemEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::STR_TERMINATOR */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils14STR_TERMINATORE = NULL;

/* Exported Object: vtable for stereo::StereoInfoAccessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo18StereoInfoAccessorE = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteNamespace(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteNamespaceEPKc(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteNamespaceEPKc() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGDepthFar() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getGDepthFarEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getGDepthFarEv() called");
    return 0;
}

/* Exported Object: UTF16LE_to_UTF8 */
extern "C" __attribute__((visibility("default"))) void* UTF16LE_to_UTF8 = NULL;

/* Demangled: stereo::StereoBufferInfoParser::readCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser16readCustDataItemEv(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser16readCustDataItemEv() called");
    return 0;
}

/* Demangled: RDF_Parser::EmptyPropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser20EmptyPropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser20EmptyPropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: WXMPUtils_ComposeFieldSelector_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ComposeFieldSelector_1(void) {
    ALOGD("WXMPUtils_ComposeFieldSelector_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt64(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64EPKc(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64EPKc() called");
    return 0;
}

/* Exported Object: typeinfo for XMP_Error */
extern "C" __attribute__((visibility("default"))) void* _ZTI9XMP_Error = NULL;

/* Demangled: stereo::StereoBigBuffer::allocate(unsigned int, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBuffer8allocateEjRNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo15StereoBigBuffer8allocateEjRNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::Utils::isDirExist(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils10isDirExistEPKc(void) {
    ALOGD("_ZN6stereo5Utils10isDirExistEPKc() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_LDC_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils13TYPE_LDC_DATAE = NULL;

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ApplyTemplate(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ApplyTemplateEP8TXMPMetaIS6_ERKS9_j(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ApplyTemplateEP8TXMPMetaIS6_ERKS9_j() called");
    return 0;
}

/* Exported Object: stereo::Utils::ENABLE_BUFFER_DUMP */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo5Utils18ENABLE_BUFFER_DUMPE = NULL;

/* Demangled: stereo::XmpPacker::XmpPacker(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPackerC1EPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo9XmpPackerC1EPNS_8PackInfoE() called");
    return 0;
}

/* Demangled: RDF_Parser::RDF(XMP_Node*, XML_Node const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser3RDFEP8XMP_NodeRK8XML_Node(void) {
    ALOGD("_ZN10RDF_Parser3RDFEP8XMP_NodeRK8XML_Node() called");
    return 0;
}

/* Demangled: XMPMeta::ProcessRDF(XML_Node const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta10ProcessRDFERK8XML_Nodej(void) {
    ALOGD("_ZN7XMPMeta10ProcessRDFERK8XML_Nodej() called");
    return 0;
}

/* Demangled: WXMPMeta_DeleteLocalizedText_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DeleteLocalizedText_1(void) {
    ALOGD("WXMPMeta_DeleteLocalizedText_1() called");
    return 0;
}

/* Demangled: stereo::BufferManager::createBuffer(unsigned int, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13BufferManager12createBufferEjRNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo13BufferManager12createBufferEjRNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getPhoVerifyLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser17getPhoVerifyLevelEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser17getPhoVerifyLevelEv() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfo::~StereoConfigInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16StereoConfigInfoD0Ev(void) {
    ALOGD("_ZN6stereo16StereoConfigInfoD0Ev() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(stereo::IMetaOperator*, stereo::StereoBufferInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserC1EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserC1EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::~XmpPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPackerD2Ev(void) {
    ALOGD("_ZN6stereo9XmpPackerD2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoBigBuffer::isAvaliable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBuffer11isAvaliableEj(void) {
    ALOGD("_ZN6stereo15StereoBigBuffer11isAvaliableEj() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream5resetEv(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream5resetEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfo::~StereoDepthInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoDepthInfoD1Ev(void) {
    ALOGD("_ZN6stereo15StereoDepthInfoD1Ev() called");
    return 0;
}

/* Demangled: WXMPMeta_Sort_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_Sort_1(void) {
    ALOGD("WXMPMeta_Sort_1() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::XmpMetaOperator(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperatorC2ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo15XmpMetaOperatorC2ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: GenericErrorCallback::NotifyClient(unsigned char, XMP_Error&, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK20GenericErrorCallback12NotifyClientEhR9XMP_ErrorPKc(void) {
    ALOGD("_ZNK20GenericErrorCallback12NotifyClientEhR9XMP_ErrorPKc() called");
    return 0;
}

/* Demangled: WXMPMeta_SetErrorCallback_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetErrorCallback_1(void) {
    ALOGD("WXMPMeta_SetErrorCallback_1() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::setPropertyBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMeta17setPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo7XmpMeta17setPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::~XmpMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaD0Ev(void) {
    ALOGD("_ZN6stereo7XmpMetaD0Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Int64(char const*, char const*, long long*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_Int64EPKcS9_PxPj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_Int64EPKcS9_PxPj() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::setData(DataCollections*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperator7setDataEP15DataCollections(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperator7setDataEP15DataCollections() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::getFilePointer() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream14getFilePointerEv(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream14getFilePointerEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::CUSTOMIZED_TOTAL_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils23CUSTOMIZED_TOTAL_LENGTHE = NULL;

/* Demangled: XMP_NamespaceTable::Define(char const*, char const*, char const**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN18XMP_NamespaceTable6DefineEPKcS1_PS1_Pj(void) {
    ALOGD("_ZN18XMP_NamespaceTable6DefineEPKcS1_PS1_Pj() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetInternalRef() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetInternalRefEv(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetInternalRefEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMetaBufferHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser19getMetaBufferHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser19getMetaBufferHeightEv() called");
    return 0;
}

/* Demangled: stereo::Utils::d2str(double const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils5d2strERKdRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo5Utils5d2strERKdRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TOTAL_LENGTH_BYTE_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils23TOTAL_LENGTH_BYTE_COUNTE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE4findIS7_EENS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE4findIS7_EENS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEERKT_() called");
    return 0;
}

/* Exported Object: vtable for XMP_NamespaceTable */
extern "C" __attribute__((visibility("default"))) void* _ZTV18XMP_NamespaceTable = NULL;

/* Demangled: stereo::BufferTypeInputStream::~BufferTypeInputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStreamD1Ev(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStreamD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: rapidjson::internal::Pow10(int)::e */
extern "C" __attribute__((visibility("default"))) void* _ZZN9rapidjson8internal5Pow10EiE1e = NULL;

/* Demangled: _ZNSt3__16vectorIcNS_9allocatorIcEEE6insertIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIPcEEE4typeENSB_IPKcEES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE6insertIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIPcEEE4typeENSB_IPKcEES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE6insertIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIPcEEE4typeENSB_IPKcEES7_S7_() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::writeCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser17writeCustDataItemEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser17writeCustDataItemEv() called");
    return 0;
}

/* Demangled: std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >::vector(std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: WXMPMeta_Initialize_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_Initialize_1(void) {
    ALOGD("WXMPMeta_Initialize_1() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: stereo::GoogleStereoInfoParser::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser5writeEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser5writeEv() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoDepthInfoParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo21StereoDepthInfoParserE = NULL;

/* Demangled: XMPMeta::GetVersionInfo(XMP_VersionInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta14GetVersionInfoEP15XMP_VersionInfo(void) {
    ALOGD("_ZN7XMPMeta14GetVersionInfoEP15XMP_VersionInfo() called");
    return 0;
}

/* Demangled: GenericErrorCallback::CheckLimitAndSeverity(unsigned char) const */
extern "C" __attribute__((visibility("default"))) int _ZNK20GenericErrorCallback21CheckLimitAndSeverityEh(void) {
    ALOGD("_ZNK20GenericErrorCallback21CheckLimitAndSeverityEh() called");
    return 0;
}

/* Demangled: XMPMeta::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta10InitializeEv(void) {
    ALOGD("_ZN7XMPMeta10InitializeEv() called");
    return 0;
}

/* Demangled: XMPMeta::GetArrayItem(char const*, char const*, int, char const**, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta12GetArrayItemEPKcS1_iPS1_PjS3_(void) {
    ALOGD("_ZNK7XMPMeta12GetArrayItemEPKcS1_iPS1_PjS3_() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::writeCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser17writeCustDataItemEv(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser17writeCustDataItemEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::writeCust(stereo::BufferTypeOutputStream&, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker9writeCustERNS_22BufferTypeOutputStreamEPNSt3__16vectorIPNS_7SectionENS3_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN6stereo9JpgPacker9writeCustERNS_22BufferTypeOutputStreamEPNSt3__16vectorIPNS_7SectionENS3_9allocatorIS6_EEEE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::DHT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils3DHTE = NULL;

/* Demangled: stereo::XmpPacker::pack() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPacker4packEv(void) {
    ALOGD("_ZN6stereo9XmpPacker4packEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<XML_Node*, std::__1::allocator<XML_Node*> >::__push_back_slow_path<XML_Node*>(XML_Node*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: WXMPMeta_Clone_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_Clone_1(void) {
    ALOGD("WXMPMeta_Clone_1() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: XMP_NamespaceTable::GetPrefix(char const*, char const**, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18XMP_NamespaceTable9GetPrefixEPKcPS1_Pj(void) {
    ALOGD("_ZNK18XMP_NamespaceTable9GetPrefixEPKcPS1_Pj() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcj() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser9serializeEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser9serializeEv() called");
    return 0;
}

/* Demangled: std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >::insert(std::__1::__wrap_iter<XMP_Node* const*>, XMP_Node* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE6insertENS_11__wrap_iterIPKS2_EERS7_(void) {
    ALOGD("_ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE6insertENS_11__wrap_iterIPKS2_EERS7_() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::seek(long) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream4seekEl(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream4seekEl() called");
    return 0;
}

/* Demangled: XMPMeta::GetObjectOptions() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta16GetObjectOptionsEv(void) {
    ALOGD("_ZNK7XMPMeta16GetObjectOptionsEv() called");
    return 0;
}

/* Exported Object: vtable for XMPMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTV7XMPMeta = NULL;

/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRPFbP8XMP_NodeS2_EPS2_EEbT0_S7_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRPFbP8XMP_NodeS2_EPS2_EEbT0_S7_T_() called");
    return 0;
}

/* Demangled: WXMPIterator_TableCTor_1 */
extern "C" __attribute__((visibility("default"))) int WXMPIterator_TableCTor_1(void) {
    ALOGD("WXMPIterator_TableCTor_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertFromDate_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertFromDate_1(void) {
    ALOGD("WXMPUtils_ConvertFromDate_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesQualifierExist(char const*, char const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesQualifierExistEPKcS9_S9_S9_(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesQualifierExistEPKcS9_S9_S9_() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::BufferTypeInputStream(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStreamC2ERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStreamC2ERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::Utils::buffer2Str(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferE() called");
    return 0;
}

/* Exported Object: vtable for XMLParserAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTV16XMLParserAdapter = NULL;

/* Demangled: XMPUtils::CatenateArrayItems(XMPMeta const&, char const*, char const*, char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils18CatenateArrayItemsERK7XMPMetaPKcS4_S4_S4_jPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils18CatenateArrayItemsERK7XMPMetaPKcS4_S4_S4_jPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMP_ReadWriteLock::~XMP_ReadWriteLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_ReadWriteLockD1Ev(void) {
    ALOGD("_ZN17XMP_ReadWriteLockD1Ev() called");
    return 0;
}

/* Demangled: XML_Node::CountNamedElements(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XML_Node18CountNamedElementsEPKcS1_(void) {
    ALOGD("_ZNK8XML_Node18CountNamedElementsEPKcS1_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Clone(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5CloneEj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5CloneEj() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::~BufferTypeOutputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamD0Ev(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamD0Ev() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoConfigInfoParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo22StereoConfigInfoParserE = NULL;

/* Demangled: void std::__1::__sort<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_(void) {
    ALOGD("_ZNSt3__16__sortIRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_() called");
    return 0;
}

/* Exported Object: kXMPCore_EmbeddedCopyright */
extern "C" __attribute__((visibility("default"))) void* kXMPCore_EmbeddedCopyright = NULL;

/* Demangled: stereo::StereoConfigInfoParser::writeSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser16writeSimpleValueEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser16writeSimpleValueEv() called");
    return 0;
}

/* Demangled: XMPMeta::DumpNamespaces(int (*)(void*, char const*, unsigned int), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta14DumpNamespacesEPFiPvPKcjES0_(void) {
    ALOGD("_ZN7XMPMeta14DumpNamespacesEPFiPvPKcjES0_() called");
    return 0;
}

/* Demangled: XMPMeta::SetErrorCallback(unsigned char (*)(bool (*)(void*, unsigned char, int, char const*), void*, unsigned char, int, char const*), bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16SetErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j(void) {
    ALOGD("_ZN7XMPMeta16SetErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::setPropertyBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMeta17setPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo14CustomizedMeta17setPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::initBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser14initBufferItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser14initBufferItemEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeLangSelector(char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_S9_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_S9_PS6_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::decodeMaskBuffer(std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >*, int, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser16decodeMaskBufferEPNSt3__16vectorINS2_IiNS1_9allocatorIiEEEENS3_IS5_EEEEiRNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser16decodeMaskBufferEPNSt3__16vectorINS2_IiNS1_9allocatorIiEEEENS3_IS5_EEEEiRNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: XMPMeta::GetProperty_Bool(char const*, char const*, bool*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta16GetProperty_BoolEPKcS1_PbPj(void) {
    ALOGD("_ZNK7XMPMeta16GetProperty_BoolEPKcS1_PbPj() called");
    return 0;
}

/* Exported Object: INVALID_BUFFER */
extern "C" __attribute__((visibility("default"))) void* INVALID_BUFFER = NULL;

/* Demangled: stereo::JsonParser::getValueStringFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser24getValueStringFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void) {
    ALOGD("_ZN6stereo10JsonParser24getValueStringFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::GoogleStereoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserC1EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserC1EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE() called");
    return 0;
}

/* Demangled: RDF_Parser::ParseTypeCollectionPropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser34ParseTypeCollectionPropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser34ParseTypeCollectionPropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperator9serializeEv(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperator9serializeEv() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::CustomizedMetaOperator(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperatorC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperatorC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::~StereoCaptureInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParserD1Ev(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParserD1Ev() called");
    return 0;
}

/* Demangled: WXMPMeta_GetProperty_Date_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetProperty_Date_1(void) {
    ALOGD("WXMPMeta_GetProperty_Date_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DumpObject(int (*)(void*, char const*, unsigned int), void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10DumpObjectEPFiPvPKcjES8_(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10DumpObjectEPFiPvPKcjES8_() called");
    return 0;
}

/* Demangled: XMPMeta::GetQualifier(char const*, char const*, char const*, char const*, char const**, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta12GetQualifierEPKcS1_S1_S1_PS1_PjS3_(void) {
    ALOGD("_ZNK7XMPMeta12GetQualifierEPKcS1_S1_S1_PS1_PjS3_() called");
    return 0;
}

/* Demangled: DetectAltText(XMP_Node*) */
extern "C" __attribute__((visibility("default"))) int _Z13DetectAltTextP8XMP_Node(void) {
    ALOGD("_Z13DetectAltTextP8XMP_Node() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGFocusFocalPointX() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointXEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointXEv() called");
    return 0;
}

/* Demangled: stereo::Utils::encodePng(stereo::StereoBuffer const&, int, int, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils9encodePngERKNS_12StereoBufferEiiRS1_(void) {
    ALOGD("_ZN6stereo5Utils9encodePngERKNS_12StereoBufferEiiRS1_() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser4readEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser4readEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::XMP_EXT_HEADER */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils14XMP_EXT_HEADERE = NULL;

/* Demangled: stereo::PackerManager::unpack(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13PackerManager6unpackERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo13PackerManager6unpackERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::readGoogleStereoInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor20readGoogleStereoInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor20readGoogleStereoInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMPUtils::CompareDateTime(XMP_DateTime const&, XMP_DateTime const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils15CompareDateTimeERK12XMP_DateTimeS2_(void) {
    ALOGD("_ZN8XMPUtils15CompareDateTimeERK12XMP_DateTimeS2_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Float(char const*, char const*, double*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_FloatEPKcS9_PdPj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_FloatEPKcS9_PdPj() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::writeShort(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream10writeShortEi(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream10writeShortEi() called");
    return 0;
}

/* Demangled: XMPMeta::DeleteArrayItem(char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15DeleteArrayItemEPKcS1_i(void) {
    ALOGD("_ZN7XMPMeta15DeleteArrayItemEPKcS1_i() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev() called");
    return 0;
}

/* Demangled: FindQualifierNode(XMP_Node*, char const*, bool, std::__1::__wrap_iter<XMP_Node**>*) */
extern "C" __attribute__((visibility("default"))) int _Z17FindQualifierNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE(void) {
    ALOGD("_Z17FindQualifierNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToFloat(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatERKS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatERKS6_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFocusBottom() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser14getFocusBottomEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser14getFocusBottomEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::AcquireForRead() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLock14AcquireForReadEv(void) {
    ALOGD("_ZN17XMP_HomeGrownLock14AcquireForReadEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetDefaultErrorCallback(bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23SetDefaultErrorCallbackEPFbPvhiPKcES8_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23SetDefaultErrorCallbackEPFbPvhiPKcES8_j() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DecodeFromBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64EPKcjPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64EPKcjPS6_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::writeStereoCaptureInfo(stereo::StereoCaptureInfo&, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor22writeStereoCaptureInfoERNS_17StereoCaptureInfoERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor22writeStereoCaptureInfoERNS_17StereoCaptureInfoERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: XML_Node::GetAttrValue(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XML_Node12GetAttrValueEPKc(void) {
    ALOGD("_ZNK8XML_Node12GetAttrValueEPKc() called");
    return 0;
}

/* Demangled: WXMPMeta_SetStructField_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetStructField_1(void) {
    ALOGD("WXMPMeta_SetStructField_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertFromFloat_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertFromFloat_1(void) {
    ALOGD("WXMPUtils_ConvertFromFloat_1() called");
    return 0;
}

/* Demangled: stereo::BufferManager::findBigBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13BufferManager14findBigBuffersEv(void) {
    ALOGD("_ZN6stereo13BufferManager14findBigBuffersEv() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfo::~SegmentMaskInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15SegmentMaskInfoD2Ev(void) {
    ALOGD("_ZN6stereo15SegmentMaskInfoD2Ev() called");
    return 0;
}

/* Demangled: RDF_Parser::LiteralPropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser22LiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser22LiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: XML_Node::SetLeafContentValue(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node19SetLeafContentValueEPKc(void) {
    ALOGD("_ZN8XML_Node19SetLeafContentValueEPKc() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DecodeFromBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64ERKS6_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64ERKS6_PS6_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getTouchCoordX1st() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser17getTouchCoordX1stEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser17getTouchCoordX1stEv() called");
    return 0;
}

/* Exported Object: vtable for stereo::CustomizedMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo14CustomizedMetaE = NULL;

/* Demangled: WXMPMeta_SetProperty_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetProperty_1(void) {
    ALOGD("WXMPMeta_SetProperty_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetLocalizedText(char const*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_S9_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_S9_j() called");
    return 0;
}

/* Demangled: CompareSubtrees(XMP_Node const&, XMP_Node const&) */
extern "C" __attribute__((visibility("default"))) int _Z15CompareSubtreesRK8XMP_NodeS1_(void) {
    ALOGD("_Z15CompareSubtreesRK8XMP_NodeS1_() called");
    return 0;
}

/* Demangled: FromUTF32(unsigned int const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z9FromUTF32PKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_Z9FromUTF32PKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::initCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser16initCustDataItemEv(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser16initCustDataItemEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::APP_SECTION_MAX_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils22APP_SECTION_MAX_LENGTHE = NULL;

/* Demangled: XMP_ReadWriteLock::XMP_ReadWriteLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_ReadWriteLockC1Ev(void) {
    ALOGD("_ZN17XMP_ReadWriteLockC1Ev() called");
    return 0;
}

/* Exported Object: vtable for XMPMeta::ErrorCallbackInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7XMPMeta17ErrorCallbackInfoE = NULL;

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator=(TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromFloat(double, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromFloatEdPKcPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromFloatEdPKcPS6_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetObjectOptions() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetObjectOptionsEv(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetObjectOptionsEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getViewWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getViewWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getViewWidthEv() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::~GoogleStereoInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserD0Ev(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoDepthInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParser4readEv(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParser4readEv() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoConfigInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::unpack() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPacker6unpackEv(void) {
    ALOGD("_ZN6stereo9XmpPacker6unpackEv() called");
    return 0;
}

/* Exported Object: vtable for XML_Node */
extern "C" __attribute__((visibility("default"))) void* _ZTV8XML_Node = NULL;

/* Demangled: RDF_Parser::NodeElementAttrs(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser16NodeElementAttrsEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser16NodeElementAttrsEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::~XmpMetaOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperatorD0Ev(void) {
    ALOGD("_ZN6stereo15XmpMetaOperatorD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMainCamPos() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getMainCamPosEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getMainCamPosEv() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::~StereoDepthInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserD0Ev(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserD0Ev() called");
    return 0;
}

/* Exported Object: UTF16BE_to_UTF32BE */
extern "C" __attribute__((visibility("default"))) void* UTF16BE_to_UTF32BE = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev() called");
    return 0;
}

/* Demangled: stereo::JsonParser::JsonParser(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParserC1ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo10JsonParserC1ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::skip(long) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream4skipEl(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream4skipEl() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfo::~StereoBufferInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16StereoBufferInfoD0Ev(void) {
    ALOGD("_ZN6stereo16StereoBufferInfoD0Ev() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToFloat_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToFloat_1(void) {
    ALOGD("WXMPUtils_ConvertToFloat_1() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> >, std::__1::allocator<std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> > > >::__push_back_slow_path<std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> > >(std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_11__wrap_iterIP8IterNodeEES5_EENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_11__wrap_iterIP8IterNodeEES5_EENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromDate(XMP_DateTime const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromDateERK12XMP_DateTimePS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromDateERK12XMP_DateTimePS6_() called");
    return 0;
}

/* Demangled: stereo::StereoBigBuffer::~StereoBigBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBufferD0Ev(void) {
    ALOGD("_ZN6stereo15StereoBigBufferD0Ev() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::write(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStream5writeEi(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStream5writeEi() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::BYTE_COUNT_4 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils12BYTE_COUNT_4E = NULL;

/* Demangled: stereo::JpgPacker::parseAppInfoFromStream(stereo::BufferTypeInputStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker22parseAppInfoFromStreamERNS_21BufferTypeInputStreamE(void) {
    ALOGD("_ZN6stereo9JpgPacker22parseAppInfoFromStreamERNS_21BufferTypeInputStreamE() called");
    return 0;
}

/* Demangled: WXMPMeta_GetProperty_Int_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetProperty_Int_1(void) {
    ALOGD("WXMPMeta_GetProperty_Int_1() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGeoVerifyLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser17getGeoVerifyLevelEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser17getGeoVerifyLevelEv() called");
    return 0;
}

/* Exported Object: voidByte */
extern "C" __attribute__((visibility("default"))) void* voidByte = NULL;

/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_() called");
    return 0;
}

/* Exported Object: vtable for TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTV12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE = NULL;

/* Demangled: XMPMeta::GetLocalizedText(char const*, char const*, char const*, char const*, char const**, unsigned int*, char const**, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta16GetLocalizedTextEPKcS1_S1_S1_PS1_PjS2_S3_S3_(void) {
    ALOGD("_ZNK7XMPMeta16GetLocalizedTextEPKcS1_S1_S1_PS1_PjS2_S3_S3_() called");
    return 0;
}

/* Exported Object: UTF8_to_UTF32Native */
extern "C" __attribute__((visibility("default"))) void* UTF8_to_UTF32Native = NULL;

/* Demangled: WXMPMeta_GetArrayItem_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetArrayItem_1(void) {
    ALOGD("WXMPMeta_GetArrayItem_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetVersionInfo(XMP_VersionInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetVersionInfoEP15XMP_VersionInfo(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetVersionInfoEP15XMP_VersionInfo() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::RegisterNamespace(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17RegisterNamespaceEPKcS9_PS6_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17RegisterNamespaceEPKcS9_PS6_() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfo::~StereoCaptureInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo17StereoCaptureInfoD2Ev(void) {
    ALOGD("_ZN6stereo17StereoCaptureInfoD2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::readCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser16readCustDataItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser16readCustDataItemEv() called");
    return 0;
}

/* Demangled: stereo::CustomizedDataPacker::~CustomizedDataPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPackerD1Ev(void) {
    ALOGD("_ZN6stereo20CustomizedDataPackerD1Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetLocalizedText(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetLocalizedTextEPKcS9_S9_S9_PS6_SA_Pj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetLocalizedTextEPKcS9_S9_S9_PS6_SA_Pj() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getLdcHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getLdcHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getLdcHeightEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getCurDac() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser9getCurDacEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser9getCurDacEv() called");
    return 0;
}

/* Demangled: stereo::Utils::readFileToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils16readFileToBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo5Utils16readFileToBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToLocalTime_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToLocalTime_1(void) {
    ALOGD("WXMPUtils_ConvertToLocalTime_1() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: WXMPIterator_Skip_1 */
extern "C" __attribute__((visibility("default"))) int WXMPIterator_Skip_1(void) {
    ALOGD("WXMPIterator_Skip_1() called");
    return 0;
}

/* Demangled: WXMPMeta_GetProperty_Float_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetProperty_Float_1(void) {
    ALOGD("WXMPMeta_GetProperty_Float_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToFloat(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatEPKc(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatEPKc() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::~CustomizedMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMetaD1Ev(void) {
    ALOGD("_ZN6stereo14CustomizedMetaD1Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetGlobalOptions(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetGlobalOptionsEj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetGlobalOptionsEj() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::EncodeToBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64EPKcjPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64EPKcjPS6_() called");
    return 0;
}

/* Demangled: stereo::JsonParser::JsonParser(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParserC2ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo10JsonParserC2ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFaceRip(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser10getFaceRipEi(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser10getFaceRipEi() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::initBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser14initBufferItemEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser14initBufferItemEv() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRPFbPK8XMP_NodeS3_EPPS1_EEbT0_S9_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRPFbPK8XMP_NodeS3_EPPS1_EEbT0_S9_T_() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertFromInt_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertFromInt_1(void) {
    ALOGD("WXMPUtils_ConvertFromInt_1() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::~CustomizedMetaOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperatorD0Ev(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperatorD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::StereoCaptureInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoCaptureInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE() called");
    return 0;
}

/* Demangled: stereo::PackUtils::getMD5(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9PackUtils6getMD5ERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo9PackUtils6getMD5ERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: ExpatAdapter::ExpatAdapter(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12ExpatAdapterC2Eb(void) {
    ALOGD("_ZN12ExpatAdapterC2Eb() called");
    return 0;
}

/* Exported Object: vtable for XMPIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTV11XMPIterator = NULL;

/* Exported Object: vtable for stereo::CustomizedDataPacker */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo20CustomizedDataPackerE = NULL;

/* Exported Object: stereo::PackUtils::WRITE_XMP_AFTER_FIRST_APP1 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils26WRITE_XMP_AFTER_FIRST_APP1E = NULL;

/* Demangled: MD5Final(unsigned char*, MD5_CTX*) */
extern "C" __attribute__((visibility("default"))) int _Z8MD5FinalPhP7MD5_CTX(void) {
    ALOGD("_Z8MD5FinalPhP7MD5_CTX() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::readStereoConfigInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor20readStereoConfigInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor20readStereoConfigInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WXMPUtils_SeparateArrayItems_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_SeparateArrayItems_1(void) {
    ALOGD("WXMPUtils_SeparateArrayItems_1() called");
    return 0;
}

/* Demangled: ExpatAdapter::~ExpatAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN12ExpatAdapterD2Ev(void) {
    ALOGD("_ZN12ExpatAdapterD2Ev() called");
    return 0;
}

/* Exported Object: sXMP_InitCount */
extern "C" __attribute__((visibility("default"))) void* sXMP_InitCount = NULL;

/* Demangled: CodePoint_from_UTF8(unsigned char const*, unsigned long, unsigned int*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z19CodePoint_from_UTF8PKhmPjPm(void) {
    ALOGD("_Z19CodePoint_from_UTF8PKhmPjPm() called");
    return 0;
}

/* Exported Object: CodePoint_from_UTF16LE */
extern "C" __attribute__((visibility("default"))) void* CodePoint_from_UTF16LE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: WXMPMeta_SetArrayItem_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetArrayItem_1(void) {
    ALOGD("WXMPMeta_SetArrayItem_1() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::~StereoConfigInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserD1Ev(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserD1Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE6insertINS_11__wrap_iterIPS2_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISB_E9referenceEEE5valueES9_E4typeENS7_IPKS2_EESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE6insertINS_11__wrap_iterIPS2_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISB_E9referenceEEE5valueES9_E4typeENS7_IPKS2_EESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE6insertINS_11__wrap_iterIPS2_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISB_E9referenceEEE5valueES9_E4typeENS7_IPKS2_EESB_SB_() called");
    return 0;
}

/* Exported Object: voidStringLen */
extern "C" __attribute__((visibility("default"))) void* voidStringLen = NULL;

/* Demangled: WXMPUtils_PackageForJPEG_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_PackageForJPEG_1(void) {
    ALOGD("WXMPUtils_PackageForJPEG_1() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::BufferTypeInputStream(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStreamC1ERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStreamC1ERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGFocusFocalDistance() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser22getGFocusFocalDistanceEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser22getGFocusFocalDistanceEv() called");
    return 0;
}

/* Demangled: XMPMeta::SetDefaultErrorCallback(unsigned char (*)(bool (*)(void*, unsigned char, int, char const*), void*, unsigned char, int, char const*), bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta23SetDefaultErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j(void) {
    ALOGD("_ZN7XMPMeta23SetDefaultErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_JPS_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils13TYPE_JPS_DATAE = NULL;

/* Exported Object: voidDateTime */
extern "C" __attribute__((visibility("default"))) void* voidDateTime = NULL;

/* Demangled: XML_Node::SetAttrValue(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node12SetAttrValueEPKcS1_(void) {
    ALOGD("_ZN8XML_Node12SetAttrValueEPKcS1_() called");
    return 0;
}

/* Exported Object: UTF32BE_to_UTF16BE */
extern "C" __attribute__((visibility("default"))) void* UTF32BE_to_UTF16BE = NULL;

/* Demangled: WXMPMeta_IncrementRefCount_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_IncrementRefCount_1(void) {
    ALOGD("WXMPMeta_IncrementRefCount_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetArrayItem(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetArrayItemEPKcS9_iPS6_Pj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetArrayItemEPKcS9_iPS6_Pj() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesPropertyExist(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DoesPropertyExistEPKcS9_(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DoesPropertyExistEPKcS9_() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::writeBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser15writeBufferItemEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser15writeBufferItemEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::APP15 */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils5APP15E = NULL;

/* Exported Object: vtable for stereo::SegmentMaskInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo15SegmentMaskInfoE = NULL;

/* Demangled: stereo::StereoInfoAccessor::readStereoBufferInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor20readStereoBufferInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor20readStereoBufferInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMPUtils::DuplicateSubtree(XMPMeta const&, XMPMeta*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils16DuplicateSubtreeERK7XMPMetaPS0_PKcS5_S5_S5_j(void) {
    ALOGD("_ZN8XMPUtils16DuplicateSubtreeERK7XMPMetaPS0_PKcS5_S5_S5_j() called");
    return 0;
}

/* Demangled: InitializeUnicodeConversions() */
extern "C" __attribute__((visibility("default"))) int _Z28InitializeUnicodeConversionsv(void) {
    ALOGD("_Z28InitializeUnicodeConversionsv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetArrayItem(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iRKS6_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iRKS6_j() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMaskWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getMaskWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getMaskWidthEv() called");
    return 0;
}

/* Exported Object: voidInt64 */
extern "C" __attribute__((visibility("default"))) void* voidInt64 = NULL;

/* Demangled: WXMPMeta_RegisterNamespace_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_RegisterNamespace_1(void) {
    ALOGD("WXMPMeta_RegisterNamespace_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetClientString(void*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfo::~GoogleStereoInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16GoogleStereoInfoD1Ev(void) {
    ALOGD("_ZN6stereo16GoogleStereoInfoD1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::writeSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser16writeSimpleValueEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser16writeSimpleValueEv() called");
    return 0;
}

/* Demangled: XMPMeta::SerializeToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int, unsigned int, char const*, char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta17SerializeToBufferEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjjPKcS9_i(void) {
    ALOGD("_ZNK7XMPMeta17SerializeToBufferEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjjPKcS9_i() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertFromBool(bool, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils15ConvertFromBoolEbPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils15ConvertFromBoolEbPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::ReleaseFromRead() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLock15ReleaseFromReadEv(void) {
    ALOGD("_ZN17XMP_HomeGrownLock15ReleaseFromReadEv() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcS9_j(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcS9_j() called");
    return 0;
}

/* Demangled: XMPMeta::SetProperty_Bool(char const*, char const*, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16SetProperty_BoolEPKcS1_bj(void) {
    ALOGD("_ZN7XMPMeta16SetProperty_BoolEPKcS1_bj() called");
    return 0;
}

/* Exported Object: voidStringPtr */
extern "C" __attribute__((visibility("default"))) void* voidStringPtr = NULL;

/* Demangled: stereo::XmpMeta::setArrayItem(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMeta12setArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iS9_(void) {
    ALOGD("_ZN6stereo7XmpMeta12setArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iS9_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getDepthBufferWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser19getDepthBufferWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser19getDepthBufferWidthEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGFocusBlurAtInfinity() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser23getGFocusBlurAtInfinityEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser23getGFocusBlurAtInfinityEv() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser9serializeEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser9serializeEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::pack(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&, stereo::Section*, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker4packERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS6_NS7_9allocatorIS6_EEEESC_(void) {
    ALOGD("_ZN6stereo9JpgPacker4packERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS6_NS7_9allocatorIS6_EEEESC_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: stereo::StereoInfoJsonParser::getTouchCoordY1st() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser17getTouchCoordY1stEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser17getTouchCoordY1stEv() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToLocalTime(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils18ConvertToLocalTimeEP12XMP_DateTime(void) {
    ALOGD("_ZN8XMPUtils18ConvertToLocalTimeEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: WXMPMeta_GetLocalizedText_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetLocalizedText_1(void) {
    ALOGD("WXMPMeta_GetLocalizedText_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ComposeStructFieldPath_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ComposeStructFieldPath_1(void) {
    ALOGD("WXMPUtils_ComposeStructFieldPath_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertFromInt64_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertFromInt64_1(void) {
    ALOGD("WXMPUtils_ConvertFromInt64_1() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::initSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser15initSimpleValueEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser15initSimpleValueEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<IterNode, std::__1::allocator<IterNode> >::__push_back_slow_path<IterNode>(IterNode&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8IterNodeNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI8IterNodeNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteQualifier(char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteQualifierEPKcS9_S9_S9_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteQualifierEPKcS9_S9_S9_() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_BUFFER_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17TYPE_BUFFER_COUNTE = NULL;

/* Demangled: stereo::StereoInfoAccessor::getPhoVerifyLevel(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor17getPhoVerifyLevelERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor17getPhoVerifyLevelERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: FromUTF32Native(unsigned int const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z15FromUTF32NativePKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_Z15FromUTF32NativePKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeLangSelector(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_RKS6_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_RKS6_PS6_() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfo::~StereoConfigInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16StereoConfigInfoD1Ev(void) {
    ALOGD("_ZN6stereo16StereoConfigInfoD1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::readStructItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser14readStructItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser14readStructItemEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::APPXTAG_PLUS_LENGTHTAG_BYTE_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils33APPXTAG_PLUS_LENGTHTAG_BYTE_COUNTE = NULL;

/* Exported Object: vtable for stereo::JpgPacker */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo9JpgPackerE = NULL;

/* Demangled: stereo::XmpMetaOperator::setData(DataCollections*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperator7setDataEP15DataCollections(void) {
    ALOGD("_ZN6stereo15XmpMetaOperator7setDataEP15DataCollections() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfo::~StereoDepthInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoDepthInfoD2Ev(void) {
    ALOGD("_ZN6stereo15StereoDepthInfoD2Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_JPS_MASK */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils13TYPE_JPS_MASKE = NULL;

/* Demangled: XMPUtils::EncodeToBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils14EncodeToBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils14EncodeToBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertFromFloat(double, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils16ConvertFromFloatEdPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils16ConvertFromFloatEdPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: CodePoint_to_UTF8(unsigned int, unsigned char*, unsigned long, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z17CodePoint_to_UTF8jPhmPm(void) {
    ALOGD("_Z17CodePoint_to_UTF8jPhmPm() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFocusLeft() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser12getFocusLeftEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser12getFocusLeftEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::findProperLocationForXmp(std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker24findProperLocationForXmpEPNSt3__16vectorIPNS_7SectionENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN6stereo9JpgPacker24findProperLocationForXmpEPNSt3__16vectorIPNS_7SectionENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::XmpPacker(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPackerC2EPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo9XmpPackerC2EPNS_8PackInfoE() called");
    return 0;
}

/* Exported Object: voidOptionBits */
extern "C" __attribute__((visibility("default"))) void* voidOptionBits = NULL;

/* Demangled: XMPMeta::AppendArrayItem(char const*, char const*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15AppendArrayItemEPKcS1_jS1_j(void) {
    ALOGD("_ZN7XMPMeta15AppendArrayItemEPKcS1_jS1_j() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::~XmpMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo7XmpMetaD1Ev(void) {
    ALOGD("_ZN6stereo7XmpMetaD1Ev() called");
    return 0;
}

/* Demangled: stereo::JsonParser::getValueIntFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser21getValueIntFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void) {
    ALOGD("_ZN6stereo10JsonParser21getValueIntFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_() called");
    return 0;
}

/* Demangled: stereo::JsonParser::~JsonParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParserD0Ev(void) {
    ALOGD("_ZN6stereo10JsonParserD0Ev() called");
    return 0;
}

/* Demangled: stereo::ReadWriteLockFileUtils::writeLock(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22ReadWriteLockFileUtils9writeLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo22ReadWriteLockFileUtils9writeLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToBool_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToBool_1(void) {
    ALOGD("WXMPUtils_ConvertToBool_1() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToDate(char const*, XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils13ConvertToDateEPKcP12XMP_DateTime(void) {
    ALOGD("_ZN8XMPUtils13ConvertToDateEPKcP12XMP_DateTime() called");
    return 0;
}

/* Demangled: WXMPIterator_DecrementRefCount_1 */
extern "C" __attribute__((visibility("default"))) int WXMPIterator_DecrementRefCount_1(void) {
    ALOGD("WXMPIterator_DecrementRefCount_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToInt64_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToInt64_1(void) {
    ALOGD("WXMPUtils_ConvertToInt64_1() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_XMP_DEPTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils14TYPE_XMP_DEPTHE = NULL;

/* Demangled: unsigned int std::__1::__sort4<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRPFbPK8XMP_NodeS3_EPPS1_EEjT0_S9_S9_S9_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRPFbPK8XMP_NodeS3_EPPS1_EEjT0_S9_S9_S9_T_() called");
    return 0;
}

/* Demangled: XMPMeta::ErrorCallbackInfo::ClientCallbackWrapper(char const*, unsigned char, int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta17ErrorCallbackInfo21ClientCallbackWrapperEPKchiS2_(void) {
    ALOGD("_ZNK7XMPMeta17ErrorCallbackInfo21ClientCallbackWrapperEPKchiS2_() called");
    return 0;
}

/* Demangled: ToUTF16Native(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z13ToUTF16NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_Z13ToUTF16NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::BufferManager::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13BufferManager10releaseAllEv(void) {
    ALOGD("_ZN6stereo13BufferManager10releaseAllEv() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::~BufferTypeInputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStreamD2Ev(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStreamD2Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_DEPTH_DATA */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils15TYPE_DEPTH_DATAE = NULL;

/* Exported Object: UTF8_to_UTF32BE */
extern "C" __attribute__((visibility("default"))) void* UTF8_to_UTF32BE = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty(char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_S9_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_S9_j() called");
    return 0;
}

/* Demangled: stereo::CustomizedDataPacker::CustomizedDataPacker(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPackerC1EPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo20CustomizedDataPackerC1EPNS_8PackInfoE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::readSegmentMaskInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor19readSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor19readSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertToBool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils13ConvertToBoolEPKc(void) {
    ALOGD("_ZN8XMPUtils13ConvertToBoolEPKc() called");
    return 0;
}

/* Demangled: XMPIterator::~XMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIteratorD0Ev(void) {
    ALOGD("_ZN11XMPIteratorD0Ev() called");
    return 0;
}

/* Exported Object: UTF16Native_to_UTF8 */
extern "C" __attribute__((visibility("default"))) void* UTF16Native_to_UTF8 = NULL;

/* Demangled: WXMPMeta_GetObjectOptions_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetObjectOptions_1(void) {
    ALOGD("WXMPMeta_GetObjectOptions_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetErrorCallback(bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetErrorCallbackEPFbPvhiPKcES8_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetErrorCallbackEPFbPvhiPKcES8_j() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Sort() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SortEv(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SortEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SerializeToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int, unsigned int, char const*, char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jjPKcSA_i(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jjPKcSA_i() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::CUSTOMIZED_SERIAL_NUMBER_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils31CUSTOMIZED_SERIAL_NUMBER_LENGTHE = NULL;

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntERKS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntERKS6_() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromInt64(long long, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromInt64ExPKcPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromInt64ExPKcPS6_() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::prepareFdInfo(stereo::StereoInfoJsonParser*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParser13prepareFdInfoEPNS_20StereoInfoJsonParserEi(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParser13prepareFdInfoEPNS_20StereoInfoJsonParserEi() called");
    return 0;
}

/* Demangled: XMPMeta::SetProperty_Date(char const*, char const*, XMP_DateTime const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta16SetProperty_DateEPKcS1_RK12XMP_DateTimej(void) {
    ALOGD("_ZN7XMPMeta16SetProperty_DateEPKcS1_RK12XMP_DateTimej() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: WXMPMeta_AppendArrayItem_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_AppendArrayItem_1(void) {
    ALOGD("WXMPMeta_AppendArrayItem_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetObjectName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameEPKc(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameEPKc() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::initCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser16initCustDataItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser16initCustDataItemEv() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoConfigInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE() called");
    return 0;
}

/* Demangled: std::__1::vector<stereo::StereoBuffer, std::__1::allocator<stereo::StereoBuffer> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE8__appendEm() called");
    return 0;
}

/* Demangled: XMPMeta::GetProperty_Date(char const*, char const*, XMP_DateTime*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta16GetProperty_DateEPKcS1_P12XMP_DateTimePj(void) {
    ALOGD("_ZNK7XMPMeta16GetProperty_DateEPKcS1_P12XMP_DateTimePj() called");
    return 0;
}

/* Demangled: XMPMeta::DoesQualifierExist(char const*, char const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta18DoesQualifierExistEPKcS1_S1_S1_(void) {
    ALOGD("_ZNK7XMPMeta18DoesQualifierExistEPKcS1_S1_S1_() called");
    return 0;
}

/* Demangled: XMPMeta::~XMPMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMetaD0Ev(void) {
    ALOGD("_ZN7XMPMetaD0Ev() called");
    return 0;
}

/* Demangled: WXMPUtils_ComposeQualifierPath_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ComposeQualifierPath_1(void) {
    ALOGD("WXMPUtils_ComposeQualifierPath_1() called");
    return 0;
}

/* Exported Object: CodePoint_to_UTF16BE */
extern "C" __attribute__((visibility("default"))) void* CodePoint_to_UTF16BE = NULL;

/* Demangled: WXMPMeta_GetProperty_Int64_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetProperty_Int64_1(void) {
    ALOGD("WXMPMeta_GetProperty_Int64_1() called");
    return 0;
}

/* Exported Object: sRegisteredNamespaces */
extern "C" __attribute__((visibility("default"))) void* sRegisteredNamespaces = NULL;

/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoBufferInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::~SegmentMaskInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParserD0Ev(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParserD0Ev() called");
    return 0;
}

/* Demangled: FindNode(XMP_Node*, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > const&, bool, unsigned int, std::__1::__wrap_iter<XMP_Node**>*) */
extern "C" __attribute__((visibility("default"))) int _Z8FindNodeP8XMP_NodeRKNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEEbjPNS1_11__wrap_iterIPS0_EE(void) {
    ALOGD("_Z8FindNodeP8XMP_NodeRKNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEEbjPNS1_11__wrap_iterIPS0_EE() called");
    return 0;
}

/* Demangled: WXMPUtils_MergeFromJPEG_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_MergeFromJPEG_1(void) {
    ALOGD("WXMPUtils_MergeFromJPEG_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToDate(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateERKS6_P12XMP_DateTime(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateERKS6_P12XMP_DateTime() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SeparateArrayItems(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jSC_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jSC_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMinDac() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser9getMinDacEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser9getMinDacEv() called");
    return 0;
}

/* Demangled: RDF_Parser::FixupQualifiedNode(XMP_Node*) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser18FixupQualifiedNodeEP8XMP_Node(void) {
    ALOGD("_ZN10RDF_Parser18FixupQualifiedNodeEP8XMP_Node() called");
    return 0;
}

/* Demangled: WXMPMeta_DeleteProperty_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DeleteProperty_1(void) {
    ALOGD("WXMPMeta_DeleteProperty_1() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFocusRight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getFocusRightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getFocusRightEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::serialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser9serializeEv(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser9serializeEv() called");
    return 0;
}

/* Demangled: XMPUtils::SetTimeZone(XMP_DateTime*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils11SetTimeZoneEP12XMP_DateTime(void) {
    ALOGD("_ZN8XMPUtils11SetTimeZoneEP12XMP_DateTime() called");
    return 0;
}

/* Demangled: XMP_ReadWriteLock::~XMP_ReadWriteLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_ReadWriteLockD2Ev(void) {
    ALOGD("_ZN17XMP_ReadWriteLockD2Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetArrayItem(char const*, char const*, int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iS9_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iS9_j() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::~BufferTypeOutputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamD1Ev(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: stereo::JpgPacker::getSectionTag(stereo::Section*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker13getSectionTagEPNS_7SectionE(void) {
    ALOGD("_ZN6stereo9JpgPacker13getSectionTagEPNS_7SectionE() called");
    return 0;
}

/* Demangled: XMPUtils::Terminate() */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils9TerminateEv(void) {
    ALOGD("_ZN8XMPUtils9TerminateEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(__XMPMeta__*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EP11__XMPMeta__(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EP11__XMPMeta__() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::readCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser16readCustDataItemEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser16readCustDataItemEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::XMP_HEADER_START */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils16XMP_HEADER_STARTE = NULL;

/* Exported Object: stereo::PackUtils::TYPE_SEGMENT_MASK */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17TYPE_SEGMENT_MASKE = NULL;

/* Demangled: RDF_Parser::ParseTypeLiteralPropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser31ParseTypeLiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser31ParseTypeLiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: XMPUtils::ComposeQualifierPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils20ComposeQualifierPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils20ComposeQualifierPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: ComposeXPath(std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z12ComposeXPathRKNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEEPNS_12basic_stringIcNS_11char_traitsIcEENS2_IcEEEE(void) {
    ALOGD("_Z12ComposeXPathRKNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEEPNS_12basic_stringIcNS_11char_traitsIcEENS2_IcEEEE() called");
    return 0;
}

/* Demangled: WXMPMeta_ParseFromBuffer_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_ParseFromBuffer_1(void) {
    ALOGD("WXMPMeta_ParseFromBuffer_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ComposeArrayItemPath_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ComposeArrayItemPath_1(void) {
    ALOGD("WXMPUtils_ComposeArrayItemPath_1() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::readSimpleValue() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser15readSimpleValueEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser15readSimpleValueEv() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::~StereoBufferInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserD0Ev(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::getGeoVerifyLevel(stereo::StereoBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor17getGeoVerifyLevelERKNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor17getGeoVerifyLevelERKNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::JsonParser::getObjectPropertyValueFromArray(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser31getObjectPropertyValueFromArrayEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiS9_(void) {
    ALOGD("_ZN6stereo10JsonParser31getObjectPropertyValueFromArrayEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiS9_() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoConfigInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE() called");
    return 0;
}

/* Demangled: virtual thunk to stereo::StereoInfoAccessor::~StereoInfoAccessor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6stereo18StereoInfoAccessorD0Ev(void) {
    ALOGD("_ZTv0_n24_N6stereo18StereoInfoAccessorD0Ev() called");
    return 0;
}

/* Demangled: stereo::BufferTypeInputStream::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21BufferTypeInputStream4readEv(void) {
    ALOGD("_ZN6stereo21BufferTypeInputStream4readEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(stereo::IMetaOperator*, stereo::StereoBufferInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParserC2EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParserC2EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamC1Ei(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamC1Ei() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::writeInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParser9writeInfoEv(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParser9writeInfoEv() called");
    return 0;
}

/* Demangled: XMPMeta::SetProperty_Int(char const*, char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15SetProperty_IntEPKcS1_ij(void) {
    ALOGD("_ZN7XMPMeta15SetProperty_IntEPKcS1_ij() called");
    return 0;
}

/* Demangled: WXMPMeta_CountArrayItems_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_CountArrayItems_1(void) {
    ALOGD("WXMPMeta_CountArrayItems_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SeparateArrayItems(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jRKS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jRKS6_() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::initBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser14initBufferItemEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser14initBufferItemEv() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::~StereoCaptureInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParserD2Ev(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParserD2Ev() called");
    return 0;
}

/* Demangled: XMP_ReadWriteLock::Acquire(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_ReadWriteLock7AcquireEb(void) {
    ALOGD("_ZN17XMP_ReadWriteLock7AcquireEb() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFocusTop() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser11getFocusTopEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser11getFocusTopEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: stereo::JpgPacker::pack() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker4packEv(void) {
    ALOGD("_ZN6stereo9JpgPacker4packEv() called");
    return 0;
}

/* Demangled: stereo::PackerManager::pack(stereo::PackInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13PackerManager4packEPNS_8PackInfoE(void) {
    ALOGD("_ZN6stereo13PackerManager4packEPNS_8PackInfoE() called");
    return 0;
}

/* Exported Object: UTF16LE_to_UTF32BE */
extern "C" __attribute__((visibility("default"))) void* UTF16LE_to_UTF32BE = NULL;

/* Demangled: stereo::JsonParser::getInt2DArrayFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser23getInt2DArrayFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN6stereo10JsonParser23getInt2DArrayFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::~StereoInfoJsonParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParserD0Ev(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParserD0Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::writeStereoDepthInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoDepthInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor20writeStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15StereoDepthInfoE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor20writeStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15StereoDepthInfoE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Erase() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5EraseEv(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5EraseEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGFocusFocalPointY() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointYEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointYEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::~StereoInfoAccessor() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessorD0Ev(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessorD0Ev() called");
    return 0;
}

/* Demangled: XMPUtils::MergeFromJPEG(XMPMeta*, XMPMeta const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils13MergeFromJPEGEP7XMPMetaRKS0_(void) {
    ALOGD("_ZN8XMPUtils13MergeFromJPEGEP7XMPMetaRKS0_() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Next(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4NextEPS6_S8_S8_Pj(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4NextEPS6_S8_S8_Pj() called");
    return 0;
}

/* Demangled: XMPMeta::SetArrayItem(char const*, char const*, int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta12SetArrayItemEPKcS1_iS1_j(void) {
    ALOGD("_ZN7XMPMeta12SetArrayItemEPKcS1_iS1_j() called");
    return 0;
}

/* Exported Object: UTF32LE_to_UTF8 */
extern "C" __attribute__((visibility("default"))) void* UTF32LE_to_UTF8 = NULL;

/* Demangled: WXMPMeta_GetNamespacePrefix_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetNamespacePrefix_1(void) {
    ALOGD("WXMPMeta_GetNamespacePrefix_1() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesArrayItemExist(char const*, char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesArrayItemExistEPKcS9_i(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesArrayItemExistEPKcS9_i() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoDepthInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo15StereoDepthInfoE = NULL;

/* Demangled: XMPUtils::RemoveProperties(XMPMeta*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils16RemovePropertiesEP7XMPMetaPKcS3_j(void) {
    ALOGD("_ZN8XMPUtils16RemovePropertiesEP7XMPMetaPKcS3_j() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteArrayItem(char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteArrayItemEPKcS9_i(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteArrayItemEPKcS9_i() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::getPropertyString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6stereo7XmpMeta17getPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PS7_(void) {
    ALOGD("_ZNK6stereo7XmpMeta17getPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PS7_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPNS_6vectorIPN6stereo15StereoBigBufferENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPNS_6vectorIPN6stereo15StereoBigBufferENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::EXIF_HEADER */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils11EXIF_HEADERE = NULL;

/* Demangled: XMP_NamespaceTable::GetURI(char const*, char const**, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18XMP_NamespaceTable6GetURIEPKcPS1_Pj(void) {
    ALOGD("_ZNK18XMP_NamespaceTable6GetURIEPKcPS1_Pj() called");
    return 0;
}

/* Demangled: XML_Node::IsEmptyLeafNode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XML_Node15IsEmptyLeafNodeEv(void) {
    ALOGD("_ZNK8XML_Node15IsEmptyLeafNodeEv() called");
    return 0;
}

/* Demangled: WXMPMeta_DeleteQualifier_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DeleteQualifier_1(void) {
    ALOGD("WXMPMeta_DeleteQualifier_1() called");
    return 0;
}

/* Demangled: MD5Update(MD5_CTX*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z9MD5UpdateP7MD5_CTXPhj(void) {
    ALOGD("_Z9MD5UpdateP7MD5_CTXPhj() called");
    return 0;
}

/* Demangled: ToUTF32Native(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z13ToUTF32NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_Z13ToUTF32NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetObjectName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameES6_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameES6_() called");
    return 0;
}

/* Exported Object: stereo::ReadWriteLockFileUtils::sLockCollections */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo22ReadWriteLockFileUtils16sLockCollectionsE = NULL;

/* Demangled: stereo::StereoInfoJsonParser::getGDepthNear() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getGDepthNearEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getGDepthNearEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::copyToStreamWithFixBuffer(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker25copyToStreamWithFixBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE(void) {
    ALOGD("_ZN6stereo9JpgPacker25copyToStreamWithFixBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser5writeEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser5writeEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::~JpgPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPackerD0Ev(void) {
    ALOGD("_ZN6stereo9JpgPackerD0Ev() called");
    return 0;
}

/* Demangled: XMPUtils::PackageForJPEG(XMPMeta const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils14PackageForJPEGERK7XMPMetaPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_(void) {
    ALOGD("_ZN8XMPUtils14PackageForJPEGERK7XMPMetaPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcj(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcj() called");
    return 0;
}

/* Demangled: XMP_ReadWriteLock::XMP_ReadWriteLock() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_ReadWriteLockC2Ev(void) {
    ALOGD("_ZN17XMP_ReadWriteLockC2Ev() called");
    return 0;
}

/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22BufferTypeOutputStreamC1Ev(void) {
    ALOGD("_ZN6stereo22BufferTypeOutputStreamC1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGoogleDepthHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser20getGoogleDepthHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser20getGoogleDepthHeightEv() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::~GoogleStereoInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserD1Ev(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserD1Ev() called");
    return 0;
}

/* Demangled: XML_Node::ClearNode() */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node9ClearNodeEv(void) {
    ALOGD("_ZN8XML_Node9ClearNodeEv() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::~XmpMetaOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperatorD1Ev(void) {
    ALOGD("_ZN6stereo15XmpMetaOperatorD1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getGDepthFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser15getGDepthFormatEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser15getGDepthFormatEv() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::StereoCaptureInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoCaptureInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE() called");
    return 0;
}

/* Demangled: stereo::StereoDepthInfoParser::~StereoDepthInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParserD1Ev(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParserD1Ev() called");
    return 0;
}

/* Demangled: XMPIterator::Next(char const**, unsigned int*, char const**, unsigned int*, char const**, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11XMPIterator4NextEPPKcPjS2_S3_S2_S3_S3_(void) {
    ALOGD("_ZN11XMPIterator4NextEPPKcPjS2_S3_S2_S3_S3_() called");
    return 0;
}

/* Demangled: WXMPUtils_CurrentDateTime_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_CurrentDateTime_1(void) {
    ALOGD("WXMPUtils_CurrentDateTime_1() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeArrayItemPath(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeArrayItemPathEPKcS9_iPS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeArrayItemPathEPKcS9_iPS6_() called");
    return 0;
}

/* Exported Object: vtable for TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTV8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE = NULL;

/* Demangled: stereo::CustomizedDataPacker::pack(stereo::StereoBuffer&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPacker4packERNS_12StereoBufferENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo20CustomizedDataPacker4packERNS_12StereoBufferENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XML_Node::RemoveAttrs() */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node11RemoveAttrsEv(void) {
    ALOGD("_ZN8XML_Node11RemoveAttrsEv() called");
    return 0;
}

/* Demangled: std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::vector(std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEC2ERKS4_(void) {
    ALOGD("_ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEC2ERKS4_() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::CustomizedMeta(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMetaC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void) {
    ALOGD("_ZN6stereo14CustomizedMetaC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMaskBuffer(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getMaskBufferERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getMaskBufferERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfo::~StereoBufferInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16StereoBufferInfoD1Ev(void) {
    ALOGD("_ZN6stereo16StereoBufferInfoD1Ev() called");
    return 0;
}

/* Demangled: RDF_Parser::AddQualifierNode(XMP_Node*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_(void) {
    ALOGD("_ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_() called");
    return 0;
}

/* Demangled: LookupFieldSelector(XMP_Node const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z19LookupFieldSelectorPK8XMP_NodePKcS3_(void) {
    ALOGD("_Z19LookupFieldSelectorPK8XMP_NodePKcS3_() called");
    return 0;
}

/* Demangled: stereo::StereoBigBuffer::~StereoBigBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBufferD1Ev(void) {
    ALOGD("_ZN6stereo15StereoBigBufferD1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoConfigInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE() called");
    return 0;
}

/* Demangled: XMPMeta::DeleteNamespace(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15DeleteNamespaceEPKc(void) {
    ALOGD("_ZN7XMPMeta15DeleteNamespaceEPKc() called");
    return 0;
}

/* Demangled: XMPMeta::ParseFromBuffer(char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15ParseFromBufferEPKcjj(void) {
    ALOGD("_ZN7XMPMeta15ParseFromBufferEPKcjj() called");
    return 0;
}

/* Demangled: XMPUtils::ConvertFromInt(int, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils14ConvertFromIntEiPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils14ConvertFromIntEiPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XML_Node::GetNamedElement(char const*, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node15GetNamedElementEPKcS1_m(void) {
    ALOGD("_ZN8XML_Node15GetNamedElementEPKcS1_m() called");
    return 0;
}

/* Demangled: stereo::XmpMetaOperator::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15XmpMetaOperator4readEv(void) {
    ALOGD("_ZN6stereo15XmpMetaOperator4readEv() called");
    return 0;
}

/* Demangled: stereo::StereoCaptureInfoParser::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo23StereoCaptureInfoParser5writeEv(void) {
    ALOGD("_ZN6stereo23StereoCaptureInfoParser5writeEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::CUSTOMIZED_TOTAL_FORMAT_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils30CUSTOMIZED_TOTAL_FORMAT_LENGTHE = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Int(char const*, char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetProperty_IntEPKcS9_ij(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetProperty_IntEPKcS9_ij() called");
    return 0;
}

/* Demangled: stereo::JsonParser::getArrayLength(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo10JsonParser14getArrayLengthEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo10JsonParser14getArrayLengthEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: UTF16BE_to_UTF32LE */
extern "C" __attribute__((visibility("default"))) void* UTF16BE_to_UTF32LE = NULL;

/* Demangled: WXMPMeta_SetProperty_Date_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_SetProperty_Date_1(void) {
    ALOGD("WXMPMeta_SetProperty_Date_1() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertFromBool_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertFromBool_1(void) {
    ALOGD("WXMPUtils_ConvertFromBool_1() called");
    return 0;
}

/* Exported Object: typeinfo name for XMP_Error */
extern "C" __attribute__((visibility("default"))) void* _ZTS9XMP_Error = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: stereo::CustomizedDataPacker::~CustomizedDataPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20CustomizedDataPackerD2Ev(void) {
    ALOGD("_ZN6stereo20CustomizedDataPackerD2Ev() called");
    return 0;
}

/* Demangled: XMPMeta::DeleteLocalizedText(char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta19DeleteLocalizedTextEPKcS1_S1_S1_(void) {
    ALOGD("_ZN7XMPMeta19DeleteLocalizedTextEPKcS1_S1_S1_() called");
    return 0;
}

/* Demangled: XMP_RegExp::Match(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10XMP_RegExp5MatchEPKc(void) {
    ALOGD("_ZN10XMP_RegExp5MatchEPKc() called");
    return 0;
}

/* Demangled: WXMPUtils_ComposeLangSelector_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ComposeLangSelector_1(void) {
    ALOGD("WXMPUtils_ComposeLangSelector_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetLocalizedText(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_RKS6_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_RKS6_j() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: stereo::Utils::writeStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils17writeStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN6stereo5Utils17writeStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Demangled: XMPUtils::SeparateArrayItems(XMPMeta*, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils18SeparateArrayItemsEP7XMPMetaPKcS3_jS3_(void) {
    ALOGD("_ZN8XMPUtils18SeparateArrayItemsEP7XMPMetaPKcS3_jS3_() called");
    return 0;
}

/* Exported Object: UTF32LE_to_UTF16BE */
extern "C" __attribute__((visibility("default"))) void* UTF32LE_to_UTF16BE = NULL;

/* Demangled: WXMPMeta_DeleteNamespace_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DeleteNamespace_1(void) {
    ALOGD("WXMPMeta_DeleteNamespace_1() called");
    return 0;
}

/* Demangled: WXMPMeta_DeleteStructField_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DeleteStructField_1(void) {
    ALOGD("WXMPMeta_DeleteStructField_1() called");
    return 0;
}

/* Demangled: WXMPMeta_DoesPropertyExist_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_DoesPropertyExist_1(void) {
    ALOGD("WXMPMeta_DoesPropertyExist_1() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcj(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcj() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev() called");
    return 0;
}

/* Demangled: stereo::StereoBigBuffer::StereoBigBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo15StereoBigBufferC1Ej(void) {
    ALOGD("_ZN6stereo15StereoBigBufferC1Ej() called");
    return 0;
}

/* Demangled: stereo::Utils::getFileNameFromPath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils19getFileNameFromPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo5Utils19getFileNameFromPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::writeSectionToStream(stereo::BufferTypeOutputStream&, stereo::Section*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker20writeSectionToStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE(void) {
    ALOGD("_ZN6stereo9JpgPacker20writeSectionToStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoAccessor::writeSegmentMaskInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::SegmentMaskInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor20writeSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15SegmentMaskInfoE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor20writeSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15SegmentMaskInfoE() called");
    return 0;
}

/* Demangled: FindSchemaNode(XMP_Node*, char const*, bool, std::__1::__wrap_iter<XMP_Node**>*) */
extern "C" __attribute__((visibility("default"))) int _Z14FindSchemaNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE(void) {
    ALOGD("_Z14FindSchemaNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE() called");
    return 0;
}

/* Demangled: XMPMeta::ErrorCallbackInfo::CanNotify() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta17ErrorCallbackInfo9CanNotifyEv(void) {
    ALOGD("_ZNK7XMPMeta17ErrorCallbackInfo9CanNotifyEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10InitializeEv(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10InitializeEv() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, stereo::GoogleStereoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParserC2ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParserC2ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::SOI */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils3SOIE = NULL;

/* Demangled: XMPUtils::ConvertFromInt64(long long, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils16ConvertFromInt64ExPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils16ConvertFromInt64ExPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: voidVoidPtr */
extern "C" __attribute__((visibility("default"))) void* voidVoidPtr = NULL;

/* Demangled: void std::__1::__buffered_inplace_merge<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__buffered_inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeE(void) {
    ALOGD("_ZNSt3__124__buffered_inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeE() called");
    return 0;
}

/* Exported Object: UTF16BE_to_UTF8 */
extern "C" __attribute__((visibility("default"))) void* UTF16BE_to_UTF8 = NULL;

/* Demangled: FromUTF16(unsigned short const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z9FromUTF16PKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_Z9FromUTF16PKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: stereo::CustomizedMeta::~CustomizedMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo14CustomizedMetaD2Ev(void) {
    ALOGD("_ZN6stereo14CustomizedMetaD2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_S9_EEEEENSI_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_S9_EEEEENSI_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetStructField(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetStructFieldEPKcS9_S9_S9_PS6_Pj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetStructFieldEPKcS9_S9_S9_PS6_Pj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: stereo::PackUtils::getCustomTypeName(stereo::StereoBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9PackUtils17getCustomTypeNameERNS_12StereoBufferE(void) {
    ALOGD("_ZN6stereo9PackUtils17getCustomTypeNameERNS_12StereoBufferE() called");
    return 0;
}

/* Demangled: stereo::XmpPacker::~XmpPacker() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9XmpPackerD0Ev(void) {
    ALOGD("_ZN6stereo9XmpPackerD0Ev() called");
    return 0;
}

/* Demangled: XMPMeta::CountArrayItems(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta15CountArrayItemsEPKcS1_(void) {
    ALOGD("_ZNK7XMPMeta15CountArrayItemsEPKcS1_() called");
    return 0;
}

/* Demangled: WXMPMeta_GetObjectName_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetObjectName_1(void) {
    ALOGD("WXMPMeta_GetObjectName_1() called");
    return 0;
}

/* Demangled: WXMPMeta_GetProperty_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetProperty_1(void) {
    ALOGD("WXMPMeta_GetProperty_1() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::~CustomizedMetaOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperatorD1Ev(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperatorD1Ev() called");
    return 0;
}

/* Demangled: stereo::StereoBufferInfoParser::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoBufferInfoParser4readEv(void) {
    ALOGD("_ZN6stereo22StereoBufferInfoParser4readEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >::__push_back_slow_path<stereo::Section* const&>(stereo::Section* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6stereo7SectionENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6stereo7SectionENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISN_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISN_EERKT_() called");
    return 0;
}

/* Exported Object: UTF8_to_UTF16Native */
extern "C" __attribute__((visibility("default"))) void* UTF8_to_UTF16Native = NULL;

/* Demangled: getSearchNode(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _Z13getSearchNodeRN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEES4_EEPKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEESG_(void) {
    ALOGD("_Z13getSearchNodeRN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEES4_EEPKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEESG_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getFaceFlag() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser11getFaceFlagEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser11getFaceFlagEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getLdcWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser11getLdcWidthEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser11getLdcWidthEv() called");
    return 0;
}

/* Demangled: stereo::SegmentMaskInfoParser::SegmentMaskInfoParser(stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::SegmentMaskInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21SegmentMaskInfoParserC1ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE(void) {
    ALOGD("_ZN6stereo21SegmentMaskInfoParserC1ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE() called");
    return 0;
}

/* Demangled: WXMPMeta_GetProperty_Bool_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_GetProperty_Bool_1(void) {
    ALOGD("WXMPMeta_GetProperty_Bool_1() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::getArrayItem(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6stereo7XmpMeta12getArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iPS7_(void) {
    ALOGD("_ZNK6stereo7XmpMeta12getArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iPS7_() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getMaxDac() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser9getMaxDacEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser9getMaxDacEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::readBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser14readBufferItemEv(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser14readBufferItemEv() called");
    return 0;
}

/* Exported Object: UTF32Native_to_UTF8 */
extern "C" __attribute__((visibility("default"))) void* UTF32Native_to_UTF8 = NULL;

/* Demangled: WXMPUtils_CatenateArrayItems_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_CatenateArrayItems_1(void) {
    ALOGD("WXMPUtils_CatenateArrayItems_1() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Int(char const*, char const*, int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetProperty_IntEPKcS9_PiPj(void) {
    ALOGD("_ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetProperty_IntEPKcS9_PiPj() called");
    return 0;
}

/* Demangled: stereo::Utils::int2str(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo5Utils7int2strERKiRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo5Utils7int2strERKiRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetQualifier(char const*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_S9_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_S9_j() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfoParser::~StereoConfigInfoParser() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParserD2Ev(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParserD2Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::DQT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils3DQTE = NULL;

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetStructField(char const*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_S9_j(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_S9_j() called");
    return 0;
}

/* Exported Object: typeinfo for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16invalid_argument = NULL;

/* Demangled: RDF_Parser::PropertyElementList(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser19PropertyElementListEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser19PropertyElementListEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_Ej(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_Ej() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: stereo::StereoDepthInfoParser::initCustDataItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser16initCustDataItemEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser16initCustDataItemEv() called");
    return 0;
}

/* Demangled: XMPMeta::GetObjectName(char const**, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7XMPMeta13GetObjectNameEPPKcPj(void) {
    ALOGD("_ZNK7XMPMeta13GetObjectNameEPPKcPj() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::write() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperator5writeEv(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperator5writeEv() called");
    return 0;
}

/* Exported Object: stereo::BufferManager::mBufferLock */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo13BufferManager11mBufferLockE = NULL;

/* Exported Object: stereo::PackUtils::APP15_LENGTHTAG_BYTE_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils26APP15_LENGTHTAG_BYTE_COUNTE = NULL;

/* Demangled: stereo::StereoInfoAccessor::serialize(stereo::PackInfo&, stereo::IParser&) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo18StereoInfoAccessor9serializeERNS_8PackInfoERNS_7IParserE(void) {
    ALOGD("_ZN6stereo18StereoInfoAccessor9serializeERNS_8PackInfoERNS_7IParserE() called");
    return 0;
}

/* Demangled: XMPUtils::ComposeFieldSelector(char const*, char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils20ComposeFieldSelectorEPKcS1_S1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils20ComposeFieldSelectorEPKcS1_S1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XMP_HomeGrownLock::AcquireForWrite() */
extern "C" __attribute__((visibility("default"))) int _ZN17XMP_HomeGrownLock15AcquireForWriteEv(void) {
    ALOGD("_ZN17XMP_HomeGrownLock15AcquireForWriteEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteStructField(char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DeleteStructFieldEPKcS9_S9_S9_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DeleteStructFieldEPKcS9_S9_S9_() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator=(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_() called");
    return 0;
}

/* Demangled: WXMPMeta_CTor_1 */
extern "C" __attribute__((visibility("default"))) int WXMPMeta_CTor_1(void) {
    ALOGD("WXMPMeta_CTor_1() called");
    return 0;
}

/* Demangled: XMPMeta::ProcessXMLTree(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta14ProcessXMLTreeEj(void) {
    ALOGD("_ZN7XMPMeta14ProcessXMLTreeEj() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Date(char const*, char const*, XMP_DateTime const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_DateEPKcS9_RK12XMP_DateTimej(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_DateEPKcS9_RK12XMP_DateTimej() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfoParser::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22GoogleStereoInfoParser4readEv(void) {
    ALOGD("_ZN6stereo22GoogleStereoInfoParser4readEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<SimpleItem*, std::__1::allocator<SimpleItem*> >::__push_back_slow_path<SimpleItem* const&>(SimpleItem* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10SimpleItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10SimpleItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for stereo::StereoBufferInfoParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo22StereoBufferInfoParserE = NULL;

/* Demangled: XML_Node::IsLeafContentNode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XML_Node17IsLeafContentNodeEv(void) {
    ALOGD("_ZNK8XML_Node17IsLeafContentNodeEv() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getOrientation() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser14getOrientationEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser14getOrientationEv() called");
    return 0;
}

/* Demangled: stereo::GoogleStereoInfo::~GoogleStereoInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16GoogleStereoInfoD2Ev(void) {
    ALOGD("_ZN6stereo16GoogleStereoInfoD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeStructFieldPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE22ComposeStructFieldPathEPKcS9_S9_S9_PS6_(void) {
    ALOGD("_ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE22ComposeStructFieldPathEPKcS9_S9_S9_PS6_() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Exported Object: stereo::Utils::ENABLE_GDEPTH */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo5Utils13ENABLE_GDEPTHE = NULL;

/* Demangled: stereo::StereoDepthInfoParser::writeBufferItem() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser15writeBufferItemEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser15writeBufferItemEv() called");
    return 0;
}

/* Exported Object: UTF32BE_to_UTF16LE */
extern "C" __attribute__((visibility("default"))) void* UTF32BE_to_UTF16LE = NULL;

/* Demangled: stereo::StereoDepthInfoParser::read() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo21StereoDepthInfoParser4readEv(void) {
    ALOGD("_ZN6stereo21StereoDepthInfoParser4readEv() called");
    return 0;
}

/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetClientString(void*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj(void) {
    ALOGD("_ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj() called");
    return 0;
}

/* Demangled: stereo::BufferManager::popBigBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo13BufferManager13popBigBuffersEv(void) {
    ALOGD("_ZN6stereo13BufferManager13popBigBuffersEv() called");
    return 0;
}

/* Exported Object: UTF8_to_UTF16BE */
extern "C" __attribute__((visibility("default"))) void* UTF8_to_UTF16BE = NULL;

/* Exported Object: vtable for stereo::BufferTypeInputStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6stereo21BufferTypeInputStreamE = NULL;

/* Demangled: stereo::StereoInfoJsonParser::getFaceRectCount() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser16getFaceRectCountEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser16getFaceRectCountEv() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::TYPE_EXTENDED_XMP */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils17TYPE_EXTENDED_XMPE = NULL;

/* Demangled: WXMPUtils_CompareDateTime_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_CompareDateTime_1(void) {
    ALOGD("WXMPUtils_CompareDateTime_1() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: stereo::StereoConfigInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22StereoConfigInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6stereo22StereoConfigInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: RDF_Parser::PropertyElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser15PropertyElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser15PropertyElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: XMPMeta::GetNamespaceURI(char const*, char const**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta15GetNamespaceURIEPKcPS1_Pj(void) {
    ALOGD("_ZN7XMPMeta15GetNamespaceURIEPKcPS1_Pj() called");
    return 0;
}

/* Demangled: XMPUtils::ComposeArrayItemPath(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XMPUtils20ComposeArrayItemPathEPKcS1_iPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XMPUtils20ComposeArrayItemPathEPKcS1_iPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: XML_Node::Dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node4DumpEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN8XML_Node4DumpEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_(void) {
    ALOGD("_ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_() called");
    return 0;
}

/* Demangled: stereo::CustomizedMetaOperator::CustomizedMetaOperator(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo22CustomizedMetaOperatorC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void) {
    ALOGD("_ZN6stereo22CustomizedMetaOperatorC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getDof() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser6getDofEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser6getDofEv() called");
    return 0;
}

/* Demangled: WXMPIterator_Next_1 */
extern "C" __attribute__((visibility("default"))) int WXMPIterator_Next_1(void) {
    ALOGD("WXMPIterator_Next_1() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getViewHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getViewHeightEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getViewHeightEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: WXMPUtils_ConvertToUTCTime_1 */
extern "C" __attribute__((visibility("default"))) int WXMPUtils_ConvertToUTCTime_1(void) {
    ALOGD("WXMPUtils_ConvertToUTCTime_1() called");
    return 0;
}

/* Demangled: stereo::StereoConfigInfo::~StereoConfigInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo16StereoConfigInfoD2Ev(void) {
    ALOGD("_ZN6stereo16StereoConfigInfoD2Ev() called");
    return 0;
}

/* Exported Object: stereo::PackUtils::PARTITION_OFFSET_BYTE_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN6stereo9PackUtils27PARTITION_OFFSET_BYTE_COUNTE = NULL;

/* Demangled: RDF_Parser::NodeElement(XMP_Node*, XML_Node const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10RDF_Parser11NodeElementEP8XMP_NodeRK8XML_Nodeb(void) {
    ALOGD("_ZN10RDF_Parser11NodeElementEP8XMP_NodeRK8XML_Nodeb() called");
    return 0;
}

/* Demangled: XML_Node::IsWhitespaceNode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8XML_Node16IsWhitespaceNodeEv(void) {
    ALOGD("_ZNK8XML_Node16IsWhitespaceNodeEv() called");
    return 0;
}

/* Demangled: stereo::XmpMeta::serialize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6stereo7XmpMeta9serializeEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK6stereo7XmpMeta9serializeEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: stereo::StereoInfoJsonParser::getConvOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo20StereoInfoJsonParser13getConvOffsetEv(void) {
    ALOGD("_ZN6stereo20StereoInfoJsonParser13getConvOffsetEv() called");
    return 0;
}

/* Demangled: stereo::JpgPacker::writeSectionToStream(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&, stereo::Section*) */
extern "C" __attribute__((visibility("default"))) int _ZN6stereo9JpgPacker20writeSectionToStreamERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE(void) {
    ALOGD("_ZN6stereo9JpgPacker20writeSectionToStreamERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE() called");
    return 0;
}

/* Demangled: XMPMeta::SetQualifier(char const*, char const*, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7XMPMeta12SetQualifierEPKcS1_S1_S1_S1_j(void) {
    ALOGD("_ZN7XMPMeta12SetQualifierEPKcS1_S1_S1_S1_j() called");
    return 0;
}

/* Demangled: XML_Node::RemoveContent() */
extern "C" __attribute__((visibility("default"))) int _ZN8XML_Node13RemoveContentEv(void) {
    ALOGD("_ZN8XML_Node13RemoveContentEv() called");
    return 0;
}
