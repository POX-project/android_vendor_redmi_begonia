/*
 * Reverse-Engineered Source for: libmtktinyxml.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtktinyxml"

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
#include "libmtktinyxml.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: TiXmlDocument::TiXmlDocument(TiXmlDocument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentC2ERKS_(void) {
    ALOGD("_ZN13TiXmlDocumentC2ERKS_() called");
    return 0;
}

/* Demangled: TiXmlNode::~TiXmlNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNodeD0Ev(void) {
    ALOGD("_ZN9TiXmlNodeD0Ev() called");
    return 0;
}

/* Demangled: TiXmlNode::GetDocument() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode11GetDocumentEv(void) {
    ALOGD("_ZNK9TiXmlNode11GetDocumentEv() called");
    return 0;
}

/* Demangled: TiXmlNode::NextSibling(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode11NextSiblingEPKc(void) {
    ALOGD("_ZNK9TiXmlNode11NextSiblingEPKc() called");
    return 0;
}

/* Demangled: operator+(char const*, TiXmlString const&) */
extern "C" __attribute__((visibility("default"))) int _ZplPKcRK11TiXmlString(void) {
    ALOGD("_ZplPKcRK11TiXmlString() called");
    return 0;
}

/* Demangled: TiXmlAttribute::SetIntValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14TiXmlAttribute11SetIntValueEi(void) {
    ALOGD("_ZN14TiXmlAttribute11SetIntValueEi() called");
    return 0;
}

/* Demangled: TiXmlNode::InsertAfterChild(TiXmlNode*, TiXmlNode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode16InsertAfterChildEPS_RKS_(void) {
    ALOGD("_ZN9TiXmlNode16InsertAfterChildEPS_RKS_() called");
    return 0;
}

/* Demangled: TiXmlNode::InsertBeforeChild(TiXmlNode*, TiXmlNode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode17InsertBeforeChildEPS_RKS_(void) {
    ALOGD("_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_() called");
    return 0;
}

/* Demangled: TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding() called");
    return 0;
}

/* Exported Object: TiXmlBase::condenseWhiteSpace */
extern "C" __attribute__((visibility("default"))) void* _ZN9TiXmlBase18condenseWhiteSpaceE = NULL;

/* Demangled: TiXmlElement::Attribute(char const*, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement9AttributeEPKcPd(void) {
    ALOGD("_ZNK12TiXmlElement9AttributeEPKcPd() called");
    return 0;
}

/* Demangled: TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlElement::TiXmlElement(TiXmlElement const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementC1ERKS_(void) {
    ALOGD("_ZN12TiXmlElementC1ERKS_() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::Add(TiXmlAttribute*) */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute(void) {
    ALOGD("_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute() called");
    return 0;
}

/* Demangled: TiXmlNode::LinkEndChild(TiXmlNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode12LinkEndChildEPS_(void) {
    ALOGD("_ZN9TiXmlNode12LinkEndChildEPS_() called");
    return 0;
}

/* Demangled: TiXmlHandle::ChildElement(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle12ChildElementEi(void) {
    ALOGD("_ZNK11TiXmlHandle12ChildElementEi() called");
    return 0;
}

/* Demangled: TiXmlHandle::Child(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle5ChildEi(void) {
    ALOGD("_ZNK11TiXmlHandle5ChildEi() called");
    return 0;
}

/* Demangled: TiXmlAttribute::QueryIntValue(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute13QueryIntValueEPi(void) {
    ALOGD("_ZNK14TiXmlAttribute13QueryIntValueEPi() called");
    return 0;
}

/* Demangled: TiXmlAttribute::Next() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute4NextEv(void) {
    ALOGD("_ZNK14TiXmlAttribute4NextEv() called");
    return 0;
}

/* Demangled: TiXmlString::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TiXmlString7reserveEj(void) {
    ALOGD("_ZN11TiXmlString7reserveEj() called");
    return 0;
}

/* Exported Object: TiXmlString::nullrep_ */
extern "C" __attribute__((visibility("default"))) void* _ZN11TiXmlString8nullrep_E = NULL;

/* Demangled: TiXmlDocument::operator=(TiXmlDocument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentaSERKS_(void) {
    ALOGD("_ZN13TiXmlDocumentaSERKS_() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::~TiXmlAttributeSet() */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSetD2Ev(void) {
    ALOGD("_ZN17TiXmlAttributeSetD2Ev() called");
    return 0;
}

/* Demangled: TiXmlAttribute::DoubleValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute11DoubleValueEv(void) {
    ALOGD("_ZNK14TiXmlAttribute11DoubleValueEv() called");
    return 0;
}

/* Demangled: TiXmlElement::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlElement::TiXmlElement(TiXmlElement const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementC2ERKS_(void) {
    ALOGD("_ZN12TiXmlElementC2ERKS_() called");
    return 0;
}

/* Demangled: TiXmlUnknown::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlBase::StringToBuffer::StringToBuffer(TiXmlString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase14StringToBufferC1ERK11TiXmlString(void) {
    ALOGD("_ZN9TiXmlBase14StringToBufferC1ERK11TiXmlString() called");
    return 0;
}

/* Demangled: TiXmlHandle::ChildElement(char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle12ChildElementEPKci(void) {
    ALOGD("_ZNK11TiXmlHandle12ChildElementEPKci() called");
    return 0;
}

/* Demangled: TiXmlElement::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK12TiXmlElement5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi(void) {
    ALOGD("_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi() called");
    return 0;
}

/* Demangled: TiXmlElement::Attribute(char const*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement9AttributeEPKcPi(void) {
    ALOGD("_ZNK12TiXmlElement9AttributeEPKcPi() called");
    return 0;
}

/* Demangled: TiXmlText::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlText5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK9TiXmlText5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::~TiXmlAttributeSet() */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSetD1Ev(void) {
    ALOGD("_ZN17TiXmlAttributeSetD1Ev() called");
    return 0;
}

/* Demangled: TiXmlNode::TiXmlNode(TiXmlNode::NodeType) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNodeC2ENS_8NodeTypeE(void) {
    ALOGD("_ZN9TiXmlNodeC2ENS_8NodeTypeE() called");
    return 0;
}

/* Demangled: TiXmlNode::FirstChild(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode10FirstChildEPKc(void) {
    ALOGD("_ZNK9TiXmlNode10FirstChildEPKc() called");
    return 0;
}

/* Exported Object: vtable for TiXmlComment */
extern "C" __attribute__((visibility("default"))) void* _ZTV12TiXmlComment = NULL;

/* Demangled: TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlDocument::LoadFile(char const*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding(void) {
    ALOGD("_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlElement::QueryIntAttribute(char const*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement17QueryIntAttributeEPKcPi(void) {
    ALOGD("_ZNK12TiXmlElement17QueryIntAttributeEPKcPi() called");
    return 0;
}

/* Demangled: TiXmlNode::CopyTo(TiXmlNode*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode6CopyToEPS_(void) {
    ALOGD("_ZNK9TiXmlNode6CopyToEPS_() called");
    return 0;
}

/* Demangled: TiXmlParsingData::Stamp(char const*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding(void) {
    ALOGD("_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlBase::ReadText(char const*, TiXmlString*, bool, char const*, bool, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase8ReadTextEPKcP11TiXmlStringbS1_b13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase8ReadTextEPKcP11TiXmlStringbS1_b13TiXmlEncoding() called");
    return 0;
}

/* Demangled: operator+(TiXmlString const&, TiXmlString const&) */
extern "C" __attribute__((visibility("default"))) int _ZplRK11TiXmlStringS1_(void) {
    ALOGD("_ZplRK11TiXmlStringS1_() called");
    return 0;
}

/* Exported Object: TiXmlString::npos */
extern "C" __attribute__((visibility("default"))) void* _ZN11TiXmlString4nposE = NULL;

/* Demangled: TiXmlString::append(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TiXmlString6appendEPKcj(void) {
    ALOGD("_ZN11TiXmlString6appendEPKcj() called");
    return 0;
}

/* Exported Object: TiXmlBase::entity */
extern "C" __attribute__((visibility("default"))) void* _ZN9TiXmlBase6entityE = NULL;

/* Demangled: TiXmlElement::Attribute(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement9AttributeEPKc(void) {
    ALOGD("_ZNK12TiXmlElement9AttributeEPKc() called");
    return 0;
}

/* Demangled: TiXmlElement::operator=(TiXmlElement const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementaSERKS_(void) {
    ALOGD("_ZN12TiXmlElementaSERKS_() called");
    return 0;
}

/* Demangled: TiXmlDocument::LoadFile(TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocument8LoadFileE13TiXmlEncoding(void) {
    ALOGD("_ZN13TiXmlDocument8LoadFileE13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlDeclarationC2EPKcS1_S1_(void) {
    ALOGD("_ZN16TiXmlDeclarationC2EPKcS1_S1_() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16TiXmlDeclaration9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK16TiXmlDeclaration9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlBase::IsAlphaNum(unsigned char, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlElement::~TiXmlElement() */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementD2Ev(void) {
    ALOGD("_ZN12TiXmlElementD2Ev() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::Remove(TiXmlAttribute*) */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute(void) {
    ALOGD("_ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute() called");
    return 0;
}

/* Demangled: TiXmlAttribute::Previous() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute8PreviousEv(void) {
    ALOGD("_ZNK14TiXmlAttribute8PreviousEv() called");
    return 0;
}

/* Exported Object: vtable for TiXmlText */
extern "C" __attribute__((visibility("default"))) void* _ZTV9TiXmlText = NULL;

/* Exported Object: TiXmlBase::errorString */
extern "C" __attribute__((visibility("default"))) void* _ZN9TiXmlBase11errorStringE = NULL;

/* Demangled: TiXmlBase::ReadName(char const*, TiXmlString*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase8ReadNameEPKcP11TiXmlString13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase8ReadNameEPKcP11TiXmlString13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlHandle::FirstChild(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle10FirstChildEPKc(void) {
    ALOGD("_ZNK11TiXmlHandle10FirstChildEPKc() called");
    return 0;
}

/* Demangled: TiXmlElement::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK12TiXmlElement9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlUnknown::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlUnknown9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK12TiXmlUnknown9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlComment::TiXmlComment(TiXmlComment const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlCommentC1ERKS_(void) {
    ALOGD("_ZN12TiXmlCommentC1ERKS_() called");
    return 0;
}

/* Demangled: TiXmlNode::RemoveChild(TiXmlNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode11RemoveChildEPS_(void) {
    ALOGD("_ZN9TiXmlNode11RemoveChildEPS_() called");
    return 0;
}

/* Demangled: TiXmlNode::PreviousSibling(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode15PreviousSiblingEPKc(void) {
    ALOGD("_ZNK9TiXmlNode15PreviousSiblingEPKc() called");
    return 0;
}

/* Demangled: TiXmlElement::~TiXmlElement() */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementD1Ev(void) {
    ALOGD("_ZN12TiXmlElementD1Ev() called");
    return 0;
}

/* Demangled: TiXmlNode::IterateChildren(char const*, TiXmlNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode15IterateChildrenEPKcPS_(void) {
    ALOGD("_ZN9TiXmlNode15IterateChildrenEPKcPS_() called");
    return 0;
}

/* Demangled: TiXmlDocument::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13TiXmlDocument9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK13TiXmlDocument9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::Clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK16TiXmlDeclaration5CloneEv(void) {
    ALOGD("_ZNK16TiXmlDeclaration5CloneEv() called");
    return 0;
}

/* Demangled: TiXmlNode::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode5ClearEv(void) {
    ALOGD("_ZN9TiXmlNode5ClearEv() called");
    return 0;
}

/* Demangled: TiXmlDocument::SaveFile() const */
extern "C" __attribute__((visibility("default"))) int _ZNK13TiXmlDocument8SaveFileEv(void) {
    ALOGD("_ZNK13TiXmlDocument8SaveFileEv() called");
    return 0;
}

/* Exported Object: TiXmlBase::utf8ByteTable */
extern "C" __attribute__((visibility("default"))) void* _ZN9TiXmlBase13utf8ByteTableE = NULL;

/* Demangled: TiXmlComment::TiXmlComment(TiXmlComment const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlCommentC2ERKS_(void) {
    ALOGD("_ZN12TiXmlCommentC2ERKS_() called");
    return 0;
}

/* Demangled: TiXmlUnknown::CopyTo(TiXmlUnknown*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlUnknown6CopyToEPS_(void) {
    ALOGD("_ZNK12TiXmlUnknown6CopyToEPS_() called");
    return 0;
}

/* Exported Object: vtable for TiXmlUnknown */
extern "C" __attribute__((visibility("default"))) void* _ZTV12TiXmlUnknown = NULL;

/* Demangled: TiXmlElement::~TiXmlElement() */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementD0Ev(void) {
    ALOGD("_ZN12TiXmlElementD0Ev() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::Find(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSet4FindEPKc(void) {
    ALOGD("_ZN17TiXmlAttributeSet4FindEPKc() called");
    return 0;
}

/* Demangled: TiXmlComment::CopyTo(TiXmlComment*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlComment6CopyToEPS_(void) {
    ALOGD("_ZNK12TiXmlComment6CopyToEPS_() called");
    return 0;
}

/* Demangled: TiXmlText::CopyTo(TiXmlText*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlText6CopyToEPS_(void) {
    ALOGD("_ZNK9TiXmlText6CopyToEPS_() called");
    return 0;
}

/* Demangled: TiXmlComment::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlAttribute::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK14TiXmlAttribute9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlElement::ClearThis() */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement9ClearThisEv(void) {
    ALOGD("_ZN12TiXmlElement9ClearThisEv() called");
    return 0;
}

/* Demangled: TiXmlElement::TiXmlElement(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementC1EPKc(void) {
    ALOGD("_ZN12TiXmlElementC1EPKc() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::TiXmlAttributeSet() */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSetC2Ev(void) {
    ALOGD("_ZN17TiXmlAttributeSetC2Ev() called");
    return 0;
}

/* Demangled: TiXmlComment::Clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlComment5CloneEv(void) {
    ALOGD("_ZNK12TiXmlComment5CloneEv() called");
    return 0;
}

/* Demangled: TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlAttribute::Next() */
extern "C" __attribute__((visibility("default"))) int _ZN14TiXmlAttribute4NextEv(void) {
    ALOGD("_ZN14TiXmlAttribute4NextEv() called");
    return 0;
}

/* Demangled: TiXmlHandle::FirstChild() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle10FirstChildEv(void) {
    ALOGD("_ZNK11TiXmlHandle10FirstChildEv() called");
    return 0;
}

/* Demangled: TiXmlNode::NextSiblingElement() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode18NextSiblingElementEv(void) {
    ALOGD("_ZNK9TiXmlNode18NextSiblingElementEv() called");
    return 0;
}

/* Exported Object: vtable for TiXmlDocument */
extern "C" __attribute__((visibility("default"))) void* _ZTV13TiXmlDocument = NULL;

/* Demangled: TiXmlComment::operator=(TiXmlComment const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlCommentaSERKS_(void) {
    ALOGD("_ZN12TiXmlCommentaSERKS_() called");
    return 0;
}

/* Demangled: TiXmlElement::SetAttribute(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement12SetAttributeEPKci(void) {
    ALOGD("_ZN12TiXmlElement12SetAttributeEPKci() called");
    return 0;
}

/* Demangled: TiXmlNode::FirstChildElement() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode17FirstChildElementEv(void) {
    ALOGD("_ZN9TiXmlNode17FirstChildElementEv() called");
    return 0;
}

/* Demangled: TiXmlNode::NextSiblingElement() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode18NextSiblingElementEv(void) {
    ALOGD("_ZN9TiXmlNode18NextSiblingElementEv() called");
    return 0;
}

/* Demangled: TiXmlComment::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlComment9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK12TiXmlComment9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlText::Clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlText5CloneEv(void) {
    ALOGD("_ZNK9TiXmlText5CloneEv() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::TiXmlAttributeSet() */
extern "C" __attribute__((visibility("default"))) int _ZN17TiXmlAttributeSetC1Ev(void) {
    ALOGD("_ZN17TiXmlAttributeSetC1Ev() called");
    return 0;
}

/* Demangled: TiXmlElement::GetText() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement7GetTextEv(void) {
    ALOGD("_ZNK12TiXmlElement7GetTextEv() called");
    return 0;
}

/* Demangled: TiXmlDocument::Clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK13TiXmlDocument5CloneEv(void) {
    ALOGD("_ZNK13TiXmlDocument5CloneEv() called");
    return 0;
}

/* Demangled: TiXmlDocument::CopyTo(TiXmlDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13TiXmlDocument6CopyToEPS_(void) {
    ALOGD("_ZNK13TiXmlDocument6CopyToEPS_() called");
    return 0;
}

/* Demangled: TiXmlNode::IterateChildren(char const*, TiXmlNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode15IterateChildrenEPKcPKS_(void) {
    ALOGD("_ZNK9TiXmlNode15IterateChildrenEPKcPKS_() called");
    return 0;
}

/* Demangled: TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlDocument::TiXmlDocument(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentC1EPKc(void) {
    ALOGD("_ZN13TiXmlDocumentC1EPKc() called");
    return 0;
}

/* Demangled: TiXmlBase::StringToBuffer::~StringToBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase14StringToBufferD2Ev(void) {
    ALOGD("_ZN9TiXmlBase14StringToBufferD2Ev() called");
    return 0;
}

/* Demangled: TiXmlHandle::FirstChildElement() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle17FirstChildElementEv(void) {
    ALOGD("_ZNK11TiXmlHandle17FirstChildElementEv() called");
    return 0;
}

/* Demangled: TiXmlHandle::Child(char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle5ChildEPKci(void) {
    ALOGD("_ZNK11TiXmlHandle5ChildEPKci() called");
    return 0;
}

/* Demangled: TiXmlText::StreamOut(TiXmlOutStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlText9StreamOutEP14TiXmlOutStream(void) {
    ALOGD("_ZNK9TiXmlText9StreamOutEP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlNode::NextSibling(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode11NextSiblingEPKc(void) {
    ALOGD("_ZN9TiXmlNode11NextSiblingEPKc() called");
    return 0;
}

/* Demangled: TiXmlText::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlBase::StringToBuffer::~StringToBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase14StringToBufferD1Ev(void) {
    ALOGD("_ZN9TiXmlBase14StringToBufferD1Ev() called");
    return 0;
}

/* Demangled: TiXmlNode::IterateChildren(TiXmlNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode15IterateChildrenEPS_(void) {
    ALOGD("_ZN9TiXmlNode15IterateChildrenEPS_() called");
    return 0;
}

/* Demangled: TiXmlElement::CopyTo(TiXmlElement*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement6CopyToEPS_(void) {
    ALOGD("_ZNK12TiXmlElement6CopyToEPS_() called");
    return 0;
}

/* Demangled: TiXmlUnknown::Clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlUnknown5CloneEv(void) {
    ALOGD("_ZNK12TiXmlUnknown5CloneEv() called");
    return 0;
}

/* Demangled: TiXmlAttribute::IntValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute8IntValueEv(void) {
    ALOGD("_ZNK14TiXmlAttribute8IntValueEv() called");
    return 0;
}

/* Demangled: TiXmlNode::IterateChildren(TiXmlNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode15IterateChildrenEPKS_(void) {
    ALOGD("_ZNK9TiXmlNode15IterateChildrenEPKS_() called");
    return 0;
}

/* Exported Object: vtable for TiXmlNode */
extern "C" __attribute__((visibility("default"))) void* _ZTV9TiXmlNode = NULL;

/* Demangled: TiXmlElement::RemoveAttribute(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement15RemoveAttributeEPKc(void) {
    ALOGD("_ZN12TiXmlElement15RemoveAttributeEPKc() called");
    return 0;
}

/* Demangled: TiXmlElement::TiXmlElement(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElementC2EPKc(void) {
    ALOGD("_ZN12TiXmlElementC2EPKc() called");
    return 0;
}

/* Demangled: TiXmlBase::PutString(TiXmlString const&, TiXmlOutStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase9PutStringERK11TiXmlStringP14TiXmlOutStream(void) {
    ALOGD("_ZN9TiXmlBase9PutStringERK11TiXmlStringP14TiXmlOutStream() called");
    return 0;
}

/* Demangled: TiXmlNode::FirstChild(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode10FirstChildEPKc(void) {
    ALOGD("_ZN9TiXmlNode10FirstChildEPKc() called");
    return 0;
}

/* Demangled: TiXmlNode::GetDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode11GetDocumentEv(void) {
    ALOGD("_ZN9TiXmlNode11GetDocumentEv() called");
    return 0;
}

/* Demangled: TiXmlAttributeSet::Find(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17TiXmlAttributeSet4FindEPKc(void) {
    ALOGD("_ZNK17TiXmlAttributeSet4FindEPKc() called");
    return 0;
}

/* Demangled: TiXmlElement::SetDoubleAttribute(char const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement18SetDoubleAttributeEPKcd(void) {
    ALOGD("_ZN12TiXmlElement18SetDoubleAttributeEPKcd() called");
    return 0;
}

/* Demangled: TiXmlBase::PutString(TiXmlString const&, TiXmlString*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase9PutStringERK11TiXmlStringPS0_(void) {
    ALOGD("_ZN9TiXmlBase9PutStringERK11TiXmlStringPS0_() called");
    return 0;
}

/* Demangled: TiXmlNode::NextSiblingElement(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode18NextSiblingElementEPKc(void) {
    ALOGD("_ZN9TiXmlNode18NextSiblingElementEPKc() called");
    return 0;
}

/* Demangled: TiXmlDocument::SaveFile(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13TiXmlDocument8SaveFileEPKc(void) {
    ALOGD("_ZNK13TiXmlDocument8SaveFileEPKc() called");
    return 0;
}

/* Demangled: TiXmlString::assign(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11TiXmlString6assignEPKcj(void) {
    ALOGD("_ZN11TiXmlString6assignEPKcj() called");
    return 0;
}

/* Demangled: TiXmlDocument::TiXmlDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentC2Ev(void) {
    ALOGD("_ZN13TiXmlDocumentC2Ev() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlDeclarationC1ERKS_(void) {
    ALOGD("_ZN16TiXmlDeclarationC1ERKS_() called");
    return 0;
}

/* Demangled: TiXmlNode::NextSiblingElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode18NextSiblingElementEPKc(void) {
    ALOGD("_ZNK9TiXmlNode18NextSiblingElementEPKc() called");
    return 0;
}

/* Demangled: TiXmlText::Blank() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlText5BlankEv(void) {
    ALOGD("_ZNK9TiXmlText5BlankEv() called");
    return 0;
}

/* Demangled: TiXmlElement::SetAttribute(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12TiXmlElement12SetAttributeEPKcS1_(void) {
    ALOGD("_ZN12TiXmlElement12SetAttributeEPKcS1_() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlDeclarationC1EPKcS1_S1_(void) {
    ALOGD("_ZN16TiXmlDeclarationC1EPKcS1_S1_() called");
    return 0;
}

/* Demangled: TiXmlNode::FirstChildElement(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode17FirstChildElementEPKc(void) {
    ALOGD("_ZN9TiXmlNode17FirstChildElementEPKc() called");
    return 0;
}

/* Demangled: TiXmlUnknown::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlUnknown5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK12TiXmlUnknown5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: TiXmlDocument::TiXmlDocument(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentC2EPKc(void) {
    ALOGD("_ZN13TiXmlDocumentC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for TiXmlDeclaration */
extern "C" __attribute__((visibility("default"))) void* _ZTV16TiXmlDeclaration = NULL;

/* Demangled: TiXmlDocument::TiXmlDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentC1Ev(void) {
    ALOGD("_ZN13TiXmlDocumentC1Ev() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlDeclarationC2ERKS_(void) {
    ALOGD("_ZN16TiXmlDeclarationC2ERKS_() called");
    return 0;
}

/* Demangled: TiXmlBase::StringToBuffer::StringToBuffer(TiXmlString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlBase14StringToBufferC2ERK11TiXmlString(void) {
    ALOGD("_ZN9TiXmlBase14StringToBufferC2ERK11TiXmlString() called");
    return 0;
}

/* Demangled: TiXmlElement::Clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement5CloneEv(void) {
    ALOGD("_ZNK12TiXmlElement5CloneEv() called");
    return 0;
}

/* Demangled: TiXmlNode::~TiXmlNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNodeD2Ev(void) {
    ALOGD("_ZN9TiXmlNodeD2Ev() called");
    return 0;
}

/* Demangled: TiXmlHandle::FirstChildElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11TiXmlHandle17FirstChildElementEPKc(void) {
    ALOGD("_ZNK11TiXmlHandle17FirstChildElementEPKc() called");
    return 0;
}

/* Demangled: TiXmlAttribute::QueryDoubleValue(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute16QueryDoubleValueEPd(void) {
    ALOGD("_ZNK14TiXmlAttribute16QueryDoubleValueEPd() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16TiXmlDeclaration5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK16TiXmlDeclaration5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: TiXmlNode::LastChild(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode9LastChildEPKc(void) {
    ALOGD("_ZNK9TiXmlNode9LastChildEPKc() called");
    return 0;
}

/* Demangled: operator<<(TiXmlOutStream&, TiXmlNode const&) */
extern "C" __attribute__((visibility("default"))) int _ZlsR14TiXmlOutStreamRK9TiXmlNode(void) {
    ALOGD("_ZlsR14TiXmlOutStreamRK9TiXmlNode() called");
    return 0;
}

/* Demangled: TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlAttribute::SetDoubleValue(double) */
extern "C" __attribute__((visibility("default"))) int _ZN14TiXmlAttribute14SetDoubleValueEd(void) {
    ALOGD("_ZN14TiXmlAttribute14SetDoubleValueEd() called");
    return 0;
}

/* Demangled: TiXmlAttribute::Previous() */
extern "C" __attribute__((visibility("default"))) int _ZN14TiXmlAttribute8PreviousEv(void) {
    ALOGD("_ZN14TiXmlAttribute8PreviousEv() called");
    return 0;
}

/* Demangled: TiXmlNode::LastChild(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode9LastChildEPKc(void) {
    ALOGD("_ZN9TiXmlNode9LastChildEPKc() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::CopyTo(TiXmlDeclaration*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16TiXmlDeclaration6CopyToEPS_(void) {
    ALOGD("_ZNK16TiXmlDeclaration6CopyToEPS_() called");
    return 0;
}

/* Demangled: TiXmlNode::FirstChildElement() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode17FirstChildElementEv(void) {
    ALOGD("_ZNK9TiXmlNode17FirstChildElementEv() called");
    return 0;
}

/* Exported Object: vtable for TiXmlElement */
extern "C" __attribute__((visibility("default"))) void* _ZTV12TiXmlElement = NULL;

/* Demangled: TiXmlNode::ReplaceChild(TiXmlNode*, TiXmlNode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode12ReplaceChildEPS_RKS_(void) {
    ALOGD("_ZN9TiXmlNode12ReplaceChildEPS_RKS_() called");
    return 0;
}

/* Demangled: TiXmlElement::QueryDoubleAttribute(char const*, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd(void) {
    ALOGD("_ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd() called");
    return 0;
}

/* Demangled: TiXmlDocument::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13TiXmlDocument5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK13TiXmlDocument5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlDocument::TiXmlDocument(TiXmlDocument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TiXmlDocumentC1ERKS_(void) {
    ALOGD("_ZN13TiXmlDocumentC1ERKS_() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::operator=(TiXmlDeclaration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlDeclarationaSERKS_(void) {
    ALOGD("_ZN16TiXmlDeclarationaSERKS_() called");
    return 0;
}

/* Demangled: TiXmlNode::~TiXmlNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNodeD1Ev(void) {
    ALOGD("_ZN9TiXmlNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for TiXmlAttribute */
extern "C" __attribute__((visibility("default"))) void* _ZTV14TiXmlAttribute = NULL;

/* Demangled: TiXmlNode::Identify(char const*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding(void) {
    ALOGD("_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlDeclaration::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
extern "C" __attribute__((visibility("default"))) int _ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void) {
    ALOGD("_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding() called");
    return 0;
}

/* Demangled: TiXmlNode::InsertEndChild(TiXmlNode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode14InsertEndChildERKS_(void) {
    ALOGD("_ZN9TiXmlNode14InsertEndChildERKS_() called");
    return 0;
}

/* Demangled: TiXmlAttribute::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14TiXmlAttribute5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK14TiXmlAttribute5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: operator+(TiXmlString const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZplRK11TiXmlStringPKc(void) {
    ALOGD("_ZplRK11TiXmlStringPKc() called");
    return 0;
}

/* Demangled: TiXmlNode::PreviousSibling(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9TiXmlNode15PreviousSiblingEPKc(void) {
    ALOGD("_ZN9TiXmlNode15PreviousSiblingEPKc() called");
    return 0;
}

/* Demangled: TiXmlComment::Print(__sFILE*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12TiXmlComment5PrintEP7__sFILEi(void) {
    ALOGD("_ZNK12TiXmlComment5PrintEP7__sFILEi() called");
    return 0;
}

/* Demangled: TiXmlNode::FirstChildElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9TiXmlNode17FirstChildElementEPKc(void) {
    ALOGD("_ZNK9TiXmlNode17FirstChildElementEPKc() called");
    return 0;
}
