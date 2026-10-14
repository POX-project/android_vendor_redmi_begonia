/*
 * Reverse-Engineered ABI Specification for: libstereoinfoaccessor_vsdof.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libstereoinfoaccessor_vsdof.so
 */

#ifndef BEGONIA_RE_LIBSTEREOINFOACCESSOR_VSDOF_H
#define BEGONIA_RE_LIBSTEREOINFOACCESSOR_VSDOF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: WXMPMeta_GetVersionInfo_1 */
/* Demangled: WXMPMeta_GetVersionInfo_1 */
int WXMPMeta_GetVersionInfo_1(void);

/* Symbol: WXMPMeta_SetProperty_Float_1 */
/* Demangled: WXMPMeta_SetProperty_Float_1 */
int WXMPMeta_SetProperty_Float_1(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParser4readEv */
/* Demangled: stereo::StereoCaptureInfoParser::read() */
int _ZN6stereo23StereoCaptureInfoParser4readEv(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser15writeStructItemEv */
/* Demangled: stereo::StereoConfigInfoParser::writeStructItem() */
int _ZN6stereo22StereoConfigInfoParser15writeStructItemEv(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser15initSimpleValueEv */
/* Demangled: stereo::StereoDepthInfoParser::initSimpleValue() */
int _ZN6stereo21StereoDepthInfoParser15initSimpleValueEv(void);

/* Symbol: _ZN17XMP_HomeGrownLockD1Ev */
/* Demangled: XMP_HomeGrownLock::~XMP_HomeGrownLock() */
int _ZN17XMP_HomeGrownLockD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRNS_4pairIS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SN_lEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRNS_4pairIS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SN_lEERKT_DpOT0_(void);

/* Symbol: _ZN6stereo7XmpMetaD2Ev */
/* Demangled: stereo::XmpMeta::~XmpMeta() */
int _ZN6stereo7XmpMetaD2Ev(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntEPKc */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt(char const*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntEPKc(void);

/* Symbol: _ZN6stereo10JsonParserD1Ev */
/* Demangled: stereo::JsonParser::~JsonParser() */
int _ZN6stereo10JsonParserD1Ev(void);

/* Symbol: _ZN6stereo5Utils11isFileExistEPKc */
/* Demangled: stereo::Utils::isFileExist(char const*) */
int _ZN6stereo5Utils11isFileExistEPKc(void);

/* Symbol: _ZNK7XMPMeta10DumpObjectEPFiPvPKcjES0_ */
/* Demangled: XMPMeta::DumpObject(int (*)(void*, char const*, unsigned int), void*) const */
int _ZNK7XMPMeta10DumpObjectEPFiPvPKcjES0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64ERKS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64ERKS6_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64ERKS6_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::EncodeToBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64ERKS6_PS6_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZTVN6stereo21SegmentMaskInfoParserE */
/* Demangled: vtable for stereo::SegmentMaskInfoParser */
extern void* _ZTVN6stereo21SegmentMaskInfoParserE;

/* Symbol: _ZN6stereo21StereoDepthInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE */
/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoDepthInfo*) */
int _ZN6stereo21StereoDepthInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DuplicateSubtreeERK8TXMPMetaIS6_EPS9_PKcSE_SE_SE_j */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DuplicateSubtree(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DuplicateSubtreeERK8TXMPMetaIS6_EPS9_PKcSE_SE_SE_j(void);

/* Symbol: _ZN11XMPIteratorC1EPKcS1_j */
/* Demangled: XMPIterator::XMPIterator(char const*, char const*, unsigned int) */
int _ZN11XMPIteratorC1EPKcS1_j(void);

/* Symbol: _ZN11XMPIteratorD1Ev */
/* Demangled: XMPIterator::~XMPIterator() */
int _ZN11XMPIteratorD1Ev(void);

/* Symbol: WXMPUtils_DecodeFromBase64_1 */
/* Demangled: WXMPUtils_DecodeFromBase64_1 */
int WXMPUtils_DecodeFromBase64_1(void);

/* Symbol: _ZZN9rapidjson13GenericReaderINS_4UTF8IcEES2_NS_12CrtAllocatorEE19ParseStringToStreamILj0ES2_S2_NS_18EncodedInputStreamIS2_NS_12MemoryStreamEEENS4_11StackStreamIcEEEEvRT2_RT3_E6escape */
/* Demangled: void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseStringToStream<0u, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::StackStream<char> >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&, rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::StackStream<char>&)::escape */
extern void* _ZZN9rapidjson13GenericReaderINS_4UTF8IcEES2_NS_12CrtAllocatorEE19ParseStringToStreamILj0ES2_S2_NS_18EncodedInputStreamIS2_NS_12MemoryStreamEEENS4_11StackStreamIcEEEEvRT2_RT3_E6escape;

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN7XMPMeta17DeleteStructFieldEPKcS1_S1_S1_ */
/* Demangled: XMPMeta::DeleteStructField(char const*, char const*, char const*, char const*) */
int _ZN7XMPMeta17DeleteStructFieldEPKcS1_S1_S1_(void);

/* Symbol: WXMPMeta_DoesStructFieldExist_1 */
/* Demangled: WXMPMeta_DoesStructFieldExist_1 */
int WXMPMeta_DoesStructFieldExist_1(void);

/* Symbol: WXMPMeta_SerializeToBuffer_1 */
/* Demangled: WXMPMeta_SerializeToBuffer_1 */
int WXMPMeta_SerializeToBuffer_1(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getGDepthMimeEv */
/* Demangled: stereo::StereoInfoJsonParser::getGDepthMime() */
int _ZN6stereo20StereoInfoJsonParser13getGDepthMimeEv(void);

/* Symbol: _ZN6stereo15SegmentMaskInfoD0Ev */
/* Demangled: stereo::SegmentMaskInfo::~SegmentMaskInfo() */
int _ZN6stereo15SegmentMaskInfoD0Ev(void);

/* Symbol: _ZN10RDF_Parser32ParseTypeResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::ParseTypeResourcePropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser32ParseTypeResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN6stereo5Utils16checkOrCreateDirEPKc */
/* Demangled: stereo::Utils::checkOrCreateDir(char const*) */
int _ZN6stereo5Utils16checkOrCreateDirEPKc(void);

/* Symbol: _ZTVN6stereo16StereoBufferInfoE */
/* Demangled: vtable for stereo::StereoBufferInfo */
extern void* _ZTVN6stereo16StereoBufferInfoE;

/* Symbol: _ZTVN6stereo17StereoCaptureInfoE */
/* Demangled: vtable for stereo::StereoCaptureInfo */
extern void* _ZTVN6stereo17StereoCaptureInfoE;

/* Symbol: _ZN6stereo21StereoDepthInfoParser14readBufferItemEv */
/* Demangled: stereo::StereoDepthInfoParser::readBufferItem() */
int _ZN6stereo21StereoDepthInfoParser14readBufferItemEv(void);

/* Symbol: _ZN6stereo20CustomizedDataPackerC2EPNS_8PackInfoE */
/* Demangled: stereo::CustomizedDataPacker::CustomizedDataPacker(stereo::PackInfo*) */
int _ZN6stereo20CustomizedDataPackerC2EPNS_8PackInfoE(void);

/* Symbol: _ZN6stereo9JpgPacker8writeXmpERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS4_NS5_9allocatorIS4_EEEE */
/* Demangled: stereo::JpgPacker::writeXmp(stereo::BufferTypeOutputStream&, stereo::Section*, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
int _ZN6stereo9JpgPacker8writeXmpERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS4_NS5_9allocatorIS4_EEEE(void);

/* Symbol: _ZNK8XMP_Node11GetLocalURIEPPKcPj */
/* Demangled: XMP_Node::GetLocalURI(char const**, unsigned int*) const */
int _ZNK8XMP_Node11GetLocalURIEPPKcPj(void);

/* Symbol: _ZN7XMPMetaD1Ev */
/* Demangled: XMPMeta::~XMPMeta() */
int _ZN7XMPMetaD1Ev(void);

/* Symbol: kXMPCore_EmbeddedVersion */
/* Demangled: kXMPCore_EmbeddedVersion */
extern void* kXMPCore_EmbeddedVersion;

/* Symbol: WXMPMeta_GetQualifier_1 */
/* Demangled: WXMPMeta_GetQualifier_1 */
int WXMPMeta_GetQualifier_1(void);

/* Symbol: _Z18NormalizeLangValuePNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: NormalizeLangValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z18NormalizeLangValuePNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE7reserveEm */
/* Demangled: std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::reserve(unsigned long) */
int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE7reserveEm(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateEPKcP12XMP_DateTime */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToDate(char const*, XMP_DateTime*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateEPKcP12XMP_DateTime(void);

/* Symbol: _ZN6stereo15XmpMetaOperator5writeEv */
/* Demangled: stereo::XmpMetaOperator::write() */
int _ZN6stereo15XmpMetaOperator5writeEv(void);

/* Symbol: _ZN6stereo10JsonParser22getValueBoolFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_ */
/* Demangled: stereo::JsonParser::getValueBoolFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser22getValueBoolFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser16writeSimpleValueEv */
/* Demangled: stereo::GoogleStereoInfoParser::writeSimpleValue() */
int _ZN6stereo22GoogleStereoInfoParser16writeSimpleValueEv(void);

/* Symbol: _ZN6stereo9XmpPacker18getXmpCommonHeaderENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiRNS_12StereoBufferE */
/* Demangled: stereo::XmpPacker::getXmpCommonHeader(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, int, stereo::StereoBuffer&) */
int _ZN6stereo9XmpPacker18getXmpCommonHeaderENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiRNS_12StereoBufferE(void);

/* Symbol: UTF8_to_UTF32LE */
/* Demangled: UTF8_to_UTF32LE */
extern void* UTF8_to_UTF32LE;

/* Symbol: _ZN6stereo20StereoInfoJsonParser7getPosXEv */
/* Demangled: stereo::StereoInfoJsonParser::getPosX() */
int _ZN6stereo20StereoInfoJsonParser7getPosXEv(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN6stereo21SegmentMaskInfoParserD1Ev */
/* Demangled: stereo::SegmentMaskInfoParser::~SegmentMaskInfoParser() */
int _ZN6stereo21SegmentMaskInfoParserD1Ev(void);

/* Symbol: WXMPMeta_SetLocalizedText_1 */
/* Demangled: WXMPMeta_SetLocalizedText_1 */
int WXMPMeta_SetLocalizedText_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPMeta() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_DateEPKcS9_P12XMP_DateTimePj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Date(char const*, char const*, XMP_DateTime*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_DateEPKcS9_P12XMP_DateTimePj(void);

/* Symbol: _ZNSt3__16vectorIPN6stereo15StereoBigBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >::__push_back_slow_path<stereo::StereoBigBuffer* const&>(stereo::StereoBigBuffer* const&) */
int _ZNSt3__16vectorIPN6stereo15StereoBigBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIPN6stereo17FaceDetectionInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<stereo::FaceDetectionInfo*, std::__1::allocator<stereo::FaceDetectionInfo*> >::__push_back_slow_path<stereo::FaceDetectionInfo* const&>(stereo::FaceDetectionInfo* const&) */
int _ZNSt3__16vectorIPN6stereo17FaceDetectionInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTVN6stereo23StereoCaptureInfoParserE */
/* Demangled: vtable for stereo::StereoCaptureInfoParser */
extern void* _ZTVN6stereo23StereoCaptureInfoParserE;

/* Symbol: _ZN6stereo22BufferTypeOutputStreamD2Ev */
/* Demangled: stereo::BufferTypeOutputStream::~BufferTypeOutputStream() */
int _ZN6stereo22BufferTypeOutputStreamD2Ev(void);

/* Symbol: _ZTVN6stereo10JsonParserE */
/* Demangled: vtable for stereo::JsonParser */
extern void* _ZTVN6stereo10JsonParserE;

/* Symbol: _ZN6stereo20CustomizedDataPacker4packEv */
/* Demangled: stereo::CustomizedDataPacker::pack() */
int _ZN6stereo20CustomizedDataPacker4packEv(void);

/* Symbol: _ZTTN6stereo18StereoInfoAccessorE */
/* Demangled: VTT for stereo::StereoInfoAccessor */
extern void* _ZTTN6stereo18StereoInfoAccessorE;

/* Symbol: _ZN8XMPUtils19ComposeLangSelectorEPKcS1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ComposeLangSelector(char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils19ComposeLangSelectorEPKcS1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE20__emplace_hint_multiIJRNS2_IKmSA_EEEEENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEENS_21__tree_const_iteratorISB_SQ_lEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, void*>*, long> std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> > > >::__emplace_hint_multi<std::__1::pair<unsigned long const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, void*>*, long>, std::__1::pair<unsigned long const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >&) */
int _ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE20__emplace_hint_multiIJRNS2_IKmSA_EEEEENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEENS_21__tree_const_iteratorISB_SQ_lEEDpOT_(void);

/* Symbol: _ZTVN6stereo22CustomizedMetaOperatorE */
/* Demangled: vtable for stereo::CustomizedMetaOperator */
extern void* _ZTVN6stereo22CustomizedMetaOperatorE;

/* Symbol: _ZN6stereo22ReadWriteLockFileUtils6unlockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::ReadWriteLockFileUtils::unlock(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo22ReadWriteLockFileUtils6unlockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7XMPMeta14DeletePropertyEPKcS1_ */
/* Demangled: XMPMeta::DeleteProperty(char const*, char const*) */
int _ZN7XMPMeta14DeletePropertyEPKcS1_(void);

/* Symbol: CodePoint_to_UTF16LE */
/* Demangled: CodePoint_to_UTF16LE */
extern void* CodePoint_to_UTF16LE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void);

/* Symbol: WXMPMeta_GetGlobalOptions_1 */
/* Demangled: WXMPMeta_GetGlobalOptions_1 */
int WXMPMeta_GetGlobalOptions_1(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser16writeSimpleValueEv */
/* Demangled: stereo::SegmentMaskInfoParser::writeSimpleValue() */
int _ZN6stereo21SegmentMaskInfoParser16writeSimpleValueEv(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParserD1Ev */
/* Demangled: stereo::StereoBufferInfoParser::~StereoBufferInfoParser() */
int _ZN6stereo22StereoBufferInfoParserD1Ev(void);

/* Symbol: _ZN6stereo9PackUtils17FIXED_BUFFER_SIZEE */
/* Demangled: stereo::PackUtils::FIXED_BUFFER_SIZE */
extern void* _ZN6stereo9PackUtils17FIXED_BUFFER_SIZEE;

/* Symbol: WXMPMeta_Erase_1 */
/* Demangled: WXMPMeta_Erase_1 */
int WXMPMeta_Erase_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream4sizeEv */
/* Demangled: stereo::BufferTypeOutputStream::size() */
int _ZN6stereo22BufferTypeOutputStream4sizeEv(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParser5writeEv */
/* Demangled: stereo::StereoBufferInfoParser::write() */
int _ZN6stereo22StereoBufferInfoParser5writeEv(void);

/* Symbol: _ZTv0_n24_N6stereo18StereoInfoAccessorD1Ev */
/* Demangled: virtual thunk to stereo::StereoInfoAccessor::~StereoInfoAccessor() */
int _ZTv0_n24_N6stereo18StereoInfoAccessorD1Ev(void);

/* Symbol: _ZN10RDF_Parser15NodeElementListEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::NodeElementList(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser15NodeElementListEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN7XMPMeta16SetLocalizedTextEPKcS1_S1_S1_S1_j */
/* Demangled: XMPMeta::SetLocalizedText(char const*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN7XMPMeta16SetLocalizedTextEPKcS1_S1_S1_S1_j(void);

/* Symbol: _ZN17XMP_HomeGrownLockC1Ev */
/* Demangled: XMP_HomeGrownLock::XMP_HomeGrownLock() */
int _ZN17XMP_HomeGrownLockC1Ev(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_RKS6_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_RKS6_j(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EP11__XMPMeta__ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(__XMPMeta__*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EP11__XMPMeta__(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SerializeToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int, unsigned int) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN7XMPMeta17RegisterNamespaceEPKcS1_PS1_Pj */
/* Demangled: XMPMeta::RegisterNamespace(char const*, char const*, char const**, unsigned int*) */
int _ZN7XMPMeta17RegisterNamespaceEPKcS1_PS1_Pj(void);

/* Symbol: voidDouble */
/* Demangled: voidDouble */
extern void* voidDouble;

/* Symbol: WXMPMeta_SetQualifier_1 */
/* Demangled: WXMPMeta_SetQualifier_1 */
int WXMPMeta_SetQualifier_1(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZN6stereo22BufferTypeOutputStreamC2Ei */
/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream(int) */
int _ZN6stereo22BufferTypeOutputStreamC2Ei(void);

/* Symbol: _ZN6stereo17StereoCaptureInfoD0Ev */
/* Demangled: stereo::StereoCaptureInfo::~StereoCaptureInfo() */
int _ZN6stereo17StereoCaptureInfoD0Ev(void);

/* Symbol: _ZN6stereo9JpgPacker6unpackEv */
/* Demangled: stereo::JpgPacker::unpack() */
int _ZN6stereo9JpgPacker6unpackEv(void);

/* Symbol: _ZN8XMPUtils16ConvertToUTCTimeEP12XMP_DateTime */
/* Demangled: XMPUtils::ConvertToUTCTime(XMP_DateTime*) */
int _ZN8XMPUtils16ConvertToUTCTimeEP12XMP_DateTime(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream8toBufferERNS_12StereoBufferE */
/* Demangled: stereo::BufferTypeOutputStream::toBuffer(stereo::StereoBuffer&) */
int _ZN6stereo22BufferTypeOutputStream8toBufferERNS_12StereoBufferE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEERKT_(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser15readSimpleValueEv */
/* Demangled: stereo::StereoDepthInfoParser::readSimpleValue() */
int _ZN6stereo21StereoDepthInfoParser15readSimpleValueEv(void);

/* Symbol: _ZN6stereo9JpgPackerC1EPNS_8PackInfoE */
/* Demangled: stereo::JpgPacker::JpgPacker(stereo::PackInfo*) */
int _ZN6stereo9JpgPackerC1EPNS_8PackInfoE(void);

/* Symbol: _Z9SwapUTF16PKtPtm */
/* Demangled: SwapUTF16(unsigned short const*, unsigned short*, unsigned long) */
int _Z9SwapUTF16PKtPtm(void);

/* Symbol: WXMPUtils_ConvertToInt_1 */
/* Demangled: WXMPUtils_ConvertToInt_1 */
int WXMPUtils_ConvertToInt_1(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParserD1Ev */
/* Demangled: stereo::StereoInfoJsonParser::~StereoInfoJsonParser() */
int _ZN6stereo20StereoInfoJsonParserD1Ev(void);

/* Symbol: _ZTV12ExpatAdapter */
/* Demangled: vtable for ExpatAdapter */
extern void* _ZTV12ExpatAdapter;

/* Symbol: _ZN6stereo5Utils14intToHexStringEi */
/* Demangled: stereo::Utils::intToHexString(int) */
int _ZN6stereo5Utils14intToHexStringEi(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::GoogleStereoInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo22GoogleStereoInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo18StereoInfoAccessorD1Ev */
/* Demangled: stereo::StereoInfoAccessor::~StereoInfoAccessor() */
int _ZN6stereo18StereoInfoAccessorD1Ev(void);

/* Symbol: _ZN6stereo14CustomizedMeta9serializeEv */
/* Demangled: stereo::CustomizedMeta::serialize() */
int _ZN6stereo14CustomizedMeta9serializeEv(void);

/* Symbol: _ZN6stereo13BufferManager8mBuffersE */
/* Demangled: stereo::BufferManager::mBuffers */
extern void* _ZN6stereo13BufferManager8mBuffersE;

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getGImageMimeEv */
/* Demangled: stereo::StereoInfoJsonParser::getGImageMime() */
int _ZN6stereo20StereoInfoJsonParser13getGImageMimeEv(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE */
/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoDepthInfo*) */
int _ZN6stereo21StereoDepthInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser9serializeEv */
/* Demangled: stereo::StereoDepthInfoParser::serialize() */
int _ZN6stereo21StereoDepthInfoParser9serializeEv(void);

/* Symbol: _ZN6stereo9PackUtils17TYPE_DEBUG_BUFFERE */
/* Demangled: stereo::PackUtils::TYPE_DEBUG_BUFFER */
extern void* _ZN6stereo9PackUtils17TYPE_DEBUG_BUFFERE;

/* Symbol: _ZN6stereo9JpgPacker27checkAppSectionTypeInStreamERNS_21BufferTypeInputStreamEPNS_7SectionE */
/* Demangled: stereo::JpgPacker::checkAppSectionTypeInStream(stereo::BufferTypeInputStream&, stereo::Section*) */
int _ZN6stereo9JpgPacker27checkAppSectionTypeInStreamERNS_21BufferTypeInputStreamEPNS_7SectionE(void);

/* Symbol: _ZN8XMPUtils15CurrentDateTimeEP12XMP_DateTime */
/* Demangled: XMPUtils::CurrentDateTime(XMP_DateTime*) */
int _ZN8XMPUtils15CurrentDateTimeEP12XMP_DateTime(void);

/* Symbol: _ZN6stereo14CustomizedMeta17getPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE */
/* Demangled: stereo::CustomizedMeta::getPropertyBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
int _ZN6stereo14CustomizedMeta17getPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE(void);

/* Symbol: WXMPMeta_SetObjectOptions_1 */
/* Demangled: WXMPMeta_SetObjectOptions_1 */
int WXMPMeta_SetObjectOptions_1(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser11getFaceRectEi */
/* Demangled: stereo::StereoInfoJsonParser::getFaceRect(int) */
int _ZN6stereo20StereoInfoJsonParser11getFaceRectEi(void);

/* Symbol: _ZN7XMPMeta16SetObjectOptionsEj */
/* Demangled: XMPMeta::SetObjectOptions(unsigned int) */
int _ZN7XMPMeta16SetObjectOptionsEj(void);

/* Symbol: _ZN11XMPIterator10InitializeEv */
/* Demangled: XMPIterator::Initialize() */
int _ZN11XMPIterator10InitializeEv(void);

/* Symbol: WXMPMeta_SetObjectName_1 */
/* Demangled: WXMPMeta_SetObjectName_1 */
int WXMPMeta_SetObjectName_1(void);

/* Symbol: WXMPUtils_RemoveProperties_1 */
/* Demangled: WXMPUtils_RemoveProperties_1 */
int WXMPUtils_RemoveProperties_1(void);

/* Symbol: _ZTV8XMP_Node */
/* Demangled: vtable for XMP_Node */
extern void* _ZTV8XMP_Node;

/* Symbol: _ZN7XMPMetaC1Ev */
/* Demangled: XMPMeta::XMPMeta() */
int _ZN7XMPMetaC1Ev(void);

/* Symbol: _Z14CloneOffspringPK8XMP_NodePS_b */
/* Demangled: CloneOffspring(XMP_Node const*, XMP_Node*, bool) */
int _Z14CloneOffspringPK8XMP_NodePS_b(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_RKS6_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetStructField(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_RKS6_j(void);

/* Symbol: _ZTVN6stereo16StereoConfigInfoE */
/* Demangled: vtable for stereo::StereoConfigInfo */
extern void* _ZTVN6stereo16StereoConfigInfoE;

/* Symbol: _ZN12ExpatAdapterD0Ev */
/* Demangled: ExpatAdapter::~ExpatAdapter() */
int _ZN12ExpatAdapterD0Ev(void);

/* Symbol: _ZN8XMPUtils12ConvertToIntEPKc */
/* Demangled: XMPUtils::ConvertToInt(char const*) */
int _ZN8XMPUtils12ConvertToIntEPKc(void);

/* Symbol: _ZNSt3__115__inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeEl */
/* Demangled: void std::__1::__inplace_merge<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*, long) */
int _ZNSt3__115__inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeEl(void);

/* Symbol: UTF16LE_to_UTF32LE */
/* Demangled: UTF16LE_to_UTF32LE */
extern void* UTF16LE_to_UTF32LE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__emplace_multiIJRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_multi<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__emplace_multiIJRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEDpOT_(void);

/* Symbol: WXMPUtils_DuplicateSubtree_1 */
/* Demangled: WXMPUtils_DuplicateSubtree_1 */
int WXMPUtils_DuplicateSubtree_1(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13GetObjectNameEPS6_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetObjectName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13GetObjectNameEPS6_(void);

/* Symbol: _ZN7XMPMeta16GetGlobalOptionsEv */
/* Demangled: XMPMeta::GetGlobalOptions() */
int _ZN7XMPMeta16GetGlobalOptionsEv(void);

/* Symbol: _ZNSt3__113__stable_sortIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeEl */
/* Demangled: void std::__1::__stable_sort<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*, long) */
int _ZNSt3__113__stable_sortIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeEl(void);

/* Symbol: _ZNSt3__118__stable_sort_moveIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeE */
/* Demangled: void std::__1::__stable_sort_move<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*) */
int _ZNSt3__118__stable_sort_moveIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_T_NS_15iterator_traitsIS9_E15difference_typeEPNSC_10value_typeE(void);

/* Symbol: _ZN6stereo7XmpMetaC1ERKNS_12StereoBufferE */
/* Demangled: stereo::XmpMeta::XmpMeta(stereo::StereoBuffer const&) */
int _ZN6stereo7XmpMetaC1ERKNS_12StereoBufferE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19DeleteLocalizedTextEPKcS9_S9_S9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteLocalizedText(char const*, char const*, char const*, char const*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19DeleteLocalizedTextEPKcS9_S9_S9_(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZTVN6stereo22BufferTypeOutputStreamE */
/* Demangled: vtable for stereo::BufferTypeOutputStream */
extern void* _ZTVN6stereo22BufferTypeOutputStreamE;

/* Symbol: _ZN6stereo9JpgPackerD1Ev */
/* Demangled: stereo::JpgPacker::~JpgPacker() */
int _ZN6stereo9JpgPackerD1Ev(void);

/* Symbol: _Z7MD5InitP7MD5_CTX */
/* Demangled: MD5Init(MD5_CTX*) */
int _Z7MD5InitP7MD5_CTX(void);

/* Symbol: _ZTVN6stereo9XmpPackerE */
/* Demangled: vtable for stereo::XmpPacker */
extern void* _ZTVN6stereo9XmpPackerE;

/* Symbol: _ZN8XMPUtils15ConvertFromDateERK12XMP_DateTimePNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: XMPUtils::ConvertFromDate(XMP_DateTime const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils15ConvertFromDateERK12XMP_DateTimePNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperator4readEv */
/* Demangled: stereo::CustomizedMetaOperator::read() */
int _ZN6stereo22CustomizedMetaOperator4readEv(void);

/* Symbol: _Z12CloneSubtreePK8XMP_NodePS_b */
/* Demangled: CloneSubtree(XMP_Node const*, XMP_Node*, bool) */
int _Z12CloneSubtreePK8XMP_NodePS_b(void);

/* Symbol: _ZN7XMPMeta16ProcessXMLBufferEPKcjb */
/* Demangled: XMPMeta::ProcessXMLBuffer(char const*, unsigned int, bool) */
int _ZN7XMPMeta16ProcessXMLBufferEPKcjb(void);

/* Symbol: _Z15DumpClearStringRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFiPvPKcjES8_ */
/* Demangled: DumpClearString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int (*)(void*, char const*, unsigned int), void*) */
int _Z15DumpClearStringRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFiPvPKcjES8_(void);

/* Symbol: _ZNK6stereo7XmpMeta17registerNamespaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: stereo::XmpMeta::registerNamespace(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK6stereo7XmpMeta17registerNamespaceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: _ZN6stereo22StereoConfigInfoParser21getBufferItemInstanceEv */
/* Demangled: stereo::StereoConfigInfoParser::getBufferItemInstance() */
int _ZN6stereo22StereoConfigInfoParser21getBufferItemInstanceEv(void);

/* Symbol: _ZN6stereo9PackUtils16TYPE_CLEAR_IMAGEE */
/* Demangled: stereo::PackUtils::TYPE_CLEAR_IMAGE */
extern void* _ZN6stereo9PackUtils16TYPE_CLEAR_IMAGEE;

/* Symbol: _ZNSt3__16vectorIP10StructItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<StructItem*, std::__1::allocator<StructItem*> >::__push_back_slow_path<StructItem* const&>(StructItem* const&) */
int _ZNSt3__16vectorIP10StructItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: WXMPIterator_PropCTor_1 */
/* Demangled: WXMPIterator_PropCTor_1 */
int WXMPIterator_PropCTor_1(void);

/* Symbol: _ZN6stereo13BufferManager13pushBigBufferEPNS_15StereoBigBufferE */
/* Demangled: stereo::BufferManager::pushBigBuffer(stereo::StereoBigBuffer*) */
int _ZN6stereo13BufferManager13pushBigBufferEPNS_15StereoBigBufferE(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStreamC2Ev */
/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream() */
int _ZN6stereo22BufferTypeOutputStreamC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SA_EEEEENSJ_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoRWLock*> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoRWLock*>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SA_EEEEENSJ_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserD2Ev */
/* Demangled: stereo::GoogleStereoInfoParser::~GoogleStereoInfoParser() */
int _ZN6stereo22GoogleStereoInfoParserD2Ev(void);

/* Symbol: _ZTVN6stereo22GoogleStereoInfoParserE */
/* Demangled: vtable for stereo::GoogleStereoInfoParser */
extern void* _ZTVN6stereo22GoogleStereoInfoParserE;

/* Symbol: _ZN6stereo21SegmentMaskInfoParser22getSimpleValueInstanceEv */
/* Demangled: stereo::SegmentMaskInfoParser::getSimpleValueInstance() */
int _ZN6stereo21SegmentMaskInfoParser22getSimpleValueInstanceEv(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor17writeRefocusImageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_16StereoConfigInfoERNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoAccessor::writeRefocusImage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoConfigInfo&, stereo::StereoBuffer&) */
int _ZN6stereo18StereoInfoAccessor17writeRefocusImageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_16StereoConfigInfoERNS_12StereoBufferE(void);

/* Symbol: _ZNK7XMPMeta18DoesArrayItemExistEPKcS1_i */
/* Demangled: XMPMeta::DoesArrayItemExist(char const*, char const*, int) const */
int _ZNK7XMPMeta18DoesArrayItemExistEPKcS1_i(void);

/* Symbol: _ZN17XMP_HomeGrownLock16ReleaseFromWriteEv */
/* Demangled: XMP_HomeGrownLock::ReleaseFromWrite() */
int _ZN17XMP_HomeGrownLock16ReleaseFromWriteEv(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_Ej */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_Ej(void);

/* Symbol: _ZN6stereo15XmpMetaOperatorD2Ev */
/* Demangled: stereo::XmpMetaOperator::~XmpMetaOperator() */
int _ZN6stereo15XmpMetaOperatorD2Ev(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser15initSimpleValueEv */
/* Demangled: stereo::SegmentMaskInfoParser::initSimpleValue() */
int _ZN6stereo21SegmentMaskInfoParser15initSimpleValueEv(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParserD2Ev */
/* Demangled: stereo::StereoDepthInfoParser::~StereoDepthInfoParser() */
int _ZN6stereo21StereoDepthInfoParserD2Ev(void);

/* Symbol: _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >::__push_back_slow_path<XMP_Node* const&>(XMP_Node* const&) */
int _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN7XMPMeta18GetNamespacePrefixEPKcPS1_Pj */
/* Demangled: XMPMeta::GetNamespacePrefix(char const*, char const**, unsigned int*) */
int _ZN7XMPMeta18GetNamespacePrefixEPKcPS1_Pj(void);

/* Symbol: _ZNK7XMPMeta17DoesPropertyExistEPKcS1_ */
/* Demangled: XMPMeta::DoesPropertyExist(char const*, char const*) const */
int _ZNK7XMPMeta17DoesPropertyExistEPKcS1_(void);

/* Symbol: _ZN8XMPUtils10InitializeEv */
/* Demangled: XMPUtils::Initialize() */
int _ZN8XMPUtils10InitializeEv(void);

/* Symbol: WXMPMeta_SetProperty_Int64_1 */
/* Demangled: WXMPMeta_SetProperty_Int64_1 */
int WXMPMeta_SetProperty_Int64_1(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParser14dumpJsonBufferENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoCaptureInfoParser::dumpJsonBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo23StereoCaptureInfoParser14dumpJsonBufferENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZN7XMPMeta23ResetErrorCallbackLimitEj */
/* Demangled: XMPMeta::ResetErrorCallbackLimit(unsigned int) */
int _ZN7XMPMeta23ResetErrorCallbackLimitEj(void);

/* Symbol: _ZN8XMPUtils14ConvertToInt64EPKc */
/* Demangled: XMPUtils::ConvertToInt64(char const*) */
int _ZN8XMPUtils14ConvertToInt64EPKc(void);

/* Symbol: _ZNK18XMP_NamespaceTable4DumpEPFiPvPKcjES0_ */
/* Demangled: XMP_NamespaceTable::Dump(int (*)(void*, char const*, unsigned int), void*) const */
int _ZNK18XMP_NamespaceTable4DumpEPFiPvPKcjES0_(void);

/* Symbol: _ZN6stereo16StereoBufferInfoD2Ev */
/* Demangled: stereo::StereoBufferInfo::~StereoBufferInfo() */
int _ZN6stereo16StereoBufferInfoD2Ev(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser5writeEv */
/* Demangled: stereo::StereoConfigInfoParser::write() */
int _ZN6stereo22StereoConfigInfoParser5writeEv(void);

/* Symbol: _ZN6stereo9PackUtils15intToByteBufferEiRNS_12StereoBufferE */
/* Demangled: stereo::PackUtils::intToByteBuffer(int, stereo::StereoBuffer&) */
int _ZN6stereo9PackUtils15intToByteBufferEiRNS_12StereoBufferE(void);

/* Symbol: _ZN8XMPUtils16DecodeFromBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::DecodeFromBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils16DecodeFromBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser17writeCustDataItemEv */
/* Demangled: stereo::StereoDepthInfoParser::writeCustDataItem() */
int _ZN6stereo21StereoDepthInfoParser17writeCustDataItemEv(void);

/* Symbol: _ZN7XMPMeta5EraseEv */
/* Demangled: XMPMeta::Erase() */
int _ZN7XMPMeta5EraseEv(void);

/* Symbol: _ZN6stereo15StereoBigBufferD2Ev */
/* Demangled: stereo::StereoBigBuffer::~StereoBigBuffer() */
int _ZN6stereo15StereoBigBufferD2Ev(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream4growEi */
/* Demangled: stereo::BufferTypeOutputStream::grow(int) */
int _ZN6stereo22BufferTypeOutputStream4growEi(void);

/* Symbol: _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<stereo::StereoBuffer, std::__1::allocator<stereo::StereoBuffer> >::__push_back_slow_path<stereo::StereoBuffer const&>(stereo::StereoBuffer const&) */
int _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getJpsHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getJpsHeight() */
int _ZN6stereo20StereoInfoJsonParser12getJpsHeightEv(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetNamespaceURIEPKcPS6_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetNamespaceURI(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetNamespaceURIEPKcPS6_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN6stereo7XmpMetaC2ERKNS_12StereoBufferE */
/* Demangled: stereo::XmpMeta::XmpMeta(stereo::StereoBuffer const&) */
int _ZN6stereo7XmpMetaC2ERKNS_12StereoBufferE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ParseFromBufferEPKcjj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ParseFromBuffer(char const*, unsigned int, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ParseFromBufferEPKcjj(void);

/* Symbol: _Z17DeleteEmptySchemaP8XMP_Node */
/* Demangled: DeleteEmptySchema(XMP_Node*) */
int _Z17DeleteEmptySchemaP8XMP_Node(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jS9_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::AppendArrayItem(char const*, char const*, unsigned int, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jS9_j(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getMaskHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getMaskHeight() */
int _ZN6stereo20StereoInfoJsonParser13getMaskHeightEv(void);

/* Symbol: _ZN6stereo5Utils17writeBufferToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12StereoBufferE */
/* Demangled: stereo::Utils::writeBufferToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer const&) */
int _ZN6stereo5Utils17writeBufferToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12StereoBufferE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser16readCustDataItemEv */
/* Demangled: stereo::SegmentMaskInfoParser::readCustDataItem() */
int _ZN6stereo21SegmentMaskInfoParser16readCustDataItemEv(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor19readStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoInfoAccessor::readStereoDepthInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo18StereoInfoAccessor19readStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _Z14SortNamedNodesRNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEE */
/* Demangled: SortNamedNodes(std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >&) */
int _Z14SortNamedNodesRNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEE(void);

/* Symbol: _ZN8XML_Node9SerializeEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: XML_Node::Serialize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XML_Node9SerializeEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo15StereoBigBufferC2Ej */
/* Demangled: stereo::StereoBigBuffer::StereoBigBuffer(unsigned int) */
int _ZN6stereo15StereoBigBufferC2Ej(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser21getStructItemInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: stereo::StereoConfigInfoParser::getStructItemInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo22StereoConfigInfoParser21getStructItemInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_RKS6_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeFieldSelector(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_RKS6_PS6_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE14__assign_multiINS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEEEvT_SM_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE14__assign_multiINS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEEEvT_SM_(void);

/* Symbol: WXMPMeta_DecrementRefCount_1 */
/* Demangled: WXMPMeta_DecrementRefCount_1 */
int WXMPMeta_DecrementRefCount_1(void);

/* Symbol: WXMPMeta_GetNamespaceURI_1 */
/* Demangled: WXMPMeta_GetNamespaceURI_1 */
int WXMPMeta_GetNamespaceURI_1(void);

/* Symbol: _ZN6stereo9XmpPackerD1Ev */
/* Demangled: stereo::XmpPacker::~XmpPacker() */
int _ZN6stereo9XmpPackerD1Ev(void);

/* Symbol: WXMPMeta_GetStructField_1 */
/* Demangled: WXMPMeta_GetStructField_1 */
int WXMPMeta_GetStructField_1(void);

/* Symbol: WXMPMeta_SetDefaultErrorCallback_1 */
/* Demangled: WXMPMeta_SetDefaultErrorCallback_1 */
int WXMPMeta_SetDefaultErrorCallback_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18ConvertToLocalTimeEP12XMP_DateTime */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToLocalTime(XMP_DateTime*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18ConvertToLocalTimeEP12XMP_DateTime(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperatorD2Ev */
/* Demangled: stereo::CustomizedMetaOperator::~CustomizedMetaOperator() */
int _ZN6stereo22CustomizedMetaOperatorD2Ev(void);

/* Symbol: _ZN6stereo15StereoDepthInfoD0Ev */
/* Demangled: stereo::StereoDepthInfo::~StereoDepthInfo() */
int _ZN6stereo15StereoDepthInfoD0Ev(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser20getDepthBufferHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getDepthBufferHeight() */
int _ZN6stereo20StereoInfoJsonParser20getDepthBufferHeightEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN8XMPUtils13ApplyTemplateEP7XMPMetaRKS0_j */
/* Demangled: XMPUtils::ApplyTemplate(XMPMeta*, XMPMeta const&, unsigned int) */
int _ZN8XMPUtils13ApplyTemplateEP7XMPMetaRKS0_j(void);

/* Symbol: UTF32LE_to_UTF16LE */
/* Demangled: UTF32LE_to_UTF16LE */
extern void* UTF32LE_to_UTF16LE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _Z13DeleteSubtreeNSt3__111__wrap_iterIPP8XMP_NodeEE */
/* Demangled: DeleteSubtree(std::__1::__wrap_iter<XMP_Node**>) */
int _Z13DeleteSubtreeNSt3__111__wrap_iterIPP8XMP_NodeEE(void);

/* Symbol: _ZN6stereo7XmpMeta14setStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_S9_ */
/* Demangled: stereo::XmpMeta::setStructField(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo7XmpMeta14setStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_S9_(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20DoesStructFieldExistEPKcS9_S9_S9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesStructFieldExist(char const*, char const*, char const*, char const*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20DoesStructFieldExistEPKcS9_S9_S9_(void);

/* Symbol: _ZTVN6stereo15StereoBigBufferE */
/* Demangled: vtable for stereo::StereoBigBuffer */
extern void* _ZTVN6stereo15StereoBigBufferE;

/* Symbol: _ZN6stereo9PackUtils34MAX_LEN_FOR_REAL_XMP_DATA_PER_APP1E */
/* Demangled: stereo::PackUtils::MAX_LEN_FOR_REAL_XMP_DATA_PER_APP1 */
extern void* _ZN6stereo9PackUtils34MAX_LEN_FOR_REAL_XMP_DATA_PER_APP1E;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserC2EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE */
/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::GoogleStereoInfo*) */
int _ZN6stereo22GoogleStereoInfoParserC2EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE(void);

/* Symbol: _ZN6stereo9PackUtils3SOSE */
/* Demangled: stereo::PackUtils::SOS */
extern void* _ZN6stereo9PackUtils3SOSE;

/* Symbol: _ZNSt3__17__sort4IRPFbP8XMP_NodeS2_EPS2_EEjT0_S7_S7_S7_T_ */
/* Demangled: unsigned int std::__1::__sort4<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
int _ZNSt3__17__sort4IRPFbP8XMP_NodeS2_EPS2_EEjT0_S7_S7_S7_T_(void);

/* Symbol: _Z9SwapUTF32PKjPjm */
/* Demangled: SwapUTF32(unsigned int const*, unsigned int*, unsigned long) */
int _Z9SwapUTF32PKjPjm(void);

/* Symbol: _ZN6stereo21BufferTypeInputStreamD0Ev */
/* Demangled: stereo::BufferTypeInputStream::~BufferTypeInputStream() */
int _ZN6stereo21BufferTypeInputStreamD0Ev(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser16getDepthRotationEv */
/* Demangled: stereo::StereoInfoJsonParser::getDepthRotation() */
int _ZN6stereo20StereoInfoJsonParser16getDepthRotationEv(void);

/* Symbol: WXMPUtils_SetTimeZone_1 */
/* Demangled: WXMPUtils_SetTimeZone_1 */
int WXMPUtils_SetTimeZone_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16RemovePropertiesEP8TXMPMetaIS6_EPKcSC_j */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::RemoveProperties(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, unsigned int) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16RemovePropertiesEP8TXMPMetaIS6_EPKcSC_j(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser14readBufferItemEv */
/* Demangled: stereo::GoogleStereoInfoParser::readBufferItem() */
int _ZN6stereo22GoogleStereoInfoParser14readBufferItemEv(void);

/* Symbol: _ZN6stereo9PackUtils17TYPE_UNKNOW_APP15E */
/* Demangled: stereo::PackUtils::TYPE_UNKNOW_APP15 */
extern void* _ZN6stereo9PackUtils17TYPE_UNKNOW_APP15E;

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jRKS6_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::AppendArrayItem(char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15AppendArrayItemEPKcS9_jRKS6_j(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParserC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE */
/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoBufferInfo*) */
int _ZN6stereo22StereoBufferInfoParserC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::__push_back_slow_path<XPathStepInfo>(XPathStepInfo&&) */
int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN18XMP_NamespaceTableC1ERKS_ */
/* Demangled: XMP_NamespaceTable::XMP_NamespaceTable(XMP_NamespaceTable const&) */
int _ZN18XMP_NamespaceTableC1ERKS_(void);

/* Symbol: _ZNK8XML_Node19GetLeafContentValueEv */
/* Demangled: XML_Node::GetLeafContentValue() const */
int _ZNK8XML_Node19GetLeafContentValueEv(void);

/* Symbol: _ZNK7XMPMeta20DoesStructFieldExistEPKcS1_S1_S1_ */
/* Demangled: XMPMeta::DoesStructFieldExist(char const*, char const*, char const*, char const*) const */
int _ZNK7XMPMeta20DoesStructFieldExistEPKcS1_S1_S1_(void);

/* Symbol: _ZNK6stereo7XmpMeta14getStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_PS7_ */
/* Demangled: stereo::XmpMeta::getStructField(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK6stereo7XmpMeta14getStructFieldERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_PS7_(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser15readSimpleValueEv */
/* Demangled: stereo::SegmentMaskInfoParser::readSimpleValue() */
int _ZN6stereo21SegmentMaskInfoParser15readSimpleValueEv(void);

/* Symbol: _ZN11XMPIteratorC1ERK7XMPMetaPKcS4_j */
/* Demangled: XMPIterator::XMPIterator(XMPMeta const&, char const*, char const*, unsigned int) */
int _ZN11XMPIteratorC1ERK7XMPMetaPKcS4_j(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream5writeERKNS_12StereoBufferE */
/* Demangled: stereo::BufferTypeOutputStream::write(stereo::StereoBuffer const&) */
int _ZN6stereo22BufferTypeOutputStream5writeERKNS_12StereoBufferE(void);

/* Symbol: _ZNSt3__16vectorIP10BufferItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<BufferItem*, std::__1::allocator<BufferItem*> >::__push_back_slow_path<BufferItem* const&>(BufferItem* const&) */
int _ZNSt3__16vectorIP10BufferItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN6stereo9PackUtils15byteBufferToIntERKNS_12StereoBufferEii */
/* Demangled: stereo::PackUtils::byteBufferToInt(stereo::StereoBuffer const&, int, int) */
int _ZN6stereo9PackUtils15byteBufferToIntERKNS_12StereoBufferEii(void);

/* Symbol: void_wResult */
/* Demangled: void_wResult */
extern void* void_wResult;

/* Symbol: _ZNK6stereo7XmpMeta17getPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE */
/* Demangled: stereo::XmpMeta::getPropertyBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) const */
int _ZNK6stereo7XmpMeta17getPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo20CustomizedDataPacker6unpackEv */
/* Demangled: stereo::CustomizedDataPacker::unpack() */
int _ZN6stereo20CustomizedDataPacker6unpackEv(void);

/* Symbol: _ZN7XMPMeta17SetProperty_Int64EPKcS1_xj */
/* Demangled: XMPMeta::SetProperty_Int64(char const*, char const*, long long, unsigned int) */
int _ZN7XMPMeta17SetProperty_Int64EPKcS1_xj(void);

/* Symbol: _ZNK7XMPMeta17GetProperty_Int64EPKcS1_PxPj */
/* Demangled: XMPMeta::GetProperty_Int64(char const*, char const*, long long*, unsigned int*) const */
int _ZNK7XMPMeta17GetProperty_Int64EPKcS1_PxPj(void);

/* Symbol: Initialize_LibUtils */
/* Demangled: Initialize_LibUtils */
int Initialize_LibUtils(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11GetPropertyEPKcS9_PS6_Pj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11GetPropertyEPKcS9_PS6_Pj(void);

/* Symbol: _ZN6stereo15XmpMetaOperator9serializeEv */
/* Demangled: stereo::XmpMetaOperator::serialize() */
int _ZN6stereo15XmpMetaOperator9serializeEv(void);

/* Symbol: _ZN10RDF_Parser12AddChildNodeEP8XMP_NodeRK8XML_NodePKcb */
/* Demangled: RDF_Parser::AddChildNode(XMP_Node*, XML_Node const&, char const*, bool) */
int _ZN10RDF_Parser12AddChildNodeEP8XMP_NodeRK8XML_NodePKcb(void);

/* Symbol: _Z13FindChildNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE */
/* Demangled: FindChildNode(XMP_Node*, char const*, bool, std::__1::__wrap_iter<XMP_Node**>*) */
int _Z13FindChildNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE(void);

/* Symbol: WXMPIterator_IncrementRefCount_1 */
/* Demangled: WXMPIterator_IncrementRefCount_1 */
int WXMPIterator_IncrementRefCount_1(void);

/* Symbol: _ZN6stereo9PackUtils17TYPE_STANDARD_XMPE */
/* Demangled: stereo::PackUtils::TYPE_STANDARD_XMP */
extern void* _ZN6stereo9PackUtils17TYPE_STANDARD_XMPE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SB_EEEEENSK_INS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_SB_EEEEENSK_INS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcSD_j */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcSD_j(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromBoolEbPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromBool(bool, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromBoolEbPS6_(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser15initSimpleValueEv */
/* Demangled: stereo::StereoConfigInfoParser::initSimpleValue() */
int _ZN6stereo22StereoConfigInfoParser15initSimpleValueEv(void);

/* Symbol: _ZN10RDF_Parser29ParseTypeOtherPropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::ParseTypeOtherPropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser29ParseTypeOtherPropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _Z11ExpandXPathPKcS0_PNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEE */
/* Demangled: ExpandXPath(char const*, char const*, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >*) */
int _Z11ExpandXPathPKcS0_PNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEE(void);

/* Symbol: Terminate_LibUtils */
/* Demangled: Terminate_LibUtils */
int Terminate_LibUtils(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserC1ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE */
/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, stereo::GoogleStereoInfo*) */
int _ZN6stereo22GoogleStereoInfoParserC1ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_RKS6_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetQualifier(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_RKS6_j(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolERKS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToBool(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolERKS6_(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser22getSimpleValueInstanceEv */
/* Demangled: stereo::StereoDepthInfoParser::getSimpleValueInstance() */
int _ZN6stereo21StereoDepthInfoParser22getSimpleValueInstanceEv(void);

/* Symbol: WXMPMeta_ResetErrorCallbackLimit_1 */
/* Demangled: WXMPMeta_ResetErrorCallbackLimit_1 */
int WXMPMeta_ResetErrorCallbackLimit_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18GetNamespacePrefixEPKcPS6_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetNamespacePrefix(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18GetNamespacePrefixEPKcPS6_(void);

/* Symbol: _ZN6stereo22ReadWriteLockFileUtils8readLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::ReadWriteLockFileUtils::readLock(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo22ReadWriteLockFileUtils8readLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_S9_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeFieldSelector(char const*, char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeFieldSelectorEPKcS9_S9_S9_S9_PS6_(void);

/* Symbol: _ZNK7XMPMeta5CloneEPS_j */
/* Demangled: XMPMeta::Clone(XMPMeta*, unsigned int) const */
int _ZNK7XMPMeta5CloneEPS_j(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getFaceRatioEv */
/* Demangled: stereo::StereoInfoJsonParser::getFaceRatio() */
int _ZN6stereo20StereoInfoJsonParser12getFaceRatioEv(void);

/* Symbol: _Z15FromUTF16NativePKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: FromUTF16Native(unsigned short const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z15FromUTF16NativePKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: WXMPMeta_SetProperty_Bool_1 */
/* Demangled: WXMPMeta_SetProperty_Bool_1 */
int WXMPMeta_SetProperty_Bool_1(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetClientString(void*, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj(void);

/* Symbol: _ZN6stereo9PackUtils19WRITE_XMP_AFTER_SOIE */
/* Demangled: stereo::PackUtils::WRITE_XMP_AFTER_SOI */
extern void* _ZN6stereo9PackUtils19WRITE_XMP_AFTER_SOIE;

/* Symbol: UTF8_to_UTF16LE */
/* Demangled: UTF8_to_UTF16LE */
extern void* UTF8_to_UTF16LE;

/* Symbol: _ZN6stereo7XmpMetaC1EPKci */
/* Demangled: stereo::XmpMeta::XmpMeta(char const*, int) */
int _ZN6stereo7XmpMetaC1EPKci(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParserD0Ev */
/* Demangled: stereo::StereoCaptureInfoParser::~StereoCaptureInfoParser() */
int _ZN6stereo23StereoCaptureInfoParserD0Ev(void);

/* Symbol: _ZN17XMP_HomeGrownLockD2Ev */
/* Demangled: XMP_HomeGrownLock::~XMP_HomeGrownLock() */
int _ZN17XMP_HomeGrownLockD2Ev(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14PackageForJPEGERK8TXMPMetaIS6_EPS6_SC_SC_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::PackageForJPEG(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14PackageForJPEGERK8TXMPMetaIS6_EPS6_SC_SC_(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferEii */
/* Demangled: stereo::BufferTypeInputStream::read(stereo::StereoBuffer&, int, int) */
int _ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferEii(void);

/* Symbol: _ZN6stereo10JsonParserD2Ev */
/* Demangled: stereo::JsonParser::~JsonParser() */
int _ZN6stereo10JsonParserD2Ev(void);

/* Symbol: _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEjj */
/* Demangled: stereo::Utils::buffer2Str(stereo::StereoBuffer const&, unsigned int, unsigned int) */
int _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEjj(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParserC2ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE */
/* Demangled: stereo::SegmentMaskInfoParser::SegmentMaskInfoParser(stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::SegmentMaskInfo*) */
int _ZN6stereo21SegmentMaskInfoParserC2ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE(void);

/* Symbol: _ZN7XMPMeta17SetProperty_FloatEPKcS1_dj */
/* Demangled: XMPMeta::SetProperty_Float(char const*, char const*, double, unsigned int) */
int _ZN7XMPMeta17SetProperty_FloatEPKcS1_dj(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser5writeEv */
/* Demangled: stereo::SegmentMaskInfoParser::write() */
int _ZN6stereo21SegmentMaskInfoParser5writeEv(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetTimeZoneEP12XMP_DateTime */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetTimeZone(XMP_DateTime*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetTimeZoneEP12XMP_DateTime(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParserC1ERKNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoJsonParser::StereoInfoJsonParser(stereo::StereoBuffer const&) */
int _ZN6stereo20StereoInfoJsonParserC1ERKNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo9PackUtils10kHexDigitsE */
/* Demangled: stereo::PackUtils::kHexDigits */
extern void* _ZN6stereo9PackUtils10kHexDigitsE;

/* Symbol: _ZN12ExpatAdapter11ParseBufferEPKvmb */
/* Demangled: ExpatAdapter::ParseBuffer(void const*, unsigned long, bool) */
int _ZN12ExpatAdapter11ParseBufferEPKvmb(void);

/* Symbol: sRegisteredAliasMap */
/* Demangled: sRegisteredAliasMap */
extern void* sRegisteredAliasMap;

/* Symbol: _ZNSt3__118__insertion_sort_3IRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_ */
/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
int _ZNSt3__118__insertion_sort_3IRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13MergeFromJPEGEP8TXMPMetaIS6_ERKS9_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::MergeFromJPEG(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13MergeFromJPEGEP8TXMPMetaIS6_ERKS9_(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream17readUnsignedShortEv */
/* Demangled: stereo::BufferTypeInputStream::readUnsignedShort() */
int _ZN6stereo21BufferTypeInputStream17readUnsignedShortEv(void);

/* Symbol: _ZN6stereo9PackUtils9TYPE_EXIFE */
/* Demangled: stereo::PackUtils::TYPE_EXIF */
extern void* _ZN6stereo9PackUtils9TYPE_EXIFE;

/* Symbol: voidBool */
/* Demangled: voidBool */
extern void* voidBool;

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPIterator() */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED0Ev(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferE */
/* Demangled: stereo::BufferTypeInputStream::read(stereo::StereoBuffer&) */
int _ZN6stereo21BufferTypeInputStream4readERNS_12StereoBufferE(void);

/* Symbol: voidInt32 */
/* Demangled: voidInt32 */
extern void* voidInt32;

/* Symbol: WXMPMeta_DumpObject_1 */
/* Demangled: WXMPMeta_DumpObject_1 */
int WXMPMeta_DumpObject_1(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream14ensureCapacityEi */
/* Demangled: stereo::BufferTypeOutputStream::ensureCapacity(int) */
int _ZN6stereo22BufferTypeOutputStream14ensureCapacityEi(void);

/* Symbol: _ZN11XMPIteratorD2Ev */
/* Demangled: XMPIterator::~XMPIterator() */
int _ZN11XMPIteratorD2Ev(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeQualifierPathEPKcS9_S9_S9_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeQualifierPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeQualifierPathEPKcS9_S9_S9_PS6_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser11getJpsWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getJpsWidth() */
int _ZN6stereo20StereoInfoJsonParser11getJpsWidthEv(void);

/* Symbol: UTF32BE_to_UTF8 */
/* Demangled: UTF32BE_to_UTF8 */
extern void* UTF32BE_to_UTF8;

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_BoolEPKcS9_PbPj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Bool(char const*, char const*, bool*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetProperty_BoolEPKcS9_PbPj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN6stereo15SegmentMaskInfoD1Ev */
/* Demangled: stereo::SegmentMaskInfo::~SegmentMaskInfo() */
int _ZN6stereo15SegmentMaskInfoD1Ev(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParser9serializeEv */
/* Demangled: stereo::StereoCaptureInfoParser::serialize() */
int _ZN6stereo23StereoCaptureInfoParser9serializeEv(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolEPKc */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToBool(char const*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToBoolEPKc(void);

/* Symbol: _ZN7XMPMeta9TerminateEv */
/* Demangled: XMPMeta::Terminate() */
int _ZN7XMPMeta9TerminateEv(void);

/* Symbol: _ZN7XMPMetaD2Ev */
/* Demangled: XMPMeta::~XMPMeta() */
int _ZN7XMPMetaD2Ev(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcS9_j */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(char const*, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcS9_j(void);

/* Symbol: _ZN6stereo10JsonParser24getValueDoubleFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_ */
/* Demangled: stereo::JsonParser::getValueDoubleFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser24getValueDoubleFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void);

/* Symbol: _ZN6stereo13ParserFactory17getParserInstanceEiPvRKNS_12StereoBufferES4_PNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEE */
/* Demangled: stereo::ParserFactory::getParserInstance(int, void*, stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
int _ZN6stereo13ParserFactory17getParserInstanceEiPvRKNS_12StereoBufferES4_PNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEE(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser16initCustDataItemEv */
/* Demangled: stereo::SegmentMaskInfoParser::initCustDataItem() */
int _ZN6stereo21SegmentMaskInfoParser16initCustDataItemEv(void);

/* Symbol: _ZN6stereo14CustomizedMetaC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE */
/* Demangled: stereo::CustomizedMeta::CustomizedMeta(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
int _ZN6stereo14CustomizedMetaC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void);

/* Symbol: WXMPUtils_ApplyTemplate_1 */
/* Demangled: WXMPUtils_ApplyTemplate_1 */
int WXMPUtils_ApplyTemplate_1(void);

/* Symbol: _ZN6stereo9PackUtils14MD5_BYTE_COUNTE */
/* Demangled: stereo::PackUtils::MD5_BYTE_COUNT */
extern void* _ZN6stereo9PackUtils14MD5_BYTE_COUNTE;

/* Symbol: _ZN11XMPIterator4SkipEj */
/* Demangled: XMPIterator::Skip(unsigned int) */
int _ZN11XMPIterator4SkipEj(void);

/* Symbol: _ZNK7XMPMeta11GetPropertyEPKcS1_PS1_PjS3_ */
/* Demangled: XMPMeta::GetProperty(char const*, char const*, char const**, unsigned int*, unsigned int*) const */
int _ZNK7XMPMeta11GetPropertyEPKcS1_PS1_PjS3_(void);

/* Symbol: _Z18NormalizeLangArrayP8XMP_Node */
/* Demangled: NormalizeLangArray(XMP_Node*) */
int _Z18NormalizeLangArrayP8XMP_Node(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CompareDateTimeERK12XMP_DateTimeSA_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CompareDateTime(XMP_DateTime const&, XMP_DateTime const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CompareDateTimeERK12XMP_DateTimeSA_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser7getPosYEv */
/* Demangled: stereo::StereoInfoJsonParser::getPosY() */
int _ZN6stereo20StereoInfoJsonParser7getPosYEv(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParserD2Ev */
/* Demangled: stereo::SegmentMaskInfoParser::~SegmentMaskInfoParser() */
int _ZN6stereo21SegmentMaskInfoParserD2Ev(void);

/* Symbol: _ZNK7XMPMeta14GetStructFieldEPKcS1_S1_S1_PS1_PjS3_ */
/* Demangled: XMPMeta::GetStructField(char const*, char const*, char const*, char const*, char const**, unsigned int*, unsigned int*) const */
int _ZNK7XMPMeta14GetStructFieldEPKcS1_S1_S1_PS1_PjS3_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18CatenateArrayItemsERK8TXMPMetaIS6_EPKcSD_SD_SD_jPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CatenateArrayItems(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, char const*, char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18CatenateArrayItemsERK8TXMPMetaIS6_EPKcSD_SD_SD_jPS6_(void);

/* Symbol: _ZTVN6stereo15XmpMetaOperatorE */
/* Demangled: vtable for stereo::XmpMetaOperator */
extern void* _ZTVN6stereo15XmpMetaOperatorE;

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorIiNS_9allocatorIiEEEENS2_IS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorIiNS_9allocatorIiEEEENS2_IS4_EEED2Ev(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParserC2ERKNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoJsonParser::StereoInfoJsonParser(stereo::StereoBuffer const&) */
int _ZN6stereo20StereoInfoJsonParserC2ERKNS_12StereoBufferE(void);

/* Symbol: _ZNK7XMPMeta17GetProperty_FloatEPKcS1_PdPj */
/* Demangled: XMPMeta::GetProperty_Float(char const*, char const*, double*, unsigned int*) const */
int _ZNK7XMPMeta17GetProperty_FloatEPKcS1_PdPj(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SkipEj */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Skip(unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SkipEj(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPMeta() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser14initStructItemEv */
/* Demangled: stereo::StereoConfigInfoParser::initStructItem() */
int _ZN6stereo22StereoConfigInfoParser14initStructItemEv(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser15readSimpleValueEv */
/* Demangled: stereo::StereoConfigInfoParser::readSimpleValue() */
int _ZN6stereo22StereoConfigInfoParser15readSimpleValueEv(void);

/* Symbol: WXMPMeta_DoesArrayItemExist_1 */
/* Demangled: WXMPMeta_DoesArrayItemExist_1 */
int WXMPMeta_DoesArrayItemExist_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetObjectOptionsEj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetObjectOptions(unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetObjectOptionsEj(void);

/* Symbol: _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEj */
/* Demangled: stereo::Utils::buffer2Str(stereo::StereoBuffer const&, unsigned int) */
int _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferEj(void);

/* Symbol: _ZN8XMPUtils14ConvertToFloatEPKc */
/* Demangled: XMPUtils::ConvertToFloat(char const*) */
int _ZN8XMPUtils14ConvertToFloatEPKc(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_BoolEPKcS9_bj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Bool(char const*, char const*, bool, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_BoolEPKcS9_bj(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser9serializeEv */
/* Demangled: stereo::StereoConfigInfoParser::serialize() */
int _ZN6stereo22StereoConfigInfoParser9serializeEv(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE */
/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoDepthInfo*) */
int _ZN6stereo21StereoDepthInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_15StereoDepthInfoE(void);

/* Symbol: _ZN10RDF_Parser23ResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::ResourcePropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser23ResourcePropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN7XMPMeta13SetObjectNameEPKc */
/* Demangled: XMPMeta::SetObjectName(char const*) */
int _ZN7XMPMeta13SetObjectNameEPKc(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcSD_j */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcSD_j(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN6stereo22StereoBufferInfoParserD2Ev */
/* Demangled: stereo::StereoBufferInfoParser::~StereoBufferInfoParser() */
int _ZN6stereo22StereoBufferInfoParserD2Ev(void);

/* Symbol: _ZN7XMPMeta11SetPropertyEPKcS1_S1_j */
/* Demangled: XMPMeta::SetProperty(char const*, char const*, char const*, unsigned int) */
int _ZN7XMPMeta11SetPropertyEPKcS1_S1_j(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23ResetErrorCallbackLimitEj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ResetErrorCallbackLimit(unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23ResetErrorCallbackLimitEj(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_(void);

/* Symbol: _ZN6stereo9XmpPacker14makeExtXmpDataERNS_12StereoBufferE */
/* Demangled: stereo::XmpPacker::makeExtXmpData(stereo::StereoBuffer&) */
int _ZN6stereo9XmpPacker14makeExtXmpDataERNS_12StereoBufferE(void);

/* Symbol: _Z7ToUTF32PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: ToUTF32(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
int _Z7ToUTF32PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN17XMP_HomeGrownLockC2Ev */
/* Demangled: XMP_HomeGrownLock::XMP_HomeGrownLock() */
int _ZN17XMP_HomeGrownLockC2Ev(void);

/* Symbol: _ZN18XMP_NamespaceTableC2ERKS_ */
/* Demangled: XMP_NamespaceTable::XMP_NamespaceTable(XMP_NamespaceTable const&) */
int _ZN18XMP_NamespaceTableC2ERKS_(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetGlobalOptionsEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetGlobalOptions() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetGlobalOptionsEv(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoBufferInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo22StereoBufferInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor20getMtkChaVerifyLevelERKNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoAccessor::getMtkChaVerifyLevel(stereo::StereoBuffer const&) */
int _ZN6stereo18StereoInfoAccessor20getMtkChaVerifyLevelERKNS_12StereoBufferE(void);

/* Symbol: _ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<XML_Node*, std::__1::allocator<XML_Node*> >::__push_back_slow_path<XML_Node* const&>(XML_Node* const&) */
int _ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: WXMPMeta_SetProperty_Int_1 */
/* Demangled: WXMPMeta_SetProperty_Int_1 */
int WXMPMeta_SetProperty_Int_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CurrentDateTimeEP12XMP_DateTime */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CurrentDateTime(XMP_DateTime*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CurrentDateTimeEP12XMP_DateTime(void);

/* Symbol: _ZN6stereo17StereoCaptureInfoD1Ev */
/* Demangled: stereo::StereoCaptureInfo::~StereoCaptureInfo() */
int _ZN6stereo17StereoCaptureInfoD1Ev(void);

/* Symbol: _ZN6stereo20CustomizedDataPackerD0Ev */
/* Demangled: stereo::CustomizedDataPacker::~CustomizedDataPacker() */
int _ZN6stereo20CustomizedDataPackerD0Ev(void);

/* Symbol: _ZN6stereo9PackUtils17MAX_BYTE_PER_APP1E */
/* Demangled: stereo::PackUtils::MAX_BYTE_PER_APP1 */
extern void* _ZN6stereo9PackUtils17MAX_BYTE_PER_APP1E;

/* Symbol: _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_ */
/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_(void);

/* Symbol: _ZNK7XMPMeta15GetProperty_IntEPKcS1_PiPj */
/* Demangled: XMPMeta::GetProperty_Int(char const*, char const*, int*, unsigned int*) const */
int _ZNK7XMPMeta15GetProperty_IntEPKcS1_PiPj(void);

/* Symbol: _Z16VerifySetOptionsjPKc */
/* Demangled: VerifySetOptions(unsigned int, char const*) */
int _Z16VerifySetOptionsjPKc(void);

/* Symbol: CodePoint_from_UTF16BE */
/* Demangled: CodePoint_from_UTF16BE */
extern void* CodePoint_from_UTF16BE;

/* Symbol: WXMPMeta_DumpNamespaces_1 */
/* Demangled: WXMPMeta_DumpNamespaces_1 */
int WXMPMeta_DumpNamespaces_1(void);

/* Symbol: WXMPUtils_ConvertToDate_1 */
/* Demangled: WXMPUtils_ConvertToDate_1 */
int WXMPUtils_ConvertToDate_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_Int64EPKcS9_xj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Int64(char const*, char const*, long long, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_Int64EPKcS9_xj(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParserD2Ev */
/* Demangled: stereo::StereoInfoJsonParser::~StereoInfoJsonParser() */
int _ZN6stereo20StereoInfoJsonParserD2Ev(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DumpNamespacesEPFiPvPKcjES8_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DumpNamespaces(int (*)(void*, char const*, unsigned int), void*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DumpNamespacesEPFiPvPKcjES8_(void);

/* Symbol: _ZTVN6stereo20StereoInfoJsonParserE */
/* Demangled: vtable for stereo::StereoInfoJsonParser */
extern void* _ZTVN6stereo20StereoInfoJsonParserE;

/* Symbol: _ZN6stereo9PackUtils21STR_TERMINATOR_LENGTHE */
/* Demangled: stereo::PackUtils::STR_TERMINATOR_LENGTH */
extern void* _ZN6stereo9PackUtils21STR_TERMINATOR_LENGTHE;

/* Symbol: _ZN6stereo18StereoInfoAccessorD2Ev */
/* Demangled: stereo::StereoInfoAccessor::~StereoInfoAccessor() */
int _ZN6stereo18StereoInfoAccessorD2Ev(void);

/* Symbol: XMP_NewExpatAdapter */
/* Demangled: XMP_NewExpatAdapter */
int XMP_NewExpatAdapter(void);

/* Symbol: _ZN6stereo14CustomizedMetaD0Ev */
/* Demangled: stereo::CustomizedMeta::~CustomizedMeta() */
int _ZN6stereo14CustomizedMetaD0Ev(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser21getBufferItemInstanceEv */
/* Demangled: stereo::GoogleStereoInfoParser::getBufferItemInstance() */
int _ZN6stereo22GoogleStereoInfoParser21getBufferItemInstanceEv(void);

/* Symbol: _ZN6stereo9JpgPackerC2EPNS_8PackInfoE */
/* Demangled: stereo::JpgPacker::JpgPacker(stereo::PackInfo*) */
int _ZN6stereo9JpgPackerC2EPNS_8PackInfoE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EPKcj(void);

/* Symbol: _ZN6stereo9JpgPacker16writeImageBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE */
/* Demangled: stereo::JpgPacker::writeImageBuffer(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&) */
int _ZN6stereo9JpgPacker16writeImageBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE(void);

/* Symbol: _ZN6stereo9PackUtils4APP1E */
/* Demangled: stereo::PackUtils::APP1 */
extern void* _ZN6stereo9PackUtils4APP1E;

/* Symbol: _ZN12ExpatAdapterC1Eb */
/* Demangled: ExpatAdapter::ExpatAdapter(bool) */
int _ZN12ExpatAdapterC1Eb(void);

/* Symbol: WXMPMeta_DoesQualifierExist_1 */
/* Demangled: WXMPMeta_DoesQualifierExist_1 */
int WXMPMeta_DoesQualifierExist_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DeletePropertyEPKcS9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteProperty(char const*, char const*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14DeletePropertyEPKcS9_(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7XMPMetaC2Ev */
/* Demangled: XMPMeta::XMPMeta() */
int _ZN7XMPMetaC2Ev(void);

/* Symbol: _ZN12ExpatAdapterD1Ev */
/* Demangled: ExpatAdapter::~ExpatAdapter() */
int _ZN12ExpatAdapterD1Ev(void);

/* Symbol: _ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRK8XML_Node */
/* Demangled: RDF_Parser::AddQualifierNode(XMP_Node*, XML_Node const&) */
int _ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRK8XML_Node(void);

/* Symbol: _ZN8XMPUtils22ComposeStructFieldPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ComposeStructFieldPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils22ComposeStructFieldPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE9TerminateEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Terminate() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE9TerminateEv(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertToUTCTimeEP12XMP_DateTime */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToUTCTime(XMP_DateTime*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertToUTCTimeEP12XMP_DateTime(void);

/* Symbol: _ZN7XMPMeta15DeleteQualifierEPKcS1_S1_S1_ */
/* Demangled: XMPMeta::DeleteQualifier(char const*, char const*, char const*, char const*) */
int _ZN7XMPMeta15DeleteQualifierEPKcS1_S1_S1_(void);

/* Symbol: _Z7ToUTF16PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: ToUTF16(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
int _Z7ToUTF16PKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetQualifierEPKcS9_S9_S9_PS6_Pj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetQualifier(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetQualifierEPKcS9_S9_S9_PS6_Pj(void);

/* Symbol: _ZTVN6stereo7XmpMetaE */
/* Demangled: vtable for stereo::XmpMeta */
extern void* _ZTVN6stereo7XmpMetaE;

/* Symbol: _ZN6stereo20StereoInfoJsonParser19getGoogleDepthWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getGoogleDepthWidth() */
int _ZN6stereo20StereoInfoJsonParser19getGoogleDepthWidthEv(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserD0Ev */
/* Demangled: stereo::StereoConfigInfoParser::~StereoConfigInfoParser() */
int _ZN6stereo22StereoConfigInfoParserD0Ev(void);

/* Symbol: _ZN6stereo9JpgPackerD2Ev */
/* Demangled: stereo::JpgPacker::~JpgPacker() */
int _ZN6stereo9JpgPackerD2Ev(void);

/* Symbol: _ZN17XMP_ReadWriteLock7ReleaseEv */
/* Demangled: XMP_ReadWriteLock::Release() */
int _ZN17XMP_ReadWriteLock7ReleaseEv(void);

/* Symbol: _ZNSt3__16__sortIRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_ */
/* Demangled: void std::__1::__sort<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
int _ZNSt3__16__sortIRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_(void);

/* Symbol: _ZN6stereo7XmpMeta17setPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_ */
/* Demangled: stereo::XmpMeta::setPropertyString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo7XmpMeta17setPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser22getSimpleValueInstanceEv */
/* Demangled: stereo::GoogleStereoInfoParser::getSimpleValueInstance() */
int _ZN6stereo22GoogleStereoInfoParser22getSimpleValueInstanceEv(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev(void);

/* Symbol: _ZN6stereo19MetaOperatorFactory19getOperatorInstanceEiRKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEE */
/* Demangled: stereo::MetaOperatorFactory::getOperatorInstance(int, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
int _ZN6stereo19MetaOperatorFactory19getOperatorInstanceEiRKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEE(void);

/* Symbol: xdefaultName */
/* Demangled: xdefaultName */
extern void* xdefaultName;

/* Symbol: _ZN6stereo7XmpMetaC2EPKci */
/* Demangled: stereo::XmpMeta::XmpMeta(char const*, int) */
int _ZN6stereo7XmpMetaC2EPKci(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser18getMetaBufferWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getMetaBufferWidth() */
int _ZN6stereo20StereoInfoJsonParser18getMetaBufferWidthEv(void);

/* Symbol: _ZN7XMPMeta4SortEv */
/* Demangled: XMPMeta::Sort() */
int _ZN7XMPMeta4SortEv(void);

/* Symbol: WXMPUtils_EncodeToBase64_1 */
/* Demangled: WXMPUtils_EncodeToBase64_1 */
int WXMPUtils_EncodeToBase64_1(void);

/* Symbol: _ZN6stereo9PackUtils27WRITE_XMP_BEFORE_FIRST_APP1E */
/* Demangled: stereo::PackUtils::WRITE_XMP_BEFORE_FIRST_APP1 */
extern void* _ZN6stereo9PackUtils27WRITE_XMP_BEFORE_FIRST_APP1E;

/* Symbol: _ZN11XMPIteratorC2EPKcS1_j */
/* Demangled: XMPIterator::XMPIterator(char const*, char const*, unsigned int) */
int _ZN11XMPIteratorC2EPKcS1_j(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CountArrayItemsEPKcS9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::CountArrayItems(char const*, char const*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15CountArrayItemsEPKcS9_(void);

/* Symbol: _ZTVN6stereo16GoogleStereoInfoE */
/* Demangled: vtable for stereo::GoogleStereoInfo */
extern void* _ZTVN6stereo16GoogleStereoInfoE;

/* Symbol: _ZN6stereo9JpgPacker15makeJpgSectionsEiPNSt3__16vectorINS_12StereoBufferENS1_9allocatorIS3_EEEE */
/* Demangled: stereo::JpgPacker::makeJpgSections(int, std::__1::vector<stereo::StereoBuffer, std::__1::allocator<stereo::StereoBuffer> >*) */
int _ZN6stereo9JpgPacker15makeJpgSectionsEiPNSt3__16vectorINS_12StereoBufferENS1_9allocatorIS3_EEEE(void);

/* Symbol: WXMPMeta_SetGlobalOptions_1 */
/* Demangled: WXMPMeta_SetGlobalOptions_1 */
int WXMPMeta_SetGlobalOptions_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_FloatEPKcS9_dj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Float(char const*, char const*, double, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SetProperty_FloatEPKcS9_dj(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getFocusTypeEv */
/* Demangled: stereo::StereoInfoJsonParser::getFocusType() */
int _ZN6stereo20StereoInfoJsonParser12getFocusTypeEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser20getMtkChaVerifyLevelEv */
/* Demangled: stereo::StereoInfoJsonParser::getMtkChaVerifyLevel() */
int _ZN6stereo20StereoInfoJsonParser20getMtkChaVerifyLevelEv(void);

/* Symbol: _ZN7XMPMeta16SetGlobalOptionsEj */
/* Demangled: XMPMeta::SetGlobalOptions(unsigned int) */
int _ZN7XMPMeta16SetGlobalOptionsEj(void);

/* Symbol: WXMPMeta_DeleteArrayItem_1 */
/* Demangled: WXMPMeta_DeleteArrayItem_1 */
int WXMPMeta_DeleteArrayItem_1(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN7XMPMeta14SetStructFieldEPKcS1_S1_S1_S1_j */
/* Demangled: XMPMeta::SetStructField(char const*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN7XMPMeta14SetStructFieldEPKcS1_S1_S1_S1_j(void);

/* Symbol: _ZN11XMPIterator9TerminateEv */
/* Demangled: XMPIterator::Terminate() */
int _ZN11XMPIterator9TerminateEv(void);

/* Symbol: _ZN11XMPIteratorC2ERK7XMPMetaPKcS4_j */
/* Demangled: XMPIterator::XMPIterator(XMPMeta const&, char const*, char const*, unsigned int) */
int _ZN11XMPIteratorC2ERK7XMPMetaPKcS4_j(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN6stereo15XmpMetaOperatorC1ERKNS_12StereoBufferE */
/* Demangled: stereo::XmpMetaOperator::XmpMetaOperator(stereo::StereoBuffer const&) */
int _ZN6stereo15XmpMetaOperatorC1ERKNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser11getMaskSizeEv */
/* Demangled: stereo::StereoInfoJsonParser::getMaskSize() */
int _ZN6stereo20StereoInfoJsonParser11getMaskSizeEv(void);

/* Symbol: _ZN6stereo16GoogleStereoInfoD0Ev */
/* Demangled: stereo::GoogleStereoInfo::~GoogleStereoInfo() */
int _ZN6stereo16GoogleStereoInfoD0Ev(void);

/* Symbol: WXMPMeta_Terminate_1 */
/* Demangled: WXMPMeta_Terminate_1 */
int WXMPMeta_Terminate_1(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser22getSimpleValueInstanceEv */
/* Demangled: stereo::StereoConfigInfoParser::getSimpleValueInstance() */
int _ZN6stereo22StereoConfigInfoParser22getSimpleValueInstanceEv(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN6stereo9PackUtils21XMP_COMMON_HEADER_LENE */
/* Demangled: stereo::PackUtils::XMP_COMMON_HEADER_LEN */
extern void* _ZN6stereo9PackUtils21XMP_COMMON_HEADER_LENE;

/* Symbol: _Z14LookupLangItemPK8XMP_NodeRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: LookupLangItem(XMP_Node const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _Z14LookupLangItemPK8XMP_NodeRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__113__vector_baseI13XPathStepInfoNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__vector_base<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::~__vector_base() */
int _ZNSt3__113__vector_baseI13XPathStepInfoNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertFromIntElPKcPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromInt(long, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertFromIntElPKcPS6_(void);

/* Symbol: _ZTSSt16invalid_argument */
/* Demangled: typeinfo name for std::invalid_argument */
extern void* _ZTSSt16invalid_argument;

/* Symbol: _ZN6stereo22StereoConfigInfoParser17writeCustDataItemEv */
/* Demangled: stereo::StereoConfigInfoParser::writeCustDataItem() */
int _ZN6stereo22StereoConfigInfoParser17writeCustDataItemEv(void);

/* Symbol: _ZN6stereo9PackUtils14STR_TERMINATORE */
/* Demangled: stereo::PackUtils::STR_TERMINATOR */
extern void* _ZN6stereo9PackUtils14STR_TERMINATORE;

/* Symbol: _ZTVN6stereo18StereoInfoAccessorE */
/* Demangled: vtable for stereo::StereoInfoAccessor */
extern void* _ZTVN6stereo18StereoInfoAccessorE;

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteNamespaceEPKc */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteNamespace(char const*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteNamespaceEPKc(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getGDepthFarEv */
/* Demangled: stereo::StereoInfoJsonParser::getGDepthFar() */
int _ZN6stereo20StereoInfoJsonParser12getGDepthFarEv(void);

/* Symbol: UTF16LE_to_UTF8 */
/* Demangled: UTF16LE_to_UTF8 */
extern void* UTF16LE_to_UTF8;

/* Symbol: _ZN6stereo22StereoBufferInfoParser16readCustDataItemEv */
/* Demangled: stereo::StereoBufferInfoParser::readCustDataItem() */
int _ZN6stereo22StereoBufferInfoParser16readCustDataItemEv(void);

/* Symbol: _ZN10RDF_Parser20EmptyPropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::EmptyPropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser20EmptyPropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: WXMPUtils_ComposeFieldSelector_1 */
/* Demangled: WXMPUtils_ComposeFieldSelector_1 */
int WXMPUtils_ComposeFieldSelector_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64EPKc */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt64(char const*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToInt64EPKc(void);

/* Symbol: _ZTI9XMP_Error */
/* Demangled: typeinfo for XMP_Error */
extern void* _ZTI9XMP_Error;

/* Symbol: _ZN6stereo15StereoBigBuffer8allocateEjRNS_12StereoBufferE */
/* Demangled: stereo::StereoBigBuffer::allocate(unsigned int, stereo::StereoBuffer&) */
int _ZN6stereo15StereoBigBuffer8allocateEjRNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo5Utils10isDirExistEPKc */
/* Demangled: stereo::Utils::isDirExist(char const*) */
int _ZN6stereo5Utils10isDirExistEPKc(void);

/* Symbol: _ZN6stereo9PackUtils13TYPE_LDC_DATAE */
/* Demangled: stereo::PackUtils::TYPE_LDC_DATA */
extern void* _ZN6stereo9PackUtils13TYPE_LDC_DATAE;

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ApplyTemplateEP8TXMPMetaIS6_ERKS9_j */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ApplyTemplate(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, unsigned int) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ApplyTemplateEP8TXMPMetaIS6_ERKS9_j(void);

/* Symbol: _ZN6stereo5Utils18ENABLE_BUFFER_DUMPE */
/* Demangled: stereo::Utils::ENABLE_BUFFER_DUMP */
extern void* _ZN6stereo5Utils18ENABLE_BUFFER_DUMPE;

/* Symbol: _ZN6stereo9XmpPackerC1EPNS_8PackInfoE */
/* Demangled: stereo::XmpPacker::XmpPacker(stereo::PackInfo*) */
int _ZN6stereo9XmpPackerC1EPNS_8PackInfoE(void);

/* Symbol: _ZN10RDF_Parser3RDFEP8XMP_NodeRK8XML_Node */
/* Demangled: RDF_Parser::RDF(XMP_Node*, XML_Node const&) */
int _ZN10RDF_Parser3RDFEP8XMP_NodeRK8XML_Node(void);

/* Symbol: _ZN7XMPMeta10ProcessRDFERK8XML_Nodej */
/* Demangled: XMPMeta::ProcessRDF(XML_Node const&, unsigned int) */
int _ZN7XMPMeta10ProcessRDFERK8XML_Nodej(void);

/* Symbol: WXMPMeta_DeleteLocalizedText_1 */
/* Demangled: WXMPMeta_DeleteLocalizedText_1 */
int WXMPMeta_DeleteLocalizedText_1(void);

/* Symbol: _ZN6stereo13BufferManager12createBufferEjRNS_12StereoBufferE */
/* Demangled: stereo::BufferManager::createBuffer(unsigned int, stereo::StereoBuffer&) */
int _ZN6stereo13BufferManager12createBufferEjRNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser17getPhoVerifyLevelEv */
/* Demangled: stereo::StereoInfoJsonParser::getPhoVerifyLevel() */
int _ZN6stereo20StereoInfoJsonParser17getPhoVerifyLevelEv(void);

/* Symbol: _ZN6stereo16StereoConfigInfoD0Ev */
/* Demangled: stereo::StereoConfigInfo::~StereoConfigInfo() */
int _ZN6stereo16StereoConfigInfoD0Ev(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::SegmentMaskInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo21SegmentMaskInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParserC1EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE */
/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(stereo::IMetaOperator*, stereo::StereoBufferInfo*) */
int _ZN6stereo22StereoBufferInfoParserC1EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE(void);

/* Symbol: _ZN6stereo9XmpPackerD2Ev */
/* Demangled: stereo::XmpPacker::~XmpPacker() */
int _ZN6stereo9XmpPackerD2Ev(void);

/* Symbol: _ZN6stereo15StereoBigBuffer11isAvaliableEj */
/* Demangled: stereo::StereoBigBuffer::isAvaliable(unsigned int) */
int _ZN6stereo15StereoBigBuffer11isAvaliableEj(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream5resetEv */
/* Demangled: stereo::BufferTypeOutputStream::reset() */
int _ZN6stereo22BufferTypeOutputStream5resetEv(void);

/* Symbol: _ZN6stereo15StereoDepthInfoD1Ev */
/* Demangled: stereo::StereoDepthInfo::~StereoDepthInfo() */
int _ZN6stereo15StereoDepthInfoD1Ev(void);

/* Symbol: WXMPMeta_Sort_1 */
/* Demangled: WXMPMeta_Sort_1 */
int WXMPMeta_Sort_1(void);

/* Symbol: _ZN6stereo15XmpMetaOperatorC2ERKNS_12StereoBufferE */
/* Demangled: stereo::XmpMetaOperator::XmpMetaOperator(stereo::StereoBuffer const&) */
int _ZN6stereo15XmpMetaOperatorC2ERKNS_12StereoBufferE(void);

/* Symbol: _ZNK20GenericErrorCallback12NotifyClientEhR9XMP_ErrorPKc */
/* Demangled: GenericErrorCallback::NotifyClient(unsigned char, XMP_Error&, char const*) const */
int _ZNK20GenericErrorCallback12NotifyClientEhR9XMP_ErrorPKc(void);

/* Symbol: WXMPMeta_SetErrorCallback_1 */
/* Demangled: WXMPMeta_SetErrorCallback_1 */
int WXMPMeta_SetErrorCallback_1(void);

/* Symbol: _ZN6stereo7XmpMeta17setPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE */
/* Demangled: stereo::XmpMeta::setPropertyBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
int _ZN6stereo7XmpMeta17setPropertyBase64ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo7XmpMetaD0Ev */
/* Demangled: stereo::XmpMeta::~XmpMeta() */
int _ZN6stereo7XmpMetaD0Ev(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_Int64EPKcS9_PxPj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Int64(char const*, char const*, long long*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_Int64EPKcS9_PxPj(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperator7setDataEP15DataCollections */
/* Demangled: stereo::CustomizedMetaOperator::setData(DataCollections*) */
int _ZN6stereo22CustomizedMetaOperator7setDataEP15DataCollections(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream14getFilePointerEv */
/* Demangled: stereo::BufferTypeInputStream::getFilePointer() */
int _ZN6stereo21BufferTypeInputStream14getFilePointerEv(void);

/* Symbol: _ZN6stereo9PackUtils23CUSTOMIZED_TOTAL_LENGTHE */
/* Demangled: stereo::PackUtils::CUSTOMIZED_TOTAL_LENGTH */
extern void* _ZN6stereo9PackUtils23CUSTOMIZED_TOTAL_LENGTHE;

/* Symbol: _ZN18XMP_NamespaceTable6DefineEPKcS1_PS1_Pj */
/* Demangled: XMP_NamespaceTable::Define(char const*, char const*, char const**, unsigned int*) */
int _ZN18XMP_NamespaceTable6DefineEPKcS1_PS1_Pj(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetInternalRefEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetInternalRef() const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetInternalRefEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser19getMetaBufferHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getMetaBufferHeight() */
int _ZN6stereo20StereoInfoJsonParser19getMetaBufferHeightEv(void);

/* Symbol: _ZN6stereo5Utils5d2strERKdRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: stereo::Utils::d2str(double const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN6stereo5Utils5d2strERKdRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo9PackUtils23TOTAL_LENGTH_BYTE_COUNTE */
/* Demangled: stereo::PackUtils::TOTAL_LENGTH_BYTE_COUNT */
extern void* _ZN6stereo9PackUtils23TOTAL_LENGTH_BYTE_COUNTE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE4findIS7_EENS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE4findIS7_EENS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEElEERKT_(void);

/* Symbol: _ZTV18XMP_NamespaceTable */
/* Demangled: vtable for XMP_NamespaceTable */
extern void* _ZTV18XMP_NamespaceTable;

/* Symbol: _ZN6stereo21BufferTypeInputStreamD1Ev */
/* Demangled: stereo::BufferTypeInputStream::~BufferTypeInputStream() */
int _ZN6stereo21BufferTypeInputStreamD1Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZZN9rapidjson8internal5Pow10EiE1e */
/* Demangled: rapidjson::internal::Pow10(int)::e */
extern void* _ZZN9rapidjson8internal5Pow10EiE1e;

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE6insertIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIPcEEE4typeENSB_IPKcEES7_S7_ */
/* Demangled: _ZNSt3__16vectorIcNS_9allocatorIcEEE6insertIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIPcEEE4typeENSB_IPKcEES7_S7_ */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE6insertIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIPcEEE4typeENSB_IPKcEES7_S7_(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser17writeCustDataItemEv */
/* Demangled: stereo::SegmentMaskInfoParser::writeCustDataItem() */
int _ZN6stereo21SegmentMaskInfoParser17writeCustDataItemEv(void);

/* Symbol: _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >::vector(std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> > const&) */
int _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: WXMPMeta_Initialize_1 */
/* Demangled: WXMPMeta_Initialize_1 */
int WXMPMeta_Initialize_1(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZN6stereo22GoogleStereoInfoParser5writeEv */
/* Demangled: stereo::GoogleStereoInfoParser::write() */
int _ZN6stereo22GoogleStereoInfoParser5writeEv(void);

/* Symbol: _ZTVN6stereo21StereoDepthInfoParserE */
/* Demangled: vtable for stereo::StereoDepthInfoParser */
extern void* _ZTVN6stereo21StereoDepthInfoParserE;

/* Symbol: _ZN7XMPMeta14GetVersionInfoEP15XMP_VersionInfo */
/* Demangled: XMPMeta::GetVersionInfo(XMP_VersionInfo*) */
int _ZN7XMPMeta14GetVersionInfoEP15XMP_VersionInfo(void);

/* Symbol: _ZNK20GenericErrorCallback21CheckLimitAndSeverityEh */
/* Demangled: GenericErrorCallback::CheckLimitAndSeverity(unsigned char) const */
int _ZNK20GenericErrorCallback21CheckLimitAndSeverityEh(void);

/* Symbol: _ZN7XMPMeta10InitializeEv */
/* Demangled: XMPMeta::Initialize() */
int _ZN7XMPMeta10InitializeEv(void);

/* Symbol: _ZNK7XMPMeta12GetArrayItemEPKcS1_iPS1_PjS3_ */
/* Demangled: XMPMeta::GetArrayItem(char const*, char const*, int, char const**, unsigned int*, unsigned int*) const */
int _ZNK7XMPMeta12GetArrayItemEPKcS1_iPS1_PjS3_(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParser17writeCustDataItemEv */
/* Demangled: stereo::StereoBufferInfoParser::writeCustDataItem() */
int _ZN6stereo22StereoBufferInfoParser17writeCustDataItemEv(void);

/* Symbol: _ZN6stereo9JpgPacker9writeCustERNS_22BufferTypeOutputStreamEPNSt3__16vectorIPNS_7SectionENS3_9allocatorIS6_EEEE */
/* Demangled: stereo::JpgPacker::writeCust(stereo::BufferTypeOutputStream&, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
int _ZN6stereo9JpgPacker9writeCustERNS_22BufferTypeOutputStreamEPNSt3__16vectorIPNS_7SectionENS3_9allocatorIS6_EEEE(void);

/* Symbol: _ZN6stereo9PackUtils3DHTE */
/* Demangled: stereo::PackUtils::DHT */
extern void* _ZN6stereo9PackUtils3DHTE;

/* Symbol: _ZN6stereo9XmpPacker4packEv */
/* Demangled: stereo::XmpPacker::pack() */
int _ZN6stereo9XmpPacker4packEv(void);

/* Symbol: _ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<XML_Node*, std::__1::allocator<XML_Node*> >::__push_back_slow_path<XML_Node*>(XML_Node*&&) */
int _ZNSt3__16vectorIP8XML_NodeNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: WXMPMeta_Clone_1 */
/* Demangled: WXMPMeta_Clone_1 */
int WXMPMeta_Clone_1(void);

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNK18XMP_NamespaceTable9GetPrefixEPKcPS1_Pj */
/* Demangled: XMP_NamespaceTable::GetPrefix(char const*, char const**, unsigned int*) const */
int _ZNK18XMP_NamespaceTable9GetPrefixEPKcPS1_Pj(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcj(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser9serializeEv */
/* Demangled: stereo::SegmentMaskInfoParser::serialize() */
int _ZN6stereo21SegmentMaskInfoParser9serializeEv(void);

/* Symbol: _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE6insertENS_11__wrap_iterIPKS2_EERS7_ */
/* Demangled: std::__1::vector<XMP_Node*, std::__1::allocator<XMP_Node*> >::insert(std::__1::__wrap_iter<XMP_Node* const*>, XMP_Node* const&) */
int _ZNSt3__16vectorIP8XMP_NodeNS_9allocatorIS2_EEE6insertENS_11__wrap_iterIPKS2_EERS7_(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream4seekEl */
/* Demangled: stereo::BufferTypeInputStream::seek(long) */
int _ZN6stereo21BufferTypeInputStream4seekEl(void);

/* Symbol: _ZNK7XMPMeta16GetObjectOptionsEv */
/* Demangled: XMPMeta::GetObjectOptions() const */
int _ZNK7XMPMeta16GetObjectOptionsEv(void);

/* Symbol: _ZTV7XMPMeta */
/* Demangled: vtable for XMPMeta */
extern void* _ZTV7XMPMeta;

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIRPFbP8XMP_NodeS2_EPS2_EEbT0_S7_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
int _ZNSt3__127__insertion_sort_incompleteIRPFbP8XMP_NodeS2_EPS2_EEbT0_S7_T_(void);

/* Symbol: WXMPIterator_TableCTor_1 */
/* Demangled: WXMPIterator_TableCTor_1 */
int WXMPIterator_TableCTor_1(void);

/* Symbol: WXMPUtils_ConvertFromDate_1 */
/* Demangled: WXMPUtils_ConvertFromDate_1 */
int WXMPUtils_ConvertFromDate_1(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesQualifierExistEPKcS9_S9_S9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesQualifierExist(char const*, char const*, char const*, char const*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesQualifierExistEPKcS9_S9_S9_(void);

/* Symbol: _ZN6stereo21BufferTypeInputStreamC2ERNS_12StereoBufferE */
/* Demangled: stereo::BufferTypeInputStream::BufferTypeInputStream(stereo::StereoBuffer&) */
int _ZN6stereo21BufferTypeInputStreamC2ERNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferE */
/* Demangled: stereo::Utils::buffer2Str(stereo::StereoBuffer const&) */
int _ZN6stereo5Utils10buffer2StrERKNS_12StereoBufferE(void);

/* Symbol: _ZTV16XMLParserAdapter */
/* Demangled: vtable for XMLParserAdapter */
extern void* _ZTV16XMLParserAdapter;

/* Symbol: _ZN8XMPUtils18CatenateArrayItemsERK7XMPMetaPKcS4_S4_S4_jPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: XMPUtils::CatenateArrayItems(XMPMeta const&, char const*, char const*, char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils18CatenateArrayItemsERK7XMPMetaPKcS4_S4_S4_jPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN17XMP_ReadWriteLockD1Ev */
/* Demangled: XMP_ReadWriteLock::~XMP_ReadWriteLock() */
int _ZN17XMP_ReadWriteLockD1Ev(void);

/* Symbol: _ZNK8XML_Node18CountNamedElementsEPKcS1_ */
/* Demangled: XML_Node::CountNamedElements(char const*, char const*) const */
int _ZNK8XML_Node18CountNamedElementsEPKcS1_(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5CloneEj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Clone(unsigned int) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5CloneEj(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStreamD0Ev */
/* Demangled: stereo::BufferTypeOutputStream::~BufferTypeOutputStream() */
int _ZN6stereo22BufferTypeOutputStreamD0Ev(void);

/* Symbol: _ZTVN6stereo22StereoConfigInfoParserE */
/* Demangled: vtable for stereo::StereoConfigInfoParser */
extern void* _ZTVN6stereo22StereoConfigInfoParserE;

/* Symbol: _ZNSt3__16__sortIRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_ */
/* Demangled: void std::__1::__sort<bool (*&)(XMP_Node*, XMP_Node*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node*, XMP_Node*)) */
int _ZNSt3__16__sortIRPFbP8XMP_NodeS2_EPS2_EEvT0_S7_T_(void);

/* Symbol: kXMPCore_EmbeddedCopyright */
/* Demangled: kXMPCore_EmbeddedCopyright */
extern void* kXMPCore_EmbeddedCopyright;

/* Symbol: _ZN6stereo22StereoConfigInfoParser16writeSimpleValueEv */
/* Demangled: stereo::StereoConfigInfoParser::writeSimpleValue() */
int _ZN6stereo22StereoConfigInfoParser16writeSimpleValueEv(void);

/* Symbol: _ZN7XMPMeta14DumpNamespacesEPFiPvPKcjES0_ */
/* Demangled: XMPMeta::DumpNamespaces(int (*)(void*, char const*, unsigned int), void*) */
int _ZN7XMPMeta14DumpNamespacesEPFiPvPKcjES0_(void);

/* Symbol: _ZN7XMPMeta16SetErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j */
/* Demangled: XMPMeta::SetErrorCallback(unsigned char (*)(bool (*)(void*, unsigned char, int, char const*), void*, unsigned char, int, char const*), bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
int _ZN7XMPMeta16SetErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j(void);

/* Symbol: _ZN6stereo14CustomizedMeta17setPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE */
/* Demangled: stereo::CustomizedMeta::setPropertyBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
int _ZN6stereo14CustomizedMeta17setPropertyBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser14initBufferItemEv */
/* Demangled: stereo::StereoConfigInfoParser::initBufferItem() */
int _ZN6stereo22StereoConfigInfoParser14initBufferItemEv(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoDepthInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo21StereoDepthInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_S9_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeLangSelector(char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_S9_PS6_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser16decodeMaskBufferEPNSt3__16vectorINS2_IiNS1_9allocatorIiEEEENS3_IS5_EEEEiRNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoJsonParser::decodeMaskBuffer(std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >*, int, stereo::StereoBuffer&) */
int _ZN6stereo20StereoInfoJsonParser16decodeMaskBufferEPNSt3__16vectorINS2_IiNS1_9allocatorIiEEEENS3_IS5_EEEEiRNS_12StereoBufferE(void);

/* Symbol: _ZNK7XMPMeta16GetProperty_BoolEPKcS1_PbPj */
/* Demangled: XMPMeta::GetProperty_Bool(char const*, char const*, bool*, unsigned int*) const */
int _ZNK7XMPMeta16GetProperty_BoolEPKcS1_PbPj(void);

/* Symbol: INVALID_BUFFER */
/* Demangled: INVALID_BUFFER */
extern void* INVALID_BUFFER;

/* Symbol: _ZN6stereo10JsonParser24getValueStringFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_ */
/* Demangled: stereo::JsonParser::getValueStringFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser24getValueStringFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserC1EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE */
/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::GoogleStereoInfo*) */
int _ZN6stereo22GoogleStereoInfoParserC1EPNS_13IMetaOperatorES2_PNS_16GoogleStereoInfoE(void);

/* Symbol: _ZN10RDF_Parser34ParseTypeCollectionPropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::ParseTypeCollectionPropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser34ParseTypeCollectionPropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperator9serializeEv */
/* Demangled: stereo::CustomizedMetaOperator::serialize() */
int _ZN6stereo22CustomizedMetaOperator9serializeEv(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperatorC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE */
/* Demangled: stereo::CustomizedMetaOperator::CustomizedMetaOperator(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
int _ZN6stereo22CustomizedMetaOperatorC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParserD1Ev */
/* Demangled: stereo::StereoCaptureInfoParser::~StereoCaptureInfoParser() */
int _ZN6stereo23StereoCaptureInfoParserD1Ev(void);

/* Symbol: WXMPMeta_GetProperty_Date_1 */
/* Demangled: WXMPMeta_GetProperty_Date_1 */
int WXMPMeta_GetProperty_Date_1(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10DumpObjectEPFiPvPKcjES8_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DumpObject(int (*)(void*, char const*, unsigned int), void*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10DumpObjectEPFiPvPKcjES8_(void);

/* Symbol: _ZNK7XMPMeta12GetQualifierEPKcS1_S1_S1_PS1_PjS3_ */
/* Demangled: XMPMeta::GetQualifier(char const*, char const*, char const*, char const*, char const**, unsigned int*, unsigned int*) const */
int _ZNK7XMPMeta12GetQualifierEPKcS1_S1_S1_PS1_PjS3_(void);

/* Symbol: _Z13DetectAltTextP8XMP_Node */
/* Demangled: DetectAltText(XMP_Node*) */
int _Z13DetectAltTextP8XMP_Node(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointXEv */
/* Demangled: stereo::StereoInfoJsonParser::getGFocusFocalPointX() */
int _ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointXEv(void);

/* Symbol: _ZN6stereo5Utils9encodePngERKNS_12StereoBufferEiiRS1_ */
/* Demangled: stereo::Utils::encodePng(stereo::StereoBuffer const&, int, int, stereo::StereoBuffer&) */
int _ZN6stereo5Utils9encodePngERKNS_12StereoBufferEiiRS1_(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser4readEv */
/* Demangled: stereo::StereoConfigInfoParser::read() */
int _ZN6stereo22StereoConfigInfoParser4readEv(void);

/* Symbol: _ZN6stereo9PackUtils14XMP_EXT_HEADERE */
/* Demangled: stereo::PackUtils::XMP_EXT_HEADER */
extern void* _ZN6stereo9PackUtils14XMP_EXT_HEADERE;

/* Symbol: _ZN6stereo13PackerManager6unpackERNS_12StereoBufferE */
/* Demangled: stereo::PackerManager::unpack(stereo::StereoBuffer&) */
int _ZN6stereo13PackerManager6unpackERNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor20readGoogleStereoInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoInfoAccessor::readGoogleStereoInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo18StereoInfoAccessor20readGoogleStereoInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN8XMPUtils15CompareDateTimeERK12XMP_DateTimeS2_ */
/* Demangled: XMPUtils::CompareDateTime(XMP_DateTime const&, XMP_DateTime const&) */
int _ZN8XMPUtils15CompareDateTimeERK12XMP_DateTimeS2_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_FloatEPKcS9_PdPj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Float(char const*, char const*, double*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17GetProperty_FloatEPKcS9_PdPj(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream10writeShortEi */
/* Demangled: stereo::BufferTypeOutputStream::writeShort(int) */
int _ZN6stereo22BufferTypeOutputStream10writeShortEi(void);

/* Symbol: _ZN7XMPMeta15DeleteArrayItemEPKcS1_i */
/* Demangled: XMPMeta::DeleteArrayItem(char const*, char const*, int) */
int _ZN7XMPMeta15DeleteArrayItemEPKcS1_i(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPIterator() */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED1Ev(void);

/* Symbol: _Z17FindQualifierNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE */
/* Demangled: FindQualifierNode(XMP_Node*, char const*, bool, std::__1::__wrap_iter<XMP_Node**>*) */
int _Z17FindQualifierNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatERKS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToFloat(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatERKS6_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser14getFocusBottomEv */
/* Demangled: stereo::StereoInfoJsonParser::getFocusBottom() */
int _ZN6stereo20StereoInfoJsonParser14getFocusBottomEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeImNS_4pairIPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES9_EEEENS_19__map_value_compareImSB_NS_4lessImEELb1EEENS6_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: _ZN17XMP_HomeGrownLock14AcquireForReadEv */
/* Demangled: XMP_HomeGrownLock::AcquireForRead() */
int _ZN17XMP_HomeGrownLock14AcquireForReadEv(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23SetDefaultErrorCallbackEPFbPvhiPKcES8_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetDefaultErrorCallback(bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE23SetDefaultErrorCallbackEPFbPvhiPKcES8_j(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64EPKcjPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DecodeFromBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64EPKcjPS6_(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor22writeStereoCaptureInfoERNS_17StereoCaptureInfoERNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoAccessor::writeStereoCaptureInfo(stereo::StereoCaptureInfo&, stereo::StereoBuffer&) */
int _ZN6stereo18StereoInfoAccessor22writeStereoCaptureInfoERNS_17StereoCaptureInfoERNS_12StereoBufferE(void);

/* Symbol: _ZNK8XML_Node12GetAttrValueEPKc */
/* Demangled: XML_Node::GetAttrValue(char const*) const */
int _ZNK8XML_Node12GetAttrValueEPKc(void);

/* Symbol: WXMPMeta_SetStructField_1 */
/* Demangled: WXMPMeta_SetStructField_1 */
int WXMPMeta_SetStructField_1(void);

/* Symbol: WXMPUtils_ConvertFromFloat_1 */
/* Demangled: WXMPUtils_ConvertFromFloat_1 */
int WXMPUtils_ConvertFromFloat_1(void);

/* Symbol: _ZN6stereo13BufferManager14findBigBuffersEv */
/* Demangled: stereo::BufferManager::findBigBuffers() */
int _ZN6stereo13BufferManager14findBigBuffersEv(void);

/* Symbol: _ZN6stereo15SegmentMaskInfoD2Ev */
/* Demangled: stereo::SegmentMaskInfo::~SegmentMaskInfo() */
int _ZN6stereo15SegmentMaskInfoD2Ev(void);

/* Symbol: _ZN10RDF_Parser22LiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::LiteralPropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser22LiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN8XML_Node19SetLeafContentValueEPKc */
/* Demangled: XML_Node::SetLeafContentValue(char const*) */
int _ZN8XML_Node19SetLeafContentValueEPKc(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64ERKS6_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DecodeFromBase64(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16DecodeFromBase64ERKS6_PS6_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser17getTouchCoordX1stEv */
/* Demangled: stereo::StereoInfoJsonParser::getTouchCoordX1st() */
int _ZN6stereo20StereoInfoJsonParser17getTouchCoordX1stEv(void);

/* Symbol: _ZTVN6stereo14CustomizedMetaE */
/* Demangled: vtable for stereo::CustomizedMeta */
extern void* _ZTVN6stereo14CustomizedMetaE;

/* Symbol: WXMPMeta_SetProperty_1 */
/* Demangled: WXMPMeta_SetProperty_1 */
int WXMPMeta_SetProperty_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_S9_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetLocalizedText(char const*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_S9_j(void);

/* Symbol: _Z15CompareSubtreesRK8XMP_NodeS1_ */
/* Demangled: CompareSubtrees(XMP_Node const&, XMP_Node const&) */
int _Z15CompareSubtreesRK8XMP_NodeS1_(void);

/* Symbol: _Z9FromUTF32PKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: FromUTF32(unsigned int const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
int _Z9FromUTF32PKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParser16initCustDataItemEv */
/* Demangled: stereo::StereoBufferInfoParser::initCustDataItem() */
int _ZN6stereo22StereoBufferInfoParser16initCustDataItemEv(void);

/* Symbol: _ZN6stereo9PackUtils22APP_SECTION_MAX_LENGTHE */
/* Demangled: stereo::PackUtils::APP_SECTION_MAX_LENGTH */
extern void* _ZN6stereo9PackUtils22APP_SECTION_MAX_LENGTHE;

/* Symbol: _ZN17XMP_ReadWriteLockC1Ev */
/* Demangled: XMP_ReadWriteLock::XMP_ReadWriteLock() */
int _ZN17XMP_ReadWriteLockC1Ev(void);

/* Symbol: _ZTVN7XMPMeta17ErrorCallbackInfoE */
/* Demangled: vtable for XMPMeta::ErrorCallbackInfo */
extern void* _ZTVN7XMPMeta17ErrorCallbackInfoE;

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_ */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator=(TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromFloatEdPKcPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromFloat(double, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromFloatEdPKcPS6_(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetObjectOptionsEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetObjectOptions() const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetObjectOptionsEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getViewWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getViewWidth() */
int _ZN6stereo20StereoInfoJsonParser12getViewWidthEv(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserD0Ev */
/* Demangled: stereo::GoogleStereoInfoParser::~GoogleStereoInfoParser() */
int _ZN6stereo22GoogleStereoInfoParserD0Ev(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE */
/* Demangled: stereo::StereoDepthInfoParser::StereoDepthInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoDepthInfo*) */
int _ZN6stereo21StereoDepthInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15StereoDepthInfoE(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParser4readEv */
/* Demangled: stereo::SegmentMaskInfoParser::read() */
int _ZN6stereo21SegmentMaskInfoParser4readEv(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE */
/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoConfigInfo*) */
int _ZN6stereo22StereoConfigInfoParserC2EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE(void);

/* Symbol: _ZN6stereo9XmpPacker6unpackEv */
/* Demangled: stereo::XmpPacker::unpack() */
int _ZN6stereo9XmpPacker6unpackEv(void);

/* Symbol: _ZTV8XML_Node */
/* Demangled: vtable for XML_Node */
extern void* _ZTV8XML_Node;

/* Symbol: _ZN10RDF_Parser16NodeElementAttrsEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::NodeElementAttrs(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser16NodeElementAttrsEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN6stereo15XmpMetaOperatorD0Ev */
/* Demangled: stereo::XmpMetaOperator::~XmpMetaOperator() */
int _ZN6stereo15XmpMetaOperatorD0Ev(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getMainCamPosEv */
/* Demangled: stereo::StereoInfoJsonParser::getMainCamPos() */
int _ZN6stereo20StereoInfoJsonParser13getMainCamPosEv(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParserD0Ev */
/* Demangled: stereo::StereoDepthInfoParser::~StereoDepthInfoParser() */
int _ZN6stereo21StereoDepthInfoParserD0Ev(void);

/* Symbol: UTF16BE_to_UTF32BE */
/* Demangled: UTF16BE_to_UTF32BE */
extern void* UTF16BE_to_UTF32BE;

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPMeta() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev(void);

/* Symbol: _ZN6stereo10JsonParserC1ERKNS_12StereoBufferE */
/* Demangled: stereo::JsonParser::JsonParser(stereo::StereoBuffer const&) */
int _ZN6stereo10JsonParserC1ERKNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream4skipEl */
/* Demangled: stereo::BufferTypeInputStream::skip(long) */
int _ZN6stereo21BufferTypeInputStream4skipEl(void);

/* Symbol: _ZN6stereo16StereoBufferInfoD0Ev */
/* Demangled: stereo::StereoBufferInfo::~StereoBufferInfo() */
int _ZN6stereo16StereoBufferInfoD0Ev(void);

/* Symbol: WXMPUtils_ConvertToFloat_1 */
/* Demangled: WXMPUtils_ConvertToFloat_1 */
int WXMPUtils_ConvertToFloat_1(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_11__wrap_iterIP8IterNodeEES5_EENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> >, std::__1::allocator<std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> > > >::__push_back_slow_path<std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> > >(std::__1::pair<std::__1::__wrap_iter<IterNode*>, std::__1::__wrap_iter<IterNode*> >&&) */
int _ZNSt3__16vectorINS_4pairINS_11__wrap_iterIP8IterNodeEES5_EENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromDateERK12XMP_DateTimePS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromDate(XMP_DateTime const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15ConvertFromDateERK12XMP_DateTimePS6_(void);

/* Symbol: _ZN6stereo15StereoBigBufferD0Ev */
/* Demangled: stereo::StereoBigBuffer::~StereoBigBuffer() */
int _ZN6stereo15StereoBigBufferD0Ev(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStream5writeEi */
/* Demangled: stereo::BufferTypeOutputStream::write(int) */
int _ZN6stereo22BufferTypeOutputStream5writeEi(void);

/* Symbol: _ZN6stereo9PackUtils12BYTE_COUNT_4E */
/* Demangled: stereo::PackUtils::BYTE_COUNT_4 */
extern void* _ZN6stereo9PackUtils12BYTE_COUNT_4E;

/* Symbol: _ZN6stereo9JpgPacker22parseAppInfoFromStreamERNS_21BufferTypeInputStreamE */
/* Demangled: stereo::JpgPacker::parseAppInfoFromStream(stereo::BufferTypeInputStream&) */
int _ZN6stereo9JpgPacker22parseAppInfoFromStreamERNS_21BufferTypeInputStreamE(void);

/* Symbol: WXMPMeta_GetProperty_Int_1 */
/* Demangled: WXMPMeta_GetProperty_Int_1 */
int WXMPMeta_GetProperty_Int_1(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser17getGeoVerifyLevelEv */
/* Demangled: stereo::StereoInfoJsonParser::getGeoVerifyLevel() */
int _ZN6stereo20StereoInfoJsonParser17getGeoVerifyLevelEv(void);

/* Symbol: voidByte */
/* Demangled: voidByte */
extern void* voidByte;

/* Symbol: _ZNSt3__118__insertion_sort_3IRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_ */
/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
int _ZNSt3__118__insertion_sort_3IRPFbPK8XMP_NodeS3_EPPS1_EEvT0_S9_T_(void);

/* Symbol: _ZTV12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE */
/* Demangled: vtable for TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTV12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE;

/* Symbol: _ZNK7XMPMeta16GetLocalizedTextEPKcS1_S1_S1_PS1_PjS2_S3_S3_ */
/* Demangled: XMPMeta::GetLocalizedText(char const*, char const*, char const*, char const*, char const**, unsigned int*, char const**, unsigned int*, unsigned int*) const */
int _ZNK7XMPMeta16GetLocalizedTextEPKcS1_S1_S1_PS1_PjS2_S3_S3_(void);

/* Symbol: UTF8_to_UTF32Native */
/* Demangled: UTF8_to_UTF32Native */
extern void* UTF8_to_UTF32Native;

/* Symbol: WXMPMeta_GetArrayItem_1 */
/* Demangled: WXMPMeta_GetArrayItem_1 */
int WXMPMeta_GetArrayItem_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetVersionInfoEP15XMP_VersionInfo */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetVersionInfo(XMP_VersionInfo*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetVersionInfoEP15XMP_VersionInfo(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17RegisterNamespaceEPKcS9_PS6_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::RegisterNamespace(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17RegisterNamespaceEPKcS9_PS6_(void);

/* Symbol: _ZN6stereo17StereoCaptureInfoD2Ev */
/* Demangled: stereo::StereoCaptureInfo::~StereoCaptureInfo() */
int _ZN6stereo17StereoCaptureInfoD2Ev(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser16readCustDataItemEv */
/* Demangled: stereo::StereoConfigInfoParser::readCustDataItem() */
int _ZN6stereo22StereoConfigInfoParser16readCustDataItemEv(void);

/* Symbol: _ZN6stereo20CustomizedDataPackerD1Ev */
/* Demangled: stereo::CustomizedDataPacker::~CustomizedDataPacker() */
int _ZN6stereo20CustomizedDataPackerD1Ev(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetLocalizedTextEPKcS9_S9_S9_PS6_SA_Pj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetLocalizedText(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16GetLocalizedTextEPKcS9_S9_S9_PS6_SA_Pj(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getLdcHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getLdcHeight() */
int _ZN6stereo20StereoInfoJsonParser12getLdcHeightEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser9getCurDacEv */
/* Demangled: stereo::StereoInfoJsonParser::getCurDac() */
int _ZN6stereo20StereoInfoJsonParser9getCurDacEv(void);

/* Symbol: _ZN6stereo5Utils16readFileToBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE */
/* Demangled: stereo::Utils::readFileToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoBuffer&) */
int _ZN6stereo5Utils16readFileToBufferERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_12StereoBufferE(void);

/* Symbol: WXMPUtils_ConvertToLocalTime_1 */
/* Demangled: WXMPUtils_ConvertToLocalTime_1 */
int WXMPUtils_ConvertToLocalTime_1(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator() */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: WXMPIterator_Skip_1 */
/* Demangled: WXMPIterator_Skip_1 */
int WXMPIterator_Skip_1(void);

/* Symbol: WXMPMeta_GetProperty_Float_1 */
/* Demangled: WXMPMeta_GetProperty_Float_1 */
int WXMPMeta_GetProperty_Float_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatEPKc */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToFloat(char const*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14ConvertToFloatEPKc(void);

/* Symbol: _ZN6stereo14CustomizedMetaD1Ev */
/* Demangled: stereo::CustomizedMeta::~CustomizedMeta() */
int _ZN6stereo14CustomizedMetaD1Ev(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetGlobalOptionsEj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetGlobalOptions(unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetGlobalOptionsEj(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64EPKcjPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::EncodeToBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14EncodeToBase64EPKcjPS6_(void);

/* Symbol: _ZN6stereo10JsonParserC2ERKNS_12StereoBufferE */
/* Demangled: stereo::JsonParser::JsonParser(stereo::StereoBuffer const&) */
int _ZN6stereo10JsonParserC2ERKNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser10getFaceRipEi */
/* Demangled: stereo::StereoInfoJsonParser::getFaceRip(int) */
int _ZN6stereo20StereoInfoJsonParser10getFaceRipEi(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser14initBufferItemEv */
/* Demangled: stereo::StereoDepthInfoParser::initBufferItem() */
int _ZN6stereo21StereoDepthInfoParser14initBufferItemEv(void);

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIRPFbPK8XMP_NodeS3_EPPS1_EEbT0_S9_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
int _ZNSt3__127__insertion_sort_incompleteIRPFbPK8XMP_NodeS3_EPPS1_EEbT0_S9_T_(void);

/* Symbol: WXMPUtils_ConvertFromInt_1 */
/* Demangled: WXMPUtils_ConvertFromInt_1 */
int WXMPUtils_ConvertFromInt_1(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperatorD0Ev */
/* Demangled: stereo::CustomizedMetaOperator::~CustomizedMetaOperator() */
int _ZN6stereo22CustomizedMetaOperatorD0Ev(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE */
/* Demangled: stereo::StereoCaptureInfoParser::StereoCaptureInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoCaptureInfo*) */
int _ZN6stereo23StereoCaptureInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE(void);

/* Symbol: _ZN6stereo9PackUtils6getMD5ERKNS_12StereoBufferE */
/* Demangled: stereo::PackUtils::getMD5(stereo::StereoBuffer const&) */
int _ZN6stereo9PackUtils6getMD5ERKNS_12StereoBufferE(void);

/* Symbol: _ZN12ExpatAdapterC2Eb */
/* Demangled: ExpatAdapter::ExpatAdapter(bool) */
int _ZN12ExpatAdapterC2Eb(void);

/* Symbol: _ZTV11XMPIterator */
/* Demangled: vtable for XMPIterator */
extern void* _ZTV11XMPIterator;

/* Symbol: _ZTVN6stereo20CustomizedDataPackerE */
/* Demangled: vtable for stereo::CustomizedDataPacker */
extern void* _ZTVN6stereo20CustomizedDataPackerE;

/* Symbol: _ZN6stereo9PackUtils26WRITE_XMP_AFTER_FIRST_APP1E */
/* Demangled: stereo::PackUtils::WRITE_XMP_AFTER_FIRST_APP1 */
extern void* _ZN6stereo9PackUtils26WRITE_XMP_AFTER_FIRST_APP1E;

/* Symbol: _Z8MD5FinalPhP7MD5_CTX */
/* Demangled: MD5Final(unsigned char*, MD5_CTX*) */
int _Z8MD5FinalPhP7MD5_CTX(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor20readStereoConfigInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoInfoAccessor::readStereoConfigInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo18StereoInfoAccessor20readStereoConfigInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: WXMPUtils_SeparateArrayItems_1 */
/* Demangled: WXMPUtils_SeparateArrayItems_1 */
int WXMPUtils_SeparateArrayItems_1(void);

/* Symbol: _ZN12ExpatAdapterD2Ev */
/* Demangled: ExpatAdapter::~ExpatAdapter() */
int _ZN12ExpatAdapterD2Ev(void);

/* Symbol: sXMP_InitCount */
/* Demangled: sXMP_InitCount */
extern void* sXMP_InitCount;

/* Symbol: _Z19CodePoint_from_UTF8PKhmPjPm */
/* Demangled: CodePoint_from_UTF8(unsigned char const*, unsigned long, unsigned int*, unsigned long*) */
int _Z19CodePoint_from_UTF8PKhmPjPm(void);

/* Symbol: CodePoint_from_UTF16LE */
/* Demangled: CodePoint_from_UTF16LE */
extern void* CodePoint_from_UTF16LE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: WXMPMeta_SetArrayItem_1 */
/* Demangled: WXMPMeta_SetArrayItem_1 */
int WXMPMeta_SetArrayItem_1(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserD1Ev */
/* Demangled: stereo::StereoConfigInfoParser::~StereoConfigInfoParser() */
int _ZN6stereo22StereoConfigInfoParserD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE6insertINS_11__wrap_iterIPS2_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISB_E9referenceEEE5valueES9_E4typeENS7_IPKS2_EESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE6insertINS_11__wrap_iterIPS2_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISB_E9referenceEEE5valueES9_E4typeENS7_IPKS2_EESB_SB_ */
int _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE6insertINS_11__wrap_iterIPS2_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISB_E9referenceEEE5valueES9_E4typeENS7_IPKS2_EESB_SB_(void);

/* Symbol: voidStringLen */
/* Demangled: voidStringLen */
extern void* voidStringLen;

/* Symbol: WXMPUtils_PackageForJPEG_1 */
/* Demangled: WXMPUtils_PackageForJPEG_1 */
int WXMPUtils_PackageForJPEG_1(void);

/* Symbol: _ZN6stereo21BufferTypeInputStreamC1ERNS_12StereoBufferE */
/* Demangled: stereo::BufferTypeInputStream::BufferTypeInputStream(stereo::StereoBuffer&) */
int _ZN6stereo21BufferTypeInputStreamC1ERNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser22getGFocusFocalDistanceEv */
/* Demangled: stereo::StereoInfoJsonParser::getGFocusFocalDistance() */
int _ZN6stereo20StereoInfoJsonParser22getGFocusFocalDistanceEv(void);

/* Symbol: _ZN7XMPMeta23SetDefaultErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j */
/* Demangled: XMPMeta::SetDefaultErrorCallback(unsigned char (*)(bool (*)(void*, unsigned char, int, char const*), void*, unsigned char, int, char const*), bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
int _ZN7XMPMeta23SetDefaultErrorCallbackEPFhPFbPvhiPKcES0_hiS2_ES4_S0_j(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev(void);

/* Symbol: _ZN6stereo9PackUtils13TYPE_JPS_DATAE */
/* Demangled: stereo::PackUtils::TYPE_JPS_DATA */
extern void* _ZN6stereo9PackUtils13TYPE_JPS_DATAE;

/* Symbol: voidDateTime */
/* Demangled: voidDateTime */
extern void* voidDateTime;

/* Symbol: _ZN8XML_Node12SetAttrValueEPKcS1_ */
/* Demangled: XML_Node::SetAttrValue(char const*, char const*) */
int _ZN8XML_Node12SetAttrValueEPKcS1_(void);

/* Symbol: UTF32BE_to_UTF16BE */
/* Demangled: UTF32BE_to_UTF16BE */
extern void* UTF32BE_to_UTF16BE;

/* Symbol: WXMPMeta_IncrementRefCount_1 */
/* Demangled: WXMPMeta_IncrementRefCount_1 */
int WXMPMeta_IncrementRefCount_1(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetArrayItemEPKcS9_iPS6_Pj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetArrayItem(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12GetArrayItemEPKcS9_iPS6_Pj(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DoesPropertyExistEPKcS9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesPropertyExist(char const*, char const*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DoesPropertyExistEPKcS9_(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser15writeBufferItemEv */
/* Demangled: stereo::GoogleStereoInfoParser::writeBufferItem() */
int _ZN6stereo22GoogleStereoInfoParser15writeBufferItemEv(void);

/* Symbol: _ZN6stereo9PackUtils5APP15E */
/* Demangled: stereo::PackUtils::APP15 */
extern void* _ZN6stereo9PackUtils5APP15E;

/* Symbol: _ZTVN6stereo15SegmentMaskInfoE */
/* Demangled: vtable for stereo::SegmentMaskInfo */
extern void* _ZTVN6stereo15SegmentMaskInfoE;

/* Symbol: _ZN6stereo18StereoInfoAccessor20readStereoBufferInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoInfoAccessor::readStereoBufferInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo18StereoInfoAccessor20readStereoBufferInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN8XMPUtils16DuplicateSubtreeERK7XMPMetaPS0_PKcS5_S5_S5_j */
/* Demangled: XMPUtils::DuplicateSubtree(XMPMeta const&, XMPMeta*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN8XMPUtils16DuplicateSubtreeERK7XMPMetaPS0_PKcS5_S5_S5_j(void);

/* Symbol: _Z28InitializeUnicodeConversionsv */
/* Demangled: InitializeUnicodeConversions() */
int _Z28InitializeUnicodeConversionsv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iRKS6_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetArrayItem(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iRKS6_j(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getMaskWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getMaskWidth() */
int _ZN6stereo20StereoInfoJsonParser12getMaskWidthEv(void);

/* Symbol: voidInt64 */
/* Demangled: voidInt64 */
extern void* voidInt64;

/* Symbol: WXMPMeta_RegisterNamespace_1 */
/* Demangled: WXMPMeta_RegisterNamespace_1 */
int WXMPMeta_RegisterNamespace_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetClientString(void*, char const*, unsigned int) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj(void);

/* Symbol: _ZN6stereo16GoogleStereoInfoD1Ev */
/* Demangled: stereo::GoogleStereoInfo::~GoogleStereoInfo() */
int _ZN6stereo16GoogleStereoInfoD1Ev(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser16writeSimpleValueEv */
/* Demangled: stereo::StereoDepthInfoParser::writeSimpleValue() */
int _ZN6stereo21StereoDepthInfoParser16writeSimpleValueEv(void);

/* Symbol: _ZNK7XMPMeta17SerializeToBufferEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjjPKcS9_i */
/* Demangled: XMPMeta::SerializeToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int, unsigned int, char const*, char const*, int) const */
int _ZNK7XMPMeta17SerializeToBufferEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjjPKcS9_i(void);

/* Symbol: _ZN8XMPUtils15ConvertFromBoolEbPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: XMPUtils::ConvertFromBool(bool, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils15ConvertFromBoolEbPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN17XMP_HomeGrownLock15ReleaseFromReadEv */
/* Demangled: XMP_HomeGrownLock::ReleaseFromRead() */
int _ZN17XMP_HomeGrownLock15ReleaseFromReadEv(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcS9_j */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(char const*, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2EPKcS9_j(void);

/* Symbol: _ZN7XMPMeta16SetProperty_BoolEPKcS1_bj */
/* Demangled: XMPMeta::SetProperty_Bool(char const*, char const*, bool, unsigned int) */
int _ZN7XMPMeta16SetProperty_BoolEPKcS1_bj(void);

/* Symbol: voidStringPtr */
/* Demangled: voidStringPtr */
extern void* voidStringPtr;

/* Symbol: _ZN6stereo7XmpMeta12setArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iS9_ */
/* Demangled: stereo::XmpMeta::setArrayItem(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo7XmpMeta12setArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iS9_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser19getDepthBufferWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getDepthBufferWidth() */
int _ZN6stereo20StereoInfoJsonParser19getDepthBufferWidthEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser23getGFocusBlurAtInfinityEv */
/* Demangled: stereo::StereoInfoJsonParser::getGFocusBlurAtInfinity() */
int _ZN6stereo20StereoInfoJsonParser23getGFocusBlurAtInfinityEv(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser9serializeEv */
/* Demangled: stereo::GoogleStereoInfoParser::serialize() */
int _ZN6stereo22GoogleStereoInfoParser9serializeEv(void);

/* Symbol: _ZN6stereo9JpgPacker4packERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS6_NS7_9allocatorIS6_EEEESC_ */
/* Demangled: stereo::JpgPacker::pack(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&, stereo::Section*, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*, std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
int _ZN6stereo9JpgPacker4packERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionEPNSt3__16vectorIS6_NS7_9allocatorIS6_EEEESC_(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZN6stereo20StereoInfoJsonParser17getTouchCoordY1stEv */
/* Demangled: stereo::StereoInfoJsonParser::getTouchCoordY1st() */
int _ZN6stereo20StereoInfoJsonParser17getTouchCoordY1stEv(void);

/* Symbol: _ZN8XMPUtils18ConvertToLocalTimeEP12XMP_DateTime */
/* Demangled: XMPUtils::ConvertToLocalTime(XMP_DateTime*) */
int _ZN8XMPUtils18ConvertToLocalTimeEP12XMP_DateTime(void);

/* Symbol: WXMPMeta_GetLocalizedText_1 */
/* Demangled: WXMPMeta_GetLocalizedText_1 */
int WXMPMeta_GetLocalizedText_1(void);

/* Symbol: WXMPUtils_ComposeStructFieldPath_1 */
/* Demangled: WXMPUtils_ComposeStructFieldPath_1 */
int WXMPUtils_ComposeStructFieldPath_1(void);

/* Symbol: WXMPUtils_ConvertFromInt64_1 */
/* Demangled: WXMPUtils_ConvertFromInt64_1 */
int WXMPUtils_ConvertFromInt64_1(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser15initSimpleValueEv */
/* Demangled: stereo::GoogleStereoInfoParser::initSimpleValue() */
int _ZN6stereo22GoogleStereoInfoParser15initSimpleValueEv(void);

/* Symbol: _ZNSt3__16vectorI8IterNodeNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<IterNode, std::__1::allocator<IterNode> >::__push_back_slow_path<IterNode>(IterNode&&) */
int _ZNSt3__16vectorI8IterNodeNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_ */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERKS7_(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteQualifierEPKcS9_S9_S9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteQualifier(char const*, char const*, char const*, char const*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteQualifierEPKcS9_S9_S9_(void);

/* Symbol: _ZN6stereo9PackUtils17TYPE_BUFFER_COUNTE */
/* Demangled: stereo::PackUtils::TYPE_BUFFER_COUNT */
extern void* _ZN6stereo9PackUtils17TYPE_BUFFER_COUNTE;

/* Symbol: _ZN6stereo18StereoInfoAccessor17getPhoVerifyLevelERKNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoAccessor::getPhoVerifyLevel(stereo::StereoBuffer const&) */
int _ZN6stereo18StereoInfoAccessor17getPhoVerifyLevelERKNS_12StereoBufferE(void);

/* Symbol: _Z15FromUTF32NativePKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: FromUTF32Native(unsigned int const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z15FromUTF32NativePKjmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_RKS6_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeLangSelector(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE19ComposeLangSelectorEPKcS9_RKS6_PS6_(void);

/* Symbol: _ZN6stereo16StereoConfigInfoD1Ev */
/* Demangled: stereo::StereoConfigInfo::~StereoConfigInfo() */
int _ZN6stereo16StereoConfigInfoD1Ev(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser14readStructItemEv */
/* Demangled: stereo::StereoConfigInfoParser::readStructItem() */
int _ZN6stereo22StereoConfigInfoParser14readStructItemEv(void);

/* Symbol: _ZN6stereo9PackUtils33APPXTAG_PLUS_LENGTHTAG_BYTE_COUNTE */
/* Demangled: stereo::PackUtils::APPXTAG_PLUS_LENGTHTAG_BYTE_COUNT */
extern void* _ZN6stereo9PackUtils33APPXTAG_PLUS_LENGTHTAG_BYTE_COUNTE;

/* Symbol: _ZTVN6stereo9JpgPackerE */
/* Demangled: vtable for stereo::JpgPacker */
extern void* _ZTVN6stereo9JpgPackerE;

/* Symbol: _ZN6stereo15XmpMetaOperator7setDataEP15DataCollections */
/* Demangled: stereo::XmpMetaOperator::setData(DataCollections*) */
int _ZN6stereo15XmpMetaOperator7setDataEP15DataCollections(void);

/* Symbol: _ZN6stereo15StereoDepthInfoD2Ev */
/* Demangled: stereo::StereoDepthInfo::~StereoDepthInfo() */
int _ZN6stereo15StereoDepthInfoD2Ev(void);

/* Symbol: _ZN6stereo9PackUtils13TYPE_JPS_MASKE */
/* Demangled: stereo::PackUtils::TYPE_JPS_MASK */
extern void* _ZN6stereo9PackUtils13TYPE_JPS_MASKE;

/* Symbol: _ZN8XMPUtils14EncodeToBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::EncodeToBase64(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils14EncodeToBase64EPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN8XMPUtils16ConvertFromFloatEdPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ConvertFromFloat(double, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils16ConvertFromFloatEdPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _Z17CodePoint_to_UTF8jPhmPm */
/* Demangled: CodePoint_to_UTF8(unsigned int, unsigned char*, unsigned long, unsigned long*) */
int _Z17CodePoint_to_UTF8jPhmPm(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser12getFocusLeftEv */
/* Demangled: stereo::StereoInfoJsonParser::getFocusLeft() */
int _ZN6stereo20StereoInfoJsonParser12getFocusLeftEv(void);

/* Symbol: _ZN6stereo9JpgPacker24findProperLocationForXmpEPNSt3__16vectorIPNS_7SectionENS1_9allocatorIS4_EEEE */
/* Demangled: stereo::JpgPacker::findProperLocationForXmp(std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >*) */
int _ZN6stereo9JpgPacker24findProperLocationForXmpEPNSt3__16vectorIPNS_7SectionENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN6stereo9XmpPackerC2EPNS_8PackInfoE */
/* Demangled: stereo::XmpPacker::XmpPacker(stereo::PackInfo*) */
int _ZN6stereo9XmpPackerC2EPNS_8PackInfoE(void);

/* Symbol: voidOptionBits */
/* Demangled: voidOptionBits */
extern void* voidOptionBits;

/* Symbol: _ZN7XMPMeta15AppendArrayItemEPKcS1_jS1_j */
/* Demangled: XMPMeta::AppendArrayItem(char const*, char const*, unsigned int, char const*, unsigned int) */
int _ZN7XMPMeta15AppendArrayItemEPKcS1_jS1_j(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void);

/* Symbol: _ZN6stereo7XmpMetaD1Ev */
/* Demangled: stereo::XmpMeta::~XmpMeta() */
int _ZN6stereo7XmpMetaD1Ev(void);

/* Symbol: _ZN6stereo10JsonParser21getValueIntFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_ */
/* Demangled: stereo::JsonParser::getValueIntFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser21getValueIntFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_(void);

/* Symbol: _ZN6stereo10JsonParserD0Ev */
/* Demangled: stereo::JsonParser::~JsonParser() */
int _ZN6stereo10JsonParserD0Ev(void);

/* Symbol: _ZN6stereo22ReadWriteLockFileUtils9writeLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::ReadWriteLockFileUtils::writeLock(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo22ReadWriteLockFileUtils9writeLockERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: WXMPUtils_ConvertToBool_1 */
/* Demangled: WXMPUtils_ConvertToBool_1 */
int WXMPUtils_ConvertToBool_1(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void);

/* Symbol: _ZN8XMPUtils13ConvertToDateEPKcP12XMP_DateTime */
/* Demangled: XMPUtils::ConvertToDate(char const*, XMP_DateTime*) */
int _ZN8XMPUtils13ConvertToDateEPKcP12XMP_DateTime(void);

/* Symbol: WXMPIterator_DecrementRefCount_1 */
/* Demangled: WXMPIterator_DecrementRefCount_1 */
int WXMPIterator_DecrementRefCount_1(void);

/* Symbol: WXMPUtils_ConvertToInt64_1 */
/* Demangled: WXMPUtils_ConvertToInt64_1 */
int WXMPUtils_ConvertToInt64_1(void);

/* Symbol: _ZN6stereo9PackUtils14TYPE_XMP_DEPTHE */
/* Demangled: stereo::PackUtils::TYPE_XMP_DEPTH */
extern void* _ZN6stereo9PackUtils14TYPE_XMP_DEPTHE;

/* Symbol: _ZNSt3__17__sort4IRPFbPK8XMP_NodeS3_EPPS1_EEjT0_S9_S9_S9_T_ */
/* Demangled: unsigned int std::__1::__sort4<bool (*&)(XMP_Node const*, XMP_Node const*), XMP_Node**>(XMP_Node**, XMP_Node**, XMP_Node**, XMP_Node**, bool (*&)(XMP_Node const*, XMP_Node const*)) */
int _ZNSt3__17__sort4IRPFbPK8XMP_NodeS3_EPPS1_EEjT0_S9_S9_S9_T_(void);

/* Symbol: _ZNK7XMPMeta17ErrorCallbackInfo21ClientCallbackWrapperEPKchiS2_ */
/* Demangled: XMPMeta::ErrorCallbackInfo::ClientCallbackWrapper(char const*, unsigned char, int, char const*) const */
int _ZNK7XMPMeta17ErrorCallbackInfo21ClientCallbackWrapperEPKchiS2_(void);

/* Symbol: _Z13ToUTF16NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: ToUTF16Native(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z13ToUTF16NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo13BufferManager10releaseAllEv */
/* Demangled: stereo::BufferManager::releaseAll() */
int _ZN6stereo13BufferManager10releaseAllEv(void);

/* Symbol: _ZN6stereo21BufferTypeInputStreamD2Ev */
/* Demangled: stereo::BufferTypeInputStream::~BufferTypeInputStream() */
int _ZN6stereo21BufferTypeInputStreamD2Ev(void);

/* Symbol: _ZN6stereo9PackUtils15TYPE_DEPTH_DATAE */
/* Demangled: stereo::PackUtils::TYPE_DEPTH_DATA */
extern void* _ZN6stereo9PackUtils15TYPE_DEPTH_DATAE;

/* Symbol: UTF8_to_UTF32BE */
/* Demangled: UTF8_to_UTF32BE */
extern void* UTF8_to_UTF32BE;

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_S9_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty(char const*, char const*, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE11SetPropertyEPKcS9_S9_j(void);

/* Symbol: _ZN6stereo20CustomizedDataPackerC1EPNS_8PackInfoE */
/* Demangled: stereo::CustomizedDataPacker::CustomizedDataPacker(stereo::PackInfo*) */
int _ZN6stereo20CustomizedDataPackerC1EPNS_8PackInfoE(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor19readSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoInfoAccessor::readSegmentMaskInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo18StereoInfoAccessor19readSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN8XMPUtils13ConvertToBoolEPKc */
/* Demangled: XMPUtils::ConvertToBool(char const*) */
int _ZN8XMPUtils13ConvertToBoolEPKc(void);

/* Symbol: _ZN11XMPIteratorD0Ev */
/* Demangled: XMPIterator::~XMPIterator() */
int _ZN11XMPIteratorD0Ev(void);

/* Symbol: UTF16Native_to_UTF8 */
/* Demangled: UTF16Native_to_UTF8 */
extern void* UTF16Native_to_UTF8;

/* Symbol: WXMPMeta_GetObjectOptions_1 */
/* Demangled: WXMPMeta_GetObjectOptions_1 */
int WXMPMeta_GetObjectOptions_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetErrorCallbackEPFbPvhiPKcES8_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetErrorCallback(bool (*)(void*, unsigned char, int, char const*), void*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetErrorCallbackEPFbPvhiPKcES8_j(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SortEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Sort() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4SortEv(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jjPKcSA_i */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SerializeToBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int, unsigned int, char const*, char const*, int) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17SerializeToBufferEPS6_jjPKcSA_i(void);

/* Symbol: _ZN6stereo9PackUtils31CUSTOMIZED_SERIAL_NUMBER_LENGTHE */
/* Demangled: stereo::PackUtils::CUSTOMIZED_SERIAL_NUMBER_LENGTH */
extern void* _ZN6stereo9PackUtils31CUSTOMIZED_SERIAL_NUMBER_LENGTHE;

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntERKS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToInt(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12ConvertToIntERKS6_(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromInt64ExPKcPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertFromInt64(long long, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16ConvertFromInt64ExPKcPS6_(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParser13prepareFdInfoEPNS_20StereoInfoJsonParserEi */
/* Demangled: stereo::StereoCaptureInfoParser::prepareFdInfo(stereo::StereoInfoJsonParser*, int) */
int _ZN6stereo23StereoCaptureInfoParser13prepareFdInfoEPNS_20StereoInfoJsonParserEi(void);

/* Symbol: _ZN7XMPMeta16SetProperty_DateEPKcS1_RK12XMP_DateTimej */
/* Demangled: XMPMeta::SetProperty_Date(char const*, char const*, XMP_DateTime const&, unsigned int) */
int _ZN7XMPMeta16SetProperty_DateEPKcS1_RK12XMP_DateTimej(void);

/* Symbol: _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: WXMPMeta_AppendArrayItem_1 */
/* Demangled: WXMPMeta_AppendArrayItem_1 */
int WXMPMeta_AppendArrayItem_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameEPKc */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetObjectName(char const*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameEPKc(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser16initCustDataItemEv */
/* Demangled: stereo::StereoConfigInfoParser::initCustDataItem() */
int _ZN6stereo22StereoConfigInfoParser16initCustDataItemEv(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE */
/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoConfigInfo*) */
int _ZN6stereo22StereoConfigInfoParserC2ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE(void);

/* Symbol: _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE8__appendEm */
/* Demangled: std::__1::vector<stereo::StereoBuffer, std::__1::allocator<stereo::StereoBuffer> >::__append(unsigned long) */
int _ZNSt3__16vectorIN6stereo12StereoBufferENS_9allocatorIS2_EEE8__appendEm(void);

/* Symbol: _ZNK7XMPMeta16GetProperty_DateEPKcS1_P12XMP_DateTimePj */
/* Demangled: XMPMeta::GetProperty_Date(char const*, char const*, XMP_DateTime*, unsigned int*) const */
int _ZNK7XMPMeta16GetProperty_DateEPKcS1_P12XMP_DateTimePj(void);

/* Symbol: _ZNK7XMPMeta18DoesQualifierExistEPKcS1_S1_S1_ */
/* Demangled: XMPMeta::DoesQualifierExist(char const*, char const*, char const*, char const*) const */
int _ZNK7XMPMeta18DoesQualifierExistEPKcS1_S1_S1_(void);

/* Symbol: _ZN7XMPMetaD0Ev */
/* Demangled: XMPMeta::~XMPMeta() */
int _ZN7XMPMetaD0Ev(void);

/* Symbol: WXMPUtils_ComposeQualifierPath_1 */
/* Demangled: WXMPUtils_ComposeQualifierPath_1 */
int WXMPUtils_ComposeQualifierPath_1(void);

/* Symbol: CodePoint_to_UTF16BE */
/* Demangled: CodePoint_to_UTF16BE */
extern void* CodePoint_to_UTF16BE;

/* Symbol: WXMPMeta_GetProperty_Int64_1 */
/* Demangled: WXMPMeta_GetProperty_Int64_1 */
int WXMPMeta_GetProperty_Int64_1(void);

/* Symbol: sRegisteredNamespaces */
/* Demangled: sRegisteredNamespaces */
extern void* sRegisteredNamespaces;

/* Symbol: _ZN6stereo22StereoBufferInfoParserC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE */
/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoBufferInfo*) */
int _ZN6stereo22StereoBufferInfoParserC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEEPNS_16StereoBufferInfoE(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParserD0Ev */
/* Demangled: stereo::SegmentMaskInfoParser::~SegmentMaskInfoParser() */
int _ZN6stereo21SegmentMaskInfoParserD0Ev(void);

/* Symbol: _Z8FindNodeP8XMP_NodeRKNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEEbjPNS1_11__wrap_iterIPS0_EE */
/* Demangled: FindNode(XMP_Node*, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > const&, bool, unsigned int, std::__1::__wrap_iter<XMP_Node**>*) */
int _Z8FindNodeP8XMP_NodeRKNSt3__16vectorI13XPathStepInfoNS1_9allocatorIS3_EEEEbjPNS1_11__wrap_iterIPS0_EE(void);

/* Symbol: WXMPUtils_MergeFromJPEG_1 */
/* Demangled: WXMPUtils_MergeFromJPEG_1 */
int WXMPUtils_MergeFromJPEG_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateERKS6_P12XMP_DateTime */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ConvertToDate(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, XMP_DateTime*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13ConvertToDateERKS6_P12XMP_DateTime(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jSC_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SeparateArrayItems(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, unsigned int, char const*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jSC_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser9getMinDacEv */
/* Demangled: stereo::StereoInfoJsonParser::getMinDac() */
int _ZN6stereo20StereoInfoJsonParser9getMinDacEv(void);

/* Symbol: _ZN10RDF_Parser18FixupQualifiedNodeEP8XMP_Node */
/* Demangled: RDF_Parser::FixupQualifiedNode(XMP_Node*) */
int _ZN10RDF_Parser18FixupQualifiedNodeEP8XMP_Node(void);

/* Symbol: WXMPMeta_DeleteProperty_1 */
/* Demangled: WXMPMeta_DeleteProperty_1 */
int WXMPMeta_DeleteProperty_1(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getFocusRightEv */
/* Demangled: stereo::StereoInfoJsonParser::getFocusRight() */
int _ZN6stereo20StereoInfoJsonParser13getFocusRightEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParser9serializeEv */
/* Demangled: stereo::StereoBufferInfoParser::serialize() */
int _ZN6stereo22StereoBufferInfoParser9serializeEv(void);

/* Symbol: _ZN8XMPUtils11SetTimeZoneEP12XMP_DateTime */
/* Demangled: XMPUtils::SetTimeZone(XMP_DateTime*) */
int _ZN8XMPUtils11SetTimeZoneEP12XMP_DateTime(void);

/* Symbol: _ZN17XMP_ReadWriteLockD2Ev */
/* Demangled: XMP_ReadWriteLock::~XMP_ReadWriteLock() */
int _ZN17XMP_ReadWriteLockD2Ev(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iS9_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetArrayItem(char const*, char const*, int, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetArrayItemEPKcS9_iS9_j(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStreamD1Ev */
/* Demangled: stereo::BufferTypeOutputStream::~BufferTypeOutputStream() */
int _ZN6stereo22BufferTypeOutputStreamD1Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN6stereo9JpgPacker13getSectionTagEPNS_7SectionE */
/* Demangled: stereo::JpgPacker::getSectionTag(stereo::Section*) */
int _ZN6stereo9JpgPacker13getSectionTagEPNS_7SectionE(void);

/* Symbol: _ZN8XMPUtils9TerminateEv */
/* Demangled: XMPUtils::Terminate() */
int _ZN8XMPUtils9TerminateEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EP11__XMPMeta__ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPMeta(__XMPMeta__*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1EP11__XMPMeta__(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser16readCustDataItemEv */
/* Demangled: stereo::StereoDepthInfoParser::readCustDataItem() */
int _ZN6stereo21StereoDepthInfoParser16readCustDataItemEv(void);

/* Symbol: _ZN6stereo9PackUtils16XMP_HEADER_STARTE */
/* Demangled: stereo::PackUtils::XMP_HEADER_START */
extern void* _ZN6stereo9PackUtils16XMP_HEADER_STARTE;

/* Symbol: _ZN6stereo9PackUtils17TYPE_SEGMENT_MASKE */
/* Demangled: stereo::PackUtils::TYPE_SEGMENT_MASK */
extern void* _ZN6stereo9PackUtils17TYPE_SEGMENT_MASKE;

/* Symbol: _ZN10RDF_Parser31ParseTypeLiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::ParseTypeLiteralPropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser31ParseTypeLiteralPropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN8XMPUtils20ComposeQualifierPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ComposeQualifierPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils20ComposeQualifierPathEPKcS1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _Z12ComposeXPathRKNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEEPNS_12basic_stringIcNS_11char_traitsIcEENS2_IcEEEE */
/* Demangled: ComposeXPath(std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z12ComposeXPathRKNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEEPNS_12basic_stringIcNS_11char_traitsIcEENS2_IcEEEE(void);

/* Symbol: WXMPMeta_ParseFromBuffer_1 */
/* Demangled: WXMPMeta_ParseFromBuffer_1 */
int WXMPMeta_ParseFromBuffer_1(void);

/* Symbol: WXMPUtils_ComposeArrayItemPath_1 */
/* Demangled: WXMPUtils_ComposeArrayItemPath_1 */
int WXMPUtils_ComposeArrayItemPath_1(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser15readSimpleValueEv */
/* Demangled: stereo::GoogleStereoInfoParser::readSimpleValue() */
int _ZN6stereo22GoogleStereoInfoParser15readSimpleValueEv(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParserD0Ev */
/* Demangled: stereo::StereoBufferInfoParser::~StereoBufferInfoParser() */
int _ZN6stereo22StereoBufferInfoParserD0Ev(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor17getGeoVerifyLevelERKNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoAccessor::getGeoVerifyLevel(stereo::StereoBuffer const&) */
int _ZN6stereo18StereoInfoAccessor17getGeoVerifyLevelERKNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo10JsonParser31getObjectPropertyValueFromArrayEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiS9_ */
/* Demangled: stereo::JsonParser::getObjectPropertyValueFromArray(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser31getObjectPropertyValueFromArrayEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiS9_(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE */
/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoConfigInfo*) */
int _ZN6stereo22StereoConfigInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_16StereoConfigInfoE(void);

/* Symbol: _ZTv0_n24_N6stereo18StereoInfoAccessorD0Ev */
/* Demangled: virtual thunk to stereo::StereoInfoAccessor::~StereoInfoAccessor() */
int _ZTv0_n24_N6stereo18StereoInfoAccessorD0Ev(void);

/* Symbol: _ZN6stereo21BufferTypeInputStream4readEv */
/* Demangled: stereo::BufferTypeInputStream::read() */
int _ZN6stereo21BufferTypeInputStream4readEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParserC2EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE */
/* Demangled: stereo::StereoBufferInfoParser::StereoBufferInfoParser(stereo::IMetaOperator*, stereo::StereoBufferInfo*) */
int _ZN6stereo22StereoBufferInfoParserC2EPNS_13IMetaOperatorEPNS_16StereoBufferInfoE(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStreamC1Ei */
/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream(int) */
int _ZN6stereo22BufferTypeOutputStreamC1Ei(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParser9writeInfoEv */
/* Demangled: stereo::StereoCaptureInfoParser::writeInfo() */
int _ZN6stereo23StereoCaptureInfoParser9writeInfoEv(void);

/* Symbol: _ZN7XMPMeta15SetProperty_IntEPKcS1_ij */
/* Demangled: XMPMeta::SetProperty_Int(char const*, char const*, int, unsigned int) */
int _ZN7XMPMeta15SetProperty_IntEPKcS1_ij(void);

/* Symbol: WXMPMeta_CountArrayItems_1 */
/* Demangled: WXMPMeta_CountArrayItems_1 */
int WXMPMeta_CountArrayItems_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jRKS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SeparateArrayItems(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >*, char const*, char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18SeparateArrayItemsEP8TXMPMetaIS6_EPKcSC_jRKS6_(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser14initBufferItemEv */
/* Demangled: stereo::GoogleStereoInfoParser::initBufferItem() */
int _ZN6stereo22GoogleStereoInfoParser14initBufferItemEv(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParserD2Ev */
/* Demangled: stereo::StereoCaptureInfoParser::~StereoCaptureInfoParser() */
int _ZN6stereo23StereoCaptureInfoParserD2Ev(void);

/* Symbol: _ZN17XMP_ReadWriteLock7AcquireEb */
/* Demangled: XMP_ReadWriteLock::Acquire(bool) */
int _ZN17XMP_ReadWriteLock7AcquireEb(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser11getFocusTopEv */
/* Demangled: stereo::StereoInfoJsonParser::getFocusTop() */
int _ZN6stereo20StereoInfoJsonParser11getFocusTopEv(void);

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN6stereo9JpgPacker4packEv */
/* Demangled: stereo::JpgPacker::pack() */
int _ZN6stereo9JpgPacker4packEv(void);

/* Symbol: _ZN6stereo13PackerManager4packEPNS_8PackInfoE */
/* Demangled: stereo::PackerManager::pack(stereo::PackInfo*) */
int _ZN6stereo13PackerManager4packEPNS_8PackInfoE(void);

/* Symbol: UTF16LE_to_UTF32BE */
/* Demangled: UTF16LE_to_UTF32BE */
extern void* UTF16LE_to_UTF32BE;

/* Symbol: _ZN6stereo10JsonParser23getInt2DArrayFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: stereo::JsonParser::getInt2DArrayFromObject(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser23getInt2DArrayFromObjectEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParserD0Ev */
/* Demangled: stereo::StereoInfoJsonParser::~StereoInfoJsonParser() */
int _ZN6stereo20StereoInfoJsonParserD0Ev(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor20writeStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15StereoDepthInfoE */
/* Demangled: stereo::StereoInfoAccessor::writeStereoDepthInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::StereoDepthInfo&) */
int _ZN6stereo18StereoInfoAccessor20writeStereoDepthInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15StereoDepthInfoE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5EraseEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Erase() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE5EraseEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointYEv */
/* Demangled: stereo::StereoInfoJsonParser::getGFocusFocalPointY() */
int _ZN6stereo20StereoInfoJsonParser20getGFocusFocalPointYEv(void);

/* Symbol: _ZN6stereo18StereoInfoAccessorD0Ev */
/* Demangled: stereo::StereoInfoAccessor::~StereoInfoAccessor() */
int _ZN6stereo18StereoInfoAccessorD0Ev(void);

/* Symbol: _ZN8XMPUtils13MergeFromJPEGEP7XMPMetaRKS0_ */
/* Demangled: XMPUtils::MergeFromJPEG(XMPMeta*, XMPMeta const&) */
int _ZN8XMPUtils13MergeFromJPEGEP7XMPMetaRKS0_(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4NextEPS6_S8_S8_Pj */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Next(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE4NextEPS6_S8_S8_Pj(void);

/* Symbol: _ZN7XMPMeta12SetArrayItemEPKcS1_iS1_j */
/* Demangled: XMPMeta::SetArrayItem(char const*, char const*, int, char const*, unsigned int) */
int _ZN7XMPMeta12SetArrayItemEPKcS1_iS1_j(void);

/* Symbol: UTF32LE_to_UTF8 */
/* Demangled: UTF32LE_to_UTF8 */
extern void* UTF32LE_to_UTF8;

/* Symbol: WXMPMeta_GetNamespacePrefix_1 */
/* Demangled: WXMPMeta_GetNamespacePrefix_1 */
int WXMPMeta_GetNamespacePrefix_1(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::~TXMPIterator() */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEED2Ev(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesArrayItemExistEPKcS9_i */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DoesArrayItemExist(char const*, char const*, int) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE18DoesArrayItemExistEPKcS9_i(void);

/* Symbol: _ZTVN6stereo15StereoDepthInfoE */
/* Demangled: vtable for stereo::StereoDepthInfo */
extern void* _ZTVN6stereo15StereoDepthInfoE;

/* Symbol: _ZN8XMPUtils16RemovePropertiesEP7XMPMetaPKcS3_j */
/* Demangled: XMPUtils::RemoveProperties(XMPMeta*, char const*, char const*, unsigned int) */
int _ZN8XMPUtils16RemovePropertiesEP7XMPMetaPKcS3_j(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteArrayItemEPKcS9_i */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteArrayItem(char const*, char const*, int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15DeleteArrayItemEPKcS9_i(void);

/* Symbol: _ZNK6stereo7XmpMeta17getPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PS7_ */
/* Demangled: stereo::XmpMeta::getPropertyString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK6stereo7XmpMeta17getPropertyStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PS7_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPNS_6vectorIPN6stereo15StereoBigBufferENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<stereo::StereoBigBuffer*, std::__1::allocator<stereo::StereoBigBuffer*> >*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPNS_6vectorIPN6stereo15StereoBigBufferENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiSA_NS_4lessIiEELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN6stereo9PackUtils11EXIF_HEADERE */
/* Demangled: stereo::PackUtils::EXIF_HEADER */
extern void* _ZN6stereo9PackUtils11EXIF_HEADERE;

/* Symbol: _ZNK18XMP_NamespaceTable6GetURIEPKcPS1_Pj */
/* Demangled: XMP_NamespaceTable::GetURI(char const*, char const**, unsigned int*) const */
int _ZNK18XMP_NamespaceTable6GetURIEPKcPS1_Pj(void);

/* Symbol: _ZNK8XML_Node15IsEmptyLeafNodeEv */
/* Demangled: XML_Node::IsEmptyLeafNode() const */
int _ZNK8XML_Node15IsEmptyLeafNodeEv(void);

/* Symbol: WXMPMeta_DeleteQualifier_1 */
/* Demangled: WXMPMeta_DeleteQualifier_1 */
int WXMPMeta_DeleteQualifier_1(void);

/* Symbol: _Z9MD5UpdateP7MD5_CTXPhj */
/* Demangled: MD5Update(MD5_CTX*, unsigned char*, unsigned int) */
int _Z9MD5UpdateP7MD5_CTXPhj(void);

/* Symbol: _Z13ToUTF32NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: ToUTF32Native(unsigned char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z13ToUTF32NativePKhmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameES6_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetObjectName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE13SetObjectNameES6_(void);

/* Symbol: _ZN6stereo22ReadWriteLockFileUtils16sLockCollectionsE */
/* Demangled: stereo::ReadWriteLockFileUtils::sLockCollections */
extern void* _ZN6stereo22ReadWriteLockFileUtils16sLockCollectionsE;

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getGDepthNearEv */
/* Demangled: stereo::StereoInfoJsonParser::getGDepthNear() */
int _ZN6stereo20StereoInfoJsonParser13getGDepthNearEv(void);

/* Symbol: _ZN6stereo9JpgPacker25copyToStreamWithFixBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE */
/* Demangled: stereo::JpgPacker::copyToStreamWithFixBuffer(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&) */
int _ZN6stereo9JpgPacker25copyToStreamWithFixBufferERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamE(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParser5writeEv */
/* Demangled: stereo::StereoDepthInfoParser::write() */
int _ZN6stereo21StereoDepthInfoParser5writeEv(void);

/* Symbol: _ZN6stereo9JpgPackerD0Ev */
/* Demangled: stereo::JpgPacker::~JpgPacker() */
int _ZN6stereo9JpgPackerD0Ev(void);

/* Symbol: _ZN8XMPUtils14PackageForJPEGERK7XMPMetaPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_ */
/* Demangled: XMPUtils::PackageForJPEG(XMPMeta const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils14PackageForJPEGERK7XMPMetaPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcj */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_EPKcj(void);

/* Symbol: _ZN17XMP_ReadWriteLockC2Ev */
/* Demangled: XMP_ReadWriteLock::XMP_ReadWriteLock() */
int _ZN17XMP_ReadWriteLockC2Ev(void);

/* Symbol: _ZN6stereo22BufferTypeOutputStreamC1Ev */
/* Demangled: stereo::BufferTypeOutputStream::BufferTypeOutputStream() */
int _ZN6stereo22BufferTypeOutputStreamC1Ev(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser20getGoogleDepthHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getGoogleDepthHeight() */
int _ZN6stereo20StereoInfoJsonParser20getGoogleDepthHeightEv(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserD1Ev */
/* Demangled: stereo::GoogleStereoInfoParser::~GoogleStereoInfoParser() */
int _ZN6stereo22GoogleStereoInfoParserD1Ev(void);

/* Symbol: _ZN8XML_Node9ClearNodeEv */
/* Demangled: XML_Node::ClearNode() */
int _ZN8XML_Node9ClearNodeEv(void);

/* Symbol: _ZN6stereo15XmpMetaOperatorD1Ev */
/* Demangled: stereo::XmpMetaOperator::~XmpMetaOperator() */
int _ZN6stereo15XmpMetaOperatorD1Ev(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser15getGDepthFormatEv */
/* Demangled: stereo::StereoInfoJsonParser::getGDepthFormat() */
int _ZN6stereo20StereoInfoJsonParser15getGDepthFormatEv(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE */
/* Demangled: stereo::StereoCaptureInfoParser::StereoCaptureInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::StereoCaptureInfo*) */
int _ZN6stereo23StereoCaptureInfoParserC1ERKNS_12StereoBufferES3_PNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_17StereoCaptureInfoE(void);

/* Symbol: _ZN6stereo21StereoDepthInfoParserD1Ev */
/* Demangled: stereo::StereoDepthInfoParser::~StereoDepthInfoParser() */
int _ZN6stereo21StereoDepthInfoParserD1Ev(void);

/* Symbol: _ZN11XMPIterator4NextEPPKcPjS2_S3_S2_S3_S3_ */
/* Demangled: XMPIterator::Next(char const**, unsigned int*, char const**, unsigned int*, char const**, unsigned int*, unsigned int*) */
int _ZN11XMPIterator4NextEPPKcPjS2_S3_S2_S3_S3_(void);

/* Symbol: WXMPUtils_CurrentDateTime_1 */
/* Demangled: WXMPUtils_CurrentDateTime_1 */
int WXMPUtils_CurrentDateTime_1(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeArrayItemPathEPKcS9_iPS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeArrayItemPath(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE20ComposeArrayItemPathEPKcS9_iPS6_(void);

/* Symbol: _ZTV8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE */
/* Demangled: vtable for TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTV8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE;

/* Symbol: _ZN6stereo20CustomizedDataPacker4packERNS_12StereoBufferENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: stereo::CustomizedDataPacker::pack(stereo::StereoBuffer&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo20CustomizedDataPacker4packERNS_12StereoBufferENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN8XML_Node11RemoveAttrsEv */
/* Demangled: XML_Node::RemoveAttrs() */
int _ZN8XML_Node11RemoveAttrsEv(void);

/* Symbol: _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEC2ERKS4_ */
/* Demangled: std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> >::vector(std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > const&) */
int _ZNSt3__16vectorI13XPathStepInfoNS_9allocatorIS1_EEEC2ERKS4_(void);

/* Symbol: _ZN6stereo14CustomizedMetaC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE */
/* Demangled: stereo::CustomizedMeta::CustomizedMeta(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
int _ZN6stereo14CustomizedMetaC1EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getMaskBufferERNS_12StereoBufferE */
/* Demangled: stereo::StereoInfoJsonParser::getMaskBuffer(stereo::StereoBuffer&) */
int _ZN6stereo20StereoInfoJsonParser13getMaskBufferERNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo16StereoBufferInfoD1Ev */
/* Demangled: stereo::StereoBufferInfo::~StereoBufferInfo() */
int _ZN6stereo16StereoBufferInfoD1Ev(void);

/* Symbol: _ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_ */
/* Demangled: RDF_Parser::AddQualifierNode(XMP_Node*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN10RDF_Parser16AddQualifierNodeEP8XMP_NodeRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_(void);

/* Symbol: _Z19LookupFieldSelectorPK8XMP_NodePKcS3_ */
/* Demangled: LookupFieldSelector(XMP_Node const*, char const*, char const*) */
int _Z19LookupFieldSelectorPK8XMP_NodePKcS3_(void);

/* Symbol: _ZN6stereo15StereoBigBufferD1Ev */
/* Demangled: stereo::StereoBigBuffer::~StereoBigBuffer() */
int _ZN6stereo15StereoBigBufferD1Ev(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE */
/* Demangled: stereo::StereoConfigInfoParser::StereoConfigInfoParser(stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::IMetaOperator*, stereo::StereoConfigInfo*) */
int _ZN6stereo22StereoConfigInfoParserC1EPNS_13IMetaOperatorES2_S2_PNS_16StereoConfigInfoE(void);

/* Symbol: _ZN7XMPMeta15DeleteNamespaceEPKc */
/* Demangled: XMPMeta::DeleteNamespace(char const*) */
int _ZN7XMPMeta15DeleteNamespaceEPKc(void);

/* Symbol: _ZN7XMPMeta15ParseFromBufferEPKcjj */
/* Demangled: XMPMeta::ParseFromBuffer(char const*, unsigned int, unsigned int) */
int _ZN7XMPMeta15ParseFromBufferEPKcjj(void);

/* Symbol: _ZN8XMPUtils14ConvertFromIntEiPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ConvertFromInt(int, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils14ConvertFromIntEiPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN8XML_Node15GetNamedElementEPKcS1_m */
/* Demangled: XML_Node::GetNamedElement(char const*, char const*, unsigned long) */
int _ZN8XML_Node15GetNamedElementEPKcS1_m(void);

/* Symbol: _ZN6stereo15XmpMetaOperator4readEv */
/* Demangled: stereo::XmpMetaOperator::read() */
int _ZN6stereo15XmpMetaOperator4readEv(void);

/* Symbol: _ZN6stereo23StereoCaptureInfoParser5writeEv */
/* Demangled: stereo::StereoCaptureInfoParser::write() */
int _ZN6stereo23StereoCaptureInfoParser5writeEv(void);

/* Symbol: _ZN6stereo9PackUtils30CUSTOMIZED_TOTAL_FORMAT_LENGTHE */
/* Demangled: stereo::PackUtils::CUSTOMIZED_TOTAL_FORMAT_LENGTH */
extern void* _ZN6stereo9PackUtils30CUSTOMIZED_TOTAL_FORMAT_LENGTHE;

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetProperty_IntEPKcS9_ij */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Int(char const*, char const*, int, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetProperty_IntEPKcS9_ij(void);

/* Symbol: _ZN6stereo10JsonParser14getArrayLengthEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::JsonParser::getArrayLength(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _ZN6stereo10JsonParser14getArrayLengthEPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: UTF16BE_to_UTF32LE */
/* Demangled: UTF16BE_to_UTF32LE */
extern void* UTF16BE_to_UTF32LE;

/* Symbol: WXMPMeta_SetProperty_Date_1 */
/* Demangled: WXMPMeta_SetProperty_Date_1 */
int WXMPMeta_SetProperty_Date_1(void);

/* Symbol: WXMPUtils_ConvertFromBool_1 */
/* Demangled: WXMPUtils_ConvertFromBool_1 */
int WXMPUtils_ConvertFromBool_1(void);

/* Symbol: _ZTS9XMP_Error */
/* Demangled: typeinfo name for XMP_Error */
extern void* _ZTS9XMP_Error;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN6stereo20CustomizedDataPackerD2Ev */
/* Demangled: stereo::CustomizedDataPacker::~CustomizedDataPacker() */
int _ZN6stereo20CustomizedDataPackerD2Ev(void);

/* Symbol: _ZN7XMPMeta19DeleteLocalizedTextEPKcS1_S1_S1_ */
/* Demangled: XMPMeta::DeleteLocalizedText(char const*, char const*, char const*, char const*) */
int _ZN7XMPMeta19DeleteLocalizedTextEPKcS1_S1_S1_(void);

/* Symbol: _ZN10XMP_RegExp5MatchEPKc */
/* Demangled: XMP_RegExp::Match(char const*) */
int _ZN10XMP_RegExp5MatchEPKc(void);

/* Symbol: WXMPUtils_ComposeLangSelector_1 */
/* Demangled: WXMPUtils_ComposeLangSelector_1 */
int WXMPUtils_ComposeLangSelector_1(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_RKS6_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetLocalizedText(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetLocalizedTextEPKcS9_S9_S9_RKS6_j(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoRWLock*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6stereo12StereoRWLockEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6stereo5Utils17writeStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: stereo::Utils::writeStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo5Utils17writeStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN8XMPUtils18SeparateArrayItemsEP7XMPMetaPKcS3_jS3_ */
/* Demangled: XMPUtils::SeparateArrayItems(XMPMeta*, char const*, char const*, unsigned int, char const*) */
int _ZN8XMPUtils18SeparateArrayItemsEP7XMPMetaPKcS3_jS3_(void);

/* Symbol: UTF32LE_to_UTF16BE */
/* Demangled: UTF32LE_to_UTF16BE */
extern void* UTF32LE_to_UTF16BE;

/* Symbol: WXMPMeta_DeleteNamespace_1 */
/* Demangled: WXMPMeta_DeleteNamespace_1 */
int WXMPMeta_DeleteNamespace_1(void);

/* Symbol: WXMPMeta_DeleteStructField_1 */
/* Demangled: WXMPMeta_DeleteStructField_1 */
int WXMPMeta_DeleteStructField_1(void);

/* Symbol: WXMPMeta_DoesPropertyExist_1 */
/* Demangled: WXMPMeta_DoesPropertyExist_1 */
int WXMPMeta_DoesPropertyExist_1(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcj */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, char const*, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERK8TXMPMetaIS6_EPKcj(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator() */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2Ev(void);

/* Symbol: _ZN6stereo15StereoBigBufferC1Ej */
/* Demangled: stereo::StereoBigBuffer::StereoBigBuffer(unsigned int) */
int _ZN6stereo15StereoBigBufferC1Ej(void);

/* Symbol: _ZN6stereo5Utils19getFileNameFromPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::Utils::getFileNameFromPath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6stereo5Utils19getFileNameFromPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo9JpgPacker20writeSectionToStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE */
/* Demangled: stereo::JpgPacker::writeSectionToStream(stereo::BufferTypeOutputStream&, stereo::Section*) */
int _ZN6stereo9JpgPacker20writeSectionToStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE(void);

/* Symbol: _ZN6stereo18StereoInfoAccessor20writeSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15SegmentMaskInfoE */
/* Demangled: stereo::StereoInfoAccessor::writeSegmentMaskInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, stereo::SegmentMaskInfo&) */
int _ZN6stereo18StereoInfoAccessor20writeSegmentMaskInfoERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_15SegmentMaskInfoE(void);

/* Symbol: _Z14FindSchemaNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE */
/* Demangled: FindSchemaNode(XMP_Node*, char const*, bool, std::__1::__wrap_iter<XMP_Node**>*) */
int _Z14FindSchemaNodeP8XMP_NodePKcbPNSt3__111__wrap_iterIPS0_EE(void);

/* Symbol: _ZNK7XMPMeta17ErrorCallbackInfo9CanNotifyEv */
/* Demangled: XMPMeta::ErrorCallbackInfo::CanNotify() const */
int _ZNK7XMPMeta17ErrorCallbackInfo9CanNotifyEv(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10InitializeEv */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Initialize() */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE10InitializeEv(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParserC2ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE */
/* Demangled: stereo::GoogleStereoInfoParser::GoogleStereoInfoParser(stereo::StereoBuffer const&, stereo::StereoBuffer const&, stereo::GoogleStereoInfo*) */
int _ZN6stereo22GoogleStereoInfoParserC2ERKNS_12StereoBufferES3_PNS_16GoogleStereoInfoE(void);

/* Symbol: _ZN6stereo9PackUtils3SOIE */
/* Demangled: stereo::PackUtils::SOI */
extern void* _ZN6stereo9PackUtils3SOIE;

/* Symbol: _ZN8XMPUtils16ConvertFromInt64ExPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ConvertFromInt64(long long, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils16ConvertFromInt64ExPKcPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: voidVoidPtr */
/* Demangled: voidVoidPtr */
extern void* voidVoidPtr;

/* Symbol: _ZNSt3__124__buffered_inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeE */
/* Demangled: void std::__1::__buffered_inplace_merge<bool (*&)(XMP_Node*, XMP_Node*), std::__1::__wrap_iter<XMP_Node**> >(std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, std::__1::__wrap_iter<XMP_Node**>, bool (*&)(XMP_Node*, XMP_Node*), std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::difference_type, std::__1::iterator_traits<std::__1::__wrap_iter<XMP_Node**> >::value_type*) */
int _ZNSt3__124__buffered_inplace_mergeIRPFbP8XMP_NodeS2_ENS_11__wrap_iterIPS2_EEEEvT0_S9_S9_T_NS_15iterator_traitsIS9_E15difference_typeESD_PNSC_10value_typeE(void);

/* Symbol: UTF16BE_to_UTF8 */
/* Demangled: UTF16BE_to_UTF8 */
extern void* UTF16BE_to_UTF8;

/* Symbol: _Z9FromUTF16PKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: FromUTF16(unsigned short const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
int _Z9FromUTF16PKtmPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN6stereo14CustomizedMetaD2Ev */
/* Demangled: stereo::CustomizedMeta::~CustomizedMeta() */
int _ZN6stereo14CustomizedMetaD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_S9_EEEEENSI_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6stereo12StereoBufferEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_S9_EEEEENSI_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetStructFieldEPKcS9_S9_S9_PS6_Pj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetStructField(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14GetStructFieldEPKcS9_S9_S9_PS6_Pj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6stereo9PackUtils17getCustomTypeNameERNS_12StereoBufferE */
/* Demangled: stereo::PackUtils::getCustomTypeName(stereo::StereoBuffer&) */
int _ZN6stereo9PackUtils17getCustomTypeNameERNS_12StereoBufferE(void);

/* Symbol: _ZN6stereo9XmpPackerD0Ev */
/* Demangled: stereo::XmpPacker::~XmpPacker() */
int _ZN6stereo9XmpPackerD0Ev(void);

/* Symbol: _ZNK7XMPMeta15CountArrayItemsEPKcS1_ */
/* Demangled: XMPMeta::CountArrayItems(char const*, char const*) const */
int _ZNK7XMPMeta15CountArrayItemsEPKcS1_(void);

/* Symbol: WXMPMeta_GetObjectName_1 */
/* Demangled: WXMPMeta_GetObjectName_1 */
int WXMPMeta_GetObjectName_1(void);

/* Symbol: WXMPMeta_GetProperty_1 */
/* Demangled: WXMPMeta_GetProperty_1 */
int WXMPMeta_GetProperty_1(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperatorD1Ev */
/* Demangled: stereo::CustomizedMetaOperator::~CustomizedMetaOperator() */
int _ZN6stereo22CustomizedMetaOperatorD1Ev(void);

/* Symbol: _ZN6stereo22StereoBufferInfoParser4readEv */
/* Demangled: stereo::StereoBufferInfoParser::read() */
int _ZN6stereo22StereoBufferInfoParser4readEv(void);

/* Symbol: _ZNSt3__16vectorIPN6stereo7SectionENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<stereo::Section*, std::__1::allocator<stereo::Section*> >::__push_back_slow_path<stereo::Section* const&>(stereo::Section* const&) */
int _ZNSt3__16vectorIPN6stereo7SectionENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISN_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<XPathStepInfo, std::__1::allocator<XPathStepInfo> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_6vectorI13XPathStepInfoNS5_IS9_EEEEEENS_19__map_value_compareIS7_SC_NS_4lessIS7_EELb1EEENS5_ISC_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISN_EERKT_(void);

/* Symbol: UTF8_to_UTF16Native */
/* Demangled: UTF8_to_UTF16Native */
extern void* UTF8_to_UTF16Native;

/* Symbol: _Z13getSearchNodeRN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEES4_EEPKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEESG_ */
/* Demangled: getSearchNode(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _Z13getSearchNodeRN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEES4_EEPKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEESG_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser11getFaceFlagEv */
/* Demangled: stereo::StereoInfoJsonParser::getFaceFlag() */
int _ZN6stereo20StereoInfoJsonParser11getFaceFlagEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser11getLdcWidthEv */
/* Demangled: stereo::StereoInfoJsonParser::getLdcWidth() */
int _ZN6stereo20StereoInfoJsonParser11getLdcWidthEv(void);

/* Symbol: _ZN6stereo21SegmentMaskInfoParserC1ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE */
/* Demangled: stereo::SegmentMaskInfoParser::SegmentMaskInfoParser(stereo::StereoBuffer const&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*, stereo::SegmentMaskInfo*) */
int _ZN6stereo21SegmentMaskInfoParserC1ERKNS_12StereoBufferEPNSt3__13mapINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES1_NS4_4lessISB_EENS9_INS4_4pairIKSB_S1_EEEEEEPNS_15SegmentMaskInfoE(void);

/* Symbol: WXMPMeta_GetProperty_Bool_1 */
/* Demangled: WXMPMeta_GetProperty_Bool_1 */
int WXMPMeta_GetProperty_Bool_1(void);

/* Symbol: _ZNK6stereo7XmpMeta12getArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iPS7_ */
/* Demangled: stereo::XmpMeta::getArrayItem(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK6stereo7XmpMeta12getArrayItemERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_iPS7_(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser9getMaxDacEv */
/* Demangled: stereo::StereoInfoJsonParser::getMaxDac() */
int _ZN6stereo20StereoInfoJsonParser9getMaxDacEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParser14readBufferItemEv */
/* Demangled: stereo::StereoConfigInfoParser::readBufferItem() */
int _ZN6stereo22StereoConfigInfoParser14readBufferItemEv(void);

/* Symbol: UTF32Native_to_UTF8 */
/* Demangled: UTF32Native_to_UTF8 */
extern void* UTF32Native_to_UTF8;

/* Symbol: WXMPUtils_CatenateArrayItems_1 */
/* Demangled: WXMPUtils_CatenateArrayItems_1 */
int WXMPUtils_CatenateArrayItems_1(void);

/* Symbol: _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetProperty_IntEPKcS9_PiPj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetProperty_Int(char const*, char const*, int*, unsigned int*) const */
int _ZNK8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15GetProperty_IntEPKcS9_PiPj(void);

/* Symbol: _ZN6stereo5Utils7int2strERKiRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: stereo::Utils::int2str(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN6stereo5Utils7int2strERKiRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_S9_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetQualifier(char const*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE12SetQualifierEPKcS9_S9_S9_S9_j(void);

/* Symbol: _ZN6stereo22StereoConfigInfoParserD2Ev */
/* Demangled: stereo::StereoConfigInfoParser::~StereoConfigInfoParser() */
int _ZN6stereo22StereoConfigInfoParserD2Ev(void);

/* Symbol: _ZN6stereo9PackUtils3DQTE */
/* Demangled: stereo::PackUtils::DQT */
extern void* _ZN6stereo9PackUtils3DQTE;

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_S9_j */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetStructField(char const*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE14SetStructFieldEPKcS9_S9_S9_S9_j(void);

/* Symbol: _ZTISt16invalid_argument */
/* Demangled: typeinfo for std::invalid_argument */
extern void* _ZTISt16invalid_argument;

/* Symbol: _ZN10RDF_Parser19PropertyElementListEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::PropertyElementList(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser19PropertyElementListEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_Ej */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&, unsigned int) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC1ERK8TXMPMetaIS6_Ej(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZN6stereo21StereoDepthInfoParser16initCustDataItemEv */
/* Demangled: stereo::StereoDepthInfoParser::initCustDataItem() */
int _ZN6stereo21StereoDepthInfoParser16initCustDataItemEv(void);

/* Symbol: _ZNK7XMPMeta13GetObjectNameEPPKcPj */
/* Demangled: XMPMeta::GetObjectName(char const**, unsigned int*) const */
int _ZNK7XMPMeta13GetObjectNameEPPKcPj(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperator5writeEv */
/* Demangled: stereo::CustomizedMetaOperator::write() */
int _ZN6stereo22CustomizedMetaOperator5writeEv(void);

/* Symbol: _ZN6stereo13BufferManager11mBufferLockE */
/* Demangled: stereo::BufferManager::mBufferLock */
extern void* _ZN6stereo13BufferManager11mBufferLockE;

/* Symbol: _ZN6stereo9PackUtils26APP15_LENGTHTAG_BYTE_COUNTE */
/* Demangled: stereo::PackUtils::APP15_LENGTHTAG_BYTE_COUNT */
extern void* _ZN6stereo9PackUtils26APP15_LENGTHTAG_BYTE_COUNTE;

/* Symbol: _ZN6stereo18StereoInfoAccessor9serializeERNS_8PackInfoERNS_7IParserE */
/* Demangled: stereo::StereoInfoAccessor::serialize(stereo::PackInfo&, stereo::IParser&) */
int _ZN6stereo18StereoInfoAccessor9serializeERNS_8PackInfoERNS_7IParserE(void);

/* Symbol: _ZN8XMPUtils20ComposeFieldSelectorEPKcS1_S1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ComposeFieldSelector(char const*, char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils20ComposeFieldSelectorEPKcS1_S1_S1_S1_PNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN17XMP_HomeGrownLock15AcquireForWriteEv */
/* Demangled: XMP_HomeGrownLock::AcquireForWrite() */
int _ZN17XMP_HomeGrownLock15AcquireForWriteEv(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DeleteStructFieldEPKcS9_S9_S9_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::DeleteStructField(char const*, char const*, char const*, char const*) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE17DeleteStructFieldEPKcS9_S9_S9_(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_ */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator=(TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEaSERKS7_(void);

/* Symbol: WXMPMeta_CTor_1 */
/* Demangled: WXMPMeta_CTor_1 */
int WXMPMeta_CTor_1(void);

/* Symbol: _ZN7XMPMeta14ProcessXMLTreeEj */
/* Demangled: XMPMeta::ProcessXMLTree(unsigned int) */
int _ZN7XMPMeta14ProcessXMLTreeEj(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_DateEPKcS9_RK12XMP_DateTimej */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetProperty_Date(char const*, char const*, XMP_DateTime const&, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE16SetProperty_DateEPKcS9_RK12XMP_DateTimej(void);

/* Symbol: _ZN6stereo22GoogleStereoInfoParser4readEv */
/* Demangled: stereo::GoogleStereoInfoParser::read() */
int _ZN6stereo22GoogleStereoInfoParser4readEv(void);

/* Symbol: _ZNSt3__16vectorIP10SimpleItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<SimpleItem*, std::__1::allocator<SimpleItem*> >::__push_back_slow_path<SimpleItem* const&>(SimpleItem* const&) */
int _ZNSt3__16vectorIP10SimpleItemNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTVN6stereo22StereoBufferInfoParserE */
/* Demangled: vtable for stereo::StereoBufferInfoParser */
extern void* _ZTVN6stereo22StereoBufferInfoParserE;

/* Symbol: _ZNK8XML_Node17IsLeafContentNodeEv */
/* Demangled: XML_Node::IsLeafContentNode() const */
int _ZNK8XML_Node17IsLeafContentNodeEv(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser14getOrientationEv */
/* Demangled: stereo::StereoInfoJsonParser::getOrientation() */
int _ZN6stereo20StereoInfoJsonParser14getOrientationEv(void);

/* Symbol: _ZN6stereo16GoogleStereoInfoD2Ev */
/* Demangled: stereo::GoogleStereoInfo::~GoogleStereoInfo() */
int _ZN6stereo16GoogleStereoInfoD2Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE22ComposeStructFieldPathEPKcS9_S9_S9_PS6_ */
/* Demangled: TXMPUtils<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::ComposeStructFieldPath(char const*, char const*, char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9TXMPUtilsINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE22ComposeStructFieldPathEPKcS9_S9_S9_PS6_(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZN6stereo5Utils13ENABLE_GDEPTHE */
/* Demangled: stereo::Utils::ENABLE_GDEPTH */
extern void* _ZN6stereo5Utils13ENABLE_GDEPTHE;

/* Symbol: _ZN6stereo21StereoDepthInfoParser15writeBufferItemEv */
/* Demangled: stereo::StereoDepthInfoParser::writeBufferItem() */
int _ZN6stereo21StereoDepthInfoParser15writeBufferItemEv(void);

/* Symbol: UTF32BE_to_UTF16LE */
/* Demangled: UTF32BE_to_UTF16LE */
extern void* UTF32BE_to_UTF16LE;

/* Symbol: _ZN6stereo21StereoDepthInfoParser4readEv */
/* Demangled: stereo::StereoDepthInfoParser::read() */
int _ZN6stereo21StereoDepthInfoParser4readEv(void);

/* Symbol: _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj */
/* Demangled: TXMPMeta<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetClientString(void*, char const*, unsigned int) */
int _ZN8TXMPMetaINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE15SetClientStringEPvPKcj(void);

/* Symbol: _ZN6stereo13BufferManager13popBigBuffersEv */
/* Demangled: stereo::BufferManager::popBigBuffers() */
int _ZN6stereo13BufferManager13popBigBuffersEv(void);

/* Symbol: UTF8_to_UTF16BE */
/* Demangled: UTF8_to_UTF16BE */
extern void* UTF8_to_UTF16BE;

/* Symbol: _ZTVN6stereo21BufferTypeInputStreamE */
/* Demangled: vtable for stereo::BufferTypeInputStream */
extern void* _ZTVN6stereo21BufferTypeInputStreamE;

/* Symbol: _ZN6stereo20StereoInfoJsonParser16getFaceRectCountEv */
/* Demangled: stereo::StereoInfoJsonParser::getFaceRectCount() */
int _ZN6stereo20StereoInfoJsonParser16getFaceRectCountEv(void);

/* Symbol: _ZN6stereo9PackUtils17TYPE_EXTENDED_XMPE */
/* Demangled: stereo::PackUtils::TYPE_EXTENDED_XMP */
extern void* _ZN6stereo9PackUtils17TYPE_EXTENDED_XMPE;

/* Symbol: WXMPUtils_CompareDateTime_1 */
/* Demangled: WXMPUtils_CompareDateTime_1 */
int WXMPUtils_CompareDateTime_1(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZN6stereo22StereoConfigInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::StereoConfigInfoParser::dumpValuesAndBuffers(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6stereo22StereoConfigInfoParser20dumpValuesAndBuffersENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN10RDF_Parser15PropertyElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::PropertyElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser15PropertyElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZN7XMPMeta15GetNamespaceURIEPKcPS1_Pj */
/* Demangled: XMPMeta::GetNamespaceURI(char const*, char const**, unsigned int*) */
int _ZN7XMPMeta15GetNamespaceURIEPKcPS1_Pj(void);

/* Symbol: _ZN8XMPUtils20ComposeArrayItemPathEPKcS1_iPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: XMPUtils::ComposeArrayItemPath(char const*, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XMPUtils20ComposeArrayItemPathEPKcS1_iPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN8XML_Node4DumpEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: XML_Node::Dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN8XML_Node4DumpEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_ */
/* Demangled: TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TXMPIterator(TXMPIterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZN12TXMPIteratorINSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEEC2ERKS7_(void);

/* Symbol: _ZN6stereo22CustomizedMetaOperatorC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE */
/* Demangled: stereo::CustomizedMetaOperator::CustomizedMetaOperator(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, stereo::StereoBuffer, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, stereo::StereoBuffer> > >*) */
int _ZN6stereo22CustomizedMetaOperatorC2EPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12StereoBufferENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser6getDofEv */
/* Demangled: stereo::StereoInfoJsonParser::getDof() */
int _ZN6stereo20StereoInfoJsonParser6getDofEv(void);

/* Symbol: WXMPIterator_Next_1 */
/* Demangled: WXMPIterator_Next_1 */
int WXMPIterator_Next_1(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getViewHeightEv */
/* Demangled: stereo::StereoInfoJsonParser::getViewHeight() */
int _ZN6stereo20StereoInfoJsonParser13getViewHeightEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: WXMPUtils_ConvertToUTCTime_1 */
/* Demangled: WXMPUtils_ConvertToUTCTime_1 */
int WXMPUtils_ConvertToUTCTime_1(void);

/* Symbol: _ZN6stereo16StereoConfigInfoD2Ev */
/* Demangled: stereo::StereoConfigInfo::~StereoConfigInfo() */
int _ZN6stereo16StereoConfigInfoD2Ev(void);

/* Symbol: _ZN6stereo9PackUtils27PARTITION_OFFSET_BYTE_COUNTE */
/* Demangled: stereo::PackUtils::PARTITION_OFFSET_BYTE_COUNT */
extern void* _ZN6stereo9PackUtils27PARTITION_OFFSET_BYTE_COUNTE;

/* Symbol: _ZN10RDF_Parser11NodeElementEP8XMP_NodeRK8XML_Nodeb */
/* Demangled: RDF_Parser::NodeElement(XMP_Node*, XML_Node const&, bool) */
int _ZN10RDF_Parser11NodeElementEP8XMP_NodeRK8XML_Nodeb(void);

/* Symbol: _ZNK8XML_Node16IsWhitespaceNodeEv */
/* Demangled: XML_Node::IsWhitespaceNode() const */
int _ZNK8XML_Node16IsWhitespaceNodeEv(void);

/* Symbol: _ZNK6stereo7XmpMeta9serializeEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: stereo::XmpMeta::serialize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK6stereo7XmpMeta9serializeEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6stereo20StereoInfoJsonParser13getConvOffsetEv */
/* Demangled: stereo::StereoInfoJsonParser::getConvOffset() */
int _ZN6stereo20StereoInfoJsonParser13getConvOffsetEv(void);

/* Symbol: _ZN6stereo9JpgPacker20writeSectionToStreamERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE */
/* Demangled: stereo::JpgPacker::writeSectionToStream(stereo::BufferTypeInputStream&, stereo::BufferTypeOutputStream&, stereo::Section*) */
int _ZN6stereo9JpgPacker20writeSectionToStreamERNS_21BufferTypeInputStreamERNS_22BufferTypeOutputStreamEPNS_7SectionE(void);

/* Symbol: _ZN7XMPMeta12SetQualifierEPKcS1_S1_S1_S1_j */
/* Demangled: XMPMeta::SetQualifier(char const*, char const*, char const*, char const*, char const*, unsigned int) */
int _ZN7XMPMeta12SetQualifierEPKcS1_S1_S1_S1_j(void);

/* Symbol: _ZN8XML_Node13RemoveContentEv */
/* Demangled: XML_Node::RemoveContent() */
int _ZN8XML_Node13RemoveContentEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTEREOINFOACCESSOR_VSDOF_H */
