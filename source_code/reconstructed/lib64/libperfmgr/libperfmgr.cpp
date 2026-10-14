/*
 * Reverse-Engineered Source for: libperfmgr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libperfmgr"

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
#include "libperfmgr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::perfmgr::HintManager::OnNodeUpdate(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager12OnNodeUpdateERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorIS8_NS6_IS8_EEEESA_(void) {
    ALOGD("_ZN7android7perfmgr11HintManager12OnNodeUpdateERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorIS8_NS6_IS8_EEEESA_() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::deref() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase5derefEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase5derefEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5ValueC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberEPKc(void) {
    ALOGD("_ZN4Json5Value12removeMemberEPKc() called");
    return 0;
}

/* Demangled: Json::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4JsonlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_5ValueE(void) {
    ALOGD("_ZN4JsonlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Reader::decodeUnicodeEscapeSequence(Json::Reader::Token&, char const*&, char const*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj(void) {
    ALOGD("_ZN4Json6Reader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj() called");
    return 0;
}

/* Demangled: Json::valueToQuotedString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19valueToQuotedStringEPKc(void) {
    ALOGD("_ZN4Json19valueToQuotedStringEPKc() called");
    return 0;
}

/* Demangled: Json::FastWriter::enableYAMLCompatibility() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter23enableYAMLCompatibilityEv(void) {
    ALOGD("_ZN4Json10FastWriter23enableYAMLCompatibilityEv() called");
    return 0;
}

/* Demangled: Json::Value::get(char const*, char const*, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getEPKcS2_RKS0_(void) {
    ALOGD("_ZNK4Json5Value3getEPKcS2_RKS0_() called");
    return 0;
}

/* Demangled: Json::Value::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3endEv(void) {
    ALOGD("_ZNK4Json5Value3endEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixEi(void) {
    ALOGD("_ZNK4Json5ValueixEi() called");
    return 0;
}

/* Demangled: Json::Value::hasComment(Json::CommentPlacement) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value10hasCommentENS_16CommentPlacementE(void) {
    ALOGD("_ZNK4Json5Value10hasCommentENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC1ERKNS_13ValueIteratorE(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC1ERKNS_13ValueIteratorE() called");
    return 0;
}

/* Demangled: Json::Reader::decodeNumber(Json::Reader::Token&, Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12decodeNumberERNS0_5TokenERNS_5ValueE(void) {
    ALOGD("_ZN4Json6Reader12decodeNumberERNS0_5TokenERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::getOffsetLimit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14getOffsetLimitEv(void) {
    ALOGD("_ZNK4Json5Value14getOffsetLimitEv() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2ERKS0_(void) {
    ALOGD("_ZN4Json13ValueIteratorC2ERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::operator[](unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixEj(void) {
    ALOGD("_ZNK4Json5ValueixEj() called");
    return 0;
}

/* Demangled: Json::OurReader::addComment(char const*, char const*, Json::CommentPlacement) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader10addCommentEPKcS2_NS_16CommentPlacementE(void) {
    ALOGD("_ZN4Json9OurReader10addCommentEPKcS2_NS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::OurReader::getStructuredErrors() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json9OurReader19getStructuredErrorsEv(void) {
    ALOGD("_ZNK4Json9OurReader19getStructuredErrorsEv() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::CharReaderBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilderC2Ev(void) {
    ALOGD("_ZN4Json17CharReaderBuilderC2Ev() called");
    return 0;
}

/* Demangled: Json::FastWriter::write(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter5writeERKNS_5ValueE(void) {
    ALOGD("_ZN4Json10FastWriter5writeERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::StreamWriterBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilderC2Ev(void) {
    ALOGD("_ZN4Json19StreamWriterBuilderC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::operator[](char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixEPKc(void) {
    ALOGD("_ZN4Json5ValueixEPKc() called");
    return 0;
}

/* Demangled: Json::Reader::readValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader9readValueEv(void) {
    ALOGD("_ZN4Json6Reader9readValueEv() called");
    return 0;
}

/* Demangled: Json::OurReader::readArray(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader9readArrayERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader9readArrayERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::OurReader::addErrorAndRecover(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::OurReader::Token&, Json::OurReader::TokenType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE(void) {
    ALOGD("_ZN4Json9OurReader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Features::Features() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json8FeaturesC1Ev(void) {
    ALOGD("_ZN4Json8FeaturesC1Ev() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::operator=(Json::ValueIteratorBase const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratoraSERKNS_17ValueIteratorBaseE(void) {
    ALOGD("_ZN4Json18ValueConstIteratoraSERKNS_17ValueIteratorBaseE() called");
    return 0;
}

/* Demangled: Json::Value::operator!=(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueneERKS0_(void) {
    ALOGD("_ZNK4Json5ValueneERKS0_() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2Ev(void) {
    ALOGD("_ZN4Json12PathArgumentC2Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::EndHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager7EndHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager7EndHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetAdpfProfileFromDoHint() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager24GetAdpfProfileFromDoHintEv(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager24GetAdpfProfileFromDoHintEv() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(char const*, char const*, Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberEPKcS2_PS0_(void) {
    ALOGD("_ZN4Json5Value12removeMemberEPKcS2_PS0_() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::indent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter6indentEv(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter6indentEv() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeDouble(Json::OurReader::Token&, Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12decodeDoubleERNS0_5TokenERNS_5ValueE(void) {
    ALOGD("_ZN4Json9OurReader12decodeDoubleERNS0_5TokenERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::isArray() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7isArrayEv(void) {
    ALOGD("_ZNK4Json5Value7isArrayEv() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::write(Json::Value const&, std::__1::basic_ostream<char, std::__1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter5writeERKNS_5ValueEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter5writeERKNS_5ValueEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: Json::Reader::pushError(Json::Value const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::operator>>(std::__1::basic_istream<char, std::__1::char_traits<char> >&, Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4JsonrsERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERNS_5ValueE(void) {
    ALOGD("_ZN4JsonrsERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ERKS0_(void) {
    ALOGD("_ZN4Json5ValueC1ERKS0_() called");
    return 0;
}

/* Demangled: Json::parseFromStream(Json::CharReader::Factory const&, std::__1::basic_istream<char, std::__1::char_traits<char> >&, Json::Value*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json15parseFromStreamERKNS_10CharReader7FactoryERNSt3__113basic_istreamIcNS4_11char_traitsIcEEEEPNS_5ValueEPNS4_12basic_stringIcS7_NS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json15parseFromStreamERKNS_10CharReader7FactoryERNSt3__113basic_istreamIcNS4_11char_traitsIcEEEEPNS_5ValueEPNS4_12basic_stringIcS7_NS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::asFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7asFloatEv(void) {
    ALOGD("_ZNK4Json5Value7asFloatEv() called");
    return 0;
}

/* Demangled: Json::Features::all() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json8Features3allEv(void) {
    ALOGD("_ZN4Json8Features3allEv() called");
    return 0;
}

/* Demangled: Json::OurReader::addError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::OurReader::Token&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc(void) {
    ALOGD("_ZN4Json9OurReader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc() called");
    return 0;
}

/* Demangled: Json::Value::operator==(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueeqERKS0_(void) {
    ALOGD("_ZNK4Json5ValueeqERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::Comments::operator=(Json::Value::Comments&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CommentsaSEOS1_(void) {
    ALOGD("_ZN4Json5Value8CommentsaSEOS1_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::hasCommentForValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::UnregisterAdpfUpdateEvent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::function<void (std::__1::shared_ptr<android::perfmgr::AdpfConfig>)>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager25UnregisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager25UnregisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE() called");
    return 0;
}

/* Demangled: Json::Reader::readComment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader11readCommentEv(void) {
    ALOGD("_ZN4Json6Reader11readCommentEv() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC2Ev(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValuecvbEv(void) {
    ALOGD("_ZNK4Json5ValuecvbEv() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1Ej(void) {
    ALOGD("_ZN4Json12PathArgumentC1Ej() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::StyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::getString(char const**, char const**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value9getStringEPPKcS3_(void) {
    ALOGD("_ZNK4Json5Value9getStringEPPKcS3_() called");
    return 0;
}

/* Demangled: Json::Value::getComment(Json::CommentPlacement) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value10getCommentENS_16CommentPlacementE(void) {
    ALOGD("_ZNK4Json5Value10getCommentENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::Reload(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager6ReloadEb(void) {
    ALOGD("_ZN7android7perfmgr11HintManager6ReloadEb() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeIndent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter11writeIndentEv(void) {
    ALOGD("_ZN4Json18StyledStreamWriter11writeIndentEv() called");
    return 0;
}

/* Demangled: Json::Reader::skipSpaces() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader10skipSpacesEv(void) {
    ALOGD("_ZN4Json6Reader10skipSpacesEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator=(Json::Value::CZString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringaSERKS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringaSERKS1_() called");
    return 0;
}

/* Demangled: Json::Value::append(Json::Value&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6appendEOS0_(void) {
    ALOGD("_ZN4Json5Value6appendEOS0_() called");
    return 0;
}

/* Demangled: Json::Path::invalidPath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4Path11invalidPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZN4Json4Path11invalidPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeCommentBeforeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager5StartEv(void) {
    ALOGD("_ZN7android7perfmgr11HintManager5StartEv() called");
    return 0;
}

/* Demangled: Json::Value::asString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8asStringEv(void) {
    ALOGD("_ZNK4Json5Value8asStringEv() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::GetterFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider16GetterFromStringERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider16GetterFromStringERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Reader::getStructuredErrors() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json6Reader19getStructuredErrorsEv(void) {
    ALOGD("_ZNK4Json6Reader19getStructuredErrorsEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Eb(void) {
    ALOGD("_ZN4Json5ValueC2Eb() called");
    return 0;
}

/* Demangled: Json::Value::isValidIndex(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value12isValidIndexEj(void) {
    ALOGD("_ZNK4Json5Value12isValidIndexEj() called");
    return 0;
}

/* Demangled: Json::Reader::skipCommentTokens(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader17skipCommentTokensERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader17skipCommentTokensERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Reader::getFormattedErrorMessages() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json6Reader25getFormattedErrorMessagesEv(void) {
    ALOGD("_ZNK4Json6Reader25getFormattedErrorMessagesEv() called");
    return 0;
}

/* Demangled: Json::Reader::pushError(Json::Value const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES3_(void) {
    ALOGD("_ZN4Json6Reader9pushErrorERKNS_5ValueERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEES3_() called");
    return 0;
}

/* Exported Object: vtable for Json::OurCharReader */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json13OurCharReaderE = NULL;

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::StaticString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ERKNS_12StaticStringE(void) {
    ALOGD("_ZN4Json5ValueC1ERKNS_12StaticStringE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeArrayValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::PropertyNode::PropertyNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12PropertyNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb(void) {
    ALOGD("_ZN7android7perfmgr12PropertyNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb() called");
    return 0;
}

/* Demangled: Json::Value::asUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6asUIntEv(void) {
    ALOGD("_ZNK4Json5Value6asUIntEv() called");
    return 0;
}

/* Demangled: Json::Reader::decodeDouble(Json::Reader::Token&, Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12decodeDoubleERNS0_5TokenERNS_5ValueE(void) {
    ALOGD("_ZN4Json6Reader12decodeDoubleERNS0_5TokenERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::index() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase5indexEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase5indexEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ed(void) {
    ALOGD("_ZN4Json5ValueC2Ed() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::perfmgr::NodeLooperThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android7perfmgr16NodeLooperThreadE0_NS_6ThreadE = NULL;

/* Demangled: Json::OurReader::decodeString(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12decodeStringERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader12decodeStringERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::memberName(char const**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase10memberNameEPPKc(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase10memberNameEPPKc() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::DoHintStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager12DoHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager12DoHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE() called");
    return 0;
}

/* Demangled: Json::Value::isInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7isInt64Ev(void) {
    ALOGD("_ZNK4Json5Value7isInt64Ev() called");
    return 0;
}

/* Demangled: Json::Value::operator>(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValuegtERKS0_(void) {
    ALOGD("_ZNK4Json5ValuegtERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::isNull() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6isNullEv(void) {
    ALOGD("_ZNK4Json5Value6isNullEv() called");
    return 0;
}

/* Demangled: Json::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6WriterD2Ev(void) {
    ALOGD("_ZN4Json6WriterD2Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase4nameEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase4nameEv() called");
    return 0;
}

/* Demangled: Json::Value::isMember(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isMemberEPKc(void) {
    ALOGD("_ZNK4Json5Value8isMemberEPKc() called");
    return 0;
}

/* Demangled: Json::valueToString(double, unsigned int, Json::PrecisionType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEdjNS_13PrecisionTypeE(void) {
    ALOGD("_ZN4Json13valueToStringEdjNS_13PrecisionTypeE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::write(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter5writeERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter5writeERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::CharReaderBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilderC1Ev(void) {
    ALOGD("_ZN4Json17CharReaderBuilderC1Ev() called");
    return 0;
}

/* Demangled: Json::Reader::containsNewLine(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader15containsNewLineEPKcS2_(void) {
    ALOGD("_ZN4Json6Reader15containsNewLineEPKcS2_() called");
    return 0;
}

/* Demangled: Json::Reader::normalizeEOL(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12normalizeEOLEPKcS2_(void) {
    ALOGD("_ZN4Json6Reader12normalizeEOLEPKcS2_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2EOS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringC2EOS1_() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::StreamWriterBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilderC1Ev(void) {
    ALOGD("_ZN4Json19StreamWriterBuilderC1Ev() called");
    return 0;
}

/* Exported Object: std::__1::piecewise_construct */
extern "C" __attribute__((visibility("default"))) void* _ZNSt3__119piecewise_constructE = NULL;

/* Demangled: android::perfmgr::HintManager::ParseAdpfConfigs(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager16ParseAdpfConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager16ParseAdpfConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::IsAdpfProfileSupported(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager22IsAdpfProfileSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager22IsAdpfProfileSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ei(void) {
    ALOGD("_ZN4Json5ValueC2Ei() called");
    return 0;
}

/* Demangled: Json::FastWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json10FastWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Reader::addError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Reader::Token&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc(void) {
    ALOGD("_ZN4Json6Reader8addErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenEPKc() called");
    return 0;
}

/* Demangled: Json::Reader::readCppStyleComment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader19readCppStyleCommentEv(void) {
    ALOGD("_ZN4Json6Reader19readCppStyleCommentEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixEPKc(void) {
    ALOGD("_ZNK4Json5ValueixEPKc() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::ValueType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ENS_9ValueTypeE(void) {
    ALOGD("_ZN4Json5ValueC2ENS_9ValueTypeE() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ej(void) {
    ALOGD("_ZN4Json5ValueC2Ej() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1Ev(void) {
    ALOGD("_ZN4Json12PathArgumentC1Ev() called");
    return 0;
}

/* Demangled: Json::valueToString(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEb(void) {
    ALOGD("_ZN4Json13valueToStringEb() called");
    return 0;
}

/* Demangled: Json::StyledWriter::indent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter6indentEv(void) {
    ALOGD("_ZN4Json12StyledWriter6indentEv() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::DumpToFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManager8DumpToFdEi(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManager8DumpToFdEi() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetAdpfProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager14GetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager14GetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::EventNode::Update(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr9EventNode6UpdateEb(void) {
    ALOGD("_ZN7android7perfmgr9EventNode6UpdateEb() called");
    return 0;
}

/* Exported Object: powerhal::flags::provider_ */
extern "C" __attribute__((visibility("default"))) void* _ZN8powerhal5flags9provider_E = NULL;

/* Demangled: powerhal_flags_test_flag */
extern "C" __attribute__((visibility("default"))) int powerhal_flags_test_flag(void) {
    ALOGD("powerhal_flags_test_flag() called");
    return 0;
}

/* Demangled: Json::OurReader::readComment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader11readCommentEv(void) {
    ALOGD("_ZN4Json9OurReader11readCommentEv() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::~CharReaderBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilderD2Ev(void) {
    ALOGD("_ZN4Json17CharReaderBuilderD2Ev() called");
    return 0;
}

/* Demangled: Json::Value::asCString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value9asCStringEv(void) {
    ALOGD("_ZNK4Json5Value9asCStringEv() called");
    return 0;
}

/* Demangled: Json::Path::resolve(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json4Path7resolveERKNS_5ValueE(void) {
    ALOGD("_ZNK4Json4Path7resolveERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::~StreamWriterBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilderD2Ev(void) {
    ALOGD("_ZN4Json19StreamWriterBuilderD2Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::SetUp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider5SetUpEv(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider5SetUpEv() called");
    return 0;
}

/* Demangled: Json::Reader::readNumber() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader10readNumberEv(void) {
    ALOGD("_ZN4Json6Reader10readNumberEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2El(void) {
    ALOGD("_ZN4Json5ValueC2El() called");
    return 0;
}

/* Demangled: Json::Value::releasePayload() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value14releasePayloadEv(void) {
    ALOGD("_ZN4Json5Value14releasePayloadEv() called");
    return 0;
}

/* Demangled: Json::FastWriter::omitEndingLineFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter18omitEndingLineFeedEv(void) {
    ALOGD("_ZN4Json10FastWriter18omitEndingLineFeedEv() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::GetHoldFd() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr8FileNode9GetHoldFdEv(void) {
    ALOGD("_ZNK7android7perfmgr8FileNode9GetHoldFdEv() called");
    return 0;
}

/* Demangled: android::perfmgr::PropertyNode::Update(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12PropertyNode6UpdateEb(void) {
    ALOGD("_ZN7android7perfmgr12PropertyNode6UpdateEb() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::Request(std::__1::vector<android::perfmgr::NodeAction, std::__1::allocator<android::perfmgr::NodeAction> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread7RequestERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread7RequestERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<android::perfmgr::HintStatus*, std::__1::shared_ptr<android::perfmgr::HintStatus>::__shared_ptr_default_delete<android::perfmgr::HintStatus, android::perfmgr::HintStatus>, std::__1::allocator<android::perfmgr::HintStatus> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN7android7perfmgr10HintStatusENS_10shared_ptrIS3_E27__shared_ptr_default_deleteIS3_S3_EENS_9allocatorIS3_EEEE = NULL;

/* Demangled: Json::Value::Value(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Em(void) {
    ALOGD("_ZN4Json5ValueC2Em() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::DropOverride(bool (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider12DropOverrideEPFbvE(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider12DropOverrideEPFbvE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase15computeDistanceERKS0_(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase15computeDistanceERKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::ClearOverrides() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider14ClearOverridesEv(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider14ClearOverridesEv() called");
    return 0;
}

/* Demangled: Json::Reader::getLocationLineAndColumn(char const*, int&, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json6Reader24getLocationLineAndColumnEPKcRiS3_(void) {
    ALOGD("_ZNK4Json6Reader24getLocationLineAndColumnEPKcRiS3_() called");
    return 0;
}

/* Demangled: Json::OurReader::getNextChar() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader11getNextCharEv(void) {
    ALOGD("_ZN4Json9OurReader11getNextCharEv() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC2ERKNS_13ValueIteratorE(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC2ERKNS_13ValueIteratorE() called");
    return 0;
}

/* Exported Object: Json::Value::nullRef */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value7nullRefE = NULL;

/* Demangled: Json::BuiltStyledStreamWriter::BuiltStyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Json::CommentStyle::Enum, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, bool, unsigned int, Json::PrecisionType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeNumber(Json::OurReader::Token&, Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12decodeNumberERNS0_5TokenERNS_5ValueE(void) {
    ALOGD("_ZN4Json9OurReader12decodeNumberERNS0_5TokenERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2Ev(void) {
    ALOGD("_ZN4Json13ValueIteratorC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::get(char const*, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getEPKcRKS0_(void) {
    ALOGD("_ZNK4Json5Value3getEPKcRKS0_() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC1Ev(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC1Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::AddRequest(unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr4Node10AddRequestEmRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE(void) {
    ALOGD("_ZN7android7perfmgr4Node10AddRequestEmRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::TearDown() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider8TearDownEv(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider8TearDownEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1EOS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringC1EOS1_() called");
    return 0;
}

/* Demangled: Json::valueToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEi(void) {
    ALOGD("_ZN4Json13valueToStringEi() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for Json::Writer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json6WriterE = NULL;

/* Demangled: Json::OurReader::parse(char const*, char const*, Json::Value&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader5parseEPKcS2_RNS_5ValueEb(void) {
    ALOGD("_ZN4Json9OurReader5parseEPKcS2_RNS_5ValueEb() called");
    return 0;
}

/* Demangled: Json::valueToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEj(void) {
    ALOGD("_ZN4Json13valueToStringEj() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::EndHintAction(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager13EndHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager13EndHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeDouble(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12decodeDoubleERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader12decodeDoubleERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::validate(Json::Value*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17CharReaderBuilder8validateEPNS_5ValueE(void) {
    ALOGD("_ZNK4Json17CharReaderBuilder8validateEPNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::asBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6asBoolEv(void) {
    ALOGD("_ZNK4Json5Value6asBoolEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Eb(void) {
    ALOGD("_ZN4Json5ValueC1Eb() called");
    return 0;
}

/* Demangled: Json::valueToString(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEl(void) {
    ALOGD("_ZN4Json13valueToStringEl() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeCommentBeforeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StreamWriter::StreamWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriterC2Ev(void) {
    ALOGD("_ZN4Json12StreamWriterC2Ev() called");
    return 0;
}

/* Exported Object: vtable for Json::StreamWriter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json12StreamWriterE = NULL;

/* Exported Object: Json::Value::null */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value4nullE = NULL;

/* Demangled: Json::valueToString(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEm(void) {
    ALOGD("_ZN4Json13valueToStringEm() called");
    return 0;
}

/* Demangled: android::perfmgr::RequestGroup::GetExpireTime(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12RequestGroup13GetExpireTimeEPNSt3__16chrono8durationIxNS2_5ratioILl1ELl1000EEEEE(void) {
    ALOGD("_ZN7android7perfmgr12RequestGroup13GetExpireTimeEPNSt3__16chrono8durationIxNS2_5ratioILl1ELl1000EEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetFromJSON(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager11GetFromJSONERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void) {
    ALOGD("_ZN7android7perfmgr11HintManager11GetFromJSONERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: Json::Value::empty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5emptyEv(void) {
    ALOGD("_ZNK4Json5Value5emptyEv() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeUnicodeCodePoint(Json::OurReader::Token&, char const*&, char const*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj(void) {
    ALOGD("_ZN4Json9OurReader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj() called");
    return 0;
}

/* Demangled: Json::Value::Value(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ed(void) {
    ALOGD("_ZN4Json5ValueC1Ed() called");
    return 0;
}

/* Demangled: Json::Value::isNumeric() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value9isNumericEv(void) {
    ALOGD("_ZNK4Json5Value9isNumericEv() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::GetInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider11GetInstanceEv(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider11GetInstanceEv() called");
    return 0;
}

/* Demangled: Json::OurReader::readValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader9readValueEv(void) {
    ALOGD("_ZN4Json9OurReader9readValueEv() called");
    return 0;
}

/* Demangled: Json::OurReader::getLocationLineAndColumn(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json9OurReader24getLocationLineAndColumnEPKc(void) {
    ALOGD("_ZNK4Json9OurReader24getLocationLineAndColumnEPKc() called");
    return 0;
}

/* Demangled: Json::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6WriterD1Ev(void) {
    ALOGD("_ZN4Json6WriterD1Ev() called");
    return 0;
}

/* Demangled: Json::Value::isUInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isUInt64Ev(void) {
    ALOGD("_ZNK4Json5Value8isUInt64Ev() called");
    return 0;
}

/* Demangled: Json::Value::type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value4typeEv(void) {
    ALOGD("_ZNK4Json5Value4typeEv() called");
    return 0;
}

/* Demangled: Json::Path::resolve(Json::Value const&, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json4Path7resolveERKNS_5ValueES3_(void) {
    ALOGD("_ZNK4Json4Path7resolveERKNS_5ValueES3_() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::DumpToFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread8DumpToFdEi(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread8DumpToFdEi() called");
    return 0;
}

/* Demangled: Json::Value::compare(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7compareERKS0_(void) {
    ALOGD("_ZNK4Json5Value7compareERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeArrayValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Features::strictMode() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json8Features10strictModeEv(void) {
    ALOGD("_ZN4Json8Features10strictModeEv() called");
    return 0;
}

/* Demangled: Json::OurReader::normalizeEOL(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12normalizeEOLEPKcS2_(void) {
    ALOGD("_ZN4Json9OurReader12normalizeEOLEPKcS2_() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::setDefaults(Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilder11setDefaultsEPNS_5ValueE(void) {
    ALOGD("_ZN4Json17CharReaderBuilder11setDefaultsEPNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::Value(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ei(void) {
    ALOGD("_ZN4Json5ValueC1Ei() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::memberName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase10memberNameEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase10memberNameEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ej(void) {
    ALOGD("_ZN4Json5ValueC1Ej() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::DumpToFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider8DumpToFdEi(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider8DumpToFdEi() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::~CharReaderBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilderD1Ev(void) {
    ALOGD("_ZN4Json17CharReaderBuilderD1Ev() called");
    return 0;
}

/* Demangled: Json::Value::swapPayload(Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11swapPayloadERS0_(void) {
    ALOGD("_ZN4Json5Value11swapPayloadERS0_() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC2Ev(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::getMemberNames() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14getMemberNamesEv(void) {
    ALOGD("_ZNK4Json5Value14getMemberNamesEv() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::~StreamWriterBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilderD1Ev(void) {
    ALOGD("_ZN4Json19StreamWriterBuilderD1Ev() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::unindent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter8unindentEv(void) {
    ALOGD("_ZN4Json18StyledStreamWriter8unindentEv() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::newCharReader() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17CharReaderBuilder13newCharReaderEv(void) {
    ALOGD("_ZNK4Json17CharReaderBuilder13newCharReaderEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1El(void) {
    ALOGD("_ZN4Json5ValueC1El() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1ERKS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringC1ERKS1_() called");
    return 0;
}

/* Demangled: Json::writeString(Json::StreamWriter::Factory const&, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json11writeStringERKNS_12StreamWriter7FactoryERKNS_5ValueE(void) {
    ALOGD("_ZN4Json11writeStringERKNS_12StreamWriter7FactoryERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::ValidateHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager12ValidateHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager12ValidateHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::AdpfConfig::dumpToFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr10AdpfConfig8dumpToFdEi(void) {
    ALOGD("_ZN7android7perfmgr10AdpfConfig8dumpToFdEi() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json17CharReaderBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Em(void) {
    ALOGD("_ZN4Json5ValueC1Em() called");
    return 0;
}

/* Demangled: Json::StreamWriter::Factory::~Factory() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriter7FactoryD2Ev(void) {
    ALOGD("_ZN4Json12StreamWriter7FactoryD2Ev() called");
    return 0;
}

/* Exported Object: vtable for Json::FastWriter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json10FastWriterE = NULL;

/* Demangled: Json::Value::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6resizeEj(void) {
    ALOGD("_ZN4Json5Value6resizeEj() called");
    return 0;
}

/* Demangled: Json::Value::get(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS0_(void) {
    ALOGD("_ZNK4Json5Value3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::FileNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, bool, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr8FileNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb(void) {
    ALOGD("_ZN7android7perfmgr8FileNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread10readyToRunEv(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread10readyToRunEv() called");
    return 0;
}

/* Demangled: Json::Reader::decodeDouble(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12decodeDoubleERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader12decodeDoubleERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::OurReader::readToken(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader9readTokenERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader9readTokenERNS0_5TokenE() called");
    return 0;
}

/* Exported Object: android::perfmgr::HintManager::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7perfmgr11HintManager9sInstanceE = NULL;

/* Demangled: Json::Value::CZString::data() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString4dataEv(void) {
    ALOGD("_ZNK4Json5Value8CZString4dataEv() called");
    return 0;
}

/* Demangled: Json::Path::Path(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4PathC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_(void) {
    ALOGD("_ZN4Json4PathC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1Ev(void) {
    ALOGD("_ZN4Json13ValueIteratorC1Ev() called");
    return 0;
}

/* Demangled: Json::Reader::parse(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader5parseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_5ValueEb(void) {
    ALOGD("_ZN4Json6Reader5parseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_5ValueEb() called");
    return 0;
}

/* Demangled: Json::OurReader::OurReader(Json::OurFeatures const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReaderC2ERKNS_11OurFeaturesE(void) {
    ALOGD("_ZN4Json9OurReaderC2ERKNS_11OurFeaturesE() called");
    return 0;
}

/* Demangled: Json::Path::makePath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4Path8makePathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEE(void) {
    ALOGD("_ZN4Json4Path8makePathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEE() called");
    return 0;
}

/* Demangled: Json::Value::swap(Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value4swapERS0_(void) {
    ALOGD("_ZN4Json5Value4swapERS0_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2Ej(void) {
    ALOGD("_ZN4Json5Value8CZStringC2Ej() called");
    return 0;
}

/* Demangled: Json::Reader::Reader(Json::Features const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6ReaderC2ERKNS_8FeaturesE(void) {
    ALOGD("_ZN4Json6ReaderC2ERKNS_8FeaturesE() called");
    return 0;
}

/* Demangled: Json::Reader::addErrorAndRecover(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Reader::Token&, Json::Reader::TokenType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE(void) {
    ALOGD("_ZN4Json6Reader18addErrorAndRecoverERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS0_5TokenENS0_9TokenTypeE() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::Value&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2EOS0_(void) {
    ALOGD("_ZN4Json5ValueC2EOS0_() called");
    return 0;
}

/* Demangled: Json::Value::find(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value4findEPKcS2_(void) {
    ALOGD("_ZNK4Json5Value4findEPKcS2_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::StyledWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriterC2Ev(void) {
    ALOGD("_ZN4Json12StyledWriterC2Ev() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::writeCommentBeforeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::setDefaults(Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilder11setDefaultsEPNS_5ValueE(void) {
    ALOGD("_ZN4Json19StreamWriterBuilder11setDefaultsEPNS_5ValueE() called");
    return 0;
}

/* Exported Object: vtable for Json::StyledWriter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json12StyledWriterE = NULL;

/* Demangled: android::perfmgr::HintManager::IsRunning() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager9IsRunningEv(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager9IsRunningEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixEi(void) {
    ALOGD("_ZN4Json5ValueixEi() called");
    return 0;
}

/* Demangled: android::perfmgr::Job::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr3Job5resetEv(void) {
    ALOGD("_ZN7android7perfmgr3Job5resetEv() called");
    return 0;
}

/* Demangled: Json::Reader::readToken(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader9readTokenERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader9readTokenERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Reader::getNextChar() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader11getNextCharEv(void) {
    ALOGD("_ZN4Json6Reader11getNextCharEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2EPKc(void) {
    ALOGD("_ZN4Json5ValueC2EPKc() called");
    return 0;
}

/* Demangled: Json::Value::operator<=(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueleERKS0_(void) {
    ALOGD("_ZNK4Json5ValueleERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::isMultilineArray(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter16isMultilineArrayERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter16isMultilineArrayERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::operator[](unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixEj(void) {
    ALOGD("_ZN4Json5ValueixEj() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeIndent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter11writeIndentEv(void) {
    ALOGD("_ZN4Json12StyledWriter11writeIndentEv() called");
    return 0;
}

/* Demangled: Json::OurFeatures::all() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json11OurFeatures3allEv(void) {
    ALOGD("_ZN4Json11OurFeatures3allEv() called");
    return 0;
}

/* Demangled: Json::OurReader::readCppStyleComment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader19readCppStyleCommentEv(void) {
    ALOGD("_ZN4Json9OurReader19readCppStyleCommentEv() called");
    return 0;
}

/* Demangled: Json::Value::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5beginEv(void) {
    ALOGD("_ZNK4Json5Value5beginEv() called");
    return 0;
}

/* Demangled: Json::Value::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value5clearEv(void) {
    ALOGD("_ZN4Json5Value5clearEv() called");
    return 0;
}

/* Demangled: Json::StreamWriter::~StreamWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriterD2Ev(void) {
    ALOGD("_ZN4Json12StreamWriterD2Ev() called");
    return 0;
}

/* Demangled: Json::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6WriterD0Ev(void) {
    ALOGD("_ZN4Json6WriterD0Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::RequestGroup::AddRequest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12RequestGroup10AddRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE(void) {
    ALOGD("_ZN7android7perfmgr12RequestGroup10AddRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono10time_pointINSB_12steady_clockENSB_8durationIxNS2_5ratioILl1ELl1000000000EEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::perfmgr::FileNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7perfmgr8FileNodeE = NULL;

/* Demangled: Json::Reader::recoverFromError(Json::Reader::TokenType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader16recoverFromErrorENS0_9TokenTypeE(void) {
    ALOGD("_ZN4Json6Reader16recoverFromErrorENS0_9TokenTypeE() called");
    return 0;
}

/* Demangled: Json::Value::~Value() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueD2Ev(void) {
    ALOGD("_ZN4Json5ValueD2Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::enqueueRequest(android::perfmgr::Job*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManager14enqueueRequestEPNS0_3JobE(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManager14enqueueRequestEPNS0_3JobE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetOtherConfigs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager15GetOtherConfigsEv(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager15GetOtherConfigsEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5ValueC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12PathArgumentC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::DoHintAction(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager12DoHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager12DoHintActionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::isString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isStringEv(void) {
    ALOGD("_ZNK4Json5Value8isStringEv() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS0_(void) {
    ALOGD("_ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS0_() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::~CharReaderBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilderD0Ev(void) {
    ALOGD("_ZN4Json17CharReaderBuilderD0Ev() called");
    return 0;
}

/* Exported Object: vtable for Json::CharReaderBuilder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json17CharReaderBuilderE = NULL;

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC1Ev(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC1Ev() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::Value&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1EOS0_(void) {
    ALOGD("_ZN4Json5ValueC1EOS0_() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::~StreamWriterBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilderD0Ev(void) {
    ALOGD("_ZN4Json19StreamWriterBuilderD0Ev() called");
    return 0;
}

/* Demangled: Json::CharReaderBuilder::strictMode(Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17CharReaderBuilder10strictModeEPNS_5ValueE(void) {
    ALOGD("_ZN4Json17CharReaderBuilder10strictModeEPNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::ValueIterator::operator=(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratoraSERKS0_(void) {
    ALOGD("_ZN4Json13ValueIteratoraSERKS0_() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::writeIndent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter11writeIndentEv(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter11writeIndentEv() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::newStreamWriter() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json19StreamWriterBuilder15newStreamWriterEv(void) {
    ALOGD("_ZNK4Json19StreamWriterBuilder15newStreamWriterEv() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::FileNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, bool, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr8FileNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb(void) {
    ALOGD("_ZN7android7perfmgr8FileNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbbbbb() called");
    return 0;
}

/* Demangled: Json::OurReader::skipCommentTokens(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader17skipCommentTokensERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader17skipCommentTokensERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::OurReader::readString() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader10readStringEv(void) {
    ALOGD("_ZN4Json9OurReader10readStringEv() called");
    return 0;
}

/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CommentsC2ERKS1_(void) {
    ALOGD("_ZN4Json5Value8CommentsC2ERKS1_() called");
    return 0;
}

/* Demangled: Json::Path::make(Json::Value&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json4Path4makeERNS_5ValueE(void) {
    ALOGD("_ZNK4Json4Path4makeERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::writeArrayValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter15writeArrayValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter15writeArrayValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StreamWriter::Factory::~Factory() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriter7FactoryD1Ev(void) {
    ALOGD("_ZN4Json12StreamWriter7FactoryD1Ev() called");
    return 0;
}

/* Demangled: Json::Value::isDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isDoubleEv(void) {
    ALOGD("_ZNK4Json5Value8isDoubleEv() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeNumber(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12decodeNumberERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader12decodeNumberERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Value::nullSingleton() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value13nullSingletonEv(void) {
    ALOGD("_ZN4Json5Value13nullSingletonEv() called");
    return 0;
}

/* Demangled: Json::Value::isConvertibleTo(Json::ValueType) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value15isConvertibleToENS_9ValueTypeE(void) {
    ALOGD("_ZNK4Json5Value15isConvertibleToENS_9ValueTypeE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::SetAdpfProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager14SetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_(void) {
    ALOGD("_ZN7android7perfmgr11HintManager14SetAdpfProfileERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeString(Json::OurReader::Token&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json9OurReader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json13ValueIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1ERKNS_18ValueConstIteratorE(void) {
    ALOGD("_ZN4Json13ValueIteratorC1ERKNS_18ValueConstIteratorE() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::GetResetOnInit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr4Node14GetResetOnInitEv(void) {
    ALOGD("_ZNK7android7perfmgr4Node14GetResetOnInitEv() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::DumpToFd(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr8FileNode8DumpToFdEi(void) {
    ALOGD("_ZNK7android7perfmgr8FileNode8DumpToFdEi() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread5StartEv(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread5StartEv() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetHints() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager8GetHintsEv(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager8GetHintsEv() called");
    return 0;
}

/* Demangled: powerhal_flags_ramp_down_sf_prefer_high_cap */
extern "C" __attribute__((visibility("default"))) int powerhal_flags_ramp_down_sf_prefer_high_cap(void) {
    ALOGD("powerhal_flags_ramp_down_sf_prefer_high_cap() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::decrement() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase9decrementEv(void) {
    ALOGD("_ZN4Json17ValueIteratorBase9decrementEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator<(Json::Value::CZString const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZStringltERKS1_(void) {
    ALOGD("_ZNK4Json5Value8CZStringltERKS1_() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json13ValueIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::Value::removeIndex(unsigned int, Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11removeIndexEjPS0_(void) {
    ALOGD("_ZN4Json5Value11removeIndexEjPS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::InitHintStatus(std::__1::unique_ptr<android::perfmgr::HintManager, std::__1::default_delete<android::perfmgr::HintManager> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager14InitHintStatusERKNSt3__110unique_ptrIS1_NS2_14default_deleteIS1_EEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager14InitHintStatusERKNSt3__110unique_ptrIS1_NS2_14default_deleteIS1_EEEE() called");
    return 0;
}

/* Demangled: Json::Value::setComment(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Json::CommentPlacement) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value10setCommentENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_16CommentPlacementE(void) {
    ALOGD("_ZN4Json5Value10setCommentENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::Value::asLargestUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value13asLargestUIntEv(void) {
    ALOGD("_ZNK4Json5Value13asLargestUIntEv() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2EPKc(void) {
    ALOGD("_ZN4Json12PathArgumentC2EPKc() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::GetAllowFailure() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr8FileNode15GetAllowFailureEv(void) {
    ALOGD("_ZNK7android7perfmgr8FileNode15GetAllowFailureEv() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::JobQueueManager(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManagerC2Em(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManagerC2Em() called");
    return 0;
}

/* Demangled: Json::Value::operator=(Json::Value&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueaSEOS0_(void) {
    ALOGD("_ZN4Json5ValueaSEOS0_() called");
    return 0;
}

/* Demangled: Json::Value::end() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value3endEv(void) {
    ALOGD("_ZN4Json5Value3endEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1Ej(void) {
    ALOGD("_ZN4Json5Value8CZStringC1Ej() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::isMultilineArray(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter16isMultilineArrayERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter16isMultilineArrayERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::getSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManager7getSizeEv(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManager7getSizeEv() called");
    return 0;
}

/* Demangled: Json::Reader::decodeString(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12decodeStringERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader12decodeStringERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::StyledWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriterC1Ev(void) {
    ALOGD("_ZN4Json12StyledWriterC1Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::RegisterAdpfUpdateEvent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::function<void (std::__1::shared_ptr<android::perfmgr::AdpfConfig>)>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager23RegisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager23RegisterAdpfUpdateEventERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_8functionIFvNS2_10shared_ptrINS0_10AdpfConfigEEEEEE() called");
    return 0;
}

/* Demangled: Json::Value::asLargestInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value12asLargestIntEv(void) {
    ALOGD("_ZNK4Json5Value12asLargestIntEv() called");
    return 0;
}

/* Demangled: Json::FastWriter::dropNullPlaceholders() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter20dropNullPlaceholdersEv(void) {
    ALOGD("_ZN4Json10FastWriter20dropNullPlaceholdersEv() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::unindent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter8unindentEv(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter8unindentEv() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::hasCommentForValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter18hasCommentForValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter18hasCommentForValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::RemoveRequest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr4Node13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr4Node13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::gpu_sysfs_config_path() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager21gpu_sysfs_config_pathEv(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager21gpu_sysfs_config_pathEv() called");
    return 0;
}

/* Demangled: Json::Value::asInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7asInt64Ev(void) {
    ALOGD("_ZNK4Json5Value7asInt64Ev() called");
    return 0;
}

/* Demangled: Json::Reader::getFormatedErrorMessages() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json6Reader24getFormatedErrorMessagesEv(void) {
    ALOGD("_ZNK4Json6Reader24getFormatedErrorMessagesEv() called");
    return 0;
}

/* Demangled: Json::Value::isMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK4Json5Value8isMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::key() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase3keyEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase3keyEv() called");
    return 0;
}

/* Demangled: Json::Value::operator>=(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValuegeERKS0_(void) {
    ALOGD("_ZNK4Json5ValuegeERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1EPKcS2_(void) {
    ALOGD("_ZN4Json5ValueC1EPKcS2_() called");
    return 0;
}

/* Demangled: android::perfmgr::PropertyNode::DumpToFd(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr12PropertyNode8DumpToFdEi(void) {
    ALOGD("_ZNK7android7perfmgr12PropertyNode8DumpToFdEi() called");
    return 0;
}

/* Demangled: Json::OurReader::containsNewLine(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader15containsNewLineEPKcS2_(void) {
    ALOGD("_ZN4Json9OurReader15containsNewLineEPKcS2_() called");
    return 0;
}

/* Demangled: Json::Value::begin() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value5beginEv(void) {
    ALOGD("_ZN4Json5Value5beginEv() called");
    return 0;
}

/* Demangled: Json::StreamWriter::~StreamWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriterD1Ev(void) {
    ALOGD("_ZN4Json12StreamWriterD1Ev() called");
    return 0;
}

/* Demangled: Json::Value::setOffsetStart(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value14setOffsetStartEl(void) {
    ALOGD("_ZN4Json5Value14setOffsetStartEl() called");
    return 0;
}

/* Demangled: android::perfmgr::RequestGroup::GetRequestValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr12RequestGroup15GetRequestValueEv(void) {
    ALOGD("_ZNK7android7perfmgr12RequestGroup15GetRequestValueEv() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::DoHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::~Value() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueD1Ev(void) {
    ALOGD("_ZN4Json5ValueD1Ev() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::isMultilineArray(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter16isMultilineArrayERKNS_5ValueE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter16isMultilineArrayERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::Update(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr8FileNode6UpdateEb(void) {
    ALOGD("_ZN7android7perfmgr8FileNode6UpdateEb() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread4StopEv(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread4StopEv() called");
    return 0;
}

/* Demangled: powerhal_flags_chrome_profile_bypass_hboost_severe_jank_level */
extern "C" __attribute__((visibility("default"))) int powerhal_flags_chrome_profile_bypass_hboost_severe_jank_level(void) {
    ALOGD("powerhal_flags_chrome_profile_bypass_hboost_severe_jank_level() called");
    return 0;
}

/* Demangled: Json::Reader::good() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json6Reader4goodEv(void) {
    ALOGD("_ZNK4Json6Reader4goodEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator=(Json::Value::CZString&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringaSEOS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringaSEOS1_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator==(Json::Value::CZString const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZStringeqERKS1_(void) {
    ALOGD("_ZNK4Json5Value8CZStringeqERKS1_() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetHintStats(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager12GetHintStatsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager12GetHintStatsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::GetInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager11GetInstanceEv(void) {
    ALOGD("_ZN7android7perfmgr11HintManager11GetInstanceEv() called");
    return 0;
}

/* Demangled: Json::Reader::Reader(Json::Features const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6ReaderC1ERKNS_8FeaturesE(void) {
    ALOGD("_ZN4Json6ReaderC1ERKNS_8FeaturesE() called");
    return 0;
}

/* Demangled: Json::Value::insert(unsigned int, Json::Value&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6insertEjOS0_(void) {
    ALOGD("_ZN4Json5Value6insertEjOS0_() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19StreamWriterBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json19StreamWriterBuilderixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for Json::StreamWriter::Factory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json12StreamWriter7FactoryE = NULL;

/* Demangled: Json::Value::get(unsigned int, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getEjRKS0_(void) {
    ALOGD("_ZNK4Json5Value3getEjRKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::SetAdpfProfileFromDoHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager24SetAdpfProfileFromDoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager24SetAdpfProfileFromDoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Reader::currentValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12currentValueEv(void) {
    ALOGD("_ZN4Json6Reader12currentValueEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::getOffsetStart() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14getOffsetStartEv(void) {
    ALOGD("_ZNK4Json5Value14getOffsetStartEv() called");
    return 0;
}

/* Demangled: Json::Value::resolveReference(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value16resolveReferenceEPKcS2_(void) {
    ALOGD("_ZN4Json5Value16resolveReferenceEPKcS2_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12StyledWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::perfmgr::FlagProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7perfmgr12FlagProviderE = NULL;

/* Demangled: Json::Value::CZString::isStaticString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString14isStaticStringEv(void) {
    ALOGD("_ZNK4Json5Value8CZString14isStaticStringEv() called");
    return 0;
}

/* Demangled: Json::Value::isIntegral() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value10isIntegralEv(void) {
    ALOGD("_ZNK4Json5Value10isIntegralEv() called");
    return 0;
}

/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CommentsC2EOS1_(void) {
    ALOGD("_ZN4Json5Value8CommentsC2EOS1_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::hasCommentForValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::asUInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8asUInt64Ev(void) {
    ALOGD("_ZNK4Json5Value8asUInt64Ev() called");
    return 0;
}

/* Demangled: Json::Reader::Reader() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6ReaderC2Ev(void) {
    ALOGD("_ZN4Json6ReaderC2Ev() called");
    return 0;
}

/* Demangled: Json::OurReader::readStringSingleQuote() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader21readStringSingleQuoteEv(void) {
    ALOGD("_ZN4Json9OurReader21readStringSingleQuoteEv() called");
    return 0;
}

/* Demangled: Json::Value::Comments::get(Json::CommentPlacement) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8Comments3getENS_16CommentPlacementE(void) {
    ALOGD("_ZNK4Json5Value8Comments3getENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::StreamWriter::Factory::~Factory() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriter7FactoryD0Ev(void) {
    ALOGD("_ZN4Json12StreamWriter7FactoryD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::perfmgr::Node */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7perfmgr4NodeE = NULL;

/* Demangled: Json::Value::CZString::CZString(char const*, unsigned int, Json::Value::CZString::DuplicationPolicy) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2EPKcjNS1_17DuplicationPolicyE(void) {
    ALOGD("_ZN4Json5Value8CZStringC2EPKcjNS1_17DuplicationPolicyE() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ERKS0_(void) {
    ALOGD("_ZN4Json5ValueC2ERKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::GetValueIndex(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr4Node13GetValueIndexERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPm(void) {
    ALOGD("_ZNK7android7perfmgr4Node13GetValueIndexERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPm() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE(void) {
    ALOGD("_ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12StyledWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::PropertyNode::PropertyNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12PropertyNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb(void) {
    ALOGD("_ZN7android7perfmgr12PropertyNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb() called");
    return 0;
}

/* Demangled: android::perfmgr::AdpfConfig::getPidIHighDivI() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr10AdpfConfig15getPidIHighDivIEv(void) {
    ALOGD("_ZN7android7perfmgr10AdpfConfig15getPidIHighDivIEv() called");
    return 0;
}

/* Exported Object: android::perfmgr::FlagProvider::sOriginalProvider */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7perfmgr12FlagProvider17sOriginalProviderE = NULL;

/* Demangled: Json::OurReader::skipBom(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader7skipBomEb(void) {
    ALOGD("_ZN4Json9OurReader7skipBomEb() called");
    return 0;
}

/* Demangled: Json::Value::CZString::~CZString() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringD2Ev(void) {
    ALOGD("_ZN4Json5Value8CZStringD2Ev() called");
    return 0;
}

/* Demangled: Json::Value::resolveReference(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value16resolveReferenceEPKc(void) {
    ALOGD("_ZN4Json5Value16resolveReferenceEPKc() called");
    return 0;
}

/* Demangled: Json::Value::operator[](Json::StaticString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixERKNS_12StaticStringE(void) {
    ALOGD("_ZN4Json5ValueixERKNS_12StaticStringE() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::GetPaths() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr4Node8GetPathsEv(void) {
    ALOGD("_ZNK7android7perfmgr4Node8GetPathsEv() called");
    return 0;
}

/* Demangled: android::perfmgr::EventNode::EventNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, std::__1::function<void (std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr9EventNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE(void) {
    ALOGD("_ZN7android7perfmgr9EventNodeC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE() called");
    return 0;
}

/* Demangled: Json::Reader::parse(char const*, char const*, Json::Value&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader5parseEPKcS2_RNS_5ValueEb(void) {
    ALOGD("_ZN4Json6Reader5parseEPKcS2_RNS_5ValueEb() called");
    return 0;
}

/* Demangled: Json::Reader::readString() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader10readStringEv(void) {
    ALOGD("_ZN4Json6Reader10readStringEv() called");
    return 0;
}

/* Demangled: Json::OurReader::getFormattedErrorMessages() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json9OurReader25getFormattedErrorMessagesEv(void) {
    ALOGD("_ZNK4Json9OurReader25getFormattedErrorMessagesEv() called");
    return 0;
}

/* Demangled: Json::throwLogicError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json15throwLogicErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json15throwLogicErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Comments::operator=(Json::Value::Comments const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CommentsaSERKS1_(void) {
    ALOGD("_ZN4Json5Value8CommentsaSERKS1_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Exported Object: vtable for android::perfmgr::NodeLooperThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7perfmgr16NodeLooperThreadE = NULL;

/* Demangled: android::perfmgr::Node::Node(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr4NodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb(void) {
    ALOGD("_ZN7android7perfmgr4NodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmb() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::ValueType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ENS_9ValueTypeE(void) {
    ALOGD("_ZN4Json5ValueC1ENS_9ValueTypeE() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::JobQueueManager(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManagerC1Em(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManagerC1Em() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase7isEqualERKS0_(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase7isEqualERKS0_() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::increment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase9incrementEv(void) {
    ALOGD("_ZN4Json17ValueIteratorBase9incrementEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::swap(Json::Value::CZString&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZString4swapERS1_(void) {
    ALOGD("_ZN4Json5Value8CZString4swapERS1_() called");
    return 0;
}

/* Demangled: Json::Value::operator<(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueltERKS0_(void) {
    ALOGD("_ZNK4Json5ValueltERKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread10threadLoopEv(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread10threadLoopEv() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::ParseNodes(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager10ParseNodesERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager10ParseNodesERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::AdpfConfig::getPidIInitDivI() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr10AdpfConfig15getPidIInitDivIEv(void) {
    ALOGD("_ZN7android7perfmgr10AdpfConfig15getPidIInitDivIEv() called");
    return 0;
}

/* Demangled: Json::Reader::readObject(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader10readObjectERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader10readObjectERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Reader::addComment(char const*, char const*, Json::CommentPlacement) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader10addCommentEPKcS2_NS_16CommentPlacementE(void) {
    ALOGD("_ZN4Json6Reader10addCommentEPKcS2_NS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::StyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments&&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CommentsC1EOS1_(void) {
    ALOGD("_ZN4Json5Value8CommentsC1EOS1_() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::ParseOtherConfigs(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager17ParseOtherConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager17ParseOtherConfigsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::EventNode::EventNode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::vector<android::perfmgr::RequestGroup, std::__1::allocator<android::perfmgr::RequestGroup> >, unsigned long, bool, std::__1::function<void (std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr9EventNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE(void) {
    ALOGD("_ZN7android7perfmgr9EventNodeC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6vectorIS8_NS6_IS8_EEEENS9_INS0_12RequestGroupENS6_ISC_EEEEmbNS2_8functionIFvRKS8_RKSB_SH_EEE() called");
    return 0;
}

/* Demangled: Json::Reader::parse(std::__1::basic_istream<char, std::__1::char_traits<char> >&, Json::Value&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader5parseERNSt3__113basic_istreamIcNS1_11char_traitsIcEEEERNS_5ValueEb(void) {
    ALOGD("_ZN4Json6Reader5parseERNSt3__113basic_istreamIcNS1_11char_traitsIcEEEERNS_5ValueEb() called");
    return 0;
}

/* Demangled: Json::Reader::decodeString(Json::Reader::Token&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json6Reader12decodeStringERNS0_5TokenERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::OurReader::OurReader(Json::OurFeatures const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReaderC1ERKNS_11OurFeaturesE(void) {
    ALOGD("_ZN4Json9OurReaderC1ERKNS_11OurFeaturesE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::IsHintSupported(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager15IsHintSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager15IsHintSupportedERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::initBasic(Json::ValueType, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value9initBasicENS_9ValueTypeEb(void) {
    ALOGD("_ZN4Json5Value9initBasicENS_9ValueTypeEb() called");
    return 0;
}

/* Demangled: Json::Value::isMember(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isMemberEPKcS2_(void) {
    ALOGD("_ZNK4Json5Value8isMemberEPKcS2_() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1ERKS0_(void) {
    ALOGD("_ZN4Json13ValueIteratorC1ERKS0_() called");
    return 0;
}

/* Demangled: Json::StreamWriter::~StreamWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StreamWriterD0Ev(void) {
    ALOGD("_ZN4Json12StreamWriterD0Ev() called");
    return 0;
}

/* Demangled: Json::Value::isBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6isBoolEv(void) {
    ALOGD("_ZNK4Json5Value6isBoolEv() called");
    return 0;
}

/* Demangled: Json::Value::toStyledString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14toStyledStringEv(void) {
    ALOGD("_ZNK4Json5Value14toStyledStringEv() called");
    return 0;
}

/* Demangled: Json::Path::addPathInArg(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> > const&, std::__1::__wrap_iter<Json::PathArgument const* const*>&, Json::PathArgument::Kind) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4Path12addPathInArgERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEERNS1_11__wrap_iterIPKSD_EENSB_4KindE(void) {
    ALOGD("_ZN4Json4Path12addPathInArgERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEERNS1_11__wrap_iterIPKSD_EENSB_4KindE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::ParseActions(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::unique_ptr<android::perfmgr::Node, std::__1::default_delete<android::perfmgr::Node> >, std::__1::allocator<std::__1::unique_ptr<android::perfmgr::Node, std::__1::default_delete<android::perfmgr::Node> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager12ParseActionsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorINS2_10unique_ptrINS0_4NodeENS2_14default_deleteISD_EEEENS6_ISG_EEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager12ParseActionsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorINS2_10unique_ptrINS0_4NodeENS2_14default_deleteISD_EEEENS6_ISG_EEEE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::indent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter6indentEv(void) {
    ALOGD("_ZN4Json18StyledStreamWriter6indentEv() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::GetValues() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr4Node9GetValuesEv(void) {
    ALOGD("_ZNK7android7perfmgr4Node9GetValuesEv() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::dequeueRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManager14dequeueRequestEv(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManager14dequeueRequestEv() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::IsHintEnabled(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager13IsHintEnabledERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager13IsHintEnabledERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::insert(unsigned int, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6insertEjRKS0_(void) {
    ALOGD("_ZN4Json5Value6insertEjRKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::RequestGroup::RemoveRequest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12RequestGroup13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr12RequestGroup13RemoveRequestERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::JobQueueManager::returnJob(android::perfmgr::Job*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManager9returnJobEPNS0_3JobE(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManager9returnJobEPNS0_3JobE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::perfmgr::AdpfConfig, std::__1::allocator<android::perfmgr::AdpfConfig> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android7perfmgr10AdpfConfigENS_9allocatorIS3_EEEE = NULL;

/* Demangled: android::perfmgr::EventNode::DumpToFd(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr9EventNode8DumpToFdEi(void) {
    ALOGD("_ZNK7android7perfmgr9EventNode8DumpToFdEi() called");
    return 0;
}

/* Exported Object: vtable for powerhal::flags::flag_provider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8powerhal5flags13flag_providerE = NULL;

/* Demangled: Json::Value::Comments::set(Json::CommentPlacement, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8Comments3setENS_16CommentPlacementENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5Value8Comments3setENS_16CommentPlacementENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for Json::BuiltStyledStreamWriter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json23BuiltStyledStreamWriterE = NULL;

/* Demangled: android::perfmgr::JobQueueManager::getFreeJob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr15JobQueueManager10getFreeJobEv(void) {
    ALOGD("_ZN7android7perfmgr15JobQueueManager10getFreeJobEv() called");
    return 0;
}

/* Demangled: Json::Value::asInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5asIntEv(void) {
    ALOGD("_ZNK4Json5Value5asIntEv() called");
    return 0;
}

/* Demangled: Json::Reader::readArray(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader9readArrayERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader9readArrayERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Value::isObject() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isObjectEv(void) {
    ALOGD("_ZNK4Json5Value8isObjectEv() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(char const*, Json::Value*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberEPKcPS0_(void) {
    ALOGD("_ZN4Json5Value12removeMemberEPKcPS0_() called");
    return 0;
}

/* Exported Object: vtable for android::perfmgr::EventNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7perfmgr9EventNodeE = NULL;

/* Demangled: Json::Value::CZString::index() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString5indexEv(void) {
    ALOGD("_ZNK4Json5Value8CZString5indexEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1EPKc(void) {
    ALOGD("_ZN4Json5ValueC1EPKc() called");
    return 0;
}

/* Demangled: Json::FastWriter::FastWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriterC2Ev(void) {
    ALOGD("_ZN4Json10FastWriterC2Ev() called");
    return 0;
}

/* Demangled: Json::Reader::readCStyleComment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader17readCStyleCommentEv(void) {
    ALOGD("_ZN4Json6Reader17readCStyleCommentEv() called");
    return 0;
}

/* Demangled: Json::Reader::Reader() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6ReaderC1Ev(void) {
    ALOGD("_ZN4Json6ReaderC1Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::deref() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase5derefEv(void) {
    ALOGD("_ZN4Json17ValueIteratorBase5derefEv() called");
    return 0;
}

/* Exported Object: vtable for Json::StreamWriterBuilder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json19StreamWriterBuilderE = NULL;

/* Demangled: Json::OurReader::currentValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader12currentValueEv(void) {
    ALOGD("_ZN4Json9OurReader12currentValueEv() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::DoHint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager6DoHintERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE() called");
    return 0;
}

/* Demangled: Json::OurReader::getLocationLineAndColumn(char const*, int&, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json9OurReader24getLocationLineAndColumnEPKcRiS3_(void) {
    ALOGD("_ZNK4Json9OurReader24getLocationLineAndColumnEPKcRiS3_() called");
    return 0;
}

/* Demangled: Json::StreamWriterBuilder::validate(Json::Value*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json19StreamWriterBuilder8validateEPNS_5ValueE(void) {
    ALOGD("_ZNK4Json19StreamWriterBuilder8validateEPNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::FlagProvider::OverrideValue(bool (*)(), bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr12FlagProvider13OverrideValueEPFbvEb(void) {
    ALOGD("_ZN7android7perfmgr12FlagProvider13OverrideValueEPFbvEb() called");
    return 0;
}

/* Demangled: Json::OurReader::recoverFromError(Json::OurReader::TokenType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader16recoverFromErrorENS0_9TokenTypeE(void) {
    ALOGD("_ZN4Json9OurReader16recoverFromErrorENS0_9TokenTypeE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString6lengthEv(void) {
    ALOGD("_ZNK4Json5Value8CZString6lengthEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::StaticString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ERKNS_12StaticStringE(void) {
    ALOGD("_ZN4Json5ValueC2ERKNS_12StaticStringE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::~CZString() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringD1Ev(void) {
    ALOGD("_ZN4Json5Value8CZStringD1Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::NodeLooperThread::Cancel(std::__1::vector<android::perfmgr::NodeAction, std::__1::allocator<android::perfmgr::NodeAction> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr16NodeLooperThread6CancelERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE(void) {
    ALOGD("_ZN7android7perfmgr16NodeLooperThread6CancelERKNSt3__16vectorINS0_10NodeActionENS2_9allocatorIS4_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS5_IcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::FileNode::GetTruncate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr8FileNode11GetTruncateEv(void) {
    ALOGD("_ZNK7android7perfmgr8FileNode11GetTruncateEv() called");
    return 0;
}

/* Demangled: Json::throwRuntimeError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17throwRuntimeErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json17throwRuntimeErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::operator=(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueaSERKS0_(void) {
    ALOGD("_ZN4Json5ValueaSERKS0_() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::IsAdpfSupported() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr11HintManager15IsAdpfSupportedEv(void) {
    ALOGD("_ZNK7android7perfmgr11HintManager15IsAdpfSupportedEv() called");
    return 0;
}

/* Demangled: Json::Reader::getLocationLineAndColumn(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json6Reader24getLocationLineAndColumnEPKc(void) {
    ALOGD("_ZNK4Json6Reader24getLocationLineAndColumnEPKc() called");
    return 0;
}

/* Demangled: Json::Value::asDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8asDoubleEv(void) {
    ALOGD("_ZNK4Json5Value8asDoubleEv() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12PathArgumentC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::DumpToFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager8DumpToFdEi(void) {
    ALOGD("_ZN7android7perfmgr11HintManager8DumpToFdEi() called");
    return 0;
}

/* Demangled: Json::Value::isInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5isIntEv(void) {
    ALOGD("_ZNK4Json5Value5isIntEv() called");
    return 0;
}

/* Demangled: Json::OurReader::readNumber(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader10readNumberEb(void) {
    ALOGD("_ZN4Json9OurReader10readNumberEb() called");
    return 0;
}

/* Demangled: Json::Value::dupPayload(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value10dupPayloadERKS0_(void) {
    ALOGD("_ZN4Json5Value10dupPayloadERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::dupMeta(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value7dupMetaERKS0_(void) {
    ALOGD("_ZN4Json5Value7dupMetaERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledWriter::unindent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter8unindentEv(void) {
    ALOGD("_ZN4Json12StyledWriter8unindentEv() called");
    return 0;
}

/* Exported Object: VTT for android::perfmgr::NodeLooperThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android7perfmgr16NodeLooperThreadE = NULL;

/* Demangled: Json::Reader::decodeUnicodeCodePoint(Json::Reader::Token&, char const*&, char const*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj(void) {
    ALOGD("_ZN4Json6Reader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2EPKcS2_(void) {
    ALOGD("_ZN4Json5ValueC2EPKcS2_() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::BuiltStyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Json::CommentStyle::Enum, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, bool, unsigned int, Json::PrecisionType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_12CommentStyle4EnumES7_S7_S7_bbjNS_13PrecisionTypeE() called");
    return 0;
}

/* Exported Object: vtable for android::perfmgr::PropertyNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7perfmgr12PropertyNodeE = NULL;

/* Demangled: android::perfmgr::HintManager::EndHintStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager13EndHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android7perfmgr11HintManager13EndHintStatusERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::perfmgr::AdpfConfig::getPidILowDivI() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr10AdpfConfig14getPidILowDivIEv(void) {
    ALOGD("_ZN7android7perfmgr10AdpfConfig14getPidILowDivIEv() called");
    return 0;
}

/* Demangled: Json::Features::Features() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json8FeaturesC2Ev(void) {
    ALOGD("_ZN4Json8FeaturesC2Ev() called");
    return 0;
}

/* Demangled: Json::OurReader::readCStyleComment(bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader17readCStyleCommentEPb(void) {
    ALOGD("_ZN4Json9OurReader17readCStyleCommentEPb() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::write(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter5writeERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter5writeERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::demand(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6demandEPKcS2_(void) {
    ALOGD("_ZN4Json5Value6demandEPKcS2_() called");
    return 0;
}

/* Demangled: Json::Value::isUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6isUIntEv(void) {
    ALOGD("_ZNK4Json5Value6isUIntEv() called");
    return 0;
}

/* Demangled: Json::Value::Comments::has(Json::CommentPlacement) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8Comments3hasENS_16CommentPlacementE(void) {
    ALOGD("_ZNK4Json5Value8Comments3hasENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1EPKc(void) {
    ALOGD("_ZN4Json12PathArgumentC1EPKc() called");
    return 0;
}

/* Demangled: android::perfmgr::HintManager::DumpOtherConfigs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7perfmgr11HintManager16DumpOtherConfigsEi(void) {
    ALOGD("_ZN7android7perfmgr11HintManager16DumpOtherConfigsEi() called");
    return 0;
}

/* Demangled: powerhal_flags_gpu_load_up_for_blurs */
extern "C" __attribute__((visibility("default"))) int powerhal_flags_gpu_load_up_for_blurs(void) {
    ALOGD("powerhal_flags_gpu_load_up_for_blurs() called");
    return 0;
}

/* Demangled: Json::Value::Comments::Comments(Json::Value::Comments const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CommentsC1ERKS1_(void) {
    ALOGD("_ZN4Json5Value8CommentsC1ERKS1_() called");
    return 0;
}

/* Demangled: Json::Reader::decodeNumber(Json::Reader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader12decodeNumberERNS0_5TokenE(void) {
    ALOGD("_ZN4Json6Reader12decodeNumberERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Value::copyPayload(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11copyPayloadERKS0_(void) {
    ALOGD("_ZN4Json5Value11copyPayloadERKS0_() called");
    return 0;
}

/* Demangled: Json::OurReader::skipSpaces() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader10skipSpacesEv(void) {
    ALOGD("_ZN4Json9OurReader10skipSpacesEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2ERKS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringC2ERKS1_() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::Path::Path(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4PathC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_(void) {
    ALOGD("_ZN4Json4PathC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_() called");
    return 0;
}

/* Demangled: Json::FastWriter::FastWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriterC1Ev(void) {
    ALOGD("_ZN4Json10FastWriterC1Ev() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::GetName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr4Node7GetNameEv(void) {
    ALOGD("_ZNK7android7perfmgr4Node7GetNameEv() called");
    return 0;
}

/* Demangled: Json::Value::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value4sizeEv(void) {
    ALOGD("_ZNK4Json5Value4sizeEv() called");
    return 0;
}

/* Demangled: Json::OurReader::match(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader5matchEPKci(void) {
    ALOGD("_ZN4Json9OurReader5matchEPKci() called");
    return 0;
}

/* Demangled: Json::Value::copy(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value4copyERKS0_(void) {
    ALOGD("_ZN4Json5Value4copyERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::append(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6appendERKS0_(void) {
    ALOGD("_ZN4Json5Value6appendERKS0_() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2Ej(void) {
    ALOGD("_ZN4Json12PathArgumentC2Ej() called");
    return 0;
}

/* Demangled: android::perfmgr::RequestGroup::DumpToFd(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr12RequestGroup8DumpToFdEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android7perfmgr12RequestGroup8DumpToFdEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE() called");
    return 0;
}

/* Demangled: android::perfmgr::Node::GetDefaultIndex() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7perfmgr4Node15GetDefaultIndexEv(void) {
    ALOGD("_ZNK7android7perfmgr4Node15GetDefaultIndexEv() called");
    return 0;
}

/* Demangled: Json::Reader::match(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6Reader5matchEPKci(void) {
    ALOGD("_ZN4Json6Reader5matchEPKci() called");
    return 0;
}

/* Demangled: Json::OurReader::decodeUnicodeEscapeSequence(Json::OurReader::Token&, char const*&, char const*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj(void) {
    ALOGD("_ZN4Json9OurReader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(char const*, unsigned int, Json::Value::CZString::DuplicationPolicy) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1EPKcjNS1_17DuplicationPolicyE(void) {
    ALOGD("_ZN4Json5Value8CZStringC1EPKcjNS1_17DuplicationPolicyE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::copy(Json::ValueIteratorBase const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase4copyERKS0_(void) {
    ALOGD("_ZN4Json17ValueIteratorBase4copyERKS0_() called");
    return 0;
}

/* Demangled: Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json23BuiltStyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void) {
    ALOGD("_ZN4Json23BuiltStyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::OurReader::readObject(Json::OurReader::Token&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json9OurReader10readObjectERNS0_5TokenE(void) {
    ALOGD("_ZN4Json9OurReader10readObjectERNS0_5TokenE() called");
    return 0;
}

/* Demangled: Json::Value::setOffsetLimit(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value14setOffsetLimitEl(void) {
    ALOGD("_ZN4Json5Value14setOffsetLimitEl() called");
    return 0;
}
