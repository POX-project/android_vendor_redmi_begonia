/*
 * Reverse-Engineered ABI Specification for: libtinyxml.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libtinyxml.so
 */

#ifndef BEGONIA_RE_LIBTINYXML_H
#define BEGONIA_RE_LIBTINYXML_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN13TiXmlDocumentC2ERKS_ */
/* Demangled: TiXmlDocument::TiXmlDocument(TiXmlDocument const&) */
int _ZN13TiXmlDocumentC2ERKS_(void);

/* Symbol: _ZN9TiXmlNodeD0Ev */
/* Demangled: TiXmlNode::~TiXmlNode() */
int _ZN9TiXmlNodeD0Ev(void);

/* Symbol: _ZNK9TiXmlNode11GetDocumentEv */
/* Demangled: TiXmlNode::GetDocument() const */
int _ZNK9TiXmlNode11GetDocumentEv(void);

/* Symbol: _ZNK9TiXmlNode11NextSiblingEPKc */
/* Demangled: TiXmlNode::NextSibling(char const*) const */
int _ZNK9TiXmlNode11NextSiblingEPKc(void);

/* Symbol: _ZplPKcRK11TiXmlString */
/* Demangled: operator+(char const*, TiXmlString const&) */
int _ZplPKcRK11TiXmlString(void);

/* Symbol: _ZN14TiXmlAttribute11SetIntValueEi */
/* Demangled: TiXmlAttribute::SetIntValue(int) */
int _ZN14TiXmlAttribute11SetIntValueEi(void);

/* Symbol: _ZN9TiXmlNode16InsertAfterChildEPS_RKS_ */
/* Demangled: TiXmlNode::InsertAfterChild(TiXmlNode*, TiXmlNode const&) */
int _ZN9TiXmlNode16InsertAfterChildEPS_RKS_(void);

/* Symbol: _ZN9TiXmlNode17InsertBeforeChildEPS_RKS_ */
/* Demangled: TiXmlNode::InsertBeforeChild(TiXmlNode*, TiXmlNode const&) */
int _ZN9TiXmlNode17InsertBeforeChildEPS_RKS_(void);

/* Symbol: _ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding */
/* Demangled: TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding) */
int _ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding(void);

/* Symbol: _ZN9TiXmlBase18condenseWhiteSpaceE */
/* Demangled: TiXmlBase::condenseWhiteSpace */
extern void* _ZN9TiXmlBase18condenseWhiteSpaceE;

/* Symbol: _ZNK12TiXmlElement9AttributeEPKcPd */
/* Demangled: TiXmlElement::Attribute(char const*, double*) const */
int _ZNK12TiXmlElement9AttributeEPKcPd(void);

/* Symbol: _ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding */
/* Demangled: TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding) */
int _ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding(void);

/* Symbol: _ZN12TiXmlElementC1ERKS_ */
/* Demangled: TiXmlElement::TiXmlElement(TiXmlElement const&) */
int _ZN12TiXmlElementC1ERKS_(void);

/* Symbol: _ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute */
/* Demangled: TiXmlAttributeSet::Add(TiXmlAttribute*) */
int _ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute(void);

/* Symbol: _ZN9TiXmlNode12LinkEndChildEPS_ */
/* Demangled: TiXmlNode::LinkEndChild(TiXmlNode*) */
int _ZN9TiXmlNode12LinkEndChildEPS_(void);

/* Symbol: _ZNK11TiXmlHandle12ChildElementEi */
/* Demangled: TiXmlHandle::ChildElement(int) const */
int _ZNK11TiXmlHandle12ChildElementEi(void);

/* Symbol: _ZNK11TiXmlHandle5ChildEi */
/* Demangled: TiXmlHandle::Child(int) const */
int _ZNK11TiXmlHandle5ChildEi(void);

/* Symbol: _ZNK14TiXmlAttribute13QueryIntValueEPi */
/* Demangled: TiXmlAttribute::QueryIntValue(int*) const */
int _ZNK14TiXmlAttribute13QueryIntValueEPi(void);

/* Symbol: _ZNK14TiXmlAttribute4NextEv */
/* Demangled: TiXmlAttribute::Next() const */
int _ZNK14TiXmlAttribute4NextEv(void);

/* Symbol: _ZN11TiXmlString7reserveEj */
/* Demangled: TiXmlString::reserve(unsigned int) */
int _ZN11TiXmlString7reserveEj(void);

/* Symbol: _ZN11TiXmlString8nullrep_E */
/* Demangled: TiXmlString::nullrep_ */
extern void* _ZN11TiXmlString8nullrep_E;

/* Symbol: _ZN13TiXmlDocumentaSERKS_ */
/* Demangled: TiXmlDocument::operator=(TiXmlDocument const&) */
int _ZN13TiXmlDocumentaSERKS_(void);

/* Symbol: _ZN17TiXmlAttributeSetD2Ev */
/* Demangled: TiXmlAttributeSet::~TiXmlAttributeSet() */
int _ZN17TiXmlAttributeSetD2Ev(void);

/* Symbol: _ZNK14TiXmlAttribute11DoubleValueEv */
/* Demangled: TiXmlAttribute::DoubleValue() const */
int _ZNK14TiXmlAttribute11DoubleValueEv(void);

/* Symbol: _ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlElement::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN12TiXmlElementC2ERKS_ */
/* Demangled: TiXmlElement::TiXmlElement(TiXmlElement const&) */
int _ZN12TiXmlElementC2ERKS_(void);

/* Symbol: _ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlUnknown::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN9TiXmlBase14StringToBufferC1ERK11TiXmlString */
/* Demangled: TiXmlBase::StringToBuffer::StringToBuffer(TiXmlString const&) */
int _ZN9TiXmlBase14StringToBufferC1ERK11TiXmlString(void);

/* Symbol: _ZNK11TiXmlHandle12ChildElementEPKci */
/* Demangled: TiXmlHandle::ChildElement(char const*, int) const */
int _ZNK11TiXmlHandle12ChildElementEPKci(void);

/* Symbol: _ZNK12TiXmlElement5PrintEP7__sFILEi */
/* Demangled: TiXmlElement::Print(__sFILE*, int) const */
int _ZNK12TiXmlElement5PrintEP7__sFILEi(void);

/* Symbol: _ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi */
/* Demangled: TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*) */
int _ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi(void);

/* Symbol: _ZNK12TiXmlElement9AttributeEPKcPi */
/* Demangled: TiXmlElement::Attribute(char const*, int*) const */
int _ZNK12TiXmlElement9AttributeEPKcPi(void);

/* Symbol: _ZNK9TiXmlText5PrintEP7__sFILEi */
/* Demangled: TiXmlText::Print(__sFILE*, int) const */
int _ZNK9TiXmlText5PrintEP7__sFILEi(void);

/* Symbol: _ZN17TiXmlAttributeSetD1Ev */
/* Demangled: TiXmlAttributeSet::~TiXmlAttributeSet() */
int _ZN17TiXmlAttributeSetD1Ev(void);

/* Symbol: _ZN9TiXmlNodeC2ENS_8NodeTypeE */
/* Demangled: TiXmlNode::TiXmlNode(TiXmlNode::NodeType) */
int _ZN9TiXmlNodeC2ENS_8NodeTypeE(void);

/* Symbol: _ZNK9TiXmlNode10FirstChildEPKc */
/* Demangled: TiXmlNode::FirstChild(char const*) const */
int _ZNK9TiXmlNode10FirstChildEPKc(void);

/* Symbol: _ZTV12TiXmlComment */
/* Demangled: vtable for TiXmlComment */
extern void* _ZTV12TiXmlComment;

/* Symbol: _ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding */
/* Demangled: TiXmlDocument::LoadFile(char const*, TiXmlEncoding) */
int _ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding(void);

/* Symbol: _ZNK12TiXmlElement17QueryIntAttributeEPKcPi */
/* Demangled: TiXmlElement::QueryIntAttribute(char const*, int*) const */
int _ZNK12TiXmlElement17QueryIntAttributeEPKcPi(void);

/* Symbol: _ZNK9TiXmlNode6CopyToEPS_ */
/* Demangled: TiXmlNode::CopyTo(TiXmlNode*) const */
int _ZNK9TiXmlNode6CopyToEPS_(void);

/* Symbol: _ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding */
/* Demangled: TiXmlParsingData::Stamp(char const*, TiXmlEncoding) */
int _ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding(void);

/* Symbol: _ZN9TiXmlBase8ReadTextEPKcP11TiXmlStringbS1_b13TiXmlEncoding */
/* Demangled: TiXmlBase::ReadText(char const*, TiXmlString*, bool, char const*, bool, TiXmlEncoding) */
int _ZN9TiXmlBase8ReadTextEPKcP11TiXmlStringbS1_b13TiXmlEncoding(void);

/* Symbol: _ZplRK11TiXmlStringS1_ */
/* Demangled: operator+(TiXmlString const&, TiXmlString const&) */
int _ZplRK11TiXmlStringS1_(void);

/* Symbol: _ZN11TiXmlString4nposE */
/* Demangled: TiXmlString::npos */
extern void* _ZN11TiXmlString4nposE;

/* Symbol: _ZN11TiXmlString6appendEPKcj */
/* Demangled: TiXmlString::append(char const*, unsigned int) */
int _ZN11TiXmlString6appendEPKcj(void);

/* Symbol: _ZN9TiXmlBase6entityE */
/* Demangled: TiXmlBase::entity */
extern void* _ZN9TiXmlBase6entityE;

/* Symbol: _ZNK12TiXmlElement9AttributeEPKc */
/* Demangled: TiXmlElement::Attribute(char const*) const */
int _ZNK12TiXmlElement9AttributeEPKc(void);

/* Symbol: _ZN12TiXmlElementaSERKS_ */
/* Demangled: TiXmlElement::operator=(TiXmlElement const&) */
int _ZN12TiXmlElementaSERKS_(void);

/* Symbol: _ZN13TiXmlDocument8LoadFileE13TiXmlEncoding */
/* Demangled: TiXmlDocument::LoadFile(TiXmlEncoding) */
int _ZN13TiXmlDocument8LoadFileE13TiXmlEncoding(void);

/* Symbol: _ZN16TiXmlDeclarationC2EPKcS1_S1_ */
/* Demangled: TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*) */
int _ZN16TiXmlDeclarationC2EPKcS1_S1_(void);

/* Symbol: _ZNK16TiXmlDeclaration9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlDeclaration::StreamOut(TiXmlOutStream*) const */
int _ZNK16TiXmlDeclaration9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding */
/* Demangled: TiXmlBase::IsAlphaNum(unsigned char, TiXmlEncoding) */
int _ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding(void);

/* Symbol: _ZN12TiXmlElementD2Ev */
/* Demangled: TiXmlElement::~TiXmlElement() */
int _ZN12TiXmlElementD2Ev(void);

/* Symbol: _ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute */
/* Demangled: TiXmlAttributeSet::Remove(TiXmlAttribute*) */
int _ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute(void);

/* Symbol: _ZNK14TiXmlAttribute8PreviousEv */
/* Demangled: TiXmlAttribute::Previous() const */
int _ZNK14TiXmlAttribute8PreviousEv(void);

/* Symbol: _ZTV9TiXmlText */
/* Demangled: vtable for TiXmlText */
extern void* _ZTV9TiXmlText;

/* Symbol: _ZN9TiXmlBase11errorStringE */
/* Demangled: TiXmlBase::errorString */
extern void* _ZN9TiXmlBase11errorStringE;

/* Symbol: _ZN9TiXmlBase8ReadNameEPKcP11TiXmlString13TiXmlEncoding */
/* Demangled: TiXmlBase::ReadName(char const*, TiXmlString*, TiXmlEncoding) */
int _ZN9TiXmlBase8ReadNameEPKcP11TiXmlString13TiXmlEncoding(void);

/* Symbol: _ZNK11TiXmlHandle10FirstChildEPKc */
/* Demangled: TiXmlHandle::FirstChild(char const*) const */
int _ZNK11TiXmlHandle10FirstChildEPKc(void);

/* Symbol: _ZNK12TiXmlElement9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlElement::StreamOut(TiXmlOutStream*) const */
int _ZNK12TiXmlElement9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZNK12TiXmlUnknown9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlUnknown::StreamOut(TiXmlOutStream*) const */
int _ZNK12TiXmlUnknown9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZN12TiXmlCommentC1ERKS_ */
/* Demangled: TiXmlComment::TiXmlComment(TiXmlComment const&) */
int _ZN12TiXmlCommentC1ERKS_(void);

/* Symbol: _ZN9TiXmlNode11RemoveChildEPS_ */
/* Demangled: TiXmlNode::RemoveChild(TiXmlNode*) */
int _ZN9TiXmlNode11RemoveChildEPS_(void);

/* Symbol: _ZNK9TiXmlNode15PreviousSiblingEPKc */
/* Demangled: TiXmlNode::PreviousSibling(char const*) const */
int _ZNK9TiXmlNode15PreviousSiblingEPKc(void);

/* Symbol: _ZN12TiXmlElementD1Ev */
/* Demangled: TiXmlElement::~TiXmlElement() */
int _ZN12TiXmlElementD1Ev(void);

/* Symbol: _ZN9TiXmlNode15IterateChildrenEPKcPS_ */
/* Demangled: TiXmlNode::IterateChildren(char const*, TiXmlNode*) */
int _ZN9TiXmlNode15IterateChildrenEPKcPS_(void);

/* Symbol: _ZNK13TiXmlDocument9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlDocument::StreamOut(TiXmlOutStream*) const */
int _ZNK13TiXmlDocument9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZNK16TiXmlDeclaration5CloneEv */
/* Demangled: TiXmlDeclaration::Clone() const */
int _ZNK16TiXmlDeclaration5CloneEv(void);

/* Symbol: _ZN9TiXmlNode5ClearEv */
/* Demangled: TiXmlNode::Clear() */
int _ZN9TiXmlNode5ClearEv(void);

/* Symbol: _ZNK13TiXmlDocument8SaveFileEv */
/* Demangled: TiXmlDocument::SaveFile() const */
int _ZNK13TiXmlDocument8SaveFileEv(void);

/* Symbol: _ZN9TiXmlBase13utf8ByteTableE */
/* Demangled: TiXmlBase::utf8ByteTable */
extern void* _ZN9TiXmlBase13utf8ByteTableE;

/* Symbol: _ZN12TiXmlCommentC2ERKS_ */
/* Demangled: TiXmlComment::TiXmlComment(TiXmlComment const&) */
int _ZN12TiXmlCommentC2ERKS_(void);

/* Symbol: _ZNK12TiXmlUnknown6CopyToEPS_ */
/* Demangled: TiXmlUnknown::CopyTo(TiXmlUnknown*) const */
int _ZNK12TiXmlUnknown6CopyToEPS_(void);

/* Symbol: _ZTV12TiXmlUnknown */
/* Demangled: vtable for TiXmlUnknown */
extern void* _ZTV12TiXmlUnknown;

/* Symbol: _ZN12TiXmlElementD0Ev */
/* Demangled: TiXmlElement::~TiXmlElement() */
int _ZN12TiXmlElementD0Ev(void);

/* Symbol: _ZN17TiXmlAttributeSet4FindEPKc */
/* Demangled: TiXmlAttributeSet::Find(char const*) */
int _ZN17TiXmlAttributeSet4FindEPKc(void);

/* Symbol: _ZNK12TiXmlComment6CopyToEPS_ */
/* Demangled: TiXmlComment::CopyTo(TiXmlComment*) const */
int _ZNK12TiXmlComment6CopyToEPS_(void);

/* Symbol: _ZNK9TiXmlText6CopyToEPS_ */
/* Demangled: TiXmlText::CopyTo(TiXmlText*) const */
int _ZNK9TiXmlText6CopyToEPS_(void);

/* Symbol: _ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlComment::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZNK14TiXmlAttribute9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlAttribute::StreamOut(TiXmlOutStream*) const */
int _ZNK14TiXmlAttribute9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZN12TiXmlElement9ClearThisEv */
/* Demangled: TiXmlElement::ClearThis() */
int _ZN12TiXmlElement9ClearThisEv(void);

/* Symbol: _ZN12TiXmlElementC1EPKc */
/* Demangled: TiXmlElement::TiXmlElement(char const*) */
int _ZN12TiXmlElementC1EPKc(void);

/* Symbol: _ZN17TiXmlAttributeSetC2Ev */
/* Demangled: TiXmlAttributeSet::TiXmlAttributeSet() */
int _ZN17TiXmlAttributeSetC2Ev(void);

/* Symbol: _ZNK12TiXmlComment5CloneEv */
/* Demangled: TiXmlComment::Clone() const */
int _ZNK12TiXmlComment5CloneEv(void);

/* Symbol: _ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding */
/* Demangled: TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding) */
int _ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding(void);

/* Symbol: _ZN14TiXmlAttribute4NextEv */
/* Demangled: TiXmlAttribute::Next() */
int _ZN14TiXmlAttribute4NextEv(void);

/* Symbol: _ZNK11TiXmlHandle10FirstChildEv */
/* Demangled: TiXmlHandle::FirstChild() const */
int _ZNK11TiXmlHandle10FirstChildEv(void);

/* Symbol: _ZNK9TiXmlNode18NextSiblingElementEv */
/* Demangled: TiXmlNode::NextSiblingElement() const */
int _ZNK9TiXmlNode18NextSiblingElementEv(void);

/* Symbol: _ZTV13TiXmlDocument */
/* Demangled: vtable for TiXmlDocument */
extern void* _ZTV13TiXmlDocument;

/* Symbol: _ZN12TiXmlCommentaSERKS_ */
/* Demangled: TiXmlComment::operator=(TiXmlComment const&) */
int _ZN12TiXmlCommentaSERKS_(void);

/* Symbol: _ZN12TiXmlElement12SetAttributeEPKci */
/* Demangled: TiXmlElement::SetAttribute(char const*, int) */
int _ZN12TiXmlElement12SetAttributeEPKci(void);

/* Symbol: _ZN9TiXmlNode17FirstChildElementEv */
/* Demangled: TiXmlNode::FirstChildElement() */
int _ZN9TiXmlNode17FirstChildElementEv(void);

/* Symbol: _ZN9TiXmlNode18NextSiblingElementEv */
/* Demangled: TiXmlNode::NextSiblingElement() */
int _ZN9TiXmlNode18NextSiblingElementEv(void);

/* Symbol: _ZNK12TiXmlComment9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlComment::StreamOut(TiXmlOutStream*) const */
int _ZNK12TiXmlComment9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZNK9TiXmlText5CloneEv */
/* Demangled: TiXmlText::Clone() const */
int _ZNK9TiXmlText5CloneEv(void);

/* Symbol: _ZN17TiXmlAttributeSetC1Ev */
/* Demangled: TiXmlAttributeSet::TiXmlAttributeSet() */
int _ZN17TiXmlAttributeSetC1Ev(void);

/* Symbol: _ZNK12TiXmlElement7GetTextEv */
/* Demangled: TiXmlElement::GetText() const */
int _ZNK12TiXmlElement7GetTextEv(void);

/* Symbol: _ZNK13TiXmlDocument5CloneEv */
/* Demangled: TiXmlDocument::Clone() const */
int _ZNK13TiXmlDocument5CloneEv(void);

/* Symbol: _ZNK13TiXmlDocument6CopyToEPS_ */
/* Demangled: TiXmlDocument::CopyTo(TiXmlDocument*) const */
int _ZNK13TiXmlDocument6CopyToEPS_(void);

/* Symbol: _ZNK9TiXmlNode15IterateChildrenEPKcPKS_ */
/* Demangled: TiXmlNode::IterateChildren(char const*, TiXmlNode const*) const */
int _ZNK9TiXmlNode15IterateChildrenEPKcPKS_(void);

/* Symbol: _ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding */
/* Demangled: TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding) */
int _ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding(void);

/* Symbol: _ZN13TiXmlDocumentC1EPKc */
/* Demangled: TiXmlDocument::TiXmlDocument(char const*) */
int _ZN13TiXmlDocumentC1EPKc(void);

/* Symbol: _ZN9TiXmlBase14StringToBufferD2Ev */
/* Demangled: TiXmlBase::StringToBuffer::~StringToBuffer() */
int _ZN9TiXmlBase14StringToBufferD2Ev(void);

/* Symbol: _ZNK11TiXmlHandle17FirstChildElementEv */
/* Demangled: TiXmlHandle::FirstChildElement() const */
int _ZNK11TiXmlHandle17FirstChildElementEv(void);

/* Symbol: _ZNK11TiXmlHandle5ChildEPKci */
/* Demangled: TiXmlHandle::Child(char const*, int) const */
int _ZNK11TiXmlHandle5ChildEPKci(void);

/* Symbol: _ZNK9TiXmlText9StreamOutEP14TiXmlOutStream */
/* Demangled: TiXmlText::StreamOut(TiXmlOutStream*) const */
int _ZNK9TiXmlText9StreamOutEP14TiXmlOutStream(void);

/* Symbol: _ZN9TiXmlNode11NextSiblingEPKc */
/* Demangled: TiXmlNode::NextSibling(char const*) */
int _ZN9TiXmlNode11NextSiblingEPKc(void);

/* Symbol: _ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlText::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN9TiXmlBase14StringToBufferD1Ev */
/* Demangled: TiXmlBase::StringToBuffer::~StringToBuffer() */
int _ZN9TiXmlBase14StringToBufferD1Ev(void);

/* Symbol: _ZN9TiXmlNode15IterateChildrenEPS_ */
/* Demangled: TiXmlNode::IterateChildren(TiXmlNode*) */
int _ZN9TiXmlNode15IterateChildrenEPS_(void);

/* Symbol: _ZNK12TiXmlElement6CopyToEPS_ */
/* Demangled: TiXmlElement::CopyTo(TiXmlElement*) const */
int _ZNK12TiXmlElement6CopyToEPS_(void);

/* Symbol: _ZNK12TiXmlUnknown5CloneEv */
/* Demangled: TiXmlUnknown::Clone() const */
int _ZNK12TiXmlUnknown5CloneEv(void);

/* Symbol: _ZNK14TiXmlAttribute8IntValueEv */
/* Demangled: TiXmlAttribute::IntValue() const */
int _ZNK14TiXmlAttribute8IntValueEv(void);

/* Symbol: _ZNK9TiXmlNode15IterateChildrenEPKS_ */
/* Demangled: TiXmlNode::IterateChildren(TiXmlNode const*) const */
int _ZNK9TiXmlNode15IterateChildrenEPKS_(void);

/* Symbol: _ZTV9TiXmlNode */
/* Demangled: vtable for TiXmlNode */
extern void* _ZTV9TiXmlNode;

/* Symbol: _ZN12TiXmlElement15RemoveAttributeEPKc */
/* Demangled: TiXmlElement::RemoveAttribute(char const*) */
int _ZN12TiXmlElement15RemoveAttributeEPKc(void);

/* Symbol: _ZN12TiXmlElementC2EPKc */
/* Demangled: TiXmlElement::TiXmlElement(char const*) */
int _ZN12TiXmlElementC2EPKc(void);

/* Symbol: _ZN9TiXmlBase9PutStringERK11TiXmlStringP14TiXmlOutStream */
/* Demangled: TiXmlBase::PutString(TiXmlString const&, TiXmlOutStream*) */
int _ZN9TiXmlBase9PutStringERK11TiXmlStringP14TiXmlOutStream(void);

/* Symbol: _ZN9TiXmlNode10FirstChildEPKc */
/* Demangled: TiXmlNode::FirstChild(char const*) */
int _ZN9TiXmlNode10FirstChildEPKc(void);

/* Symbol: _ZN9TiXmlNode11GetDocumentEv */
/* Demangled: TiXmlNode::GetDocument() */
int _ZN9TiXmlNode11GetDocumentEv(void);

/* Symbol: _ZNK17TiXmlAttributeSet4FindEPKc */
/* Demangled: TiXmlAttributeSet::Find(char const*) const */
int _ZNK17TiXmlAttributeSet4FindEPKc(void);

/* Symbol: _ZN12TiXmlElement18SetDoubleAttributeEPKcd */
/* Demangled: TiXmlElement::SetDoubleAttribute(char const*, double) */
int _ZN12TiXmlElement18SetDoubleAttributeEPKcd(void);

/* Symbol: _ZN9TiXmlBase9PutStringERK11TiXmlStringPS0_ */
/* Demangled: TiXmlBase::PutString(TiXmlString const&, TiXmlString*) */
int _ZN9TiXmlBase9PutStringERK11TiXmlStringPS0_(void);

/* Symbol: _ZN9TiXmlNode18NextSiblingElementEPKc */
/* Demangled: TiXmlNode::NextSiblingElement(char const*) */
int _ZN9TiXmlNode18NextSiblingElementEPKc(void);

/* Symbol: _ZNK13TiXmlDocument8SaveFileEPKc */
/* Demangled: TiXmlDocument::SaveFile(char const*) const */
int _ZNK13TiXmlDocument8SaveFileEPKc(void);

/* Symbol: _ZN11TiXmlString6assignEPKcj */
/* Demangled: TiXmlString::assign(char const*, unsigned int) */
int _ZN11TiXmlString6assignEPKcj(void);

/* Symbol: _ZN13TiXmlDocumentC2Ev */
/* Demangled: TiXmlDocument::TiXmlDocument() */
int _ZN13TiXmlDocumentC2Ev(void);

/* Symbol: _ZN16TiXmlDeclarationC1ERKS_ */
/* Demangled: TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&) */
int _ZN16TiXmlDeclarationC1ERKS_(void);

/* Symbol: _ZNK9TiXmlNode18NextSiblingElementEPKc */
/* Demangled: TiXmlNode::NextSiblingElement(char const*) const */
int _ZNK9TiXmlNode18NextSiblingElementEPKc(void);

/* Symbol: _ZNK9TiXmlText5BlankEv */
/* Demangled: TiXmlText::Blank() const */
int _ZNK9TiXmlText5BlankEv(void);

/* Symbol: _ZN12TiXmlElement12SetAttributeEPKcS1_ */
/* Demangled: TiXmlElement::SetAttribute(char const*, char const*) */
int _ZN12TiXmlElement12SetAttributeEPKcS1_(void);

/* Symbol: _ZN16TiXmlDeclarationC1EPKcS1_S1_ */
/* Demangled: TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*) */
int _ZN16TiXmlDeclarationC1EPKcS1_S1_(void);

/* Symbol: _ZN9TiXmlNode17FirstChildElementEPKc */
/* Demangled: TiXmlNode::FirstChildElement(char const*) */
int _ZN9TiXmlNode17FirstChildElementEPKc(void);

/* Symbol: _ZNK12TiXmlUnknown5PrintEP7__sFILEi */
/* Demangled: TiXmlUnknown::Print(__sFILE*, int) const */
int _ZNK12TiXmlUnknown5PrintEP7__sFILEi(void);

/* Symbol: _ZN13TiXmlDocumentC2EPKc */
/* Demangled: TiXmlDocument::TiXmlDocument(char const*) */
int _ZN13TiXmlDocumentC2EPKc(void);

/* Symbol: _ZTV16TiXmlDeclaration */
/* Demangled: vtable for TiXmlDeclaration */
extern void* _ZTV16TiXmlDeclaration;

/* Symbol: _ZN13TiXmlDocumentC1Ev */
/* Demangled: TiXmlDocument::TiXmlDocument() */
int _ZN13TiXmlDocumentC1Ev(void);

/* Symbol: _ZN16TiXmlDeclarationC2ERKS_ */
/* Demangled: TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&) */
int _ZN16TiXmlDeclarationC2ERKS_(void);

/* Symbol: _ZN9TiXmlBase14StringToBufferC2ERK11TiXmlString */
/* Demangled: TiXmlBase::StringToBuffer::StringToBuffer(TiXmlString const&) */
int _ZN9TiXmlBase14StringToBufferC2ERK11TiXmlString(void);

/* Symbol: _ZNK12TiXmlElement5CloneEv */
/* Demangled: TiXmlElement::Clone() const */
int _ZNK12TiXmlElement5CloneEv(void);

/* Symbol: _ZN9TiXmlNodeD2Ev */
/* Demangled: TiXmlNode::~TiXmlNode() */
int _ZN9TiXmlNodeD2Ev(void);

/* Symbol: _ZNK11TiXmlHandle17FirstChildElementEPKc */
/* Demangled: TiXmlHandle::FirstChildElement(char const*) const */
int _ZNK11TiXmlHandle17FirstChildElementEPKc(void);

/* Symbol: _ZNK14TiXmlAttribute16QueryDoubleValueEPd */
/* Demangled: TiXmlAttribute::QueryDoubleValue(double*) const */
int _ZNK14TiXmlAttribute16QueryDoubleValueEPd(void);

/* Symbol: _ZNK16TiXmlDeclaration5PrintEP7__sFILEi */
/* Demangled: TiXmlDeclaration::Print(__sFILE*, int) const */
int _ZNK16TiXmlDeclaration5PrintEP7__sFILEi(void);

/* Symbol: _ZNK9TiXmlNode9LastChildEPKc */
/* Demangled: TiXmlNode::LastChild(char const*) const */
int _ZNK9TiXmlNode9LastChildEPKc(void);

/* Symbol: _ZlsR14TiXmlOutStreamRK9TiXmlNode */
/* Demangled: operator<<(TiXmlOutStream&, TiXmlNode const&) */
int _ZlsR14TiXmlOutStreamRK9TiXmlNode(void);

/* Symbol: _ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN14TiXmlAttribute14SetDoubleValueEd */
/* Demangled: TiXmlAttribute::SetDoubleValue(double) */
int _ZN14TiXmlAttribute14SetDoubleValueEd(void);

/* Symbol: _ZN14TiXmlAttribute8PreviousEv */
/* Demangled: TiXmlAttribute::Previous() */
int _ZN14TiXmlAttribute8PreviousEv(void);

/* Symbol: _ZN9TiXmlNode9LastChildEPKc */
/* Demangled: TiXmlNode::LastChild(char const*) */
int _ZN9TiXmlNode9LastChildEPKc(void);

/* Symbol: _ZNK16TiXmlDeclaration6CopyToEPS_ */
/* Demangled: TiXmlDeclaration::CopyTo(TiXmlDeclaration*) const */
int _ZNK16TiXmlDeclaration6CopyToEPS_(void);

/* Symbol: _ZNK9TiXmlNode17FirstChildElementEv */
/* Demangled: TiXmlNode::FirstChildElement() const */
int _ZNK9TiXmlNode17FirstChildElementEv(void);

/* Symbol: _ZTV12TiXmlElement */
/* Demangled: vtable for TiXmlElement */
extern void* _ZTV12TiXmlElement;

/* Symbol: _ZN9TiXmlNode12ReplaceChildEPS_RKS_ */
/* Demangled: TiXmlNode::ReplaceChild(TiXmlNode*, TiXmlNode const&) */
int _ZN9TiXmlNode12ReplaceChildEPS_RKS_(void);

/* Symbol: _ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd */
/* Demangled: TiXmlElement::QueryDoubleAttribute(char const*, double*) const */
int _ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd(void);

/* Symbol: _ZNK13TiXmlDocument5PrintEP7__sFILEi */
/* Demangled: TiXmlDocument::Print(__sFILE*, int) const */
int _ZNK13TiXmlDocument5PrintEP7__sFILEi(void);

/* Symbol: _ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN13TiXmlDocumentC1ERKS_ */
/* Demangled: TiXmlDocument::TiXmlDocument(TiXmlDocument const&) */
int _ZN13TiXmlDocumentC1ERKS_(void);

/* Symbol: _ZN16TiXmlDeclarationaSERKS_ */
/* Demangled: TiXmlDeclaration::operator=(TiXmlDeclaration const&) */
int _ZN16TiXmlDeclarationaSERKS_(void);

/* Symbol: _ZN9TiXmlNodeD1Ev */
/* Demangled: TiXmlNode::~TiXmlNode() */
int _ZN9TiXmlNodeD1Ev(void);

/* Symbol: _ZTV14TiXmlAttribute */
/* Demangled: vtable for TiXmlAttribute */
extern void* _ZTV14TiXmlAttribute;

/* Symbol: _ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding */
/* Demangled: TiXmlNode::Identify(char const*, TiXmlEncoding) */
int _ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding(void);

/* Symbol: _ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding */
/* Demangled: TiXmlDeclaration::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */
int _ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding(void);

/* Symbol: _ZN9TiXmlNode14InsertEndChildERKS_ */
/* Demangled: TiXmlNode::InsertEndChild(TiXmlNode const&) */
int _ZN9TiXmlNode14InsertEndChildERKS_(void);

/* Symbol: _ZNK14TiXmlAttribute5PrintEP7__sFILEi */
/* Demangled: TiXmlAttribute::Print(__sFILE*, int) const */
int _ZNK14TiXmlAttribute5PrintEP7__sFILEi(void);

/* Symbol: _ZplRK11TiXmlStringPKc */
/* Demangled: operator+(TiXmlString const&, char const*) */
int _ZplRK11TiXmlStringPKc(void);

/* Symbol: _ZN9TiXmlNode15PreviousSiblingEPKc */
/* Demangled: TiXmlNode::PreviousSibling(char const*) */
int _ZN9TiXmlNode15PreviousSiblingEPKc(void);

/* Symbol: _ZNK12TiXmlComment5PrintEP7__sFILEi */
/* Demangled: TiXmlComment::Print(__sFILE*, int) const */
int _ZNK12TiXmlComment5PrintEP7__sFILEi(void);

/* Symbol: _ZNK9TiXmlNode17FirstChildElementEPKc */
/* Demangled: TiXmlNode::FirstChildElement(char const*) const */
int _ZNK9TiXmlNode17FirstChildElementEPKc(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBTINYXML_H */
