/*
 * Reverse-Engineered Source for: libmialgo_sd.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmialgo_sd"

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
#include "libmialgo_sd.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD2Ev(void) {
    ALOGD("_ZNSt11logic_errorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: __cxa_terminate_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_terminate_handler = NULL;

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKS_() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD0Ev(void) {
    ALOGD("_ZNSt10bad_typeidD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToComment() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode9ToCommentEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode9ToCommentEv() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD1Ev(void) {
    ALOGD("_ZNSt11range_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPa = NULL;

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD2Ev() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPb = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: std::logic_error::operator=(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_erroraSERKS_(void) {
    ALOGD("_ZNSt11logic_erroraSERKS_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::Putc(char) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter4PutcEc(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter4PutcEc() called");
    return 0;
}

/* Exported Object: typeinfo name for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKl = NULL;

/* Exported Object: typeinfo name for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKm = NULL;

/* Demangled: ALGO_SD_UnInit */
extern "C" __attribute__((visibility("default"))) int ALGO_SD_UnInit(void) {
    ALOGD("ALGO_SD_UnInit() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKh = NULL;

/* Demangled: tinyxml2::XMLAttribute::QueryDoubleValue(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute16QueryDoubleValueEPd(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute16QueryDoubleValueEPd() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLElement */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml210XMLElementE = NULL;

/* Exported Object: typeinfo name for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKn = NULL;

/* Exported Object: typeinfo for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13bad_exception = NULL;

/* Demangled: tinyxml2::XMLDocument::PopDepth() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8PopDepthEv(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8PopDepthEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKj = NULL;

/* Exported Object: typeinfo for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDs = NULL;

/* Demangled: operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnamSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: vtable for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12length_error = NULL;

/* Exported Object: typeinfo name for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKg = NULL;

/* Exported Object: typeinfo name for tinyxml2::XMLPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml210XMLPrinterE = NULL;

/* Demangled: tinyxml2::MemPoolT<120>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi120EED2Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi120EED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPv = NULL;

/* Demangled: tinyxml2::StrPair::~StrPair() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPairD1Ev(void) {
    ALOGD("_ZN8tinyxml27StrPairD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPj = NULL;

/* Exported Object: typeinfo name for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPn = NULL;

/* Exported Object: typeinfo for tinyxml2::XMLElement */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml210XMLElementE = NULL;

/* Demangled: tinyxml2::StrPair::CollapseWhitespace() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair18CollapseWhitespaceEv(void) {
    ALOGD("_ZN8tinyxml27StrPair18CollapseWhitespaceEv() called");
    return 0;
}

/* Exported Object: typeinfo name for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPi = NULL;

/* Exported Object: typeinfo name for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPm = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: typeinfo name for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPg = NULL;

/* Exported Object: typeinfo name for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPy = NULL;

/* Exported Object: vtable for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__class_type_infoE = NULL;

/* Exported Object: typeinfo name for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPh = NULL;

/* Demangled: __cxa_get_globals_fast */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals_fast(void) {
    ALOGD("__cxa_get_globals_fast() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::CompactMode(tinyxml2::XMLElement const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter11CompactModeERKNS_10XMLElementE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter11CompactModeERKNS_10XMLElementE() called");
    return 0;
}

/* Exported Object: typeinfo name for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPf = NULL;

/* Exported Object: typeinfo name for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPe = NULL;

/* Exported Object: typeinfo for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16invalid_argument = NULL;

/* Demangled: tinyxml2::XMLDocument::XMLDocument(bool, tinyxml2::Whitespace) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocumentC1EbNS_10WhitespaceE(void) {
    ALOGD("_ZN8tinyxml211XMLDocumentC1EbNS_10WhitespaceE() called");
    return 0;
}

/* Exported Object: typeinfo for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTIa = NULL;

/* Demangled: tinyxml2::XMLUnknown::XMLUnknown(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknownC1EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLUnknownC1EPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTIe = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: typeinfo for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIg = NULL;

/* Demangled: tinyxml2::XMLDocument::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument5ClearEv(void) {
    ALOGD("_ZN8tinyxml211XMLDocument5ClearEv() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: typeinfo name for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPx = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Demangled: tinyxml2::XMLNode::DeleteChildren() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode14DeleteChildrenEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode14DeleteChildrenEv() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPw = NULL;

/* Exported Object: typeinfo for float */
extern "C" __attribute__((visibility("default"))) void* _ZTIf = NULL;

/* Exported Object: typeinfo for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDn = NULL;

/* Demangled: __cxa_throw */
extern "C" __attribute__((visibility("default"))) int __cxa_throw(void) {
    ALOGD("__cxa_throw() called");
    return 0;
}

/* Exported Object: typeinfo for int */
extern "C" __attribute__((visibility("default"))) void* _ZTIi = NULL;

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::FindAttribute(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement13FindAttributeEPKc(void) {
    ALOGD("_ZNK8tinyxml210XMLElement13FindAttributeEPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::MemPoolT<120> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml28MemPoolTILi120EEE = NULL;

/* Demangled: operator new[](unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_t(void) {
    ALOGD("_ZnamSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTIh = NULL;

/* Demangled: SceneDetection2::quickSortTopY(Faceinfo*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection213quickSortTopYEP8Faceinfoii(void) {
    ALOGD("_ZN15SceneDetection213quickSortTopYEP8Faceinfoii() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::TransferTo(tinyxml2::StrPair*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair10TransferToEPS0_(void) {
    ALOGD("_ZN8tinyxml27StrPair10TransferToEPS0_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode5ValueEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode5ValueEv() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLVisitor */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml210XMLVisitorE = NULL;

/* Exported Object: typeinfo name for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPs = NULL;

/* Exported Object: typeinfo name for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPt = NULL;

/* Exported Object: vtable for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12domain_error = NULL;

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD1Ev(void) {
    ALOGD("_ZNSt14overflow_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPo = NULL;

/* Demangled: tinyxml2::XMLDocument::Parse(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument5ParseEPKcm(void) {
    ALOGD("_ZN8tinyxml211XMLDocument5ParseEPKcm() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::UnsignedText(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement12UnsignedTextEj(void) {
    ALOGD("_ZNK8tinyxml210XMLElement12UnsignedTextEj() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::~XMLDeclaration() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclarationD0Ev(void) {
    ALOGD("_ZN8tinyxml214XMLDeclarationD0Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC1EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLDocument */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml211XMLDocumentE = NULL;

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: tinyxml2::XMLUtil::ToStr(bool, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToStrEbPci(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToStrEbPci() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: tinyxml2::XMLNode::ToDeclaration() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode13ToDeclarationEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode13ToDeclarationEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushDeclaration(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter15PushDeclarationEPKc(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter15PushDeclarationEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: tinyxml2::MemPoolT<104>::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi104EE5ClearEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi104EE5ClearEv() called");
    return 0;
}

/* Demangled: __cxa_end_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_end_catch(void) {
    ALOGD("__cxa_end_catch() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::MemPoolT<104> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml28MemPoolTILi104EEE = NULL;

/* Demangled: tinyxml2::XMLUtil::ToInt(char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToIntEPKcPi(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToIntEPKcPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::XMLElement(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElementC1EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLElementC1EPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<80>::Free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi80EE4FreeEPv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi80EE4FreeEPv() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIy = NULL;

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD1Ev(void) {
    ALOGD("_ZNSt9exceptionD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPy = NULL;

/* Exported Object: typeinfo for void */
extern "C" __attribute__((visibility("default"))) void* _ZTIv = NULL;

/* Exported Object: typeinfo for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPs = NULL;

/* Exported Object: typeinfo for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIw = NULL;

/* Demangled: tinyxml2::XMLPrinter::~XMLPrinter() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinterD2Ev(void) {
    ALOGD("_ZN8tinyxml210XMLPrinterD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPt = NULL;

/* Exported Object: typeinfo name for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPa = NULL;

/* Demangled: tinyxml2::XMLPrinter::VisitEnter(tinyxml2::XMLDocument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter10VisitEnterERKNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter10VisitEnterERKNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPv = NULL;

/* Exported Object: typeinfo name for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt20bad_array_new_length = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: tinyxml2::MemPoolT<104>::Alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi104EE5AllocEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi104EE5AllocEv() called");
    return 0;
}

/* Exported Object: typeinfo name for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPb = NULL;

/* Exported Object: typeinfo for long */
extern "C" __attribute__((visibility("default"))) void* _ZTIl = NULL;

/* Demangled: tinyxml2::XMLAttribute::~XMLAttribute() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttributeD0Ev(void) {
    ALOGD("_ZN8tinyxml212XMLAttributeD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTIj = NULL;

/* Demangled: tinyxml2::XMLPrinter::Write(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter5WriteEPKcm(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter5WriteEPKcm() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTIm = NULL;

/* Exported Object: typeinfo for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIx = NULL;

/* Exported Object: typeinfo name for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPl = NULL;

/* Demangled: tinyxml2::XMLDocument::NewUnknown(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument10NewUnknownEPKc(void) {
    ALOGD("_ZN8tinyxml211XMLDocument10NewUnknownEPKc() called");
    return 0;
}

/* Demangled: operator delete(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvm(void) {
    ALOGD("_ZdlPvm() called");
    return 0;
}

/* Exported Object: vtable for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11range_error = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushUnknown(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter11PushUnknownEPKc(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter11PushUnknownEPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11range_error = NULL;

/* Exported Object: typeinfo for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKh = NULL;

/* Exported Object: typeinfo for short */
extern "C" __attribute__((visibility("default"))) void* _ZTIs = NULL;

/* Exported Object: typeinfo for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTIt = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__pbase_type_infoE = NULL;

/* Exported Object: typeinfo for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKg = NULL;

/* Exported Object: typeinfo for double */
extern "C" __attribute__((visibility("default"))) void* _ZTId = NULL;

/* Demangled: tinyxml2::XMLAttribute::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute5ValueEv(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute5ValueEv() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD0Ev(void) {
    ALOGD("_ZNSt15underflow_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char */
extern "C" __attribute__((visibility("default"))) void* _ZTIc = NULL;

/* Exported Object: typeinfo for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKi = NULL;

/* Demangled: tinyxml2::XMLUtil::ToBool(char const*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil6ToBoolEPKcPb(void) {
    ALOGD("_ZN8tinyxml27XMLUtil6ToBoolEPKcPb() called");
    return 0;
}

/* Exported Object: typeinfo for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTIb = NULL;

/* Exported Object: typeinfo name for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPd = NULL;

/* Exported Object: typeinfo for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKj = NULL;

/* Exported Object: typeinfo for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIn = NULL;

/* Exported Object: typeinfo name for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPc = NULL;

/* Exported Object: typeinfo for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKm = NULL;

/* Exported Object: typeinfo for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKl = NULL;

/* Exported Object: typeinfo for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKf = NULL;

/* Exported Object: typeinfo for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIo = NULL;

/* Demangled: tinyxml2::XMLAttribute::QueryInt64Value(long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute15QueryInt64ValueEPl(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute15QueryInt64ValueEPl() called");
    return 0;
}

/* Exported Object: typeinfo for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDh = NULL;

/* Exported Object: typeinfo for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKb = NULL;

/* Demangled: tinyxml2::XMLAttribute::QueryFloatValue(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute15QueryFloatValueEPf(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute15QueryFloatValueEPf() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDi = NULL;

/* Exported Object: typeinfo for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKc = NULL;

/* Demangled: tinyxml2::XMLNode::InsertEndChild(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode14InsertEndChildEPS0_(void) {
    ALOGD("_ZN8tinyxml27XMLNode14InsertEndChildEPS0_() called");
    return 0;
}

/* Exported Object: typeinfo for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKd = NULL;

/* Exported Object: typeinfo for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12domain_error = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: typeinfo for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKe = NULL;

/* Exported Object: typeinfo for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKa = NULL;

/* Exported Object: vtable for tinyxml2::MemPoolT<112> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml28MemPoolTILi112EEE = NULL;

/* Demangled: tinyxml2::MemPoolT<112>::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi112EE5ClearEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi112EE5ClearEv() called");
    return 0;
}

/* Demangled: operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znwm(void) {
    ALOGD("_Znwm() called");
    return 0;
}

/* Demangled: std::bad_exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13bad_exception4whatEv(void) {
    ALOGD("_ZNKSt13bad_exception4whatEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::QueryFloatText(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement14QueryFloatTextEPf(void) {
    ALOGD("_ZNK8tinyxml210XMLElement14QueryFloatTextEPf() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13bad_exception = NULL;

/* Demangled: tinyxml2::XMLUnknown::ToUnknown() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLUnknown9ToUnknownEv(void) {
    ALOGD("_ZNK8tinyxml210XMLUnknown9ToUnknownEv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: tinyxml2::XMLDocument::ErrorIDToName(tinyxml2::XMLError) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument13ErrorIDToNameENS_8XMLErrorE(void) {
    ALOGD("_ZN8tinyxml211XMLDocument13ErrorIDToNameENS_8XMLErrorE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::ShallowClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml214XMLDeclaration12ShallowCloneEPNS_11XMLDocumentE(void) {
    ALOGD("_ZNK8tinyxml214XMLDeclaration12ShallowCloneEPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKt = NULL;

/* Demangled: tinyxml2::XMLAttribute::SetName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute7SetNameEPKc(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute7SetNameEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToUnknown() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode9ToUnknownEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode9ToUnknownEv() called");
    return 0;
}

/* Exported Object: typeinfo for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKs = NULL;

/* Demangled: tinyxml2::XMLNode::FirstChildElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode17FirstChildElementEPKc(void) {
    ALOGD("_ZNK8tinyxml27XMLNode17FirstChildElementEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKo = NULL;

/* Exported Object: typeinfo for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKn = NULL;

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::ParseDeep(char*, tinyxml2::StrPair*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclaration9ParseDeepEPcPNS_7StrPairEPi(void) {
    ALOGD("_ZN8tinyxml214XMLDeclaration9ParseDeepEPcPNS_7StrPairEPi() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::XMLComment */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml210XMLCommentE = NULL;

/* Demangled: tinyxml2::XMLPrinter::Visit(tinyxml2::XMLDeclaration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter5VisitERKNS_14XMLDeclarationE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter5VisitERKNS_14XMLDeclarationE() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::SetStr(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair6SetStrEPKci(void) {
    ALOGD("_ZN8tinyxml27StrPair6SetStrEPKci() called");
    return 0;
}

/* Demangled: operator delete(void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __cxa_current_exception_type */
extern "C" __attribute__((visibility("default"))) int __cxa_current_exception_type(void) {
    ALOGD("__cxa_current_exception_type() called");
    return 0;
}

/* Demangled: SceneDetection2::cameraStatusDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection221cameraStatusDetectionEv(void) {
    ALOGD("_ZN15SceneDetection221cameraStatusDetectionEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::NewText(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument7NewTextEPKc(void) {
    ALOGD("_ZN8tinyxml211XMLDocument7NewTextEPKc() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD0Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::ToDeclaration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml214XMLDeclaration13ToDeclarationEv(void) {
    ALOGD("_ZNK8tinyxml214XMLDeclaration13ToDeclarationEv() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_t(void) {
    ALOGD("_ZdaPvSt11align_val_t() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<120>::Alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi120EE5AllocEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi120EE5AllocEv() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: SceneDetection2::createSceneDetection(char const*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection220createSceneDetectionEPKciiii(void) {
    ALOGD("_ZN15SceneDetection220createSceneDetectionEPKciiii() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16bad_array_length = NULL;

/* Demangled: tinyxml2::XMLElement::FloatAttribute(char const*, float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement14FloatAttributeEPKcf(void) {
    ALOGD("_ZNK8tinyxml210XMLElement14FloatAttributeEPKcf() called");
    return 0;
}

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

/* Demangled: tinyxml2::XMLDocument::PushDepth() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument9PushDepthEv(void) {
    ALOGD("_ZN8tinyxml211XMLDocument9PushDepthEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToUnknown() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode9ToUnknownEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode9ToUnknownEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::~XMLDeclaration() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclarationD2Ev(void) {
    ALOGD("_ZN8tinyxml214XMLDeclarationD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToElement() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode9ToElementEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode9ToElementEv() called");
    return 0;
}

/* Demangled: std::bad_cast::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt8bad_cast4whatEv(void) {
    ALOGD("_ZNKSt8bad_cast4whatEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::UnsignedAttribute(char const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement17UnsignedAttributeEPKcj(void) {
    ALOGD("_ZNK8tinyxml210XMLElement17UnsignedAttributeEPKcj() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::~XMLElement() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElementD1Ev(void) {
    ALOGD("_ZN8tinyxml210XMLElementD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDs = NULL;

/* Demangled: tinyxml2::XMLDocument::MarkInUse(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument9MarkInUseEPNS_7XMLNodeE(void) {
    ALOGD("_ZN8tinyxml211XMLDocument9MarkInUseEPNS_7XMLNodeE() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::MemPoolT<104> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml28MemPoolTILi104EEE = NULL;

/* Demangled: tinyxml2::XMLDocument::NewDeclaration(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument14NewDeclarationEPKc(void) {
    ALOGD("_ZN8tinyxml211XMLDocument14NewDeclarationEPKc() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo name for half */
extern "C" __attribute__((visibility("default"))) void* _ZTSDh = NULL;

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD2Ev(void) {
    ALOGD("_ZNSt10bad_typeidD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDi = NULL;

/* Demangled: tinyxml2::XMLUtil::ToUnsigned(char const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil10ToUnsignedEPKcPj(void) {
    ALOGD("_ZN8tinyxml27XMLUtil10ToUnsignedEPKcPj() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDn = NULL;

/* Exported Object: typeinfo name for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDh = NULL;

/* Demangled: tinyxml2::XMLUnknown::ToUnknown() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknown9ToUnknownEv(void) {
    ALOGD("_ZN8tinyxml210XMLUnknown9ToUnknownEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::DeleteNode(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument10DeleteNodeEPNS_7XMLNodeE(void) {
    ALOGD("_ZN8tinyxml211XMLDocument10DeleteNodeEPNS_7XMLNodeE() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDi = NULL;

/* Demangled: std::bad_typeid::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt10bad_typeid4whatEv(void) {
    ALOGD("_ZNKSt10bad_typeid4whatEv() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD1Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::ShallowEqual(tinyxml2::XMLNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument12ShallowEqualEPKNS_7XMLNodeE(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument12ShallowEqualEPKNS_7XMLNodeE() called");
    return 0;
}

/* Demangled: ALGO_SD_Init */
extern "C" __attribute__((visibility("default"))) int ALGO_SD_Init(void) {
    ALOGD("ALGO_SD_Init() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD1Ev(void) {
    ALOGD("_ZNSt8bad_castD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PrintString(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter11PrintStringEPKcb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter11PrintStringEPKcb() called");
    return 0;
}

/* Exported Object: tinyxml2::XMLUtil::writeBoolFalse */
extern "C" __attribute__((visibility("default"))) void* _ZN8tinyxml27XMLUtil14writeBoolFalseE = NULL;

/* Exported Object: vtable for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12out_of_range = NULL;

/* Demangled: tinyxml2::XMLUtil::ToStr(double, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToStrEdPci(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToStrEdPci() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::Print(tinyxml2::XMLPrinter*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument5PrintEPNS_10XMLPrinterE(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument5PrintEPNS_10XMLPrinterE() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::~XMLComment() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLCommentD1Ev(void) {
    ALOGD("_ZN8tinyxml210XMLCommentD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::VisitExit(tinyxml2::XMLElement const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter9VisitExitERKNS_10XMLElementE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter9VisitExitERKNS_10XMLElementE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::QueryBoolValue(bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute14QueryBoolValueEPb(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute14QueryBoolValueEPb() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::XMLText */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml27XMLTextE = NULL;

/* Demangled: tinyxml2::XMLElement::QueryUnsignedText(unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement17QueryUnsignedTextEPj(void) {
    ALOGD("_ZNK8tinyxml210XMLElement17QueryUnsignedTextEPj() called");
    return 0;
}

/* Demangled: __cxa_get_exception_ptr */
extern "C" __attribute__((visibility("default"))) int __cxa_get_exception_ptr(void) {
    ALOGD("__cxa_get_exception_ptr() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC2Ev(void) {
    ALOGD("_ZNSt10bad_typeidC2Ev() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD1Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD1Ev() called");
    return 0;
}

/* Demangled: __cxa_call_unexpected */
extern "C" __attribute__((visibility("default"))) int __cxa_call_unexpected(void) {
    ALOGD("__cxa_call_unexpected() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::~XMLAttribute() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttributeD2Ev(void) {
    ALOGD("_ZN8tinyxml212XMLAttributeD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::ToDeclaration() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclaration13ToDeclarationEv(void) {
    ALOGD("_ZN8tinyxml214XMLDeclaration13ToDeclarationEv() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: tinyxml2::MemPoolT<120>::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi120EE5ClearEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi120EE5ClearEv() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::XMLNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml27XMLNodeE = NULL;

/* Demangled: FeatureExtractor::computeHistAndMeanMap(unsigned char*, int, int, int, int, int, int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN16FeatureExtractor21computeHistAndMeanMapEPhiiiiiiPfS1_(void) {
    ALOGD("_ZN16FeatureExtractor21computeHistAndMeanMapEPhiiiiiiPfS1_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::Visit(tinyxml2::XMLText const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter5VisitERKNS_7XMLTextE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter5VisitERKNS_7XMLTextE() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTSDn = NULL;

/* Exported Object: typeinfo name for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9type_info = NULL;

/* Exported Object: vtable for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11logic_error = NULL;

/* Demangled: std::set_terminate(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt13set_terminatePFvvE(void) {
    ALOGD("_ZSt13set_terminatePFvvE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::~XMLNode() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNodeD1Ev(void) {
    ALOGD("_ZN8tinyxml27XMLNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9exception = NULL;

/* Demangled: SceneDetection2::destorySceneDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection221destorySceneDetectionEv(void) {
    ALOGD("_ZN15SceneDetection221destorySceneDetectionEv() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvmSt11align_val_t(void) {
    ALOGD("_ZdaPvmSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::XMLText */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml27XMLTextE = NULL;

/* Exported Object: typeinfo name for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDs = NULL;

/* Demangled: tinyxml2::XMLDeclaration::XMLDeclaration(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclarationC2EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml214XMLDeclarationC2EPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD1Ev(void) {
    ALOGD("_ZNSt9bad_allocD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair5ResetEv(void) {
    ALOGD("_ZN8tinyxml27StrPair5ResetEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToDocument() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode10ToDocumentEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode10ToDocumentEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLText::~XMLText() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLTextD0Ev(void) {
    ALOGD("_ZN8tinyxml27XMLTextD0Ev() called");
    return 0;
}

/* Demangled: SceneDetection2::load_parameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection215load_parametersEPKc(void) {
    ALOGD("_ZN15SceneDetection215load_parametersEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::SetText(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEPKc(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::LoadFile(__sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8LoadFileEP7__sFILE(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8LoadFileEP7__sFILE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUnknown::~XMLUnknown() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknownD2Ev(void) {
    ALOGD("_ZN8tinyxml210XMLUnknownD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::ErrorStr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument8ErrorStrEv(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument8ErrorStrEv() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: tinyxml2::XMLElement::ShallowClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement12ShallowCloneEPNS_11XMLDocumentE(void) {
    ALOGD("_ZNK8tinyxml210XMLElement12ShallowCloneEPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: SceneDetection2::computeExpoRatio(float*, int, int, int, int, float&, float&, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection216computeExpoRatioEPfiiiiRfS1_S1_S1_(void) {
    ALOGD("_ZN15SceneDetection216computeExpoRatioEPfiiiiRfS1_S1_S1_() called");
    return 0;
}

/* Demangled: SceneDetection2::dumpFrameYUV(unsigned char*, int, int, sceneType) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection212dumpFrameYUVEPhii9sceneType(void) {
    ALOGD("_ZN15SceneDetection212dumpFrameYUVEPhii9sceneType() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD2Ev(void) {
    ALOGD("_ZNSt15underflow_errorD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<120>::Free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi120EE4FreeEPv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi120EE4FreeEPv() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<112>::Free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi112EE4FreeEPv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi112EE4FreeEPv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToElement() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode9ToElementEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode9ToElementEv() called");
    return 0;
}

/* Demangled: SceneDetection2::runSceneDetection(unsigned char*, SDMetadata*, sceneType&) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection217runSceneDetectionEPhP10SDMetadataR9sceneType(void) {
    ALOGD("_ZN15SceneDetection217runSceneDetectionEPhP10SDMetadataR9sceneType() called");
    return 0;
}

/* Demangled: SceneDetection2::motionDetection(unsigned char*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection215motionDetectionEPhiii(void) {
    ALOGD("_ZN15SceneDetection215motionDetectionEPhiii() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::XMLComment(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLCommentC2EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLCommentC2EPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9bad_alloc = NULL;

/* Demangled: tinyxml2::XMLAttribute::QueryIntValue(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute13QueryIntValueEPi(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute13QueryIntValueEPi() called");
    return 0;
}

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC2Ev(void) {
    ALOGD("_ZNSt9bad_allocC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLUnknown */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml210XMLUnknownE = NULL;

/* Demangled: tinyxml2::XMLComment::ToComment() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLComment9ToCommentEv(void) {
    ALOGD("_ZN8tinyxml210XMLComment9ToCommentEv() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<112>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi112EED2Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi112EED2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::ErrorName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument9ErrorNameEv(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument9ErrorNameEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::ToComment() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLComment9ToCommentEv(void) {
    ALOGD("_ZNK8tinyxml210XMLComment9ToCommentEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::BoolText(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement8BoolTextEb(void) {
    ALOGD("_ZNK8tinyxml210XMLElement8BoolTextEb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::Accept(tinyxml2::XMLVisitor*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement6AcceptEPNS_10XMLVisitorE(void) {
    ALOGD("_ZNK8tinyxml210XMLElement6AcceptEPNS_10XMLVisitorE() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<112>::SetTracked() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi112EE10SetTrackedEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi112EE10SetTrackedEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::Print(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter5PrintEPKcz(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter5PrintEPKcz() called");
    return 0;
}

/* Exported Object: typeinfo for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKv = NULL;

/* Demangled: tinyxml2::XMLComment::Accept(tinyxml2::XMLVisitor*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLComment6AcceptEPNS_10XMLVisitorE(void) {
    ALOGD("_ZNK8tinyxml210XMLComment6AcceptEPNS_10XMLVisitorE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::LastChildElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode16LastChildElementEPKc(void) {
    ALOGD("_ZNK8tinyxml27XMLNode16LastChildElementEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUnknown::ParseDeep(char*, tinyxml2::StrPair*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknown9ParseDeepEPcPNS_7StrPairEPi(void) {
    ALOGD("_ZN8tinyxml210XMLUnknown9ParseDeepEPcPNS_7StrPairEPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ToStr(int, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToStrEiPci(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToStrEiPci() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKy = NULL;

/* Demangled: SceneDetection2::hdrDetectionForSubScene(float*, int, int, int, int, float, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection223hdrDetectionForSubSceneEPfiiiiffb(void) {
    ALOGD("_ZN15SceneDetection223hdrDetectionForSubSceneEPfiiiiffb() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKw = NULL;

/* Demangled: tinyxml2::XMLDocument::Identify(char*, tinyxml2::XMLNode**) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8IdentifyEPcPPNS_7XMLNodeE(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8IdentifyEPcPPNS_7XMLNodeE() called");
    return 0;
}

/* Exported Object: typeinfo for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKx = NULL;

/* Demangled: SceneDetection2::quickSortLeftX(Faceinfo*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection214quickSortLeftXEP8Faceinfoii(void) {
    ALOGD("_ZN15SceneDetection214quickSortLeftXEP8Faceinfoii() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<80>::ItemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml28MemPoolTILi80EE8ItemSizeEv(void) {
    ALOGD("_ZNK8tinyxml28MemPoolTILi80EE8ItemSizeEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLText::ToText() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLText6ToTextEv(void) {
    ALOGD("_ZNK8tinyxml27XMLText6ToTextEv() called");
    return 0;
}

/* Exported Object: vtable for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt8bad_cast = NULL;

/* Exported Object: typeinfo name for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt10bad_typeid = NULL;

/* Exported Object: typeinfo for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt14overflow_error = NULL;

/* Demangled: tinyxml2::XMLNode::DeepClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode9DeepCloneEPNS_11XMLDocumentE(void) {
    ALOGD("_ZNK8tinyxml27XMLNode9DeepCloneEPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<104>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi104EED2Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi104EED2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<104>::ItemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml28MemPoolTILi104EE8ItemSizeEv(void) {
    ALOGD("_ZNK8tinyxml28MemPoolTILi104EE8ItemSizeEv() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_t(void) {
    ALOGD("_ZnwmSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushAttribute(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter13PushAttributeEPKcb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter13PushAttributeEPKcb() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::MemPoolT<120> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml28MemPoolTILi120EEE = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushAttribute(char const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter13PushAttributeEPKcd(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter13PushAttributeEPKcd() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::SetValue(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode8SetValueEPKcb(void) {
    ALOGD("_ZN8tinyxml27XMLNode8SetValueEPKcb() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::XMLVisitor */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml210XMLVisitorE = NULL;

/* Exported Object: vtable for tinyxml2::XMLComment */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml210XMLCommentE = NULL;

/* Demangled: __cxa_free_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_dependent_exception(void) {
    ALOGD("__cxa_free_dependent_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: tinyxml2::XMLPrinter::XMLPrinter(__sFILE*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinterC2EP7__sFILEbi(void) {
    ALOGD("_ZN8tinyxml210XMLPrinterC2EP7__sFILEbi() called");
    return 0;
}

/* Demangled: SceneDetection2::hdrDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection212hdrDetectionEv(void) {
    ALOGD("_ZN15SceneDetection212hdrDetectionEv() called");
    return 0;
}

/* Demangled: std::bad_alloc::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9bad_alloc4whatEv(void) {
    ALOGD("_ZNKSt9bad_alloc4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLText */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml27XMLTextE = NULL;

/* Demangled: SceneDetection2::getSceneDetectionResult(sceneType&) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection223getSceneDetectionResultER9sceneType(void) {
    ALOGD("_ZN15SceneDetection223getSceneDetectionResultER9sceneType() called");
    return 0;
}

/* Demangled: SceneDetection2::load_models(std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection211load_modelsENSt6__ndk16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void) {
    ALOGD("_ZN15SceneDetection211load_modelsENSt6__ndk16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::IntAttribute(char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement12IntAttributeEPKci(void) {
    ALOGD("_ZNK8tinyxml210XMLElement12IntAttributeEPKci() called");
    return 0;
}

/* Exported Object: typeinfo name for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12domain_error = NULL;

/* Demangled: SD_GetVersion */
extern "C" __attribute__((visibility("default"))) int SD_GetVersion(void) {
    ALOGD("SD_GetVersion() called");
    return 0;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD1Ev(void) {
    ALOGD("_ZNSt11logic_errorD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::ParseName(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair9ParseNameEPc(void) {
    ALOGD("_ZN8tinyxml27StrPair9ParseNameEPc() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: tinyxml2::XMLNode::ToText() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode6ToTextEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode6ToTextEv() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::MemPool */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml27MemPoolE = NULL;

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD2Ev(void) {
    ALOGD("_ZNSt12length_errorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16invalid_argument = NULL;

/* Demangled: tinyxml2::XMLDeclaration::ShallowEqual(tinyxml2::XMLNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml214XMLDeclaration12ShallowEqualEPKNS_7XMLNodeE(void) {
    ALOGD("_ZNK8tinyxml214XMLDeclaration12ShallowEqualEPKNS_7XMLNodeE() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD1Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::XMLPrinter(__sFILE*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinterC1EP7__sFILEbi(void) {
    ALOGD("_ZN8tinyxml210XMLPrinterC1EP7__sFILEbi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::~XMLDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocumentD0Ev(void) {
    ALOGD("_ZN8tinyxml211XMLDocumentD0Ev() called");
    return 0;
}

/* Demangled: __gxx_personality_v0 */
extern "C" __attribute__((visibility("default"))) int __gxx_personality_v0(void) {
    ALOGD("__gxx_personality_v0() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTISt10bad_typeid = NULL;

/* Exported Object: vtable for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16bad_array_length = NULL;

/* Demangled: __cxa_allocate_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_dependent_exception(void) {
    ALOGD("__cxa_allocate_dependent_exception() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD2Ev(void) {
    ALOGD("_ZNSt11range_errorD2Ev() called");
    return 0;
}

/* Demangled: __cxa_rethrow_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow_primary_exception(void) {
    ALOGD("__cxa_rethrow_primary_exception() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: SceneDetection2::motionfaceFrameDiff() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection219motionfaceFrameDiffEv(void) {
    ALOGD("_ZN15SceneDetection219motionfaceFrameDiffEv() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD2Ev(void) {
    ALOGD("_ZNSt9type_infoD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::ToDocument() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument10ToDocumentEv(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument10ToDocumentEv() called");
    return 0;
}

/* Demangled: std::get_new_handler() */
extern "C" __attribute__((visibility("default"))) int _ZSt15get_new_handlerv(void) {
    ALOGD("_ZSt15get_new_handlerv() called");
    return 0;
}

/* Demangled: SceneDetection2::reorderFaceInfo(Faceinfo*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection215reorderFaceInfoEP8FaceinfoiPi(void) {
    ALOGD("_ZN15SceneDetection215reorderFaceInfoEP8FaceinfoiPi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: tinyxml2::XMLNode::DeleteChild(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode11DeleteChildEPS0_(void) {
    ALOGD("_ZN8tinyxml27XMLNode11DeleteChildEPS0_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToComment() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode9ToCommentEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode9ToCommentEv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Exported Object: vtable for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13runtime_error = NULL;

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC2ERKS_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToElementWithName(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode17ToElementWithNameEPKc(void) {
    ALOGD("_ZNK8tinyxml27XMLNode17ToElementWithNameEPKc() called");
    return 0;
}

/* Demangled: SceneDetection2::wideAngleRecommend() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection218wideAngleRecommendEv(void) {
    ALOGD("_ZN15SceneDetection218wideAngleRecommendEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLText::ParseDeep(char*, tinyxml2::StrPair*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLText9ParseDeepEPcPNS_7StrPairEPi(void) {
    ALOGD("_ZN8tinyxml27XMLText9ParseDeepEPcPNS_7StrPairEPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ParseDeep(char*, tinyxml2::StrPair*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode9ParseDeepEPcPNS_7StrPairEPi(void) {
    ALOGD("_ZN8tinyxml27XMLNode9ParseDeepEPcPNS_7StrPairEPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::SetText(float) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEf(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEf() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::QueryBoolText(bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement13QueryBoolTextEPb(void) {
    ALOGD("_ZNK8tinyxml210XMLElement13QueryBoolTextEPb() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::~StrPair() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPairD2Ev(void) {
    ALOGD("_ZN8tinyxml27StrPairD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<112>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi112EED0Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi112EED0Ev() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1EPKc(void) {
    ALOGD("_ZNSt11logic_errorC1EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: tinyxml2::MemPoolT<104>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi104EED0Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi104EED0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ToInt64(char const*, long*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil7ToInt64EPKcPl(void) {
    ALOGD("_ZN8tinyxml27XMLUtil7ToInt64EPKcPl() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::SetText(long) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEl(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEl() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::SetText(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEj(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEj() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::ParseText(char*, char const*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair9ParseTextEPcPKciPi(void) {
    ALOGD("_ZN8tinyxml27StrPair9ParseTextEPcPKciPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::ShallowEqual(tinyxml2::XMLNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLComment12ShallowEqualEPKNS_7XMLNodeE(void) {
    ALOGD("_ZNK8tinyxml210XMLComment12ShallowEqualEPKNS_7XMLNodeE() called");
    return 0;
}

/* Exported Object: vtable for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13bad_exception = NULL;

/* Demangled: tinyxml2::XMLElement::SetText(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEi(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEi() called");
    return 0;
}

/* Demangled: SceneDetection2::~SceneDetection2() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection2D2Ev(void) {
    ALOGD("_ZN15SceneDetection2D2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::ToElement() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement9ToElementEv(void) {
    ALOGD("_ZN8tinyxml210XMLElement9ToElementEv() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exceptions */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exceptions(void) {
    ALOGD("__cxa_uncaught_exceptions() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: tinyxml2::XMLElement::SetText(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEb(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEb() called");
    return 0;
}

/* Exported Object: vtable for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt10bad_typeid = NULL;

/* Demangled: tinyxml2::XMLDocument::XMLDocument(bool, tinyxml2::Whitespace) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocumentC2EbNS_10WhitespaceE(void) {
    ALOGD("_ZN8tinyxml211XMLDocumentC2EbNS_10WhitespaceE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::~XMLDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocumentD2Ev(void) {
    ALOGD("_ZN8tinyxml211XMLDocumentD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::DynArray<tinyxml2::XMLNode*, 10>::~DynArray() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28DynArrayIPNS_7XMLNodeELi10EED2Ev(void) {
    ALOGD("_ZN8tinyxml28DynArrayIPNS_7XMLNodeELi10EED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::XMLUnknown */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml210XMLUnknownE = NULL;

/* Demangled: tinyxml2::XMLPrinter::~XMLPrinter() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinterD0Ev(void) {
    ALOGD("_ZN8tinyxml210XMLPrinterD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9bad_alloc = NULL;

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD1Ev(void) {
    ALOGD("_ZNSt12length_errorD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::SetText(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement7SetTextEd(void) {
    ALOGD("_ZN8tinyxml210XMLElement7SetTextEd() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::MemPoolT<80> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml28MemPoolTILi80EEE = NULL;

/* Exported Object: typeinfo name for char */
extern "C" __attribute__((visibility("default"))) void* _ZTSc = NULL;

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD1Ev(void) {
    ALOGD("_ZNSt13runtime_errorD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLText::ToText() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLText6ToTextEv(void) {
    ALOGD("_ZN8tinyxml27XMLText6ToTextEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTSj = NULL;

/* Exported Object: vtable for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt14overflow_error = NULL;

/* Demangled: SceneDetection2::getFocusIndex(Faceinfo*, Faceinfo, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection213getFocusIndexEP8FaceinfoS0_iPi(void) {
    ALOGD("_ZN15SceneDetection213getFocusIndexEP8FaceinfoS0_iPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::DeleteAttribute(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement15DeleteAttributeEPKc(void) {
    ALOGD("_ZN8tinyxml210XMLElement15DeleteAttributeEPKc() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exception(void) {
    ALOGD("__cxa_uncaught_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for long */
extern "C" __attribute__((visibility("default"))) void* _ZTSl = NULL;

/* Exported Object: typeinfo for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11range_error = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD0Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD0Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: tinyxml2::XMLElement::GetText() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement7GetTextEv(void) {
    ALOGD("_ZNK8tinyxml210XMLElement7GetTextEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTSt = NULL;

/* Exported Object: typeinfo name for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTSb = NULL;

/* Demangled: tinyxml2::XMLElement::QueryIntText(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement12QueryIntTextEPi(void) {
    ALOGD("_ZNK8tinyxml210XMLElement12QueryIntTextEPi() called");
    return 0;
}

/* Exported Object: typeinfo name for short */
extern "C" __attribute__((visibility("default"))) void* _ZTSs = NULL;

/* Exported Object: typeinfo name for tinyxml2::XMLAttribute */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml212XMLAttributeE = NULL;

/* Exported Object: typeinfo name for double */
extern "C" __attribute__((visibility("default"))) void* _ZTSd = NULL;

/* Demangled: tinyxml2::XMLAttribute::ParseDeep(char*, bool, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute9ParseDeepEPcbPi(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute9ParseDeepEPcbPi() called");
    return 0;
}

/* Exported Object: typeinfo name for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTSa = NULL;

/* Exported Object: vtable for tinyxml2::XMLAttribute */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml212XMLAttributeE = NULL;

/* Exported Object: typeinfo name for tinyxml2::XMLComment */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml210XMLCommentE = NULL;

/* Exported Object: vtable for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: tinyxml2::XMLUtil::ToStr(float, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToStrEfPci(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToStrEfPci() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: __cxa_get_globals */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals(void) {
    ALOGD("__cxa_get_globals() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD2Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushHeader(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter10PushHeaderEbb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter10PushHeaderEbb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::Name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute4NameEv(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute4NameEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::CreateAttribute() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement15CreateAttributeEv(void) {
    ALOGD("_ZN8tinyxml210XMLElement15CreateAttributeEv() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC1ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for float */
extern "C" __attribute__((visibility("default"))) void* _ZTSf = NULL;

/* Demangled: tinyxml2::MemPoolT<120>::ItemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml28MemPoolTILi120EE8ItemSizeEv(void) {
    ALOGD("_ZNK8tinyxml28MemPoolTILi120EE8ItemSizeEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::ShallowClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument12ShallowCloneEPS0_(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument12ShallowCloneEPS0_() called");
    return 0;
}

/* Exported Object: typeinfo name for int */
extern "C" __attribute__((visibility("default"))) void* _ZTSi = NULL;

/* Exported Object: typeinfo name for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSg = NULL;

/* Exported Object: typeinfo name for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTSh = NULL;

/* Exported Object: typeinfo name for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTSe = NULL;

/* Demangled: tinyxml2::XMLNode::~XMLNode() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNodeD2Ev(void) {
    ALOGD("_ZN8tinyxml27XMLNodeD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::Visit(tinyxml2::XMLComment const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter5VisitERKNS_10XMLCommentE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter5VisitERKNS_10XMLCommentE() called");
    return 0;
}

/* Exported Object: __cxa_new_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_new_handler = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushAttribute(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter13PushAttributeEPKci(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter13PushAttributeEPKci() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushAttribute(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter13PushAttributeEPKcj(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter13PushAttributeEPKcj() called");
    return 0;
}

/* Demangled: SceneDetection2::updateSceneStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection217updateSceneStatusEv(void) {
    ALOGD("_ZN15SceneDetection217updateSceneStatusEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushAttribute(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter13PushAttributeEPKcl(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter13PushAttributeEPKcl() called");
    return 0;
}

/* Demangled: operator delete(void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_t(void) {
    ALOGD("_ZdlPvSt11align_val_t() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode10ToDocumentEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode10ToDocumentEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt20bad_array_new_length = NULL;

/* Demangled: tinyxml2::XMLDocument::PrintError() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument10PrintErrorEv(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument10PrintErrorEv() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC1Ev() called");
    return 0;
}

/* Demangled: __cxa_pure_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_pure_virtual(void) {
    ALOGD("__cxa_pure_virtual() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::NewElement(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument10NewElementEPKc(void) {
    ALOGD("_ZN8tinyxml211XMLDocument10NewElementEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::XMLPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml210XMLPrinterE = NULL;

/* Demangled: __cxa_demangle */
extern "C" __attribute__((visibility("default"))) int __cxa_demangle(void) {
    ALOGD("__cxa_demangle() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSw = NULL;

/* Demangled: tinyxml2::MemPoolT<120>::SetTracked() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi120EE10SetTrackedEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi120EE10SetTrackedEv() called");
    return 0;
}

/* Exported Object: tinyxml2::XMLDocument::_errorNames */
extern "C" __attribute__((visibility("default"))) void* _ZN8tinyxml211XMLDocument11_errorNamesE = NULL;

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD2Ev() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD0Ev(void) {
    ALOGD("_ZNSt14overflow_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSx = NULL;

/* Demangled: tinyxml2::XMLDeclaration::XMLDeclaration(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclarationC1EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml214XMLDeclarationC1EPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD1Ev(void) {
    ALOGD("_ZNSt12domain_errorD1Ev() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt20bad_array_new_length4whatEv(void) {
    ALOGD("_ZNKSt20bad_array_new_length4whatEv() called");
    return 0;
}

/* Demangled: tinyxml2::StrPair::GetStr() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27StrPair6GetStrEv(void) {
    ALOGD("_ZN8tinyxml27StrPair6GetStrEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::ToDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument10ToDocumentEv(void) {
    ALOGD("_ZN8tinyxml211XMLDocument10ToDocumentEv() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC2EPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLText::ShallowEqual(tinyxml2::XMLNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLText12ShallowEqualEPKNS_7XMLNodeE(void) {
    ALOGD("_ZNK8tinyxml27XMLText12ShallowEqualEPKNS_7XMLNodeE() called");
    return 0;
}

/* Demangled: std::bad_array_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16bad_array_length4whatEv(void) {
    ALOGD("_ZNKSt16bad_array_length4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSo = NULL;

/* Demangled: tinyxml2::XMLUnknown::XMLUnknown(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknownC2EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLUnknownC2EPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSn = NULL;

/* Exported Object: typeinfo name for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTSm = NULL;

/* Demangled: tinyxml2::XMLDeclaration::Accept(tinyxml2::XMLVisitor*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml214XMLDeclaration6AcceptEPNS_10XMLVisitorE(void) {
    ALOGD("_ZNK8tinyxml214XMLDeclaration6AcceptEPNS_10XMLVisitorE() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSy = NULL;

/* Exported Object: typeinfo for tinyxml2::XMLDocument */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml211XMLDocumentE = NULL;

/* Exported Object: vtable for tinyxml2::XMLPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml210XMLPrinterE = NULL;

/* Demangled: operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZdaPv(void) {
    ALOGD("_ZdaPv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::DoubleText(double) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement10DoubleTextEd(void) {
    ALOGD("_ZNK8tinyxml210XMLElement10DoubleTextEd() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2EPKc(void) {
    ALOGD("_ZNSt11logic_errorC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9bad_alloc = NULL;

/* Demangled: tinyxml2::XMLElement::XMLElement(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElementC2EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLElementC2EPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::XMLNode(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNodeC2EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml27XMLNodeC2EPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo name for void */
extern "C" __attribute__((visibility("default"))) void* _ZTSv = NULL;

/* Demangled: tinyxml2::XMLDocument::NewComment(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument10NewCommentEPKc(void) {
    ALOGD("_ZN8tinyxml211XMLDocument10NewCommentEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::DeepCopy(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument8DeepCopyEPS0_(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument8DeepCopyEPS0_() called");
    return 0;
}

/* Exported Object: vtable for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9type_info = NULL;

/* Demangled: __cxa_allocate_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_exception(void) {
    ALOGD("__cxa_allocate_exception() called");
    return 0;
}

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;

/* Demangled: tinyxml2::XMLElement::~XMLElement() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElementD2Ev(void) {
    ALOGD("_ZN8tinyxml210XMLElementD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLDeclaration */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml214XMLDeclarationE = NULL;

/* Exported Object: vtable for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC1Ev(void) {
    ALOGD("_ZNSt8bad_castC1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::Int64Text(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement9Int64TextEl(void) {
    ALOGD("_ZNK8tinyxml210XMLElement9Int64TextEl() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt20bad_array_new_length = NULL;

/* Demangled: tinyxml2::XMLComment::XMLComment(tinyxml2::XMLDocument*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLCommentC1EPNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLCommentC1EPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushComment(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter11PushCommentEPKc(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter11PushCommentEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument5ParseEv(void) {
    ALOGD("_ZN8tinyxml211XMLDocument5ParseEv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD2Ev(void) {
    ALOGD("_ZNSt8bad_castD2Ev() called");
    return 0;
}

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD1Ev(void) {
    ALOGD("_ZNSt10bad_typeidD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ToFloat(char const*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil7ToFloatEPKcPf(void) {
    ALOGD("_ZN8tinyxml27XMLUtil7ToFloatEPKcPf() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::XMLDocument */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml211XMLDocumentE = NULL;

/* Exported Object: tinyxml2::XMLUtil::writeBoolTrue */
extern "C" __attribute__((visibility("default"))) void* _ZN8tinyxml27XMLUtil13writeBoolTrueE = NULL;

/* Demangled: tinyxml2::MemPoolT<80>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi80EED2Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi80EED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9type_info = NULL;

/* Demangled: tinyxml2::XMLElement::ParseDeep(char*, tinyxml2::StrPair*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement9ParseDeepEPcPNS_7StrPairEPi(void) {
    ALOGD("_ZN8tinyxml210XMLElement9ParseDeepEPcPNS_7StrPairEPi() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::InsertChildPreamble(tinyxml2::XMLNode*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode19InsertChildPreambleEPS0_(void) {
    ALOGD("_ZNK8tinyxml27XMLNode19InsertChildPreambleEPS0_() called");
    return 0;
}

/* Demangled: std::__ndk1::__basic_string_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::SealElementIfJustOpened() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter23SealElementIfJustOpenedEv(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter23SealElementIfJustOpenedEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(long) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEl(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEl() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEj(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEj() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::XMLAttribute */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml212XMLAttributeE = NULL;

/* Demangled: tinyxml2::XMLComment::ShallowClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLComment12ShallowCloneEPNS_11XMLDocumentE(void) {
    ALOGD("_ZNK8tinyxml210XMLComment12ShallowCloneEPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::MemPoolT<104> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml28MemPoolTILi104EEE = NULL;

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEi(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEi() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<80>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi80EED0Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi80EED0Ev() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<80>::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi80EE5ClearEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi80EE5ClearEv() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC1Ev(void) {
    ALOGD("_ZNSt10bad_typeidC1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::~XMLNode() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNodeD0Ev(void) {
    ALOGD("_ZN8tinyxml27XMLNodeD0Ev() called");
    return 0;
}

/* Demangled: operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZdlPv(void) {
    ALOGD("_ZdlPv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::GetCharacterRef(char const*, char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil15GetCharacterRefEPKcPcPi(void) {
    ALOGD("_ZN8tinyxml27XMLUtil15GetCharacterRefEPKcPcPi() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD0Ev(void) {
    ALOGD("_ZNSt11range_errorD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PrintSpace(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter10PrintSpaceEi(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter10PrintSpaceEi() called");
    return 0;
}

/* Demangled: SceneDetection2::motionComputeBlockMeanMap(unsigned char*, int, int, int, int, int, int, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection225motionComputeBlockMeanMapEPhiiiiiiPfii(void) {
    ALOGD("_ZN15SceneDetection225motionComputeBlockMeanMapEPhiiiiiiPfii() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD0Ev(void) {
    ALOGD("_ZNSt9bad_allocD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::IntText(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement7IntTextEi(void) {
    ALOGD("_ZNK8tinyxml210XMLElement7IntTextEi() called");
    return 0;
}

/* Demangled: std::terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt9terminatev(void) {
    ALOGD("_ZSt9terminatev() called");
    return 0;
}

/* Demangled: operator new[](unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znam(void) {
    ALOGD("_Znam() called");
    return 0;
}

/* Demangled: __cxa_deleted_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_deleted_virtual(void) {
    ALOGD("__cxa_deleted_virtual() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ToStr(long, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToStrElPci(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToStrElPci() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUnknown::ShallowEqual(tinyxml2::XMLNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLUnknown12ShallowEqualEPKNS_7XMLNodeE(void) {
    ALOGD("_ZNK8tinyxml210XMLUnknown12ShallowEqualEPKNS_7XMLNodeE() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD0Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD0Ev() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: SceneDetection2::computeHistSimilarity(float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection221computeHistSimilarityEPfS0_i(void) {
    ALOGD("_ZN15SceneDetection221computeHistSimilarityEPfS0_i() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ToDouble(char const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil8ToDoubleEPKcPd(void) {
    ALOGD("_ZN8tinyxml27XMLUtil8ToDoubleEPKcPd() called");
    return 0;
}

/* Demangled: SceneDetection2::SceneDetection2(char const*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection2C2EPKciiii(void) {
    ALOGD("_ZN15SceneDetection2C2EPKciiii() called");
    return 0;
}

/* Demangled: SceneDetection2::sceneStatusDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection220sceneStatusDetectionEv(void) {
    ALOGD("_ZN15SceneDetection220sceneStatusDetectionEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::ParseDeep(char*, tinyxml2::StrPair*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLComment9ParseDeepEPcPNS_7StrPairEPi(void) {
    ALOGD("_ZN8tinyxml210XMLComment9ParseDeepEPcPNS_7StrPairEPi() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::~XMLComment() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLCommentD2Ev(void) {
    ALOGD("_ZN8tinyxml210XMLCommentD2Ev() called");
    return 0;
}

/* Demangled: __cxa_begin_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_begin_catch(void) {
    ALOGD("__cxa_begin_catch() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD2Ev(void) {
    ALOGD("_ZNSt14overflow_errorD2Ev() called");
    return 0;
}

/* Demangled: operator delete(void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvmSt11align_val_t(void) {
    ALOGD("_ZdlPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::Attribute(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement9AttributeEPKcS2_(void) {
    ALOGD("_ZNK8tinyxml210XMLElement9AttributeEPKcS2_() called");
    return 0;
}

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC1Ev(void) {
    ALOGD("_ZNSt9bad_allocC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: tinyxml2::MemPoolT<80>::Alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi80EE5AllocEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi80EE5AllocEv() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD0Ev(void) {
    ALOGD("_ZNSt13runtime_errorD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::Int64Attribute(char const*, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement14Int64AttributeEPKcl(void) {
    ALOGD("_ZNK8tinyxml210XMLElement14Int64AttributeEPKcl() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDeclaration::~XMLDeclaration() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml214XMLDeclarationD1Ev(void) {
    ALOGD("_ZN8tinyxml214XMLDeclarationD1Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Demangled: __cxa_free_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_exception(void) {
    ALOGD("__cxa_free_exception() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::~XMLElement() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElementD0Ev(void) {
    ALOGD("_ZN8tinyxml210XMLElementD0Ev() called");
    return 0;
}

/* Demangled: __cxa_decrement_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_decrement_exception_refcount(void) {
    ALOGD("__cxa_decrement_exception_refcount() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::SaveFile(__sFILE*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8SaveFileEP7__sFILEb(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8SaveFileEP7__sFILEb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUnknown::~XMLUnknown() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknownD1Ev(void) {
    ALOGD("_ZN8tinyxml210XMLUnknownD1Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::FindOrCreateAttribute(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement21FindOrCreateAttributeEPKc(void) {
    ALOGD("_ZN8tinyxml210XMLElement21FindOrCreateAttributeEPKc() called");
    return 0;
}

/* Demangled: __dynamic_cast */
extern "C" __attribute__((visibility("default"))) int __dynamic_cast(void) {
    ALOGD("__dynamic_cast() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD2Ev(void) {
    ALOGD("_ZNSt12domain_errorD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::ParseAttributes(char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement15ParseAttributesEPcPi(void) {
    ALOGD("_ZN8tinyxml210XMLElement15ParseAttributesEPcPi() called");
    return 0;
}

/* Demangled: SceneDetection2::motionBlockFrameDiff() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection220motionBlockFrameDiffEv(void) {
    ALOGD("_ZN15SceneDetection220motionBlockFrameDiffEv() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<104>::Free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi104EE4FreeEPv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi104EE4FreeEPv() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::XMLDeclaration */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml214XMLDeclarationE = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD0Ev(void) {
    ALOGD("_ZNSt8bad_castD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::BoolAttribute(char const*, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement13BoolAttributeEPKcb(void) {
    ALOGD("_ZNK8tinyxml210XMLElement13BoolAttributeEPKcb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUnknown::ShallowClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLUnknown12ShallowCloneEPNS_11XMLDocumentE(void) {
    ALOGD("_ZNK8tinyxml210XMLUnknown12ShallowCloneEPNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnwmSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::NextSiblingElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode18NextSiblingElementEPKc(void) {
    ALOGD("_ZNK8tinyxml27XMLNode18NextSiblingElementEPKc() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushText(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEd(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEd() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::QueryUnsignedValue(unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml212XMLAttribute18QueryUnsignedValueEPj(void) {
    ALOGD("_ZNK8tinyxml212XMLAttribute18QueryUnsignedValueEPj() called");
    return 0;
}

/* Demangled: std::set_unexpected(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt14set_unexpectedPFvvE(void) {
    ALOGD("_ZSt14set_unexpectedPFvvE() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::MemPoolT<120> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml28MemPoolTILi120EEE = NULL;

/* Demangled: tinyxml2::XMLText::Accept(tinyxml2::XMLVisitor*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLText6AcceptEPNS_10XMLVisitorE(void) {
    ALOGD("_ZNK8tinyxml27XMLText6AcceptEPNS_10XMLVisitorE() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt10unexpectedv(void) {
    ALOGD("_ZSt10unexpectedv() called");
    return 0;
}

/* Exported Object: __cxa_unexpected_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_unexpected_handler = NULL;

/* Demangled: ALGO_SD_Process */
extern "C" __attribute__((visibility("default"))) int ALGO_SD_Process(void) {
    ALOGD("ALGO_SD_Process() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUnknown::Accept(tinyxml2::XMLVisitor*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLUnknown6AcceptEPNS_10XMLVisitorE(void) {
    ALOGD("_ZNK8tinyxml210XMLUnknown6AcceptEPNS_10XMLVisitorE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLComment::~XMLComment() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLCommentD0Ev(void) {
    ALOGD("_ZN8tinyxml210XMLCommentD0Ev() called");
    return 0;
}

/* Demangled: SceneDetection2::storeFeatures() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection213storeFeaturesEv(void) {
    ALOGD("_ZN15SceneDetection213storeFeaturesEv() called");
    return 0;
}

/* Demangled: std::runtime_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13runtime_error4whatEv(void) {
    ALOGD("_ZNKSt13runtime_error4whatEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEPKc(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDi = NULL;

/* Demangled: tinyxml2::XMLElement::FloatText(float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement9FloatTextEf(void) {
    ALOGD("_ZNK8tinyxml210XMLElement9FloatTextEf() called");
    return 0;
}

/* Exported Object: typeinfo name for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDh = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushText(float) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEf(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEf() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD1Ev(void) {
    ALOGD("_ZNSt15underflow_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

/* Exported Object: typeinfo name for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16bad_array_length = NULL;

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD0Ev(void) {
    ALOGD("_ZNSt11logic_errorD0Ev() called");
    return 0;
}

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD2Ev(void) {
    ALOGD("_ZNSt9exceptionD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushText(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ConvertUTF32ToUTF8(unsigned long, char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil18ConvertUTF32ToUTF8EmPcPi(void) {
    ALOGD("_ZN8tinyxml27XMLUtil18ConvertUTF32ToUTF8EmPcPi() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDs = NULL;

/* Demangled: tinyxml2::MemPoolT<120>::~MemPoolT() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi120EED0Ev(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi120EED0Ev() called");
    return 0;
}

/* Demangled: SceneDetection2::SceneDetection2(char const*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection2C1EPKciiii(void) {
    ALOGD("_ZN15SceneDetection2C1EPKciiii() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::logic_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt11logic_error4whatEv(void) {
    ALOGD("_ZNKSt11logic_error4whatEv() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::XMLElement */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml210XMLElementE = NULL;

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD2Ev(void) {
    ALOGD("_ZNSt9bad_allocD2Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(float) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEf(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEf() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::LoadFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8LoadFileEPKc(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8LoadFileEPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDn = NULL;

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEd(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEd() called");
    return 0;
}

/* Exported Object: typeinfo name for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt15underflow_error = NULL;

/* Demangled: tinyxml2::XMLPrinter::VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter10VisitEnterERKNS_10XMLElementEPKNS_12XMLAttributeE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter10VisitEnterERKNS_10XMLElementEPKNS_12XMLAttributeE() called");
    return 0;
}

/* Demangled: tinyxml2::MemPoolT<104>::SetTracked() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi104EE10SetTrackedEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi104EE10SetTrackedEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::ReadBOM(char const*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil7ReadBOMEPKcPb(void) {
    ALOGD("_ZN8tinyxml27XMLUtil7ReadBOMEPKcPb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::PreviousSiblingElement(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode22PreviousSiblingElementEPKc(void) {
    ALOGD("_ZNK8tinyxml27XMLNode22PreviousSiblingElementEPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::MemPoolT<112> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml28MemPoolTILi112EEE = NULL;

/* Demangled: tinyxml2::XMLUnknown::~XMLUnknown() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLUnknownD0Ev(void) {
    ALOGD("_ZN8tinyxml210XMLUnknownD0Ev() called");
    return 0;
}

/* Demangled: __cxa_rethrow */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow(void) {
    ALOGD("__cxa_rethrow() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::DoubleAttribute(char const*, double) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement15DoubleAttributeEPKcd(void) {
    ALOGD("_ZNK8tinyxml210XMLElement15DoubleAttributeEPKcd() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushText(long) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEl(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEl() called");
    return 0;
}

/* Demangled: __cxa_increment_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_increment_exception_refcount(void) {
    ALOGD("__cxa_increment_exception_refcount() called");
    return 0;
}

/* Demangled: tinyxml2::XMLAttribute::SetAttribute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml212XMLAttribute12SetAttributeEb(void) {
    ALOGD("_ZN8tinyxml212XMLAttribute12SetAttributeEb() called");
    return 0;
}

/* Demangled: SceneDetection2::checkParams() */
extern "C" __attribute__((visibility("default"))) int _ZN15SceneDetection211checkParamsEv(void) {
    ALOGD("_ZN15SceneDetection211checkParamsEv() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::QueryInt64Text(long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement14QueryInt64TextEPl(void) {
    ALOGD("_ZNK8tinyxml210XMLElement14QueryInt64TextEPl() called");
    return 0;
}

/* Demangled: __cxa_current_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_current_primary_exception(void) {
    ALOGD("__cxa_current_primary_exception() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::DeleteAttribute(tinyxml2::XMLAttribute*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLElement15DeleteAttributeEPNS_12XMLAttributeE(void) {
    ALOGD("_ZN8tinyxml210XMLElement15DeleteAttributeEPNS_12XMLAttributeE() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD0Ev(void) {
    ALOGD("_ZNSt9type_infoD0Ev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushText(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEj(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEj() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushText(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEi(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEi() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD0Ev(void) {
    ALOGD("_ZNSt12length_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt14overflow_error = NULL;

/* Demangled: tinyxml2::XMLElement::QueryDoubleText(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement15QueryDoubleTextEPd(void) {
    ALOGD("_ZNK8tinyxml210XMLElement15QueryDoubleTextEPd() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::InsertFirstChild(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode16InsertFirstChildEPS0_(void) {
    ALOGD("_ZN8tinyxml27XMLNode16InsertFirstChildEPS0_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::Accept(tinyxml2::XMLVisitor*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml211XMLDocument6AcceptEPNS_10XMLVisitorE(void) {
    ALOGD("_ZNK8tinyxml211XMLDocument6AcceptEPNS_10XMLVisitorE() called");
    return 0;
}

/* Exported Object: typeinfo name for tinyxml2::XMLNode */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml27XMLNodeE = NULL;

/* Demangled: tinyxml2::XMLNode::Unlink(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode6UnlinkEPS0_(void) {
    ALOGD("_ZN8tinyxml27XMLNode6UnlinkEPS0_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLUtil::SetBoolSerialization(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil20SetBoolSerializationEPKcS2_(void) {
    ALOGD("_ZN8tinyxml27XMLUtil20SetBoolSerializationEPKcS2_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToDeclaration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLNode13ToDeclarationEv(void) {
    ALOGD("_ZNK8tinyxml27XMLNode13ToDeclarationEv() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC1Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::operator=(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_erroraSERKS_(void) {
    ALOGD("_ZNSt13runtime_erroraSERKS_() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvm(void) {
    ALOGD("_ZdaPvm() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD2Ev(void) {
    ALOGD("_ZNSt13runtime_errorD2Ev() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD0Ev(void) {
    ALOGD("_ZNSt12domain_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD0Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDi = NULL;

/* Demangled: tinyxml2::MemPoolT<112>::Alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi112EE5AllocEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi112EE5AllocEv() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD0Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: sdDumpBuffer(unsigned char*, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12sdDumpBufferPhPKcii(void) {
    ALOGD("_Z12sdDumpBufferPhPKcii() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::~XMLDocument() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocumentD1Ev(void) {
    ALOGD("_ZN8tinyxml211XMLDocumentD1Ev() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Exported Object: typeinfo for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDs = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD2Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD2Ev() called");
    return 0;
}

/* Demangled: std::get_terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt13get_terminatev(void) {
    ALOGD("_ZSt13get_terminatev() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::Visit(tinyxml2::XMLUnknown const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter5VisitERKNS_10XMLUnknownE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter5VisitERKNS_10XMLUnknownE() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::XMLUnknown */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml210XMLUnknownE = NULL;

/* Exported Object: typeinfo for tinyxml2::XMLNode */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml27XMLNodeE = NULL;

/* Exported Object: typeinfo for tinyxml2::XMLDeclaration */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml214XMLDeclarationE = NULL;

/* Exported Object: typeinfo for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPl = NULL;

/* Exported Object: typeinfo name for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKa = NULL;

/* Exported Object: typeinfo for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPd = NULL;

/* Demangled: tinyxml2::XMLUtil::ToStr(unsigned int, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLUtil5ToStrEjPci(void) {
    ALOGD("_ZN8tinyxml27XMLUtil5ToStrEjPci() called");
    return 0;
}

/* Exported Object: typeinfo for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDh = NULL;

/* Exported Object: typeinfo name for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKb = NULL;

/* Exported Object: typeinfo for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPc = NULL;

/* Exported Object: typeinfo for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTIDn = NULL;

/* Demangled: tinyxml2::XMLNode::InsertAfterChild(tinyxml2::XMLNode*, tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode16InsertAfterChildEPS0_S1_(void) {
    ALOGD("_ZN8tinyxml27XMLNode16InsertAfterChildEPS0_S1_() called");
    return 0;
}

/* Exported Object: typeinfo name for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKd = NULL;

/* Exported Object: typeinfo for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDn = NULL;

/* Exported Object: typeinfo name for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKf = NULL;

/* Exported Object: typeinfo for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPo = NULL;

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for half */
extern "C" __attribute__((visibility("default"))) void* _ZTIDh = NULL;

/* Exported Object: typeinfo name for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKc = NULL;

/* Exported Object: typeinfo for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDi = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__array_type_infoE = NULL;

/* Exported Object: typeinfo name for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKe = NULL;

/* Demangled: tinyxml2::XMLPrinter::PushText(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter8PushTextEPKcb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter8PushTextEPKcb() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD1Ev(void) {
    ALOGD("_ZNSt9type_infoD1Ev() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC2Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: typeinfo for tinyxml2::MemPoolT<80> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml28MemPoolTILi80EEE = NULL;

/* Exported Object: typeinfo for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPn = NULL;

/* Demangled: operator delete(void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPm = NULL;

/* Demangled: std::get_unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt14get_unexpectedv(void) {
    ALOGD("_ZSt14get_unexpectedv() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPw = NULL;

/* Demangled: tinyxml2::MemPoolT<112>::ItemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml28MemPoolTILi112EE8ItemSizeEv(void) {
    ALOGD("_ZNK8tinyxml28MemPoolTILi112EE8ItemSizeEv() called");
    return 0;
}

/* Exported Object: typeinfo for tinyxml2::MemPoolT<112> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8tinyxml28MemPoolTILi112EEE = NULL;

/* Demangled: std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_() called");
    return 0;
}

/* Exported Object: typeinfo for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPx = NULL;

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Demangled: std::set_new_handler(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt15set_new_handlerPFvvE(void) {
    ALOGD("_ZSt15set_new_handlerPFvvE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::ToText() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode6ToTextEv(void) {
    ALOGD("_ZN8tinyxml27XMLNode6ToTextEv() called");
    return 0;
}

/* Exported Object: vtable for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt15underflow_error = NULL;

/* Demangled: tinyxml2::XMLPrinter::VisitExit(tinyxml2::XMLDocument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter9VisitExitERKNS_11XMLDocumentE(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter9VisitExitERKNS_11XMLDocumentE() called");
    return 0;
}

/* Demangled: tinyxml2::XMLNode::DeleteNode(tinyxml2::XMLNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml27XMLNode10DeleteNodeEPS0_(void) {
    ALOGD("_ZN8tinyxml27XMLNode10DeleteNodeEPS0_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLElement::ShallowEqual(tinyxml2::XMLNode const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement12ShallowEqualEPKNS_7XMLNodeE(void) {
    ALOGD("_ZNK8tinyxml210XMLElement12ShallowEqualEPKNS_7XMLNodeE() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: tinyxml2::MemPoolT<80>::SetTracked() */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml28MemPoolTILi80EE10SetTrackedEv(void) {
    ALOGD("_ZN8tinyxml28MemPoolTILi80EE10SetTrackedEv() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::PushAttribute(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter13PushAttributeEPKcS2_(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter13PushAttributeEPKcS2_() called");
    return 0;
}

/* Demangled: tinyxml2::XMLDocument::SetError(tinyxml2::XMLError, int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8SetErrorENS_8XMLErrorEiPKcz(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8SetErrorENS_8XMLErrorEiPKcz() called");
    return 0;
}

/* Exported Object: typeinfo for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPi = NULL;

/* Exported Object: typeinfo for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPj = NULL;

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Exported Object: typeinfo for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPe = NULL;

/* Exported Object: typeinfo for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPf = NULL;

/* Exported Object: typeinfo for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPh = NULL;

/* Exported Object: typeinfo for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDs = NULL;

/* Demangled: tinyxml2::XMLElement::ToElement() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml210XMLElement9ToElementEv(void) {
    ALOGD("_ZNK8tinyxml210XMLElement9ToElementEv() called");
    return 0;
}

/* Exported Object: typeinfo for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPg = NULL;

/* Demangled: std::exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9exception4whatEv(void) {
    ALOGD("_ZNKSt9exception4whatEv() called");
    return 0;
}

/* Exported Object: vtable for tinyxml2::MemPoolT<80> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8tinyxml28MemPoolTILi80EEE = NULL;

/* Demangled: tinyxml2::XMLDocument::SaveFile(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml211XMLDocument8SaveFileEPKcb(void) {
    ALOGD("_ZN8tinyxml211XMLDocument8SaveFileEPKcb() called");
    return 0;
}

/* Demangled: tinyxml2::XMLPrinter::CloseElement(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter12CloseElementEb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter12CloseElementEb() called");
    return 0;
}

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD0Ev(void) {
    ALOGD("_ZNSt9exceptionD0Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: typeinfo name for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKy = NULL;

/* Demangled: tinyxml2::XMLText::ShallowClone(tinyxml2::XMLDocument*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8tinyxml27XMLText12ShallowCloneEPNS_11XMLDocumentE(void) {
    ALOGD("_ZNK8tinyxml27XMLText12ShallowCloneEPNS_11XMLDocumentE() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKt = NULL;

/* Exported Object: typeinfo name for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKx = NULL;

/* Demangled: tinyxml2::XMLPrinter::OpenElement(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8tinyxml210XMLPrinter11OpenElementEPKcb(void) {
    ALOGD("_ZN8tinyxml210XMLPrinter11OpenElementEPKcb() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKw = NULL;

/* Exported Object: typeinfo for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt15underflow_error = NULL;

/* Exported Object: typeinfo name for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKi = NULL;

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC2Ev(void) {
    ALOGD("_ZNSt8bad_castC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKs = NULL;

/* Exported Object: typeinfo name for tinyxml2::MemPool */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8tinyxml27MemPoolE = NULL;

/* Exported Object: typeinfo name for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKv = NULL;

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD2Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKo = NULL;
