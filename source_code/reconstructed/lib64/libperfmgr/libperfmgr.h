/*
 * Reverse-Engineered ABI Specification for: libperfmgr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libperfmgr.so
 */

#ifndef BEGONIA_RE_LIBPERFMGR_H
#define BEGONIA_RE_LIBPERFMGR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android7perfmgr11HintManager12OnNodeUpdateERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorIS8_NS6_IS8_EEEESA_ */
/* Demangled: android::perfmgr::HintManager::OnNodeUpdate(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager12OnNodeUpdateERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorIS8_NS6_IS8_EEEESA_(void);

/* Symbol: _ZNK4Json17ValueIteratorBase5derefEv */
/* Demangled: Json::ValueIteratorBase::deref() const */
int _ZNK4Json17ValueIteratorBase5derefEv(void);

/* Symbol: _ZN4Json5ValueC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::Value::Value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json5ValueC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5Value12removeMemberEPKc */
/* Demangled: Json::Value::removeMember(char const*) */
int _ZN4Json5Value12removeMemberEPKc(void);

/* Symbol: _ZN4JsonlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_5ValueE */
/* Demangled: Json::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Json::Value const&) */
int _ZN4JsonlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_5ValueE(void);

/* Symbol: _ZN4Json6Reader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj */
/* Demangled: Json::Reader::decodeUnicodeEscapeSequence(Json::Reader::Token&, char const*&, char const*, unsigned int&) */
int _ZN4Json6Reader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj(void);

/* Symbol: _ZN4Json19valueToQuotedStringEPKc */
/* Demangled: Json::valueToQuotedString(char const*) */
int _ZN4Json19valueToQuotedStringEPKc(void);

/* Symbol: _ZN4Json10FastWriter23enableYAMLCompatibilityEv */
/* Demangled: Json::FastWriter::enableYAMLCompatibility() */
int _ZN4Json10FastWriter23enableYAMLCompatibilityEv(void);

/* Symbol: _ZNK4Json5Value3getEPKcS2_RKS0_ */
/* Demangled: Json::Value::get(char const*, char const*, Json::Value const&) const */
int _ZNK4Json5Value3getEPKcS2_RKS0_(void);

/* Symbol: _ZNK4Json5Value3endEv */
/* Demangled: Json::Value::end() const */
int _ZNK4Json5Value3endEv(void);

/* Symbol: _ZNK4Json5ValueixEi */
/* Demangled: Json::Value::operator[](int) const */
int _ZNK4Json5ValueixEi(void);

/* Symbol: _ZNK4Json5Value10hasCommentENS_16CommentPlacementE */
/* Demangled: Json::Value::hasComment(Json::CommentPlacement) const */
int _ZNK4Json5Value10hasCommentENS_16CommentPlacementE(void);

/* Symbol: _ZN4Json18ValueConstIteratorC1ERKNS_13ValueIteratorE */
/* Demangled: Json::ValueConstIterator::ValueConstIterator(Json::ValueIterator const&) */
int _ZN4Json18ValueConstIteratorC1ERKNS_13ValueIteratorE(void);

/* Symbol: _ZN4Json6Reader12decodeNumberERNS0_5TokenERNS_5ValueE */
/* Demangled: Json::Reader::decodeNumber(Json::Reader::Token&, Json::Value&) */
int _ZN4Json6Reader12decodeNumberERNS0_5TokenERNS_5ValueE(void);

/* Symbol: _ZNK4Json5Value14getOffsetLimitEv */
/* Demangled: Json::Value::getOffsetLimit() const */
int _ZNK4Json5Value14getOffsetLimitEv(void);

/* Symbol: _ZN4Json13ValueIteratorC2ERKS0_ */
/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */
int _ZN4Json13ValueIteratorC2ERKS0_(void);

/* Symbol: _ZNK4Json5ValueixEj */
/* Demangled: Json::Value::operator[](unsigned int) const */
int _ZNK4Json5ValueixEj(void);

/* Symbol: _ZN4Json9OurReader10addCommentEPKcS2_NS_16CommentPlacementE */
/* Demangled: Json::OurReader::addComment(char const*, char const*, Json::CommentPlacement) */
int _ZN4Json9OurReader10addCommentEPKcS2_NS_16CommentPlacementE(void);

/* Symbol: _ZNK4Json9OurReader19getStructuredErrorsEv */
/* Demangled: Json::OurReader::getStructuredErrors() const */
int _ZNK4Json9OurReader19getStructuredErrorsEv(void);

/* Symbol: _ZN4Json17CharReaderBuilderC2Ev */
/* Demangled: Json::CharReaderBuilder::CharReaderBuilder() */
int _ZN4Json17CharReaderBuilderC2Ev(void);

/* Symbol: _ZN4Json10FastWriter5writeERKNS_5ValueE */
/* Demangled: Json::FastWriter::write(Json::Value const&) */
int _ZN4Json10FastWriter5writeERKNS_5ValueE(void);

/* Symbol: _ZN4Json19StreamWriterBuilderC2Ev */
/* Demangled: Json::StreamWriterBuilder::StreamWriterBuilder() */
int _ZN4Json19StreamWriterBuilderC2Ev(void);

/* Symbol: _ZN4Json5ValueixEPKc */
/* Demangled: Json::Value::operator[](char const*) */
int _ZN4Json5ValueixEPKc(void);

/* Symbol: _ZN4Json6Reader9readValueEv */
/* Demangled: Json::Reader::readValue() */
int _ZN4Json6Reader9readValueEv(void);

/* Symbol: _ZN4Json9OurReader9readArrayERNS0_5TokenE */
/* Demangled: Json::OurReader::readArray(Json::OurReader::Token&) */
int _ZN4Json9OurReader9readArrayERNS0_5TokenE(void);

/* Symbol: _ZN4Json9OurReader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE */
/* Demangled: Json::OurReader::addErrorAndRecover(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::OurReader::Token&, Json::OurReader::TokenType) */
int _ZN4Json9OurReader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE(void);

/* Symbol: _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::Value::removeMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json8FeaturesC1Ev */
/* Demangled: Json::Features::Features() */
int _ZN4Json8FeaturesC1Ev(void);

/* Symbol: _ZN4Json18ValueConstIteratoraSERKNS_17ValueIteratorBaseE */
/* Demangled: Json::ValueConstIterator::operator=(Json::ValueIteratorBase const&) */
int _ZN4Json18ValueConstIteratoraSERKNS_17ValueIteratorBaseE(void);

/* Symbol: _ZNK4Json5ValueneERKS0_ */
/* Demangled: Json::Value::operator!=(Json::Value const&) const */
int _ZNK4Json5ValueneERKS0_(void);

/* Symbol: _ZN4Json12PathArgumentC2Ev */
/* Demangled: Json::PathArgument::PathArgument() */
int _ZN4Json12PathArgumentC2Ev(void);

/* Symbol: _ZN7android7perfmgr11HintManager7EndHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::EndHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager7EndHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android7perfmgr11HintManager24GetAdpfProfileFromDoHintEv */
/* Demangled: android::perfmgr::HintManager::GetAdpfProfileFromDoHint() const */
int _ZNK7android7perfmgr11HintManager24GetAdpfProfileFromDoHintEv(void);

/* Symbol: _ZN4Json5Value12removeMemberEPKcS2_PS0_ */
/* Demangled: Json::Value::removeMember(char const*, char const*, Json::Value*) */
int _ZN4Json5Value12removeMemberEPKcS2_PS0_(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter6indentEv */
/* Demangled: Json::BuiltStyledStreamWriter::indent() */
int _ZN4Json23BuiltStyledStreamWriter6indentEv(void);

/* Symbol: _ZN4Json9OurReader12decodeDoubleERNS0_5TokenERNS_5ValueE */
/* Demangled: Json::OurReader::decodeDouble(Json::OurReader::Token&, Json::Value&) */
int _ZN4Json9OurReader12decodeDoubleERNS0_5TokenERNS_5ValueE(void);

/* Symbol: _ZNK4Json5Value7isArrayEv */
/* Demangled: Json::Value::isArray() const */
int _ZNK4Json5Value7isArrayEv(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter5writeERKNS_5ValueEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE */
/* Demangled: Json::BuiltStyledStreamWriter::write(Json::Value const&, std::__1::basic_ostream<char, std::__1::char_traits<char> >*) */
int _ZN4Json23BuiltStyledStreamWriter5writeERKNS_5ValueEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: Json::Reader::pushError(Json::Value const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN4JsonrsERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERNS_5ValueE */
/* Demangled: Json::operator>>(std::__1::basic_istream<char, std::__1::char_traits<char> >&, Json::Value&) */
int _ZN4JsonrsERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERNS_5ValueE(void);

/* Symbol: _ZN4Json5ValueC1ERKS0_ */
/* Demangled: Json::Value::Value(Json::Value const&) */
int _ZN4Json5ValueC1ERKS0_(void);

/* Symbol: _ZN4Json15parseFromStreamERKNS_10CharReader7FactoryERNSt3__113basic_istreamIcNS4_11char_traitsIcEEEEPNS_5ValueEPNS4_12basic_stringIcS7_NS4_9allocatorIcEEEE */
/* Demangled: Json::parseFromStream(Json::CharReader::Factory const&, std::__1::basic_istream<char, std::__1::char_traits<char> >&, Json::Value*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN4Json15parseFromStreamERKNS_10CharReader7FactoryERNSt3__113basic_istreamIcNS4_11char_traitsIcEEEEPNS_5ValueEPNS4_12basic_stringIcS7_NS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json5Value7asFloatEv */
/* Demangled: Json::Value::asFloat() const */
int _ZNK4Json5Value7asFloatEv(void);

/* Symbol: _ZN4Json8Features3allEv */
/* Demangled: Json::Features::all() */
int _ZN4Json8Features3allEv(void);

/* Symbol: _ZN4Json9OurReader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc */
/* Demangled: Json::OurReader::addError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::OurReader::Token&, char const*) */
int _ZN4Json9OurReader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc(void);

/* Symbol: _ZNK4Json5ValueeqERKS0_ */
/* Demangled: Json::Value::operator==(Json::Value const&) const */
int _ZNK4Json5ValueeqERKS0_(void);

/* Symbol: _ZN4Json5Value8CommentsaSEOS1_ */
/* Demangled: Json::Value::Comments::operator=(Json::Value::Comments&&) */
int _ZN4Json5Value8CommentsaSEOS1_(void);

/* Symbol: _ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE */
/* Demangled: Json::StyledWriter::hasCommentForValue(Json::Value const&) */
int _ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr11HintManager25UnregisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE */
/* Demangled: android::perfmgr::HintManager::UnregisterAdpfUpdateEvent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::function<void (std::__1::shared_ptr<android::perfmgr::AdpfConfig>)>*) */
int _ZN7android7perfmgr11HintManager25UnregisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE(void);

/* Symbol: _ZN4Json6Reader11readCommentEv */
/* Demangled: Json::Reader::readComment() */
int _ZN4Json6Reader11readCommentEv(void);

/* Symbol: _ZN4Json18ValueConstIteratorC2Ev */
/* Demangled: Json::ValueConstIterator::ValueConstIterator() */
int _ZN4Json18ValueConstIteratorC2Ev(void);

/* Symbol: _ZNK4Json5ValuecvbEv */
/* Demangled: Json::Value::operator bool() const */
int _ZNK4Json5ValuecvbEv(void);

/* Symbol: _ZN4Json12PathArgumentC1Ej */
/* Demangled: Json::PathArgument::PathArgument(unsigned int) */
int _ZN4Json12PathArgumentC1Ej(void);

/* Symbol: _ZN4Json18StyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StyledStreamWriter::StyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN4Json18StyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json5Value9getStringEPPKcS3_ */
/* Demangled: Json::Value::getString(char const**, char const**) const */
int _ZNK4Json5Value9getStringEPPKcS3_(void);

/* Symbol: _ZNK4Json5Value10getCommentENS_16CommentPlacementE */
/* Demangled: Json::Value::getComment(Json::CommentPlacement) const */
int _ZNK4Json5Value10getCommentENS_16CommentPlacementE(void);

/* Symbol: _ZN7android7perfmgr11HintManager6ReloadEb */
/* Demangled: android::perfmgr::HintManager::Reload(bool) */
int _ZN7android7perfmgr11HintManager6ReloadEb(void);

/* Symbol: _ZN4Json18StyledStreamWriter11writeIndentEv */
/* Demangled: Json::StyledStreamWriter::writeIndent() */
int _ZN4Json18StyledStreamWriter11writeIndentEv(void);

/* Symbol: _ZN4Json6Reader10skipSpacesEv */
/* Demangled: Json::Reader::skipSpaces() */
int _ZN4Json6Reader10skipSpacesEv(void);

/* Symbol: _ZN4Json5Value8CZStringaSERKS1_ */
/* Demangled: Json::Value::CZString::operator=(Json::Value::CZString const&) */
int _ZN4Json5Value8CZStringaSERKS1_(void);

/* Symbol: _ZN4Json5Value6appendEOS0_ */
/* Demangled: Json::Value::append(Json::Value&&) */
int _ZN4Json5Value6appendEOS0_(void);

/* Symbol: _ZN4Json4Path11invalidPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: Json::Path::invalidPath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN4Json4Path11invalidPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: _ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::writeCommentBeforeValue(Json::Value const&) */
int _ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr11HintManager5StartEv */
/* Demangled: android::perfmgr::HintManager::Start() */
int _ZN7android7perfmgr11HintManager5StartEv(void);

/* Symbol: _ZNK4Json5Value8asStringEv */
/* Demangled: Json::Value::asString() const */
int _ZNK4Json5Value8asStringEv(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider16GetterFromStringERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::FlagProvider::GetterFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr12FlagProvider16GetterFromStringERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json6Reader19getStructuredErrorsEv */
/* Demangled: Json::Reader::getStructuredErrors() const */
int _ZNK4Json6Reader19getStructuredErrorsEv(void);

/* Symbol: _ZN4Json5ValueC2Eb */
/* Demangled: Json::Value::Value(bool) */
int _ZN4Json5ValueC2Eb(void);

/* Symbol: _ZNK4Json5Value12isValidIndexEj */
/* Demangled: Json::Value::isValidIndex(unsigned int) const */
int _ZNK4Json5Value12isValidIndexEj(void);

/* Symbol: _ZN4Json6Reader17skipCommentTokensERNS0_5TokenE */
/* Demangled: Json::Reader::skipCommentTokens(Json::Reader::Token&) */
int _ZN4Json6Reader17skipCommentTokensERNS0_5TokenE(void);

/* Symbol: _ZNK4Json6Reader25getFormattedErrorMessagesEv */
/* Demangled: Json::Reader::getFormattedErrorMessages() const */
int _ZNK4Json6Reader25getFormattedErrorMessagesEv(void);

/* Symbol: _ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES3_ */
/* Demangled: Json::Reader::pushError(Json::Value const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value const&) */
int _ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES3_(void);

/* Symbol: _ZTVN4Json13OurCharReaderE */
/* Demangled: vtable for Json::OurCharReader */
extern void* _ZTVN4Json13OurCharReaderE;

/* Symbol: _ZN4Json17ValueIteratorBaseC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE */
/* Demangled: Json::ValueIteratorBase::ValueIteratorBase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
int _ZN4Json17ValueIteratorBaseC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void);

/* Symbol: _ZN4Json5ValueC1ERKNS_12StaticStringE */
/* Demangled: Json::Value::Value(Json::StaticString const&) */
int _ZN4Json5ValueC1ERKNS_12StaticStringE(void);

/* Symbol: _ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::writeArrayValue(Json::Value const&) */
int _ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr12PropertyNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb */
/* Demangled: android::perfmgr::PropertyNode::PropertyNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool) */
int _ZN7android7perfmgr12PropertyNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb(void);

/* Symbol: _ZNK4Json5Value6asUIntEv */
/* Demangled: Json::Value::asUInt() const */
int _ZNK4Json5Value6asUIntEv(void);

/* Symbol: _ZN4Json6Reader12decodeDoubleERNS0_5TokenERNS_5ValueE */
/* Demangled: Json::Reader::decodeDouble(Json::Reader::Token&, Json::Value&) */
int _ZN4Json6Reader12decodeDoubleERNS0_5TokenERNS_5ValueE(void);

/* Symbol: _ZNK4Json17ValueIteratorBase5indexEv */
/* Demangled: Json::ValueIteratorBase::index() const */
int _ZNK4Json17ValueIteratorBase5indexEv(void);

/* Symbol: _ZN4Json5ValueC2Ed */
/* Demangled: Json::Value::Value(double) */
int _ZN4Json5ValueC2Ed(void);

/* Symbol: _ZTCN7android7perfmgr16NodeLooperThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::perfmgr::NodeLooperThread */
extern void* _ZTCN7android7perfmgr16NodeLooperThreadE0_NS_6ThreadE;

/* Symbol: _ZN4Json9OurReader12decodeStringERNS0_5TokenE */
/* Demangled: Json::OurReader::decodeString(Json::OurReader::Token&) */
int _ZN4Json9OurReader12decodeStringERNS0_5TokenE(void);

/* Symbol: _ZN4Json17ValueIteratorBaseC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE */
/* Demangled: Json::ValueIteratorBase::ValueIteratorBase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
int _ZN4Json17ValueIteratorBaseC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void);

/* Symbol: _ZNK4Json17ValueIteratorBase10memberNameEPPKc */
/* Demangled: Json::ValueIteratorBase::memberName(char const**) const */
int _ZNK4Json17ValueIteratorBase10memberNameEPPKc(void);

/* Symbol: _ZN7android7perfmgr11HintManager12DoHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE */
/* Demangled: android::perfmgr::HintManager::DoHintStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
int _ZN7android7perfmgr11HintManager12DoHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE(void);

/* Symbol: _ZNK4Json5Value7isInt64Ev */
/* Demangled: Json::Value::isInt64() const */
int _ZNK4Json5Value7isInt64Ev(void);

/* Symbol: _ZNK4Json5ValuegtERKS0_ */
/* Demangled: Json::Value::operator>(Json::Value const&) const */
int _ZNK4Json5ValuegtERKS0_(void);

/* Symbol: _ZNK4Json5Value6isNullEv */
/* Demangled: Json::Value::isNull() const */
int _ZNK4Json5Value6isNullEv(void);

/* Symbol: _ZN4Json6WriterD2Ev */
/* Demangled: Json::Writer::~Writer() */
int _ZN4Json6WriterD2Ev(void);

/* Symbol: _ZNK4Json17ValueIteratorBase4nameEv */
/* Demangled: Json::ValueIteratorBase::name() const */
int _ZNK4Json17ValueIteratorBase4nameEv(void);

/* Symbol: _ZNK4Json5Value8isMemberEPKc */
/* Demangled: Json::Value::isMember(char const*) const */
int _ZNK4Json5Value8isMemberEPKc(void);

/* Symbol: _ZN4Json13valueToStringEdjNS_13PrecisionTypeE */
/* Demangled: Json::valueToString(double, unsigned int, Json::PrecisionType) */
int _ZN4Json13valueToStringEdjNS_13PrecisionTypeE(void);

/* Symbol: _ZN4Json12StyledWriter5writeERKNS_5ValueE */
/* Demangled: Json::StyledWriter::write(Json::Value const&) */
int _ZN4Json12StyledWriter5writeERKNS_5ValueE(void);

/* Symbol: _ZN4Json17CharReaderBuilderC1Ev */
/* Demangled: Json::CharReaderBuilder::CharReaderBuilder() */
int _ZN4Json17CharReaderBuilderC1Ev(void);

/* Symbol: _ZN4Json6Reader15containsNewLineEPKcS2_ */
/* Demangled: Json::Reader::containsNewLine(char const*, char const*) */
int _ZN4Json6Reader15containsNewLineEPKcS2_(void);

/* Symbol: _ZN4Json6Reader12normalizeEOLEPKcS2_ */
/* Demangled: Json::Reader::normalizeEOL(char const*, char const*) */
int _ZN4Json6Reader12normalizeEOLEPKcS2_(void);

/* Symbol: _ZN4Json5Value8CZStringC2EOS1_ */
/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString&&) */
int _ZN4Json5Value8CZStringC2EOS1_(void);

/* Symbol: _ZN4Json19StreamWriterBuilderC1Ev */
/* Demangled: Json::StreamWriterBuilder::StreamWriterBuilder() */
int _ZN4Json19StreamWriterBuilderC1Ev(void);

/* Symbol: _ZNSt3__119piecewise_constructE */
/* Demangled: std::__1::piecewise_construct */
extern void* _ZNSt3__119piecewise_constructE;

/* Symbol: _ZN7android7perfmgr11HintManager16ParseAdpfConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::ParseAdpfConfigs(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager16ParseAdpfConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android7perfmgr11HintManager22IsAdpfProfileSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::IsAdpfProfileSupported(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr11HintManager22IsAdpfProfileSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5ValueC2Ei */
/* Demangled: Json::Value::Value(int) */
int _ZN4Json5ValueC2Ei(void);

/* Symbol: _ZN4Json10FastWriter10writeValueERKNS_5ValueE */
/* Demangled: Json::FastWriter::writeValue(Json::Value const&) */
int _ZN4Json10FastWriter10writeValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::BuiltStyledStreamWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json23BuiltStyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json6Reader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc */
/* Demangled: Json::Reader::addError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Reader::Token&, char const*) */
int _ZN4Json6Reader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc(void);

/* Symbol: _ZN4Json6Reader19readCppStyleCommentEv */
/* Demangled: Json::Reader::readCppStyleComment() */
int _ZN4Json6Reader19readCppStyleCommentEv(void);

/* Symbol: _ZNK4Json5ValueixEPKc */
/* Demangled: Json::Value::operator[](char const*) const */
int _ZNK4Json5ValueixEPKc(void);

/* Symbol: _ZN4Json5ValueC2ENS_9ValueTypeE */
/* Demangled: Json::Value::Value(Json::ValueType) */
int _ZN4Json5ValueC2ENS_9ValueTypeE(void);

/* Symbol: _ZN4Json5ValueC2Ej */
/* Demangled: Json::Value::Value(unsigned int) */
int _ZN4Json5ValueC2Ej(void);

/* Symbol: _ZN4Json12PathArgumentC1Ev */
/* Demangled: Json::PathArgument::PathArgument() */
int _ZN4Json12PathArgumentC1Ev(void);

/* Symbol: _ZN4Json13valueToStringEb */
/* Demangled: Json::valueToString(bool) */
int _ZN4Json13valueToStringEb(void);

/* Symbol: _ZN4Json12StyledWriter6indentEv */
/* Demangled: Json::StyledWriter::indent() */
int _ZN4Json12StyledWriter6indentEv(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManager8DumpToFdEi */
/* Demangled: android::perfmgr::JobQueueManager::DumpToFd(int) */
int _ZN7android7perfmgr15JobQueueManager8DumpToFdEi(void);

/* Symbol: _ZNK7android7perfmgr11HintManager14GetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::GetAdpfProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr11HintManager14GetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr9EventNode6UpdateEb */
/* Demangled: android::perfmgr::EventNode::Update(bool) */
int _ZN7android7perfmgr9EventNode6UpdateEb(void);

/* Symbol: _ZN8powerhal5flags9provider_E */
/* Demangled: powerhal::flags::provider_ */
extern void* _ZN8powerhal5flags9provider_E;

/* Symbol: powerhal_flags_test_flag */
/* Demangled: powerhal_flags_test_flag */
int powerhal_flags_test_flag(void);

/* Symbol: _ZN4Json9OurReader11readCommentEv */
/* Demangled: Json::OurReader::readComment() */
int _ZN4Json9OurReader11readCommentEv(void);

/* Symbol: _ZN4Json17CharReaderBuilderD2Ev */
/* Demangled: Json::CharReaderBuilder::~CharReaderBuilder() */
int _ZN4Json17CharReaderBuilderD2Ev(void);

/* Symbol: _ZNK4Json5Value9asCStringEv */
/* Demangled: Json::Value::asCString() const */
int _ZNK4Json5Value9asCStringEv(void);

/* Symbol: _ZNK4Json4Path7resolveERKNS_5ValueE */
/* Demangled: Json::Path::resolve(Json::Value const&) const */
int _ZNK4Json4Path7resolveERKNS_5ValueE(void);

/* Symbol: _ZN4Json19StreamWriterBuilderD2Ev */
/* Demangled: Json::StreamWriterBuilder::~StreamWriterBuilder() */
int _ZN4Json19StreamWriterBuilderD2Ev(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider5SetUpEv */
/* Demangled: android::perfmgr::FlagProvider::SetUp() */
int _ZN7android7perfmgr12FlagProvider5SetUpEv(void);

/* Symbol: _ZN4Json6Reader10readNumberEv */
/* Demangled: Json::Reader::readNumber() */
int _ZN4Json6Reader10readNumberEv(void);

/* Symbol: _ZN4Json5ValueC2El */
/* Demangled: Json::Value::Value(long) */
int _ZN4Json5ValueC2El(void);

/* Symbol: _ZN4Json5Value14releasePayloadEv */
/* Demangled: Json::Value::releasePayload() */
int _ZN4Json5Value14releasePayloadEv(void);

/* Symbol: _ZN4Json10FastWriter18omitEndingLineFeedEv */
/* Demangled: Json::FastWriter::omitEndingLineFeed() */
int _ZN4Json10FastWriter18omitEndingLineFeedEv(void);

/* Symbol: _ZNK7android7perfmgr8FileNode9GetHoldFdEv */
/* Demangled: android::perfmgr::FileNode::GetHoldFd() const */
int _ZNK7android7perfmgr8FileNode9GetHoldFdEv(void);

/* Symbol: _ZN7android7perfmgr12PropertyNode6UpdateEb */
/* Demangled: android::perfmgr::PropertyNode::Update(bool) */
int _ZN7android7perfmgr12PropertyNode6UpdateEb(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread7RequestERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE */
/* Demangled: android::perfmgr::NodeLooperThread::Request(std::__1::vector<android::perfmgr::NodeAction, std::__1::allocator<android::perfmgr::NodeAction> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr16NodeLooperThread7RequestERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN7android7perfmgr10HintStatusENS_10shared_ptrIS3_E27__shared_ptr_default_deleteIS3_S3_EENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<android::perfmgr::HintStatus*, std::__1::shared_ptr<android::perfmgr::HintStatus>::__shared_ptr_default_delete<android::perfmgr::HintStatus, android::perfmgr::HintStatus>, std::__1::allocator<android::perfmgr::HintStatus> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN7android7perfmgr10HintStatusENS_10shared_ptrIS3_E27__shared_ptr_default_deleteIS3_S3_EENS_9allocatorIS3_EEEE;

/* Symbol: _ZN4Json5ValueC2Em */
/* Demangled: Json::Value::Value(unsigned long) */
int _ZN4Json5ValueC2Em(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider12DropOverrideEPFbvE */
/* Demangled: android::perfmgr::FlagProvider::DropOverride(bool (*)()) */
int _ZN7android7perfmgr12FlagProvider12DropOverrideEPFbvE(void);

/* Symbol: _ZNK4Json17ValueIteratorBase15computeDistanceERKS0_ */
/* Demangled: Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase const&) const */
int _ZNK4Json17ValueIteratorBase15computeDistanceERKS0_(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider14ClearOverridesEv */
/* Demangled: android::perfmgr::FlagProvider::ClearOverrides() */
int _ZN7android7perfmgr12FlagProvider14ClearOverridesEv(void);

/* Symbol: _ZNK4Json6Reader24getLocationLineAndColumnEPKcRiS3_ */
/* Demangled: Json::Reader::getLocationLineAndColumn(char const*, int&, int&) const */
int _ZNK4Json6Reader24getLocationLineAndColumnEPKcRiS3_(void);

/* Symbol: _ZN4Json9OurReader11getNextCharEv */
/* Demangled: Json::OurReader::getNextChar() */
int _ZN4Json9OurReader11getNextCharEv(void);

/* Symbol: _ZN4Json18ValueConstIteratorC2ERKNS_13ValueIteratorE */
/* Demangled: Json::ValueConstIterator::ValueConstIterator(Json::ValueIterator const&) */
int _ZN4Json18ValueConstIteratorC2ERKNS_13ValueIteratorE(void);

/* Symbol: _ZN4Json5Value7nullRefE */
/* Demangled: Json::Value::nullRef */
extern void* _ZN4Json5Value7nullRefE;

/* Symbol: _ZN4Json23BuiltStyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE */
/* Demangled: Json::BuiltStyledStreamWriter::BuiltStyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Json::CommentStyle::Enum, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, bool, unsigned int, Json::PrecisionType) */
int _ZN4Json23BuiltStyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE(void);

/* Symbol: _ZN4Json9OurReader12decodeNumberERNS0_5TokenERNS_5ValueE */
/* Demangled: Json::OurReader::decodeNumber(Json::OurReader::Token&, Json::Value&) */
int _ZN4Json9OurReader12decodeNumberERNS0_5TokenERNS_5ValueE(void);

/* Symbol: _ZN4Json13ValueIteratorC2Ev */
/* Demangled: Json::ValueIterator::ValueIterator() */
int _ZN4Json13ValueIteratorC2Ev(void);

/* Symbol: _ZNK4Json5Value3getEPKcRKS0_ */
/* Demangled: Json::Value::get(char const*, Json::Value const&) const */
int _ZNK4Json5Value3getEPKcRKS0_(void);

/* Symbol: _ZN4Json18ValueConstIteratorC1Ev */
/* Demangled: Json::ValueConstIterator::ValueConstIterator() */
int _ZN4Json18ValueConstIteratorC1Ev(void);

/* Symbol: _ZN7android7perfmgr4Node10AddRequestEmRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE */
/* Demangled: android::perfmgr::Node::AddRequest(unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l> > >) */
int _ZN7android7perfmgr4Node10AddRequestEmRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider8TearDownEv */
/* Demangled: android::perfmgr::FlagProvider::TearDown() */
int _ZN7android7perfmgr12FlagProvider8TearDownEv(void);

/* Symbol: _ZN4Json5Value8CZStringC1EOS1_ */
/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString&&) */
int _ZN4Json5Value8CZStringC1EOS1_(void);

/* Symbol: _ZN4Json13valueToStringEi */
/* Demangled: Json::valueToString(int) */
int _ZN4Json13valueToStringEi(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::BuiltStyledStreamWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json23BuiltStyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN4Json6WriterE */
/* Demangled: vtable for Json::Writer */
extern void* _ZTVN4Json6WriterE;

/* Symbol: _ZN4Json9OurReader5parseEPKcS2_RNS_5ValueEb */
/* Demangled: Json::OurReader::parse(char const*, char const*, Json::Value&, bool) */
int _ZN4Json9OurReader5parseEPKcS2_RNS_5ValueEb(void);

/* Symbol: _ZN4Json13valueToStringEj */
/* Demangled: Json::valueToString(unsigned int) */
int _ZN4Json13valueToStringEj(void);

/* Symbol: _ZN7android7perfmgr11HintManager13EndHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::EndHintAction(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager13EndHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json9OurReader12decodeDoubleERNS0_5TokenE */
/* Demangled: Json::OurReader::decodeDouble(Json::OurReader::Token&) */
int _ZN4Json9OurReader12decodeDoubleERNS0_5TokenE(void);

/* Symbol: _ZNK4Json17CharReaderBuilder8validateEPNS_5ValueE */
/* Demangled: Json::CharReaderBuilder::validate(Json::Value*) const */
int _ZNK4Json17CharReaderBuilder8validateEPNS_5ValueE(void);

/* Symbol: _ZNK4Json5Value6asBoolEv */
/* Demangled: Json::Value::asBool() const */
int _ZNK4Json5Value6asBoolEv(void);

/* Symbol: _ZN4Json5ValueC1Eb */
/* Demangled: Json::Value::Value(bool) */
int _ZN4Json5ValueC1Eb(void);

/* Symbol: _ZN4Json13valueToStringEl */
/* Demangled: Json::valueToString(long) */
int _ZN4Json13valueToStringEl(void);

/* Symbol: _ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE */
/* Demangled: Json::StyledWriter::writeCommentBeforeValue(Json::Value const&) */
int _ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json12StreamWriterC2Ev */
/* Demangled: Json::StreamWriter::StreamWriter() */
int _ZN4Json12StreamWriterC2Ev(void);

/* Symbol: _ZTVN4Json12StreamWriterE */
/* Demangled: vtable for Json::StreamWriter */
extern void* _ZTVN4Json12StreamWriterE;

/* Symbol: _ZN4Json5Value4nullE */
/* Demangled: Json::Value::null */
extern void* _ZN4Json5Value4nullE;

/* Symbol: _ZN4Json13valueToStringEm */
/* Demangled: Json::valueToString(unsigned long) */
int _ZN4Json13valueToStringEm(void);

/* Symbol: _ZN7android7perfmgr12RequestGroup13GetExpireTimeEPNSt3__16chrono8durationIxNS2_5ratioILl1ELl1000EEEEE */
/* Demangled: android::perfmgr::RequestGroup::GetExpireTime(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >*) */
int _ZN7android7perfmgr12RequestGroup13GetExpireTimeEPNSt3__16chrono8durationIxNS2_5ratioILl1ELl1000EEEEE(void);

/* Symbol: _ZN7android7perfmgr11HintManager11GetFromJSONERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb */
/* Demangled: android::perfmgr::HintManager::GetFromJSON(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN7android7perfmgr11HintManager11GetFromJSONERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void);

/* Symbol: _ZNK4Json5Value5emptyEv */
/* Demangled: Json::Value::empty() const */
int _ZNK4Json5Value5emptyEv(void);

/* Symbol: _ZN4Json9OurReader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj */
/* Demangled: Json::OurReader::decodeUnicodeCodePoint(Json::OurReader::Token&, char const*&, char const*, unsigned int&) */
int _ZN4Json9OurReader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj(void);

/* Symbol: _ZN4Json5ValueC1Ed */
/* Demangled: Json::Value::Value(double) */
int _ZN4Json5ValueC1Ed(void);

/* Symbol: _ZNK4Json5Value9isNumericEv */
/* Demangled: Json::Value::isNumeric() const */
int _ZNK4Json5Value9isNumericEv(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider11GetInstanceEv */
/* Demangled: android::perfmgr::FlagProvider::GetInstance() */
int _ZN7android7perfmgr12FlagProvider11GetInstanceEv(void);

/* Symbol: _ZN4Json9OurReader9readValueEv */
/* Demangled: Json::OurReader::readValue() */
int _ZN4Json9OurReader9readValueEv(void);

/* Symbol: _ZNK4Json9OurReader24getLocationLineAndColumnEPKc */
/* Demangled: Json::OurReader::getLocationLineAndColumn(char const*) const */
int _ZNK4Json9OurReader24getLocationLineAndColumnEPKc(void);

/* Symbol: _ZN4Json6WriterD1Ev */
/* Demangled: Json::Writer::~Writer() */
int _ZN4Json6WriterD1Ev(void);

/* Symbol: _ZNK4Json5Value8isUInt64Ev */
/* Demangled: Json::Value::isUInt64() const */
int _ZNK4Json5Value8isUInt64Ev(void);

/* Symbol: _ZNK4Json5Value4typeEv */
/* Demangled: Json::Value::type() const */
int _ZNK4Json5Value4typeEv(void);

/* Symbol: _ZNK4Json4Path7resolveERKNS_5ValueES3_ */
/* Demangled: Json::Path::resolve(Json::Value const&, Json::Value const&) const */
int _ZNK4Json4Path7resolveERKNS_5ValueES3_(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread8DumpToFdEi */
/* Demangled: android::perfmgr::NodeLooperThread::DumpToFd(int) */
int _ZN7android7perfmgr16NodeLooperThread8DumpToFdEi(void);

/* Symbol: _ZNK4Json5Value7compareERKS0_ */
/* Demangled: Json::Value::compare(Json::Value const&) const */
int _ZNK4Json5Value7compareERKS0_(void);

/* Symbol: _ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE */
/* Demangled: Json::StyledWriter::writeArrayValue(Json::Value const&) */
int _ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json8Features10strictModeEv */
/* Demangled: Json::Features::strictMode() */
int _ZN4Json8Features10strictModeEv(void);

/* Symbol: _ZN4Json9OurReader12normalizeEOLEPKcS2_ */
/* Demangled: Json::OurReader::normalizeEOL(char const*, char const*) */
int _ZN4Json9OurReader12normalizeEOLEPKcS2_(void);

/* Symbol: _ZN4Json17CharReaderBuilder11setDefaultsEPNS_5ValueE */
/* Demangled: Json::CharReaderBuilder::setDefaults(Json::Value*) */
int _ZN4Json17CharReaderBuilder11setDefaultsEPNS_5ValueE(void);

/* Symbol: _ZN4Json5ValueC1Ei */
/* Demangled: Json::Value::Value(int) */
int _ZN4Json5ValueC1Ei(void);

/* Symbol: _ZN4Json18StyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StyledStreamWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json18StyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json17ValueIteratorBase10memberNameEv */
/* Demangled: Json::ValueIteratorBase::memberName() const */
int _ZNK4Json17ValueIteratorBase10memberNameEv(void);

/* Symbol: _ZN4Json5ValueC1Ej */
/* Demangled: Json::Value::Value(unsigned int) */
int _ZN4Json5ValueC1Ej(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider8DumpToFdEi */
/* Demangled: android::perfmgr::FlagProvider::DumpToFd(int) */
int _ZN7android7perfmgr12FlagProvider8DumpToFdEi(void);

/* Symbol: _ZN4Json17CharReaderBuilderD1Ev */
/* Demangled: Json::CharReaderBuilder::~CharReaderBuilder() */
int _ZN4Json17CharReaderBuilderD1Ev(void);

/* Symbol: _ZN4Json5Value11swapPayloadERS0_ */
/* Demangled: Json::Value::swapPayload(Json::Value&) */
int _ZN4Json5Value11swapPayloadERS0_(void);

/* Symbol: _ZN4Json17ValueIteratorBaseC2Ev */
/* Demangled: Json::ValueIteratorBase::ValueIteratorBase() */
int _ZN4Json17ValueIteratorBaseC2Ev(void);

/* Symbol: _ZNK4Json5Value14getMemberNamesEv */
/* Demangled: Json::Value::getMemberNames() const */
int _ZNK4Json5Value14getMemberNamesEv(void);

/* Symbol: _ZN4Json19StreamWriterBuilderD1Ev */
/* Demangled: Json::StreamWriterBuilder::~StreamWriterBuilder() */
int _ZN4Json19StreamWriterBuilderD1Ev(void);

/* Symbol: _ZN4Json18StyledStreamWriter8unindentEv */
/* Demangled: Json::StyledStreamWriter::unindent() */
int _ZN4Json18StyledStreamWriter8unindentEv(void);

/* Symbol: _ZNK4Json17CharReaderBuilder13newCharReaderEv */
/* Demangled: Json::CharReaderBuilder::newCharReader() const */
int _ZNK4Json17CharReaderBuilder13newCharReaderEv(void);

/* Symbol: _ZN4Json5ValueC1El */
/* Demangled: Json::Value::Value(long) */
int _ZN4Json5ValueC1El(void);

/* Symbol: _ZN4Json5Value8CZStringC1ERKS1_ */
/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString const&) */
int _ZN4Json5Value8CZStringC1ERKS1_(void);

/* Symbol: _ZN4Json11writeStringERKNS_12StreamWriter7FactoryERKNS_5ValueE */
/* Demangled: Json::writeString(Json::StreamWriter::Factory const&, Json::Value const&) */
int _ZN4Json11writeStringERKNS_12StreamWriter7FactoryERKNS_5ValueE(void);

/* Symbol: _ZNK7android7perfmgr11HintManager12ValidateHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::ValidateHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr11HintManager12ValidateHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr10AdpfConfig8dumpToFdEi */
/* Demangled: android::perfmgr::AdpfConfig::dumpToFd(int) */
int _ZN7android7perfmgr10AdpfConfig8dumpToFdEi(void);

/* Symbol: _ZN4Json17CharReaderBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::CharReaderBuilder::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json17CharReaderBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5ValueC1Em */
/* Demangled: Json::Value::Value(unsigned long) */
int _ZN4Json5ValueC1Em(void);

/* Symbol: _ZN4Json12StreamWriter7FactoryD2Ev */
/* Demangled: Json::StreamWriter::Factory::~Factory() */
int _ZN4Json12StreamWriter7FactoryD2Ev(void);

/* Symbol: _ZTVN4Json10FastWriterE */
/* Demangled: vtable for Json::FastWriter */
extern void* _ZTVN4Json10FastWriterE;

/* Symbol: _ZN4Json5Value6resizeEj */
/* Demangled: Json::Value::resize(unsigned int) */
int _ZN4Json5Value6resizeEj(void);

/* Symbol: _ZNK4Json5Value3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS0_ */
/* Demangled: Json::Value::get(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value const&) const */
int _ZNK4Json5Value3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS0_(void);

/* Symbol: _ZN7android7perfmgr8FileNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb */
/* Demangled: android::perfmgr::FileNode::FileNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, bool, bool, bool, bool) */
int _ZN7android7perfmgr8FileNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread10readyToRunEv */
/* Demangled: android::perfmgr::NodeLooperThread::readyToRun() */
int _ZN7android7perfmgr16NodeLooperThread10readyToRunEv(void);

/* Symbol: _ZN4Json6Reader12decodeDoubleERNS0_5TokenE */
/* Demangled: Json::Reader::decodeDouble(Json::Reader::Token&) */
int _ZN4Json6Reader12decodeDoubleERNS0_5TokenE(void);

/* Symbol: _ZN4Json9OurReader9readTokenERNS0_5TokenE */
/* Demangled: Json::OurReader::readToken(Json::OurReader::Token&) */
int _ZN4Json9OurReader9readTokenERNS0_5TokenE(void);

/* Symbol: _ZN7android7perfmgr11HintManager9sInstanceE */
/* Demangled: android::perfmgr::HintManager::sInstance */
extern void* _ZN7android7perfmgr11HintManager9sInstanceE;

/* Symbol: _ZNK4Json5Value8CZString4dataEv */
/* Demangled: Json::Value::CZString::data() const */
int _ZNK4Json5Value8CZString4dataEv(void);

/* Symbol: _ZN4Json4PathC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_ */
/* Demangled: Json::Path::Path(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */
int _ZN4Json4PathC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_(void);

/* Symbol: _ZN4Json13ValueIteratorC1Ev */
/* Demangled: Json::ValueIterator::ValueIterator() */
int _ZN4Json13ValueIteratorC1Ev(void);

/* Symbol: _ZN4Json6Reader5parseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_5ValueEb */
/* Demangled: Json::Reader::parse(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value&, bool) */
int _ZN4Json6Reader5parseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_5ValueEb(void);

/* Symbol: _ZN4Json9OurReaderC2ERKNS_11OurFeaturesE */
/* Demangled: Json::OurReader::OurReader(Json::OurFeatures const&) */
int _ZN4Json9OurReaderC2ERKNS_11OurFeaturesE(void);

/* Symbol: _ZN4Json4Path8makePathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEE */
/* Demangled: Json::Path::makePath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> > const&) */
int _ZN4Json4Path8makePathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEE(void);

/* Symbol: _ZN4Json5Value4swapERS0_ */
/* Demangled: Json::Value::swap(Json::Value&) */
int _ZN4Json5Value4swapERS0_(void);

/* Symbol: _ZN4Json5Value8CZStringC2Ej */
/* Demangled: Json::Value::CZString::CZString(unsigned int) */
int _ZN4Json5Value8CZStringC2Ej(void);

/* Symbol: _ZN4Json6ReaderC2ERKNS_8FeaturesE */
/* Demangled: Json::Reader::Reader(Json::Features const&) */
int _ZN4Json6ReaderC2ERKNS_8FeaturesE(void);

/* Symbol: _ZN4Json6Reader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE */
/* Demangled: Json::Reader::addErrorAndRecover(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Reader::Token&, Json::Reader::TokenType) */
int _ZN4Json6Reader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE(void);

/* Symbol: _ZN4Json5ValueC2EOS0_ */
/* Demangled: Json::Value::Value(Json::Value&&) */
int _ZN4Json5ValueC2EOS0_(void);

/* Symbol: _ZNK4Json5Value4findEPKcS2_ */
/* Demangled: Json::Value::find(char const*, char const*) const */
int _ZNK4Json5Value4findEPKcS2_(void);

/* Symbol: _ZN4Json12StyledWriterC2Ev */
/* Demangled: Json::StyledWriter::StyledWriter() */
int _ZN4Json12StyledWriterC2Ev(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE */
/* Demangled: Json::BuiltStyledStreamWriter::writeCommentBeforeValue(Json::Value const&) */
int _ZN4Json23BuiltStyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json19StreamWriterBuilder11setDefaultsEPNS_5ValueE */
/* Demangled: Json::StreamWriterBuilder::setDefaults(Json::Value*) */
int _ZN4Json19StreamWriterBuilder11setDefaultsEPNS_5ValueE(void);

/* Symbol: _ZTVN4Json12StyledWriterE */
/* Demangled: vtable for Json::StyledWriter */
extern void* _ZTVN4Json12StyledWriterE;

/* Symbol: _ZNK7android7perfmgr11HintManager9IsRunningEv */
/* Demangled: android::perfmgr::HintManager::IsRunning() const */
int _ZNK7android7perfmgr11HintManager9IsRunningEv(void);

/* Symbol: _ZN4Json5ValueixEi */
/* Demangled: Json::Value::operator[](int) */
int _ZN4Json5ValueixEi(void);

/* Symbol: _ZN7android7perfmgr3Job5resetEv */
/* Demangled: android::perfmgr::Job::reset() */
int _ZN7android7perfmgr3Job5resetEv(void);

/* Symbol: _ZN4Json6Reader9readTokenERNS0_5TokenE */
/* Demangled: Json::Reader::readToken(Json::Reader::Token&) */
int _ZN4Json6Reader9readTokenERNS0_5TokenE(void);

/* Symbol: _ZN4Json6Reader11getNextCharEv */
/* Demangled: Json::Reader::getNextChar() */
int _ZN4Json6Reader11getNextCharEv(void);

/* Symbol: _ZN4Json5ValueC2EPKc */
/* Demangled: Json::Value::Value(char const*) */
int _ZN4Json5ValueC2EPKc(void);

/* Symbol: _ZNK4Json5ValueleERKS0_ */
/* Demangled: Json::Value::operator<=(Json::Value const&) const */
int _ZNK4Json5ValueleERKS0_(void);

/* Symbol: _ZN4Json12StyledWriter16isMultilineArrayERKNS_5ValueE */
/* Demangled: Json::StyledWriter::isMultilineArray(Json::Value const&) */
int _ZN4Json12StyledWriter16isMultilineArrayERKNS_5ValueE(void);

/* Symbol: _ZN4Json5ValueixEj */
/* Demangled: Json::Value::operator[](unsigned int) */
int _ZN4Json5ValueixEj(void);

/* Symbol: _ZN4Json12StyledWriter11writeIndentEv */
/* Demangled: Json::StyledWriter::writeIndent() */
int _ZN4Json12StyledWriter11writeIndentEv(void);

/* Symbol: _ZN4Json11OurFeatures3allEv */
/* Demangled: Json::OurFeatures::all() */
int _ZN4Json11OurFeatures3allEv(void);

/* Symbol: _ZN4Json9OurReader19readCppStyleCommentEv */
/* Demangled: Json::OurReader::readCppStyleComment() */
int _ZN4Json9OurReader19readCppStyleCommentEv(void);

/* Symbol: _ZNK4Json5Value5beginEv */
/* Demangled: Json::Value::begin() const */
int _ZNK4Json5Value5beginEv(void);

/* Symbol: _ZN4Json5Value5clearEv */
/* Demangled: Json::Value::clear() */
int _ZN4Json5Value5clearEv(void);

/* Symbol: _ZN4Json12StreamWriterD2Ev */
/* Demangled: Json::StreamWriter::~StreamWriter() */
int _ZN4Json12StreamWriterD2Ev(void);

/* Symbol: _ZN4Json6WriterD0Ev */
/* Demangled: Json::Writer::~Writer() */
int _ZN4Json6WriterD0Ev(void);

/* Symbol: _ZN7android7perfmgr12RequestGroup10AddRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE */
/* Demangled: android::perfmgr::RequestGroup::AddRequest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l> > >) */
int _ZN7android7perfmgr12RequestGroup10AddRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE(void);

/* Symbol: _ZTVN7android7perfmgr8FileNodeE */
/* Demangled: vtable for android::perfmgr::FileNode */
extern void* _ZTVN7android7perfmgr8FileNodeE;

/* Symbol: _ZN4Json6Reader16recoverFromErrorENS0_9TokenTypeE */
/* Demangled: Json::Reader::recoverFromError(Json::Reader::TokenType) */
int _ZN4Json6Reader16recoverFromErrorENS0_9TokenTypeE(void);

/* Symbol: _ZN4Json5ValueD2Ev */
/* Demangled: Json::Value::~Value() */
int _ZN4Json5ValueD2Ev(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManager14enqueueRequestEPNS0_3JobE */
/* Demangled: android::perfmgr::JobQueueManager::enqueueRequest(android::perfmgr::Job*) */
int _ZN7android7perfmgr15JobQueueManager14enqueueRequestEPNS0_3JobE(void);

/* Symbol: _ZNK7android7perfmgr11HintManager15GetOtherConfigsEv */
/* Demangled: android::perfmgr::HintManager::GetOtherConfigs() const */
int _ZNK7android7perfmgr11HintManager15GetOtherConfigsEv(void);

/* Symbol: _ZN4Json5ValueC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::Value::Value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json5ValueC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::Value::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json12PathArgumentC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::PathArgument::PathArgument(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN4Json12PathArgumentC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE */
/* Demangled: Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
int _ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr11HintManager12DoHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::DoHintAction(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager12DoHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json5Value8isStringEv */
/* Demangled: Json::Value::isString() const */
int _ZNK4Json5Value8isStringEv(void);

/* Symbol: _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS0_ */
/* Demangled: Json::Value::removeMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value*) */
int _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS0_(void);

/* Symbol: _ZN4Json17CharReaderBuilderD0Ev */
/* Demangled: Json::CharReaderBuilder::~CharReaderBuilder() */
int _ZN4Json17CharReaderBuilderD0Ev(void);

/* Symbol: _ZTVN4Json17CharReaderBuilderE */
/* Demangled: vtable for Json::CharReaderBuilder */
extern void* _ZTVN4Json17CharReaderBuilderE;

/* Symbol: _ZN4Json17ValueIteratorBaseC1Ev */
/* Demangled: Json::ValueIteratorBase::ValueIteratorBase() */
int _ZN4Json17ValueIteratorBaseC1Ev(void);

/* Symbol: _ZN4Json5ValueC1EOS0_ */
/* Demangled: Json::Value::Value(Json::Value&&) */
int _ZN4Json5ValueC1EOS0_(void);

/* Symbol: _ZN4Json19StreamWriterBuilderD0Ev */
/* Demangled: Json::StreamWriterBuilder::~StreamWriterBuilder() */
int _ZN4Json19StreamWriterBuilderD0Ev(void);

/* Symbol: _ZN4Json17CharReaderBuilder10strictModeEPNS_5ValueE */
/* Demangled: Json::CharReaderBuilder::strictMode(Json::Value*) */
int _ZN4Json17CharReaderBuilder10strictModeEPNS_5ValueE(void);

/* Symbol: _ZN4Json13ValueIteratoraSERKS0_ */
/* Demangled: Json::ValueIterator::operator=(Json::ValueIterator const&) */
int _ZN4Json13ValueIteratoraSERKS0_(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter11writeIndentEv */
/* Demangled: Json::BuiltStyledStreamWriter::writeIndent() */
int _ZN4Json23BuiltStyledStreamWriter11writeIndentEv(void);

/* Symbol: _ZNK4Json19StreamWriterBuilder15newStreamWriterEv */
/* Demangled: Json::StreamWriterBuilder::newStreamWriter() const */
int _ZNK4Json19StreamWriterBuilder15newStreamWriterEv(void);

/* Symbol: _ZN7android7perfmgr8FileNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb */
/* Demangled: android::perfmgr::FileNode::FileNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, bool, bool, bool, bool) */
int _ZN7android7perfmgr8FileNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb(void);

/* Symbol: _ZN4Json9OurReader17skipCommentTokensERNS0_5TokenE */
/* Demangled: Json::OurReader::skipCommentTokens(Json::OurReader::Token&) */
int _ZN4Json9OurReader17skipCommentTokensERNS0_5TokenE(void);

/* Symbol: _ZN4Json9OurReader10readStringEv */
/* Demangled: Json::OurReader::readString() */
int _ZN4Json9OurReader10readStringEv(void);

/* Symbol: _ZN4Json5Value8CommentsC2ERKS1_ */
/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments const&) */
int _ZN4Json5Value8CommentsC2ERKS1_(void);

/* Symbol: _ZNK4Json4Path4makeERNS_5ValueE */
/* Demangled: Json::Path::make(Json::Value&) const */
int _ZNK4Json4Path4makeERNS_5ValueE(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter15writeArrayValueERKNS_5ValueE */
/* Demangled: Json::BuiltStyledStreamWriter::writeArrayValue(Json::Value const&) */
int _ZN4Json23BuiltStyledStreamWriter15writeArrayValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json12StreamWriter7FactoryD1Ev */
/* Demangled: Json::StreamWriter::Factory::~Factory() */
int _ZN4Json12StreamWriter7FactoryD1Ev(void);

/* Symbol: _ZNK4Json5Value8isDoubleEv */
/* Demangled: Json::Value::isDouble() const */
int _ZNK4Json5Value8isDoubleEv(void);

/* Symbol: _ZN4Json9OurReader12decodeNumberERNS0_5TokenE */
/* Demangled: Json::OurReader::decodeNumber(Json::OurReader::Token&) */
int _ZN4Json9OurReader12decodeNumberERNS0_5TokenE(void);

/* Symbol: _ZN4Json5Value13nullSingletonEv */
/* Demangled: Json::Value::nullSingleton() */
int _ZN4Json5Value13nullSingletonEv(void);

/* Symbol: _ZNK4Json5Value15isConvertibleToENS_9ValueTypeE */
/* Demangled: Json::Value::isConvertibleTo(Json::ValueType) const */
int _ZNK4Json5Value15isConvertibleToENS_9ValueTypeE(void);

/* Symbol: _ZN7android7perfmgr11HintManager14SetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_ */
/* Demangled: android::perfmgr::HintManager::SetAdpfProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager14SetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_(void);

/* Symbol: _ZN4Json9OurReader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: Json::OurReader::decodeString(Json::OurReader::Token&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN4Json9OurReader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json13ValueIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE */
/* Demangled: Json::ValueIterator::ValueIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
int _ZN4Json13ValueIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void);

/* Symbol: _ZN4Json13ValueIteratorC1ERKNS_18ValueConstIteratorE */
/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */
int _ZN4Json13ValueIteratorC1ERKNS_18ValueConstIteratorE(void);

/* Symbol: _ZNK7android7perfmgr4Node14GetResetOnInitEv */
/* Demangled: android::perfmgr::Node::GetResetOnInit() const */
int _ZNK7android7perfmgr4Node14GetResetOnInitEv(void);

/* Symbol: _ZNK7android7perfmgr8FileNode8DumpToFdEi */
/* Demangled: android::perfmgr::FileNode::DumpToFd(int) const */
int _ZNK7android7perfmgr8FileNode8DumpToFdEi(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread5StartEv */
/* Demangled: android::perfmgr::NodeLooperThread::Start() */
int _ZN7android7perfmgr16NodeLooperThread5StartEv(void);

/* Symbol: _ZNK7android7perfmgr11HintManager8GetHintsEv */
/* Demangled: android::perfmgr::HintManager::GetHints() const */
int _ZNK7android7perfmgr11HintManager8GetHintsEv(void);

/* Symbol: powerhal_flags_ramp_down_sf_prefer_high_cap */
/* Demangled: powerhal_flags_ramp_down_sf_prefer_high_cap */
int powerhal_flags_ramp_down_sf_prefer_high_cap(void);

/* Symbol: _ZN4Json17ValueIteratorBase9decrementEv */
/* Demangled: Json::ValueIteratorBase::decrement() */
int _ZN4Json17ValueIteratorBase9decrementEv(void);

/* Symbol: _ZNK4Json5Value8CZStringltERKS1_ */
/* Demangled: Json::Value::CZString::operator<(Json::Value::CZString const&) const */
int _ZNK4Json5Value8CZStringltERKS1_(void);

/* Symbol: _ZN4Json13ValueIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE */
/* Demangled: Json::ValueIterator::ValueIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
int _ZN4Json13ValueIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void);

/* Symbol: _ZN4Json5Value11removeIndexEjPS0_ */
/* Demangled: Json::Value::removeIndex(unsigned int, Json::Value*) */
int _ZN4Json5Value11removeIndexEjPS0_(void);

/* Symbol: _ZN7android7perfmgr11HintManager14InitHintStatusERKNSt3__110unique_ptrIS1_NS2_14default_deleteIS1_EEEE */
/* Demangled: android::perfmgr::HintManager::InitHintStatus(std::__1::unique_ptr<android::perfmgr::HintManager, std::__1::default_delete<android::perfmgr::HintManager> > const&) */
int _ZN7android7perfmgr11HintManager14InitHintStatusERKNSt3__110unique_ptrIS1_NS2_14default_deleteIS1_EEEE(void);

/* Symbol: _ZN4Json5Value10setCommentENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_16CommentPlacementE */
/* Demangled: Json::Value::setComment(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Json::CommentPlacement) */
int _ZN4Json5Value10setCommentENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_16CommentPlacementE(void);

/* Symbol: _ZNK4Json5Value13asLargestUIntEv */
/* Demangled: Json::Value::asLargestUInt() const */
int _ZNK4Json5Value13asLargestUIntEv(void);

/* Symbol: _ZN4Json12PathArgumentC2EPKc */
/* Demangled: Json::PathArgument::PathArgument(char const*) */
int _ZN4Json12PathArgumentC2EPKc(void);

/* Symbol: _ZNK7android7perfmgr8FileNode15GetAllowFailureEv */
/* Demangled: android::perfmgr::FileNode::GetAllowFailure() const */
int _ZNK7android7perfmgr8FileNode15GetAllowFailureEv(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManagerC2Em */
/* Demangled: android::perfmgr::JobQueueManager::JobQueueManager(unsigned long) */
int _ZN7android7perfmgr15JobQueueManagerC2Em(void);

/* Symbol: _ZN4Json5ValueaSEOS0_ */
/* Demangled: Json::Value::operator=(Json::Value&&) */
int _ZN4Json5ValueaSEOS0_(void);

/* Symbol: _ZN4Json5Value3endEv */
/* Demangled: Json::Value::end() */
int _ZN4Json5Value3endEv(void);

/* Symbol: _ZN4Json5Value8CZStringC1Ej */
/* Demangled: Json::Value::CZString::CZString(unsigned int) */
int _ZN4Json5Value8CZStringC1Ej(void);

/* Symbol: _ZN4Json18StyledStreamWriter16isMultilineArrayERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::isMultilineArray(Json::Value const&) */
int _ZN4Json18StyledStreamWriter16isMultilineArrayERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManager7getSizeEv */
/* Demangled: android::perfmgr::JobQueueManager::getSize() */
int _ZN7android7perfmgr15JobQueueManager7getSizeEv(void);

/* Symbol: _ZN4Json6Reader12decodeStringERNS0_5TokenE */
/* Demangled: Json::Reader::decodeString(Json::Reader::Token&) */
int _ZN4Json6Reader12decodeStringERNS0_5TokenE(void);

/* Symbol: _ZN4Json12StyledWriterC1Ev */
/* Demangled: Json::StyledWriter::StyledWriter() */
int _ZN4Json12StyledWriterC1Ev(void);

/* Symbol: _ZN7android7perfmgr11HintManager23RegisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE */
/* Demangled: android::perfmgr::HintManager::RegisterAdpfUpdateEvent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::function<void (std::__1::shared_ptr<android::perfmgr::AdpfConfig>)>*) */
int _ZN7android7perfmgr11HintManager23RegisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE(void);

/* Symbol: _ZNK4Json5Value12asLargestIntEv */
/* Demangled: Json::Value::asLargestInt() const */
int _ZNK4Json5Value12asLargestIntEv(void);

/* Symbol: _ZN4Json10FastWriter20dropNullPlaceholdersEv */
/* Demangled: Json::FastWriter::dropNullPlaceholders() */
int _ZN4Json10FastWriter20dropNullPlaceholdersEv(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter8unindentEv */
/* Demangled: Json::BuiltStyledStreamWriter::unindent() */
int _ZN4Json23BuiltStyledStreamWriter8unindentEv(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter18hasCommentForValueERKNS_5ValueE */
/* Demangled: Json::BuiltStyledStreamWriter::hasCommentForValue(Json::Value const&) */
int _ZN4Json23BuiltStyledStreamWriter18hasCommentForValueERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr4Node13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::Node::RemoveRequest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr4Node13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android7perfmgr11HintManager21gpu_sysfs_config_pathEv */
/* Demangled: android::perfmgr::HintManager::gpu_sysfs_config_path() const */
int _ZNK7android7perfmgr11HintManager21gpu_sysfs_config_pathEv(void);

/* Symbol: _ZNK4Json5Value7asInt64Ev */
/* Demangled: Json::Value::asInt64() const */
int _ZNK4Json5Value7asInt64Ev(void);

/* Symbol: _ZNK4Json6Reader24getFormatedErrorMessagesEv */
/* Demangled: Json::Reader::getFormatedErrorMessages() const */
int _ZNK4Json6Reader24getFormatedErrorMessagesEv(void);

/* Symbol: _ZNK4Json5Value8isMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::Value::isMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK4Json5Value8isMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json17ValueIteratorBase3keyEv */
/* Demangled: Json::ValueIteratorBase::key() const */
int _ZNK4Json17ValueIteratorBase3keyEv(void);

/* Symbol: _ZNK4Json5ValuegeERKS0_ */
/* Demangled: Json::Value::operator>=(Json::Value const&) const */
int _ZNK4Json5ValuegeERKS0_(void);

/* Symbol: _ZN4Json5ValueC1EPKcS2_ */
/* Demangled: Json::Value::Value(char const*, char const*) */
int _ZN4Json5ValueC1EPKcS2_(void);

/* Symbol: _ZNK7android7perfmgr12PropertyNode8DumpToFdEi */
/* Demangled: android::perfmgr::PropertyNode::DumpToFd(int) const */
int _ZNK7android7perfmgr12PropertyNode8DumpToFdEi(void);

/* Symbol: _ZN4Json9OurReader15containsNewLineEPKcS2_ */
/* Demangled: Json::OurReader::containsNewLine(char const*, char const*) */
int _ZN4Json9OurReader15containsNewLineEPKcS2_(void);

/* Symbol: _ZN4Json5Value5beginEv */
/* Demangled: Json::Value::begin() */
int _ZN4Json5Value5beginEv(void);

/* Symbol: _ZN4Json12StreamWriterD1Ev */
/* Demangled: Json::StreamWriter::~StreamWriter() */
int _ZN4Json12StreamWriterD1Ev(void);

/* Symbol: _ZN4Json5Value14setOffsetStartEl */
/* Demangled: Json::Value::setOffsetStart(long) */
int _ZN4Json5Value14setOffsetStartEl(void);

/* Symbol: _ZNK7android7perfmgr12RequestGroup15GetRequestValueEv */
/* Demangled: android::perfmgr::RequestGroup::GetRequestValue() const */
int _ZNK7android7perfmgr12RequestGroup15GetRequestValueEv(void);

/* Symbol: _ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::DoHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5ValueD1Ev */
/* Demangled: Json::Value::~Value() */
int _ZN4Json5ValueD1Ev(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter16isMultilineArrayERKNS_5ValueE */
/* Demangled: Json::BuiltStyledStreamWriter::isMultilineArray(Json::Value const&) */
int _ZN4Json23BuiltStyledStreamWriter16isMultilineArrayERKNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr8FileNode6UpdateEb */
/* Demangled: android::perfmgr::FileNode::Update(bool) */
int _ZN7android7perfmgr8FileNode6UpdateEb(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread4StopEv */
/* Demangled: android::perfmgr::NodeLooperThread::Stop() */
int _ZN7android7perfmgr16NodeLooperThread4StopEv(void);

/* Symbol: powerhal_flags_chrome_profile_bypass_hboost_severe_jank_level */
/* Demangled: powerhal_flags_chrome_profile_bypass_hboost_severe_jank_level */
int powerhal_flags_chrome_profile_bypass_hboost_severe_jank_level(void);

/* Symbol: _ZNK4Json6Reader4goodEv */
/* Demangled: Json::Reader::good() const */
int _ZNK4Json6Reader4goodEv(void);

/* Symbol: _ZN4Json5Value8CZStringaSEOS1_ */
/* Demangled: Json::Value::CZString::operator=(Json::Value::CZString&&) */
int _ZN4Json5Value8CZStringaSEOS1_(void);

/* Symbol: _ZNK4Json5Value8CZStringeqERKS1_ */
/* Demangled: Json::Value::CZString::operator==(Json::Value::CZString const&) const */
int _ZNK4Json5Value8CZStringeqERKS1_(void);

/* Symbol: _ZNK7android7perfmgr11HintManager12GetHintStatsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::GetHintStats(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr11HintManager12GetHintStatsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr11HintManager11GetInstanceEv */
/* Demangled: android::perfmgr::HintManager::GetInstance() */
int _ZN7android7perfmgr11HintManager11GetInstanceEv(void);

/* Symbol: _ZN4Json6ReaderC1ERKNS_8FeaturesE */
/* Demangled: Json::Reader::Reader(Json::Features const&) */
int _ZN4Json6ReaderC1ERKNS_8FeaturesE(void);

/* Symbol: _ZN4Json5Value6insertEjOS0_ */
/* Demangled: Json::Value::insert(unsigned int, Json::Value&&) */
int _ZN4Json5Value6insertEjOS0_(void);

/* Symbol: _ZN4Json19StreamWriterBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StreamWriterBuilder::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json19StreamWriterBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN4Json12StreamWriter7FactoryE */
/* Demangled: vtable for Json::StreamWriter::Factory */
extern void* _ZTVN4Json12StreamWriter7FactoryE;

/* Symbol: _ZNK4Json5Value3getEjRKS0_ */
/* Demangled: Json::Value::get(unsigned int, Json::Value const&) const */
int _ZNK4Json5Value3getEjRKS0_(void);

/* Symbol: _ZN7android7perfmgr11HintManager24SetAdpfProfileFromDoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::SetAdpfProfileFromDoHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager24SetAdpfProfileFromDoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json6Reader12currentValueEv */
/* Demangled: Json::Reader::currentValue() */
int _ZN4Json6Reader12currentValueEv(void);

/* Symbol: _ZN4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::Value::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK4Json5Value14getOffsetStartEv */
/* Demangled: Json::Value::getOffsetStart() const */
int _ZNK4Json5Value14getOffsetStartEv(void);

/* Symbol: _ZN4Json5Value16resolveReferenceEPKcS2_ */
/* Demangled: Json::Value::resolveReference(char const*, char const*) */
int _ZN4Json5Value16resolveReferenceEPKcS2_(void);

/* Symbol: _ZN4Json12StyledWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StyledWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json12StyledWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN7android7perfmgr12FlagProviderE */
/* Demangled: vtable for android::perfmgr::FlagProvider */
extern void* _ZTVN7android7perfmgr12FlagProviderE;

/* Symbol: _ZNK4Json5Value8CZString14isStaticStringEv */
/* Demangled: Json::Value::CZString::isStaticString() const */
int _ZNK4Json5Value8CZString14isStaticStringEv(void);

/* Symbol: _ZNK4Json5Value10isIntegralEv */
/* Demangled: Json::Value::isIntegral() const */
int _ZNK4Json5Value10isIntegralEv(void);

/* Symbol: _ZN4Json5Value8CommentsC2EOS1_ */
/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments&&) */
int _ZN4Json5Value8CommentsC2EOS1_(void);

/* Symbol: _ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::hasCommentForValue(Json::Value const&) */
int _ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE(void);

/* Symbol: _ZNK4Json5Value8asUInt64Ev */
/* Demangled: Json::Value::asUInt64() const */
int _ZNK4Json5Value8asUInt64Ev(void);

/* Symbol: _ZN4Json6ReaderC2Ev */
/* Demangled: Json::Reader::Reader() */
int _ZN4Json6ReaderC2Ev(void);

/* Symbol: _ZN4Json9OurReader21readStringSingleQuoteEv */
/* Demangled: Json::OurReader::readStringSingleQuote() */
int _ZN4Json9OurReader21readStringSingleQuoteEv(void);

/* Symbol: _ZNK4Json5Value8Comments3getENS_16CommentPlacementE */
/* Demangled: Json::Value::Comments::get(Json::CommentPlacement) const */
int _ZNK4Json5Value8Comments3getENS_16CommentPlacementE(void);

/* Symbol: _ZN4Json18StyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StyledStreamWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json18StyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json12StreamWriter7FactoryD0Ev */
/* Demangled: Json::StreamWriter::Factory::~Factory() */
int _ZN4Json12StreamWriter7FactoryD0Ev(void);

/* Symbol: _ZTVN7android7perfmgr4NodeE */
/* Demangled: vtable for android::perfmgr::Node */
extern void* _ZTVN7android7perfmgr4NodeE;

/* Symbol: _ZN4Json5Value8CZStringC2EPKcjNS1_17DuplicationPolicyE */
/* Demangled: Json::Value::CZString::CZString(char const*, unsigned int, Json::Value::CZString::DuplicationPolicy) */
int _ZN4Json5Value8CZStringC2EPKcjNS1_17DuplicationPolicyE(void);

/* Symbol: _ZN4Json5ValueC2ERKS0_ */
/* Demangled: Json::Value::Value(Json::Value const&) */
int _ZN4Json5ValueC2ERKS0_(void);

/* Symbol: _ZNK7android7perfmgr4Node13GetValueIndexERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPm */
/* Demangled: android::perfmgr::Node::GetValueIndex(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long*) const */
int _ZNK7android7perfmgr4Node13GetValueIndexERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPm(void);

/* Symbol: _ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE */
/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */
int _ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE(void);

/* Symbol: _ZN4Json12StyledWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StyledWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json12StyledWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr12PropertyNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb */
/* Demangled: android::perfmgr::PropertyNode::PropertyNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool) */
int _ZN7android7perfmgr12PropertyNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb(void);

/* Symbol: _ZN7android7perfmgr10AdpfConfig15getPidIHighDivIEv */
/* Demangled: android::perfmgr::AdpfConfig::getPidIHighDivI() */
int _ZN7android7perfmgr10AdpfConfig15getPidIHighDivIEv(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider17sOriginalProviderE */
/* Demangled: android::perfmgr::FlagProvider::sOriginalProvider */
extern void* _ZN7android7perfmgr12FlagProvider17sOriginalProviderE;

/* Symbol: _ZN4Json9OurReader7skipBomEb */
/* Demangled: Json::OurReader::skipBom(bool) */
int _ZN4Json9OurReader7skipBomEb(void);

/* Symbol: _ZN4Json5Value8CZStringD2Ev */
/* Demangled: Json::Value::CZString::~CZString() */
int _ZN4Json5Value8CZStringD2Ev(void);

/* Symbol: _ZN4Json5Value16resolveReferenceEPKc */
/* Demangled: Json::Value::resolveReference(char const*) */
int _ZN4Json5Value16resolveReferenceEPKc(void);

/* Symbol: _ZN4Json5ValueixERKNS_12StaticStringE */
/* Demangled: Json::Value::operator[](Json::StaticString const&) */
int _ZN4Json5ValueixERKNS_12StaticStringE(void);

/* Symbol: _ZNK7android7perfmgr4Node8GetPathsEv */
/* Demangled: android::perfmgr::Node::GetPaths() const */
int _ZNK7android7perfmgr4Node8GetPathsEv(void);

/* Symbol: _ZN7android7perfmgr9EventNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE */
/* Demangled: android::perfmgr::EventNode::EventNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, std::__1::function<void (std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)>) */
int _ZN7android7perfmgr9EventNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE(void);

/* Symbol: _ZN4Json6Reader5parseEPKcS2_RNS_5ValueEb */
/* Demangled: Json::Reader::parse(char const*, char const*, Json::Value&, bool) */
int _ZN4Json6Reader5parseEPKcS2_RNS_5ValueEb(void);

/* Symbol: _ZN4Json6Reader10readStringEv */
/* Demangled: Json::Reader::readString() */
int _ZN4Json6Reader10readStringEv(void);

/* Symbol: _ZNK4Json9OurReader25getFormattedErrorMessagesEv */
/* Demangled: Json::OurReader::getFormattedErrorMessages() const */
int _ZNK4Json9OurReader25getFormattedErrorMessagesEv(void);

/* Symbol: _ZN4Json15throwLogicErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: Json::throwLogicError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json15throwLogicErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5Value8CommentsaSERKS1_ */
/* Demangled: Json::Value::Comments::operator=(Json::Value::Comments const&) */
int _ZN4Json5Value8CommentsaSERKS1_(void);

/* Symbol: _ZN4Json12StyledWriter10writeValueERKNS_5ValueE */
/* Demangled: Json::StyledWriter::writeValue(Json::Value const&) */
int _ZN4Json12StyledWriter10writeValueERKNS_5ValueE(void);

/* Symbol: _ZTVN7android7perfmgr16NodeLooperThreadE */
/* Demangled: vtable for android::perfmgr::NodeLooperThread */
extern void* _ZTVN7android7perfmgr16NodeLooperThreadE;

/* Symbol: _ZN7android7perfmgr4NodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb */
/* Demangled: android::perfmgr::Node::Node(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool) */
int _ZN7android7perfmgr4NodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb(void);

/* Symbol: _ZN4Json5ValueC1ENS_9ValueTypeE */
/* Demangled: Json::Value::Value(Json::ValueType) */
int _ZN4Json5ValueC1ENS_9ValueTypeE(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManagerC1Em */
/* Demangled: android::perfmgr::JobQueueManager::JobQueueManager(unsigned long) */
int _ZN7android7perfmgr15JobQueueManagerC1Em(void);

/* Symbol: _ZNK4Json17ValueIteratorBase7isEqualERKS0_ */
/* Demangled: Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase const&) const */
int _ZNK4Json17ValueIteratorBase7isEqualERKS0_(void);

/* Symbol: _ZN4Json17ValueIteratorBase9incrementEv */
/* Demangled: Json::ValueIteratorBase::increment() */
int _ZN4Json17ValueIteratorBase9incrementEv(void);

/* Symbol: _ZN4Json5Value8CZString4swapERS1_ */
/* Demangled: Json::Value::CZString::swap(Json::Value::CZString&) */
int _ZN4Json5Value8CZString4swapERS1_(void);

/* Symbol: _ZNK4Json5ValueltERKS0_ */
/* Demangled: Json::Value::operator<(Json::Value const&) const */
int _ZNK4Json5ValueltERKS0_(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread10threadLoopEv */
/* Demangled: android::perfmgr::NodeLooperThread::threadLoop() */
int _ZN7android7perfmgr16NodeLooperThread10threadLoopEv(void);

/* Symbol: _ZN7android7perfmgr11HintManager10ParseNodesERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::ParseNodes(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager10ParseNodesERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr10AdpfConfig15getPidIInitDivIEv */
/* Demangled: android::perfmgr::AdpfConfig::getPidIInitDivI() */
int _ZN7android7perfmgr10AdpfConfig15getPidIInitDivIEv(void);

/* Symbol: _ZN4Json6Reader10readObjectERNS0_5TokenE */
/* Demangled: Json::Reader::readObject(Json::Reader::Token&) */
int _ZN4Json6Reader10readObjectERNS0_5TokenE(void);

/* Symbol: _ZN4Json6Reader10addCommentEPKcS2_NS_16CommentPlacementE */
/* Demangled: Json::Reader::addComment(char const*, char const*, Json::CommentPlacement) */
int _ZN4Json6Reader10addCommentEPKcS2_NS_16CommentPlacementE(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter10writeValueERKNS_5ValueE */
/* Demangled: Json::BuiltStyledStreamWriter::writeValue(Json::Value const&) */
int _ZN4Json23BuiltStyledStreamWriter10writeValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json18StyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::StyledStreamWriter::StyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN4Json18StyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5Value8CommentsC1EOS1_ */
/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments&&) */
int _ZN4Json5Value8CommentsC1EOS1_(void);

/* Symbol: _ZN7android7perfmgr11HintManager17ParseOtherConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::ParseOtherConfigs(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager17ParseOtherConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr9EventNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE */
/* Demangled: android::perfmgr::EventNode::EventNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, std::__1::function<void (std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)>) */
int _ZN7android7perfmgr9EventNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE(void);

/* Symbol: _ZN4Json6Reader5parseERNSt3__113basic_istreamIcNS1_11char_traitsIcEEEERNS_5ValueEb */
/* Demangled: Json::Reader::parse(std::__1::basic_istream<char, std::__1::char_traits<char> >&, Json::Value&, bool) */
int _ZN4Json6Reader5parseERNSt3__113basic_istreamIcNS1_11char_traitsIcEEEERNS_5ValueEb(void);

/* Symbol: _ZN4Json6Reader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: Json::Reader::decodeString(Json::Reader::Token&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN4Json6Reader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json9OurReaderC1ERKNS_11OurFeaturesE */
/* Demangled: Json::OurReader::OurReader(Json::OurFeatures const&) */
int _ZN4Json9OurReaderC1ERKNS_11OurFeaturesE(void);

/* Symbol: _ZNK7android7perfmgr11HintManager15IsHintSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::IsHintSupported(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr11HintManager15IsHintSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5Value9initBasicENS_9ValueTypeEb */
/* Demangled: Json::Value::initBasic(Json::ValueType, bool) */
int _ZN4Json5Value9initBasicENS_9ValueTypeEb(void);

/* Symbol: _ZNK4Json5Value8isMemberEPKcS2_ */
/* Demangled: Json::Value::isMember(char const*, char const*) const */
int _ZNK4Json5Value8isMemberEPKcS2_(void);

/* Symbol: _ZN4Json13ValueIteratorC1ERKS0_ */
/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */
int _ZN4Json13ValueIteratorC1ERKS0_(void);

/* Symbol: _ZN4Json12StreamWriterD0Ev */
/* Demangled: Json::StreamWriter::~StreamWriter() */
int _ZN4Json12StreamWriterD0Ev(void);

/* Symbol: _ZNK4Json5Value6isBoolEv */
/* Demangled: Json::Value::isBool() const */
int _ZNK4Json5Value6isBoolEv(void);

/* Symbol: _ZNK4Json5Value14toStyledStringEv */
/* Demangled: Json::Value::toStyledString() const */
int _ZNK4Json5Value14toStyledStringEv(void);

/* Symbol: _ZN4Json4Path12addPathInArgERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEERNS1_11__wrap_iterIPKSD_EENSB_4KindE */
/* Demangled: Json::Path::addPathInArg(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> > const&, std::__1::__wrap_iter<Json::PathArgument const* const*>&, Json::PathArgument::Kind) */
int _ZN4Json4Path12addPathInArgERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEERNS1_11__wrap_iterIPKSD_EENSB_4KindE(void);

/* Symbol: _ZN7android7perfmgr11HintManager12ParseActionsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorINS2_10unique_ptrINS0_4NodeENS2_14default_deleteISD_EEEENS6_ISG_EEEE */
/* Demangled: android::perfmgr::HintManager::ParseActions(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::unique_ptr<android::perfmgr::Node, std::__1::default_delete<android::perfmgr::Node> >, std::__1::allocator<std::__1::unique_ptr<android::perfmgr::Node, std::__1::default_delete<android::perfmgr::Node> > > > const&) */
int _ZN7android7perfmgr11HintManager12ParseActionsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorINS2_10unique_ptrINS0_4NodeENS2_14default_deleteISD_EEEENS6_ISG_EEEE(void);

/* Symbol: _ZN4Json18StyledStreamWriter6indentEv */
/* Demangled: Json::StyledStreamWriter::indent() */
int _ZN4Json18StyledStreamWriter6indentEv(void);

/* Symbol: _ZNK7android7perfmgr4Node9GetValuesEv */
/* Demangled: android::perfmgr::Node::GetValues() const */
int _ZNK7android7perfmgr4Node9GetValuesEv(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManager14dequeueRequestEv */
/* Demangled: android::perfmgr::JobQueueManager::dequeueRequest() */
int _ZN7android7perfmgr15JobQueueManager14dequeueRequestEv(void);

/* Symbol: _ZNK7android7perfmgr11HintManager13IsHintEnabledERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::IsHintEnabled(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr11HintManager13IsHintEnabledERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5Value6insertEjRKS0_ */
/* Demangled: Json::Value::insert(unsigned int, Json::Value const&) */
int _ZN4Json5Value6insertEjRKS0_(void);

/* Symbol: _ZN7android7perfmgr12RequestGroup13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::RequestGroup::RemoveRequest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr12RequestGroup13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr15JobQueueManager9returnJobEPNS0_3JobE */
/* Demangled: android::perfmgr::JobQueueManager::returnJob(android::perfmgr::Job*) */
int _ZN7android7perfmgr15JobQueueManager9returnJobEPNS0_3JobE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android7perfmgr10AdpfConfigENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::perfmgr::AdpfConfig, std::__1::allocator<android::perfmgr::AdpfConfig> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android7perfmgr10AdpfConfigENS_9allocatorIS3_EEEE;

/* Symbol: _ZNK7android7perfmgr9EventNode8DumpToFdEi */
/* Demangled: android::perfmgr::EventNode::DumpToFd(int) const */
int _ZNK7android7perfmgr9EventNode8DumpToFdEi(void);

/* Symbol: _ZTVN8powerhal5flags13flag_providerE */
/* Demangled: vtable for powerhal::flags::flag_provider */
extern void* _ZTVN8powerhal5flags13flag_providerE;

/* Symbol: _ZN4Json5Value8Comments3setENS_16CommentPlacementENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: Json::Value::Comments::set(Json::CommentPlacement, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN4Json5Value8Comments3setENS_16CommentPlacementENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZTVN4Json23BuiltStyledStreamWriterE */
/* Demangled: vtable for Json::BuiltStyledStreamWriter */
extern void* _ZTVN4Json23BuiltStyledStreamWriterE;

/* Symbol: _ZN7android7perfmgr15JobQueueManager10getFreeJobEv */
/* Demangled: android::perfmgr::JobQueueManager::getFreeJob() */
int _ZN7android7perfmgr15JobQueueManager10getFreeJobEv(void);

/* Symbol: _ZNK4Json5Value5asIntEv */
/* Demangled: Json::Value::asInt() const */
int _ZNK4Json5Value5asIntEv(void);

/* Symbol: _ZN4Json6Reader9readArrayERNS0_5TokenE */
/* Demangled: Json::Reader::readArray(Json::Reader::Token&) */
int _ZN4Json6Reader9readArrayERNS0_5TokenE(void);

/* Symbol: _ZNK4Json5Value8isObjectEv */
/* Demangled: Json::Value::isObject() const */
int _ZNK4Json5Value8isObjectEv(void);

/* Symbol: _ZN4Json5Value12removeMemberEPKcPS0_ */
/* Demangled: Json::Value::removeMember(char const*, Json::Value*) */
int _ZN4Json5Value12removeMemberEPKcPS0_(void);

/* Symbol: _ZTVN7android7perfmgr9EventNodeE */
/* Demangled: vtable for android::perfmgr::EventNode */
extern void* _ZTVN7android7perfmgr9EventNodeE;

/* Symbol: _ZNK4Json5Value8CZString5indexEv */
/* Demangled: Json::Value::CZString::index() const */
int _ZNK4Json5Value8CZString5indexEv(void);

/* Symbol: _ZN4Json5ValueC1EPKc */
/* Demangled: Json::Value::Value(char const*) */
int _ZN4Json5ValueC1EPKc(void);

/* Symbol: _ZN4Json10FastWriterC2Ev */
/* Demangled: Json::FastWriter::FastWriter() */
int _ZN4Json10FastWriterC2Ev(void);

/* Symbol: _ZN4Json6Reader17readCStyleCommentEv */
/* Demangled: Json::Reader::readCStyleComment() */
int _ZN4Json6Reader17readCStyleCommentEv(void);

/* Symbol: _ZN4Json6ReaderC1Ev */
/* Demangled: Json::Reader::Reader() */
int _ZN4Json6ReaderC1Ev(void);

/* Symbol: _ZN4Json17ValueIteratorBase5derefEv */
/* Demangled: Json::ValueIteratorBase::deref() */
int _ZN4Json17ValueIteratorBase5derefEv(void);

/* Symbol: _ZTVN4Json19StreamWriterBuilderE */
/* Demangled: vtable for Json::StreamWriterBuilder */
extern void* _ZTVN4Json19StreamWriterBuilderE;

/* Symbol: _ZN4Json9OurReader12currentValueEv */
/* Demangled: Json::OurReader::currentValue() */
int _ZN4Json9OurReader12currentValueEv(void);

/* Symbol: _ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE */
/* Demangled: android::perfmgr::HintManager::DoHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
int _ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE(void);

/* Symbol: _ZNK4Json9OurReader24getLocationLineAndColumnEPKcRiS3_ */
/* Demangled: Json::OurReader::getLocationLineAndColumn(char const*, int&, int&) const */
int _ZNK4Json9OurReader24getLocationLineAndColumnEPKcRiS3_(void);

/* Symbol: _ZNK4Json19StreamWriterBuilder8validateEPNS_5ValueE */
/* Demangled: Json::StreamWriterBuilder::validate(Json::Value*) const */
int _ZNK4Json19StreamWriterBuilder8validateEPNS_5ValueE(void);

/* Symbol: _ZN7android7perfmgr12FlagProvider13OverrideValueEPFbvEb */
/* Demangled: android::perfmgr::FlagProvider::OverrideValue(bool (*)(), bool) */
int _ZN7android7perfmgr12FlagProvider13OverrideValueEPFbvEb(void);

/* Symbol: _ZN4Json9OurReader16recoverFromErrorENS0_9TokenTypeE */
/* Demangled: Json::OurReader::recoverFromError(Json::OurReader::TokenType) */
int _ZN4Json9OurReader16recoverFromErrorENS0_9TokenTypeE(void);

/* Symbol: _ZNK4Json5Value8CZString6lengthEv */
/* Demangled: Json::Value::CZString::length() const */
int _ZNK4Json5Value8CZString6lengthEv(void);

/* Symbol: _ZN4Json5ValueC2ERKNS_12StaticStringE */
/* Demangled: Json::Value::Value(Json::StaticString const&) */
int _ZN4Json5ValueC2ERKNS_12StaticStringE(void);

/* Symbol: _ZN4Json5Value8CZStringD1Ev */
/* Demangled: Json::Value::CZString::~CZString() */
int _ZN4Json5Value8CZStringD1Ev(void);

/* Symbol: _ZN7android7perfmgr16NodeLooperThread6CancelERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE */
/* Demangled: android::perfmgr::NodeLooperThread::Cancel(std::__1::vector<android::perfmgr::NodeAction, std::__1::allocator<android::perfmgr::NodeAction> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr16NodeLooperThread6CancelERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE(void);

/* Symbol: _ZNK7android7perfmgr8FileNode11GetTruncateEv */
/* Demangled: android::perfmgr::FileNode::GetTruncate() const */
int _ZNK7android7perfmgr8FileNode11GetTruncateEv(void);

/* Symbol: _ZN4Json17throwRuntimeErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: Json::throwRuntimeError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN4Json17throwRuntimeErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json5ValueaSERKS0_ */
/* Demangled: Json::Value::operator=(Json::Value const&) */
int _ZN4Json5ValueaSERKS0_(void);

/* Symbol: _ZNK7android7perfmgr11HintManager15IsAdpfSupportedEv */
/* Demangled: android::perfmgr::HintManager::IsAdpfSupported() const */
int _ZNK7android7perfmgr11HintManager15IsAdpfSupportedEv(void);

/* Symbol: _ZNK4Json6Reader24getLocationLineAndColumnEPKc */
/* Demangled: Json::Reader::getLocationLineAndColumn(char const*) const */
int _ZNK4Json6Reader24getLocationLineAndColumnEPKc(void);

/* Symbol: _ZNK4Json5Value8asDoubleEv */
/* Demangled: Json::Value::asDouble() const */
int _ZNK4Json5Value8asDoubleEv(void);

/* Symbol: _ZN4Json12PathArgumentC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: Json::PathArgument::PathArgument(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN4Json12PathArgumentC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr11HintManager8DumpToFdEi */
/* Demangled: android::perfmgr::HintManager::DumpToFd(int) */
int _ZN7android7perfmgr11HintManager8DumpToFdEi(void);

/* Symbol: _ZNK4Json5Value5isIntEv */
/* Demangled: Json::Value::isInt() const */
int _ZNK4Json5Value5isIntEv(void);

/* Symbol: _ZN4Json9OurReader10readNumberEb */
/* Demangled: Json::OurReader::readNumber(bool) */
int _ZN4Json9OurReader10readNumberEb(void);

/* Symbol: _ZN4Json5Value10dupPayloadERKS0_ */
/* Demangled: Json::Value::dupPayload(Json::Value const&) */
int _ZN4Json5Value10dupPayloadERKS0_(void);

/* Symbol: _ZN4Json5Value7dupMetaERKS0_ */
/* Demangled: Json::Value::dupMeta(Json::Value const&) */
int _ZN4Json5Value7dupMetaERKS0_(void);

/* Symbol: _ZN4Json12StyledWriter8unindentEv */
/* Demangled: Json::StyledWriter::unindent() */
int _ZN4Json12StyledWriter8unindentEv(void);

/* Symbol: _ZTTN7android7perfmgr16NodeLooperThreadE */
/* Demangled: VTT for android::perfmgr::NodeLooperThread */
extern void* _ZTTN7android7perfmgr16NodeLooperThreadE;

/* Symbol: _ZN4Json6Reader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj */
/* Demangled: Json::Reader::decodeUnicodeCodePoint(Json::Reader::Token&, char const*&, char const*, unsigned int&) */
int _ZN4Json6Reader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj(void);

/* Symbol: _ZN4Json5ValueC2EPKcS2_ */
/* Demangled: Json::Value::Value(char const*, char const*) */
int _ZN4Json5ValueC2EPKcS2_(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE */
/* Demangled: Json::BuiltStyledStreamWriter::BuiltStyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Json::CommentStyle::Enum, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, bool, unsigned int, Json::PrecisionType) */
int _ZN4Json23BuiltStyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE(void);

/* Symbol: _ZTVN7android7perfmgr12PropertyNodeE */
/* Demangled: vtable for android::perfmgr::PropertyNode */
extern void* _ZTVN7android7perfmgr12PropertyNodeE;

/* Symbol: _ZN7android7perfmgr11HintManager13EndHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::HintManager::EndHintStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android7perfmgr11HintManager13EndHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android7perfmgr10AdpfConfig14getPidILowDivIEv */
/* Demangled: android::perfmgr::AdpfConfig::getPidILowDivI() */
int _ZN7android7perfmgr10AdpfConfig14getPidILowDivIEv(void);

/* Symbol: _ZN4Json8FeaturesC2Ev */
/* Demangled: Json::Features::Features() */
int _ZN4Json8FeaturesC2Ev(void);

/* Symbol: _ZN4Json9OurReader17readCStyleCommentEPb */
/* Demangled: Json::OurReader::readCStyleComment(bool*) */
int _ZN4Json9OurReader17readCStyleCommentEPb(void);

/* Symbol: _ZN4Json18StyledStreamWriter5writeERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::write(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Json::Value const&) */
int _ZN4Json18StyledStreamWriter5writeERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS_5ValueE(void);

/* Symbol: _ZN4Json5Value6demandEPKcS2_ */
/* Demangled: Json::Value::demand(char const*, char const*) */
int _ZN4Json5Value6demandEPKcS2_(void);

/* Symbol: _ZNK4Json5Value6isUIntEv */
/* Demangled: Json::Value::isUInt() const */
int _ZNK4Json5Value6isUIntEv(void);

/* Symbol: _ZNK4Json5Value8Comments3hasENS_16CommentPlacementE */
/* Demangled: Json::Value::Comments::has(Json::CommentPlacement) const */
int _ZNK4Json5Value8Comments3hasENS_16CommentPlacementE(void);

/* Symbol: _ZN4Json12PathArgumentC1EPKc */
/* Demangled: Json::PathArgument::PathArgument(char const*) */
int _ZN4Json12PathArgumentC1EPKc(void);

/* Symbol: _ZN7android7perfmgr11HintManager16DumpOtherConfigsEi */
/* Demangled: android::perfmgr::HintManager::DumpOtherConfigs(int) */
int _ZN7android7perfmgr11HintManager16DumpOtherConfigsEi(void);

/* Symbol: powerhal_flags_gpu_load_up_for_blurs */
/* Demangled: powerhal_flags_gpu_load_up_for_blurs */
int powerhal_flags_gpu_load_up_for_blurs(void);

/* Symbol: _ZN4Json5Value8CommentsC1ERKS1_ */
/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments const&) */
int _ZN4Json5Value8CommentsC1ERKS1_(void);

/* Symbol: _ZN4Json6Reader12decodeNumberERNS0_5TokenE */
/* Demangled: Json::Reader::decodeNumber(Json::Reader::Token&) */
int _ZN4Json6Reader12decodeNumberERNS0_5TokenE(void);

/* Symbol: _ZN4Json5Value11copyPayloadERKS0_ */
/* Demangled: Json::Value::copyPayload(Json::Value const&) */
int _ZN4Json5Value11copyPayloadERKS0_(void);

/* Symbol: _ZN4Json9OurReader10skipSpacesEv */
/* Demangled: Json::OurReader::skipSpaces() */
int _ZN4Json9OurReader10skipSpacesEv(void);

/* Symbol: _ZN4Json5Value8CZStringC2ERKS1_ */
/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString const&) */
int _ZN4Json5Value8CZStringC2ERKS1_(void);

/* Symbol: _ZN4Json18ValueConstIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE */
/* Demangled: Json::ValueConstIterator::ValueConstIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
int _ZN4Json18ValueConstIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void);

/* Symbol: _ZN4Json4PathC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_ */
/* Demangled: Json::Path::Path(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */
int _ZN4Json4PathC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_(void);

/* Symbol: _ZN4Json10FastWriterC1Ev */
/* Demangled: Json::FastWriter::FastWriter() */
int _ZN4Json10FastWriterC1Ev(void);

/* Symbol: _ZNK7android7perfmgr4Node7GetNameEv */
/* Demangled: android::perfmgr::Node::GetName() const */
int _ZNK7android7perfmgr4Node7GetNameEv(void);

/* Symbol: _ZNK4Json5Value4sizeEv */
/* Demangled: Json::Value::size() const */
int _ZNK4Json5Value4sizeEv(void);

/* Symbol: _ZN4Json9OurReader5matchEPKci */
/* Demangled: Json::OurReader::match(char const*, int) */
int _ZN4Json9OurReader5matchEPKci(void);

/* Symbol: _ZN4Json5Value4copyERKS0_ */
/* Demangled: Json::Value::copy(Json::Value const&) */
int _ZN4Json5Value4copyERKS0_(void);

/* Symbol: _ZN4Json5Value6appendERKS0_ */
/* Demangled: Json::Value::append(Json::Value const&) */
int _ZN4Json5Value6appendERKS0_(void);

/* Symbol: _ZN4Json12PathArgumentC2Ej */
/* Demangled: Json::PathArgument::PathArgument(unsigned int) */
int _ZN4Json12PathArgumentC2Ej(void);

/* Symbol: _ZNK7android7perfmgr12RequestGroup8DumpToFdEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::perfmgr::RequestGroup::DumpToFd(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNK7android7perfmgr12RequestGroup8DumpToFdEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN4Json18ValueConstIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE */
/* Demangled: Json::ValueConstIterator::ValueConstIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
int _ZN4Json18ValueConstIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void);

/* Symbol: _ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
int _ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void);

/* Symbol: _ZNK7android7perfmgr4Node15GetDefaultIndexEv */
/* Demangled: android::perfmgr::Node::GetDefaultIndex() const */
int _ZNK7android7perfmgr4Node15GetDefaultIndexEv(void);

/* Symbol: _ZN4Json6Reader5matchEPKci */
/* Demangled: Json::Reader::match(char const*, int) */
int _ZN4Json6Reader5matchEPKci(void);

/* Symbol: _ZN4Json9OurReader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj */
/* Demangled: Json::OurReader::decodeUnicodeEscapeSequence(Json::OurReader::Token&, char const*&, char const*, unsigned int&) */
int _ZN4Json9OurReader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj(void);

/* Symbol: _ZN4Json5Value8CZStringC1EPKcjNS1_17DuplicationPolicyE */
/* Demangled: Json::Value::CZString::CZString(char const*, unsigned int, Json::Value::CZString::DuplicationPolicy) */
int _ZN4Json5Value8CZStringC1EPKcjNS1_17DuplicationPolicyE(void);

/* Symbol: _ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE */
/* Demangled: Json::StyledStreamWriter::writeValue(Json::Value const&) */
int _ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE(void);

/* Symbol: _ZN4Json17ValueIteratorBase4copyERKS0_ */
/* Demangled: Json::ValueIteratorBase::copy(Json::ValueIteratorBase const&) */
int _ZN4Json17ValueIteratorBase4copyERKS0_(void);

/* Symbol: _ZN4Json23BuiltStyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE */
/* Demangled: Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
int _ZN4Json23BuiltStyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void);

/* Symbol: _ZN4Json9OurReader10readObjectERNS0_5TokenE */
/* Demangled: Json::OurReader::readObject(Json::OurReader::Token&) */
int _ZN4Json9OurReader10readObjectERNS0_5TokenE(void);

/* Symbol: _ZN4Json5Value14setOffsetLimitEl */
/* Demangled: Json::Value::setOffsetLimit(long) */
int _ZN4Json5Value14setOffsetLimitEl(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPERFMGR_H */
