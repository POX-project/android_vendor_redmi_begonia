/*
 * Reverse-Engineered Source for: libunwindstack-v30.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libunwindstack_v30"

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
#include "libunwindstack_v30.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV "/dev/"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::last_error() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE10last_errorEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE10last_errorEv() called");
    return 0;
}

/* Demangled: unwindstack::Memory::CreateOfflineMemory(unsigned char const*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Memory19CreateOfflineMemoryEPKhyy(void) {
    ALOGD("_ZN11unwindstack6Memory19CreateOfflineMemoryEPKhyy() called");
    return 0;
}

/* Demangled: unwindstack::Global::Global(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_offset(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE10cfa_offsetEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE10cfa_offsetEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_restore(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE11cfa_restoreEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE11cfa_restoreEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::MemoryLocal::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11MemoryLocal4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack11MemoryLocal4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::CreateFromUcontext(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm18CreateFromUcontextEPv(void) {
    ALOGD("_ZN11unwindstack7RegsArm18CreateFromUcontextEPv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::Decode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6DecodeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6DecodeEv() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::ReadProgramHeaders<elf32_hdr, elf32_phdr>(elf32_hdr const&, long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf32_hdr10elf32_phdrEEvRKT_Px(void) {
    ALOGD("_ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf32_hdr10elf32_phdrEEvRKT_Px() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::RegsMips64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips64C2Ev(void) {
    ALOGD("_ZN11unwindstack10RegsMips64C2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::StackPop() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE8StackPopEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE8StackPopEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_skip() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_skipEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_skipEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::SetPcFromReturnAddress(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips22SetPcFromReturnAddressEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack8RegsMips22SetPcFromReturnAddressEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::Unwinder::FormatFrame(unwindstack::FrameData const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11unwindstack8Unwinder11FormatFrameERKNS_9FrameDataE(void) {
    ALOGD("_ZNK11unwindstack8Unwinder11FormatFrameERKNS_9FrameDataE() called");
    return 0;
}

/* Demangled: unwindstack::ArmExidx::Decode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8ArmExidx6DecodeEv(void) {
    ALOGD("_ZN11unwindstack8ArmExidx6DecodeEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_offset_extended_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE22cfa_offset_extended_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE22cfa_offset_extended_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetFdeFromPc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE12GetFdeFromPcEy(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE12GetFdeFromPcEy() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__tree_node<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations> > >::__emplace_unique_key_args<unsigned long long, unsigned long long&, unwindstack::DwarfLocations>(unsigned long long const&, unsigned long long&, unwindstack::DwarfLocations&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRyS3_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRyS3_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::MemoryFileAtOffset::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryFileAtOffset5ClearEv(void) {
    ALOGD("_ZN11unwindstack18MemoryFileAtOffset5ClearEv() called");
    return 0;
}

/* Demangled: unwindstack::MemoryFileAtOffset::~MemoryFileAtOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryFileAtOffsetD2Ev(void) {
    ALOGD("_ZN11unwindstack18MemoryFileAtOffsetD2Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_reg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_regEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_regEv() called");
    return 0;
}

/* Demangled: unwindstack::Maps::Add(unsigned long long, unsigned long long, unsigned long long, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Maps3AddEyyyyRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void) {
    ALOGD("_ZN11unwindstack4Maps3AddEyyyyRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LogInstruction(unsigned int, unsigned long long, unsigned char, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE14LogInstructionEjyhPy(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE14LogInstructionEjyhPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_shra() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_shraEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_shraEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetBuildID() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf10GetBuildIDEv(void) {
    ALOGD("_ZN11unwindstack3Elf10GetBuildIDEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::InitGnuDebugdata() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf16InitGnuDebugdataEv(void) {
    ALOGD("_ZN11unwindstack3Elf16InitGnuDebugdataEv() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineParts::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryOfflineParts4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack18MemoryOfflineParts4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE11cfa_def_cfaEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE11cfa_def_cfaEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetFdeFromOffset(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE16GetFdeFromOffsetEy(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE16GetFdeFromOffsetEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_dup() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_dupEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_dupEv() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::GetMaxSizeWithTemplate<elf32_hdr>(unwindstack::Memory*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf32_hdrEEvPNS_6MemoryEPy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf32_hdrEEvPNS_6MemoryEPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_expression(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE14cfa_expressionEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE14cfa_expressionEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::LastErrorCode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE13LastErrorCodeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE13LastErrorCodeEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_xor() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_xorEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_xorEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInFde(unwindstack::DwarfFde*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE9FillInFdeEPNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE9FillInFdeEPNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_push() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_pushEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_pushEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::ElfInterface64 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack14ElfInterface64E = NULL;

/* Demangled: unwindstack::MemoryOfflineBuffer::MemoryOfflineBuffer(unsigned char const*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19MemoryOfflineBufferC1EPKhyy(void) {
    ALOGD("_ZN11unwindstack19MemoryOfflineBufferC1EPKhyy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_remember_state(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE18cfa_remember_stateEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE18cfa_remember_stateEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned long long, std::__1::allocator<unsigned long long> >::__add_front_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIyNS_9allocatorIyEEE20__add_front_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIyNS_9allocatorIyEEE20__add_front_capacityEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ReadEntry32Pack(unsigned long long*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug15ReadEntry32PackEPyS1_(void) {
    ALOGD("_ZN11unwindstack8JitDebug15ReadEntry32PackEPyS1_() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsMips */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8RegsMipsE = NULL;

/* Demangled: unwindstack::DwarfCfa<unsigned int>::LastErrorAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE16LastErrorAddressEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE16LastErrorAddressEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetLoadBias(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf11GetLoadBiasEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack3Elf11GetLoadBiasEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterface::~ElfInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterfaceD0Ev(void) {
    ALOGD("_ZN11unwindstack12ElfInterfaceD0Ev() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::~JitDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugD1Ev(void) {
    ALOGD("_ZN11unwindstack8JitDebugD1Ev() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfSectionImpl<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack16DwarfSectionImplIjEE = NULL;

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInCie(unwindstack::DwarfCie*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE9FillInCieEPNS_8DwarfCieE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE9FillInCieEPNS_8DwarfCieE() called");
    return 0;
}

/* Demangled: bool unwindstack::ElfInterface::GetFunctionNameWithTemplate<elf32_sym>(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf32_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf32_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetRelPc(unsigned long long, unwindstack::MapInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf8GetRelPcEyPKNS_7MapInfoE(void) {
    ALOGD("_ZN11unwindstack3Elf8GetRelPcEyPKNS_7MapInfoE() called");
    return 0;
}

/* Demangled: unwindstack::LocalUnwinder::Unwind(std::__1::vector<unwindstack::LocalFrameData, std::__1::allocator<unwindstack::LocalFrameData> >*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13LocalUnwinder6UnwindEPNSt3__16vectorINS_14LocalFrameDataENS1_9allocatorIS3_EEEEj(void) {
    ALOGD("_ZN11unwindstack13LocalUnwinder6UnwindEPNSt3__16vectorINS_14LocalFrameDataENS1_9allocatorIS3_EEEEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInFdeHeader(unwindstack::DwarfFde*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE15FillInFdeHeaderEPNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE15FillInFdeHeaderEPNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: bool unwindstack::GetBuildIDInfo<elf64_hdr, elf64_shdr>(unwindstack::Memory*, unsigned long long*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack14GetBuildIDInfoI9elf64_hdr10elf64_shdrEEbPNS_6MemoryEPyS5_(void) {
    ALOGD("_ZN11unwindstack14GetBuildIDInfoI9elf64_hdr10elf64_shdrEEbPNS_6MemoryEPyS5_() called");
    return 0;
}

/* Demangled: unwindstack::MemoryRange::MemoryRange(std::__1::shared_ptr<unwindstack::Memory> const&, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11MemoryRangeC1ERKNSt3__110shared_ptrINS_6MemoryEEEyyy(void) {
    ALOGD("_ZN11unwindstack11MemoryRangeC1ERKNSt3__110shared_ptrINS_6MemoryEEEyyy() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineBuffer::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19MemoryOfflineBuffer4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack19MemoryOfflineBuffer4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::RegsArm() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArmC1Ev(void) {
    ALOGD("_ZN11unwindstack7RegsArmC1Ev() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::ReadEntry32() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles11ReadEntry32Ev(void) {
    ALOGD("_ZN11unwindstack8DexFiles11ReadEntry32Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::Eval(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE4EvalEyy(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE4EvalEyy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_pick() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_pickEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_pickEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::__emplace_back_slow_path<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > >(std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_reg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_regEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_regEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::Elf*, std::__1::default_delete<unwindstack::Elf>, std::__1::allocator<unwindstack::Elf> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_gt() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_gtEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_gtEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::CacheAdd(unwindstack::MapInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf8CacheAddEPNS_7MapInfoE(void) {
    ALOGD("_ZN11unwindstack3Elf8CacheAddEPNS_7MapInfoE() called");
    return 0;
}

/* Demangled: unwindstack::Maps::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Maps5ParseEv(void) {
    ALOGD("_ZN11unwindstack4Maps5ParseEv() called");
    return 0;
}

/* Exported Object: unwindstack::DwarfCfaInfo::kTable */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack12DwarfCfaInfo6kTableE = NULL;

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_gnu_negative_offset_extended(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::InitHeadersWithTemplate<unsigned int>() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIjEEvv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIjEEvv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::Invalidate() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf10InvalidateEv(void) {
    ALOGD("_ZN11unwindstack3Elf10InvalidateEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_() called");
    return 0;
}

/* Demangled: bool unwindstack::DwarfMemory::ReadEncodedValue<unsigned long long>(unsigned char, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory16ReadEncodedValueIyEEbhPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory16ReadEncodedValueIyEEbhPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_val_offset_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE17cfa_val_offset_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE17cfa_val_offset_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_xor() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_xorEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_xorEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::RegsArm64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm64C2Ev(void) {
    ALOGD("_ZN11unwindstack9RegsArm64C2Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX8619StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7RegsX8619StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips16IterateRegistersENSt3__18functionIFvPKcyEEE(void) {
    ALOGD("_ZN11unwindstack8RegsMips16IterateRegistersENSt3__18functionIFvPKcyEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE11cfa_def_cfaEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE11cfa_def_cfaEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_div() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_divEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_divEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_shr() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_shrEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_shrEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetInfo(unwindstack::Memory*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf7GetInfoEPNS_6MemoryEPy(void) {
    ALOGD("_ZN11unwindstack3Elf7GetInfoEPNS_6MemoryEPy() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*>&>::push_front(unsigned char* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::GetLocationInfo(unsigned long long, unsigned long long, unsigned long long, unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE15GetLocationInfoEyyyPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE15GetLocationInfoEyyyPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::Log(unsigned int, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE3LogEjyyy(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE3LogEjyyy() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::EvalRegister(unwindstack::DwarfLocation const*, unsigned int, unsigned long long*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE12EvalRegisterEPKNS_13DwarfLocationEjPyPv(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE12EvalRegisterEPKNS_13DwarfLocationEjPyPv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::LastErrorAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE16LastErrorAddressEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE16LastErrorAddressEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*> >::push_back(unsigned long long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::Log(unsigned char, unsigned long long, unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE3LogEhyPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE3LogEhyPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<long long>(unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory10ReadSignedIxEEbPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory10ReadSignedIxEEbPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::set_regs_info(unwindstack::RegsInfo<unsigned long long>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE13set_regs_infoEPNS_8RegsInfoIyEE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE13set_regs_infoEPNS_8RegsInfoIyEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfDebugFrame<unsigned long long>::DwarfDebugFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15DwarfDebugFrameIyEC1EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack15DwarfDebugFrameIyEC1EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyNS_4pairIyPKN11unwindstack8DwarfFdeEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyNS_4pairIyPKN11unwindstack8DwarfFdeEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_breg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_bregEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_bregEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_regx() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_regxEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_regxEv() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterfaceArm::Init(long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm4InitEPx(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm4InitEPx() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ReadEntry64(unsigned long long*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug11ReadEntry64EPyS1_(void) {
    ALOGD("_ZN11unwindstack8JitDebug11ReadEntry64EPyS1_() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::sp() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_642spEv(void) {
    ALOGD("_ZN11unwindstack10RegsX86_642spEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack10RegsMips6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::~DexFiles() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesD1Ev(void) {
    ALOGD("_ZN11unwindstack8DexFilesD1Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_nop(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE7cfa_nopEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE7cfa_nopEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::LastErrorCode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE13LastErrorCodeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE13LastErrorCodeEv() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineBuffer::Reset(unsigned char const*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19MemoryOfflineBuffer5ResetEPKhyy(void) {
    ALOGD("_ZN11unwindstack19MemoryOfflineBuffer5ResetEPKhyy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::GetLogInfo(unsigned long long, unsigned long long, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_nop() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_nopEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_nopEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::CacheGet(unwindstack::MapInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf8CacheGetEPNS_7MapInfoE(void) {
    ALOGD("_ZN11unwindstack3Elf8CacheGetEPNS_7MapInfoE() called");
    return 0;
}

/* Demangled: unwindstack::MemoryRemote::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12MemoryRemote4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack12MemoryRemote4ReadEyPvj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryCache*, std::__1::default_delete<unwindstack::MemoryCache>, std::__1::allocator<unwindstack::MemoryCache> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::StackAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7StackAtEj(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7StackAtEj() called");
    return 0;
}

/* Demangled: unwindstack::LocalUpdatableMaps::GetMapsFile() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11unwindstack18LocalUpdatableMaps11GetMapsFileEv(void) {
    ALOGD("_ZNK11unwindstack18LocalUpdatableMaps11GetMapsFileEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::SetPcFromReturnAddress(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX8622SetPcFromReturnAddressEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7RegsX8622SetPcFromReturnAddressEPNS_6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DexFiles */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8DexFilesE = NULL;

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_restore(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE11cfa_restoreEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE11cfa_restoreEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_642pcEv(void) {
    ALOGD("_ZN11unwindstack10RegsX86_642pcEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_div() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_divEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_divEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_shr() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_shrEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_shrEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInFde(unwindstack::DwarfFde*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE9FillInFdeEPNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE9FillInFdeEPNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::Memory::CreateFileMemory(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Memory16CreateFileMemoryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void) {
    ALOGD("_ZN11unwindstack6Memory16CreateFileMemoryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<unwindstack::MemoryFileAtOffset, std::__1::allocator<unwindstack::MemoryFileAtOffset> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEEE = NULL;

/* Demangled: void std::__1::vector<unwindstack::LocalFrameData, std::__1::allocator<unwindstack::LocalFrameData> >::__emplace_back_slow_path<unwindstack::MapInfo*&, unsigned long long, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long long&>(unwindstack::MapInfo*&, unsigned long long&&, unsigned long long&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRNS_12basic_stringIcNS_11char_traitsIcEENS3_IcEEEERyEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRNS_12basic_stringIcNS_11char_traitsIcEENS3_IcEEEERyEEEvDpOT_() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips6415GetPcAdjustmentEyPNS_3ElfE(void) {
    ALOGD("_ZN11unwindstack10RegsMips6415GetPcAdjustmentEyPNS_3ElfE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::Log(unsigned int, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE3LogEjyyy(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE3LogEjyyy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdeOffsetFromPc(unsigned long long, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjE18GetFdeOffsetFromPcEyPy(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjE18GetFdeOffsetFromPcEyPy() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_not() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_notEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_notEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetLastErrorAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf19GetLastErrorAddressEv(void) {
    ALOGD("_ZN11unwindstack3Elf19GetLastErrorAddressEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RemoteMaps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack10RemoteMapsE = NULL;

/* Demangled: bool android::procinfo::ReadMapFileContent<std::__1::function<void (unsigned long long, unsigned long long, unsigned short, unsigned long long, unsigned long, char const*)> >(char*, std::__1::function<void (unsigned long long, unsigned long long, unsigned short, unsigned long long, unsigned long, char const*)> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8procinfo18ReadMapFileContentINSt3__18functionIFvyytymPKcEEEEEbPcRKT_(void) {
    ALOGD("_ZN7android8procinfo18ReadMapFileContentINSt3__18functionIFvyytymPKcEEEEEbPcRKT_() called");
    return 0;
}

/* Demangled: unwindstack::Memory::ReadString(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Memory10ReadStringEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void) {
    ALOGD("_ZN11unwindstack6Memory10ReadStringEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack8RegsMips19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_expression(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::bool_to_dwarf_bool(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE18bool_to_dwarf_boolEb(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE18bool_to_dwarf_boolEb() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::JitDebug */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8JitDebugE = NULL;

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInCie(unwindstack::DwarfCie*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE9FillInCieEPNS_8DwarfCieE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE9FillInCieEPNS_8DwarfCieE() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ProcessArch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug11ProcessArchEv(void) {
    ALOGD("_ZN11unwindstack8JitDebug11ProcessArchEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Memory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack6MemoryE = NULL;

/* Demangled: unwindstack::RegsArm::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm16IterateRegistersENSt3__18functionIFvPKcyEEE(void) {
    ALOGD("_ZN11unwindstack7RegsArm16IterateRegistersENSt3__18functionIFvPKcyEEE() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::ReadEntry64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles11ReadEntry64Ev(void) {
    ALOGD("_ZN11unwindstack8DexFiles11ReadEntry64Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_over() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_overEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_overEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_nop() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_nopEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_nopEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::Arch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_644ArchEv(void) {
    ALOGD("_ZN11unwindstack10RegsX86_644ArchEv() called");
    return 0;
}

/* Demangled: unwindstack::UnwinderFromPid::Init(unwindstack::ArchEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15UnwinderFromPid4InitENS_8ArchEnumE(void) {
    ALOGD("_ZN11unwindstack15UnwinderFromPid4InitENS_8ArchEnumE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_ge() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_geEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_geEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_and() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_andEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_andEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_bra() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_braEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_braEv() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::GetFunctionName(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack7MapInfo15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::Arch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX864ArchEv(void) {
    ALOGD("_ZN11unwindstack7RegsX864ArchEv() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_plus() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_plusEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_plusEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_register(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE20cfa_def_cfa_registerEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE20cfa_def_cfa_registerEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfMemory::ReadSLEB128(long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory11ReadSLEB128EPx(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory11ReadSLEB128EPx() called");
    return 0;
}

/* Demangled: unwindstack::DwarfDebugFrame<unsigned long long>::DwarfDebugFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15DwarfDebugFrameIyEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack15DwarfDebugFrameIyEC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: long long unwindstack::ElfInterface::GetLoadBias<elf64_hdr, elf64_phdr>(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface11GetLoadBiasI9elf64_hdr10elf64_phdrEExPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12ElfInterface11GetLoadBiasI9elf64_hdr10elf64_phdrEExPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::Read(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX864ReadEPv(void) {
    ALOGD("_ZN11unwindstack7RegsX864ReadEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::Clone() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX865CloneEv(void) {
    ALOGD("_ZN11unwindstack7RegsX865CloneEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_offset_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: bool unwindstack::ElfInterface::ReadAllHeaders<elf64_hdr, elf64_phdr, elf64_shdr>(long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf64_hdr10elf64_phdr10elf64_shdrEEbPx(void) {
    ALOGD("_ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf64_hdr10elf64_phdr10elf64_shdrEEbPx() called");
    return 0;
}

/* Demangled: unwindstack::MemoryFileAtOffset::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryFileAtOffset4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEyy(void) {
    ALOGD("_ZN11unwindstack18MemoryFileAtOffset4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEyy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_same_value(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE14cfa_same_valueEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE14cfa_same_valueEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: long long unwindstack::ElfInterface::GetLoadBias<elf32_hdr, elf32_phdr>(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface11GetLoadBiasI9elf32_hdr10elf32_phdrEExPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12ElfInterface11GetLoadBiasI9elf32_hdr10elf32_phdrEExPNS_6MemoryE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::__emplace_back_slow_path<unwindstack::MapInfo*>(unwindstack::MapInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJPS3_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJPS3_EEEvDpOT_() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_6416IterateRegistersENSt3__18functionIFvPKcyEEE(void) {
    ALOGD("_ZN11unwindstack10RegsX86_6416IterateRegistersENSt3__18functionIFvPKcyEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_not() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_notEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_notEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_register(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE12cfa_registerEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE12cfa_registerEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE() called");
    return 0;
}

/* Exported Object: unwindstack::DwarfOp<unsigned int>::kOpHandleFuncList */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack7DwarfOpIjE17kOpHandleFuncListE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_eq() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_eqEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_eqEv() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterface::IsValidPc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface9IsValidPcEy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface9IsValidPcEy() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::ReadSectionHeaders<elf64_hdr, elf64_shdr>(elf64_hdr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf64_hdr10elf64_shdrEEvRKT_(void) {
    ALOGD("_ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf64_hdr10elf64_shdrEEvRKT_() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterfaceArm::StepExidx(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm9StepExidxEyPNS_4RegsEPNS_6MemoryEPb(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm9StepExidxEyPNS_4RegsEPNS_6MemoryEPb() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_not_implemented() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE18op_not_implementedEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE18op_not_implementedEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::sp() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm642spEv(void) {
    ALOGD("_ZN11unwindstack9RegsArm642spEv() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_offset_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: bool unwindstack::ElfInterface::ReadAllHeaders<elf32_hdr, elf32_phdr, elf32_shdr>(long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf32_hdr10elf32_phdr10elf32_shdrEEbPx(void) {
    ALOGD("_ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf32_hdr10elf32_phdr10elf32_shdrEEbPx() called");
    return 0;
}

/* Demangled: unwindstack::DwarfMemory::ReadBytes(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory9ReadBytesEPvj(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory9ReadBytesEPvj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::last_error() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE10last_errorEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE10last_errorEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::CreateInterfaceFromMemory(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf25CreateInterfaceFromMemoryEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack3Elf25CreateInterfaceFromMemoryEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_S6_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_S6_() called");
    return 0;
}

/* Demangled: bool unwindstack::Symbols::GetGlobal<elf32_sym>(unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7Symbols9GetGlobalI9elf32_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack7Symbols9GetGlobalI9elf32_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterfaceArm::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm4StepEyPNS_4RegsEPNS_6MemoryEPb(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm4StepEyPNS_4RegsEPNS_6MemoryEPb() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::CreateFromUcontext(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips18CreateFromUcontextEPv(void) {
    ALOGD("_ZN11unwindstack8RegsMips18CreateFromUcontextEPv() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::GetMethodInformation(unwindstack::Maps*, unwindstack::MapInfo*, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles20GetMethodInformationEPNS_4MapsEPNS_7MapInfoEyPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack8DexFiles20GetMethodInformationEPNS_4MapsEPNS_7MapInfoEyPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_and() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_andEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_andEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_bra() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_braEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_braEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_minus() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE8op_minusEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE8op_minusEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfDebugFrame<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack15DwarfDebugFrameIyEE = NULL;

/* Demangled: unwindstack::Elf::GetGlobalVariableOffset(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf23GetGlobalVariableOffsetERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack3Elf23GetGlobalVariableOffsetERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::MemoryFileAtOffset::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryFileAtOffset4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack18MemoryFileAtOffset4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::sp() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips2spEv(void) {
    ALOGD("_ZN11unwindstack8RegsMips2spEv() called");
    return 0;
}

/* Demangled: unwindstack::Unwinder::FormatFrame(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11unwindstack8Unwinder11FormatFrameEj(void) {
    ALOGD("_ZNK11unwindstack8Unwinder11FormatFrameEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_restore_state(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE17cfa_restore_stateEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE17cfa_restore_stateEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryRemote*, std::__1::default_delete<unwindstack::MemoryRemote>, std::__1::allocator<unwindstack::MemoryRemote> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::Read(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm4ReadEPv(void) {
    ALOGD("_ZN11unwindstack7RegsArm4ReadEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::Clone() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm5CloneEv(void) {
    ALOGD("_ZN11unwindstack7RegsArm5CloneEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::sp() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm2spEv(void) {
    ALOGD("_ZN11unwindstack7RegsArm2spEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm642pcEv(void) {
    ALOGD("_ZN11unwindstack9RegsArm642pcEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_val_expression(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE18cfa_val_expressionEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE18cfa_val_expressionEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetCieFromOffset(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE16GetCieFromOffsetEy(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE16GetCieFromOffsetEy() called");
    return 0;
}

/* Demangled: unwindstack::LocalUpdatableMaps::Reparse() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18LocalUpdatableMaps7ReparseEv(void) {
    ALOGD("_ZN11unwindstack18LocalUpdatableMaps7ReparseEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryOffline */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack13MemoryOfflineE = NULL;

/* Demangled: unwindstack::Symbols::Symbols(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7SymbolsC2Eyyyyy(void) {
    ALOGD("_ZN11unwindstack7SymbolsC2Eyyyyy() called");
    return 0;
}

/* Demangled: bool unwindstack::ElfInterface::GetGlobalVariableWithTemplate<elf64_sym>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf64_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf64_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_val_offset_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE17cfa_val_offset_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE17cfa_val_offset_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_offset(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE10cfa_offsetEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE10cfa_offsetEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Exported Object: unwindstack::DwarfCfa<unsigned long long>::kCallbackTable */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack8DwarfCfaIyE14kCallbackTableE = NULL;

/* Demangled: unwindstack::MapInfo::GetElf(std::__1::shared_ptr<unwindstack::Memory> const&, unwindstack::ArchEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo6GetElfERKNSt3__110shared_ptrINS_6MemoryEEENS_8ArchEnumE(void) {
    ALOGD("_ZN11unwindstack7MapInfo6GetElfERKNSt3__110shared_ptrINS_6MemoryEEENS_8ArchEnumE() called");
    return 0;
}

/* Exported Object: unwindstack::DwarfCfa<unsigned int>::kCallbackTable */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack8DwarfCfaIjE14kCallbackTableE = NULL;

/* Demangled: unwindstack::RegsMips::pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips2pcEv(void) {
    ALOGD("_ZN11unwindstack8RegsMips2pcEv() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterface::~ElfInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterfaceD1Ev(void) {
    ALOGD("_ZN11unwindstack12ElfInterfaceD1Ev() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::~JitDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugD2Ev(void) {
    ALOGD("_ZN11unwindstack8JitDebugD2Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::Init(unsigned long long, unsigned long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyE4InitEyyx(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyE4InitEyyx() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryLocal*, std::__1::default_delete<unwindstack::MemoryLocal>, std::__1::allocator<unwindstack::MemoryLocal> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm2pcEv(void) {
    ALOGD("_ZN11unwindstack7RegsArm2pcEv() called");
    return 0;
}

/* Demangled: unwindstack::Unwinder::Unwind(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8Unwinder6UnwindEPKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEESC_(void) {
    ALOGD("_ZN11unwindstack8Unwinder6UnwindEPKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEESC_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjEC1EPNS_11DwarfMemoryEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjEC1EPNS_11DwarfMemoryEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, int>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, int>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: unwindstack::Global::SetArch(unwindstack::ArchEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Global7SetArchENS_8ArchEnumE(void) {
    ALOGD("_ZN11unwindstack6Global7SetArchENS_8ArchEnumE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdeFromPc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyE12GetFdeFromPcEy(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyE12GetFdeFromPcEy() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterface::CreateGnuDebugdataMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface24CreateGnuDebugdataMemoryEv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface24CreateGnuDebugdataMemoryEv() called");
    return 0;
}

/* Demangled: unwindstack::LocalUnwinder::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13LocalUnwinder4InitEv(void) {
    ALOGD("_ZN11unwindstack13LocalUnwinder4InitEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::RegsArm() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArmC2Ev(void) {
    ALOGD("_ZN11unwindstack7RegsArmC2Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LastErrorCode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE13LastErrorCodeEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE13LastErrorCodeEv() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::GetDexFile(unsigned long long, unwindstack::MapInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles10GetDexFileEyPNS_7MapInfoE(void) {
    ALOGD("_ZN11unwindstack8DexFiles10GetDexFileEyPNS_7MapInfoE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::LastErrorCode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE13LastErrorCodeEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE13LastErrorCodeEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetNextCieOrFde(unwindstack::DwarfFde const**) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE15GetNextCieOrFdeEPPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE15GetNextCieOrFdeEPPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::find<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEED2Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::Arch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips644ArchEv(void) {
    ALOGD("_ZN11unwindstack10RegsMips644ArchEv() called");
    return 0;
}

/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<int>(unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory10ReadSignedIiEEbPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory10ReadSignedIiEEbPy() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_front_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE20__add_front_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE20__add_front_capacityEv() called");
    return 0;
}

/* Demangled: unwindstack::Global::FindAndReadVariable(unwindstack::Maps*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Global19FindAndReadVariableEPNS_4MapsEPKc(void) {
    ALOGD("_ZN11unwindstack6Global19FindAndReadVariableEPNS_4MapsEPKc() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfCfa<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8DwarfCfaIyEE = NULL;

/* Demangled: unsigned int unwindstack::DwarfMemory::GetEncodedSize<unsigned int>(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory14GetEncodedSizeIjEEjh(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory14GetEncodedSizeIjEEjh() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineParts::~MemoryOfflineParts() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryOfflinePartsD0Ev(void) {
    ALOGD("_ZN11unwindstack18MemoryOfflinePartsD0Ev() called");
    return 0;
}

/* Demangled: bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::Init(unwindstack::Maps*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug4InitEPNS_4MapsE(void) {
    ALOGD("_ZN11unwindstack8JitDebug4InitEPNS_4MapsE() called");
    return 0;
}

/* Demangled: unwindstack::Regs::CreateFromLocal() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Regs15CreateFromLocalEv(void) {
    ALOGD("_ZN11unwindstack4Regs15CreateFromLocalEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::StackSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE9StackSizeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE9StackSizeEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyEC1EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyEC1EPNS_6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsMips64 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack10RegsMips64E = NULL;

/* Demangled: std::__1::deque<unsigned char, std::__1::allocator<unsigned char> >::push_back(unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backERKh(void) {
    ALOGD("_ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backERKh() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::Log(unsigned char, unsigned long long, unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE3LogEhyPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE3LogEhyPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::Init(unsigned long long, unsigned long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjE4InitEyyx(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjE4InitEyyx() called");
    return 0;
}

/* Demangled: unwindstack::DwarfDebugFrame<unsigned int>::DwarfDebugFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15DwarfDebugFrameIjEC1EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack15DwarfDebugFrameIjEC1EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::~MapInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfoD1Ev(void) {
    ALOGD("_ZN11unwindstack7MapInfoD1Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::sp() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips642spEv(void) {
    ALOGD("_ZN11unwindstack10RegsMips642spEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfMemory::AdjustEncodedValue(unsigned char, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory18AdjustEncodedValueEhPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory18AdjustEncodedValueEhPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_swap() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_swapEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_swapEv() called");
    return 0;
}

/* Exported Object: unwindstack::Elf::cache_lock_ */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack3Elf11cache_lock_E = NULL;

/* Demangled: unwindstack::Global::Searchable(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Global10SearchableERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN11unwindstack6Global10SearchableERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::~DexFiles() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesD2Ev(void) {
    ALOGD("_ZN11unwindstack8DexFilesD2Ev() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfDebugFrame<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack15DwarfDebugFrameIjEE = NULL;

/* Exported Object: vtable for unwindstack::RegsImpl<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8RegsImplIyEE = NULL;

/* Demangled: unwindstack::DwarfMemory::ReadULEB128(unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory11ReadULEB128EPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory11ReadULEB128EPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_mod() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_modEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_modEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_bregx() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE8op_bregxEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE8op_bregxEv() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ReadEntry32Pad(unsigned long long*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug14ReadEntry32PadEPyS1_(void) {
    ALOGD("_ZN11unwindstack8JitDebug14ReadEntry32PadEPyS1_() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfSection */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12DwarfSectionE = NULL;

/* Demangled: unwindstack::MemoryRanges::Insert(unwindstack::MemoryRange*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12MemoryRanges6InsertEPNS_11MemoryRangeE(void) {
    ALOGD("_ZN11unwindstack12MemoryRanges6InsertEPNS_11MemoryRangeE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::SetPcFromReturnAddress(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips6422SetPcFromReturnAddressEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack10RegsMips6422SetPcFromReturnAddressEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: bool unwindstack::GetBuildIDInfo<elf32_hdr, elf32_shdr>(unwindstack::Memory*, unsigned long long*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack14GetBuildIDInfoI9elf32_hdr10elf32_shdrEEbPNS_6MemoryEPyS5_(void) {
    ALOGD("_ZN11unwindstack14GetBuildIDInfoI9elf32_hdr10elf32_shdrEEbPNS_6MemoryEPyS5_() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::set_sp(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm646set_spEy(void) {
    ALOGD("_ZN11unwindstack9RegsArm646set_spEy() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetLastErrorCode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf16GetLastErrorCodeEv(void) {
    ALOGD("_ZN11unwindstack3Elf16GetLastErrorCodeEv() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: unwindstack::BufferMaps::Parse() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10BufferMaps5ParseEv(void) {
    ALOGD("_ZN11unwindstack10BufferMaps5ParseEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::SetPcFromReturnAddress(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_6422SetPcFromReturnAddressEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack10RegsX86_6422SetPcFromReturnAddressEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips642pcEv(void) {
    ALOGD("_ZN11unwindstack10RegsMips642pcEv() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::GetOperandString(unsigned char, unsigned long long, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE16GetOperandStringEhyPy(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE16GetOperandStringEhyPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::Init(unsigned long long, unsigned long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE4InitEyyx(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE4InitEyyx() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::ReadVariableData(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles16ReadVariableDataEy(void) {
    ALOGD("_ZN11unwindstack8DexFiles16ReadVariableDataEy() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long>(unsigned long long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIyEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIyEEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_nop(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE7cfa_nopEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE7cfa_nopEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::Elf::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf4InitEv(void) {
    ALOGD("_ZN11unwindstack3Elf4InitEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unwindstack::LocalFrameData, std::__1::allocator<unwindstack::LocalFrameData> >::__emplace_back_slow_path<unwindstack::MapInfo*&, unsigned long long, unsigned long long, char const (&) [1], int>(unwindstack::MapInfo*&, unsigned long long&&, unsigned long long&&, char const (&) [1], int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRA1_KciEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRA1_KciEEEvDpOT_() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::set_sp(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_646set_spEy(void) {
    ALOGD("_ZN11unwindstack10RegsX86_646set_spEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::EhFrameInit(unsigned long long, unsigned long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyE11EhFrameInitEyyx(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyE11EhFrameInitEyyx() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::Elf*, std::__1::default_delete<unwindstack::Elf>, std::__1::allocator<unwindstack::Elf> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unwindstack::Maps::Sort() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Maps4SortEv(void) {
    ALOGD("_ZN11unwindstack4Maps4SortEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<unwindstack::Symbols::Info, std::__1::allocator<unwindstack::Symbols::Info> >::__emplace_back_slow_path<unsigned long long&, unsigned long long&, unsigned long long>(unsigned long long&, unsigned long long&, unsigned long long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack7Symbols4InfoENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRyS8_yEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack7Symbols4InfoENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRyS8_yEEEvDpOT_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_val_offset(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE14cfa_val_offsetEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE14cfa_val_offsetEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_drop() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_dropEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_dropEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::Elf::SetCachingEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf17SetCachingEnabledEb(void) {
    ALOGD("_ZN11unwindstack3Elf17SetCachingEnabledEb() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE() called");
    return 0;
}

/* Demangled: unwindstack::Regs::CreateFromUcontext(unwindstack::ArchEnum, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Regs18CreateFromUcontextENS_8ArchEnumEPv(void) {
    ALOGD("_ZN11unwindstack4Regs18CreateFromUcontextENS_8ArchEnumEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm6415GetPcAdjustmentEyPNS_3ElfE(void) {
    ALOGD("_ZN11unwindstack9RegsArm6415GetPcAdjustmentEyPNS_3ElfE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE14cfa_def_cfa_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE14cfa_def_cfa_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::LastErrorAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE16LastErrorAddressEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE16LastErrorAddressEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::set_pc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm646set_pcEy(void) {
    ALOGD("_ZN11unwindstack9RegsArm646set_pcEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetFdeFromOffset(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE16GetFdeFromOffsetEy(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE16GetFdeFromOffsetEy() called");
    return 0;
}

/* Demangled: unwindstack::Elf::CacheLock() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf9CacheLockEv(void) {
    ALOGD("_ZN11unwindstack3Elf9CacheLockEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_val_expression(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE18cfa_val_expressionEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE18cfa_val_expressionEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfEhFrameWithHdr<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack19DwarfEhFrameWithHdrIyEE = NULL;

/* Demangled: unwindstack::RegsMips::set_sp(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips6set_spEy(void) {
    ALOGD("_ZN11unwindstack8RegsMips6set_spEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_mod() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_modEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_modEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyEC2EPNS_11DwarfMemoryEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyEC2EPNS_11DwarfMemoryEPNS_6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryLocal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack11MemoryLocalE = NULL;

/* Demangled: unwindstack::RegsX86_64::set_pc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_646set_pcEy(void) {
    ALOGD("_ZN11unwindstack10RegsX86_646set_pcEy() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*> >::push_back(unsigned char*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_lt() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_ltEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_ltEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_neg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_negEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_negEv() called");
    return 0;
}

/* Demangled: bool unwindstack::ElfInterface::GetFunctionNameWithTemplate<elf64_sym>(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf64_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf64_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::ElfInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12ElfInterfaceE = NULL;

/* Demangled: unwindstack::MemoryOffline::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13MemoryOffline4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack13MemoryOffline4ReadEyPvj() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfCfa<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8DwarfCfaIjEE = NULL;

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyEC2EPNS_6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_plus_uconst() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE14op_plus_uconstEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE14op_plus_uconstEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfDebugFrame<unsigned int>::DwarfDebugFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15DwarfDebugFrameIjEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack15DwarfDebugFrameIjEC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*> >::push_front(unwindstack::DwarfLocations*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::Init(unsigned long long, unsigned long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE4InitEyyx(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE4InitEyyx() called");
    return 0;
}

/* Demangled: void std::__1::vector<unwindstack::Elf*, std::__1::allocator<unwindstack::Elf*> >::__push_back_slow_path<unwindstack::Elf* const&>(unwindstack::Elf* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN11unwindstack3ElfENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN11unwindstack3ElfENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryCache*, std::__1::default_delete<unwindstack::MemoryCache>, std::__1::allocator<unwindstack::MemoryCache> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSection::DwarfSection(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12DwarfSectionC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12DwarfSectionC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdeOffsetFromPc(unsigned long long, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyE18GetFdeOffsetFromPcEyPy(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyE18GetFdeOffsetFromPcEyPy() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::set_pc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips6set_pcEy(void) {
    ALOGD("_ZN11unwindstack8RegsMips6set_pcEy() called");
    return 0;
}

/* Demangled: unwindstack::MemoryFileAtOffset::~MemoryFileAtOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryFileAtOffsetD0Ev(void) {
    ALOGD("_ZN11unwindstack18MemoryFileAtOffsetD0Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_not_implemented() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE18op_not_implementedEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE18op_not_implementedEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_push() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_pushEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_pushEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::StepIfSignalHandler(unsigned long long, unwindstack::Regs*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf19StepIfSignalHandlerEyPNS_4RegsEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack3Elf19StepIfSignalHandlerEyPNS_4RegsEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::Eval(unwindstack::DwarfCie const*, unwindstack::Memory*, unwindstack::DwarfLocations const&, unwindstack::Regs*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::is_register() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE11is_registerEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE11is_registerEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >::__push_back_slow_path<unwindstack::DwarfFde const*>(unwindstack::DwarfFde const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::Elf::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf4StepEyPNS_4RegsEPNS_6MemoryEPb(void) {
    ALOGD("_ZN11unwindstack3Elf4StepEyPNS_4RegsEPNS_6MemoryEPb() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsImpl<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8RegsImplIjEE = NULL;

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_offset(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*>&>::push_front(unwindstack::DwarfLocations* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::Elf::IsValidElf(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf10IsValidElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack3Elf10IsValidElfEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::GetLoadBias(std::__1::shared_ptr<unwindstack::Memory> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo11GetLoadBiasERKNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack7MapInfo11GetLoadBiasERKNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips15GetPcAdjustmentEyPNS_3ElfE(void) {
    ALOGD("_ZN11unwindstack8RegsMips15GetPcAdjustmentEyPNS_3ElfE() called");
    return 0;
}

/* Demangled: unwindstack::Symbols::GetInfoFromCache(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7Symbols16GetInfoFromCacheEy(void) {
    ALOGD("_ZN11unwindstack7Symbols16GetInfoFromCacheEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_offset_extended_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE22cfa_offset_extended_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE22cfa_offset_extended_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::EvalRegister(unwindstack::DwarfLocation const*, unsigned int, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE12EvalRegisterEPKNS_13DwarfLocationEjPjPv(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE12EvalRegisterEPKNS_13DwarfLocationEjPjPv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Maps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack4MapsE = NULL;

/* Demangled: std::__1::deque<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetCfaLocationInfo(unsigned long long, unwindstack::DwarfFde const*, unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::EhFrameInit(unsigned long long, unsigned long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjE11EhFrameInitEyyx(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjE11EhFrameInitEyyx() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_neg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_negEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_negEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Symbols */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack7SymbolsE = NULL;

/* Demangled: std::__1::deque<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::push_back(unwindstack::DwarfLocations const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE9push_backERKS2_(void) {
    ALOGD("_ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE9push_backERKS2_() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::CreateFromUcontext(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm6418CreateFromUcontextEPv(void) {
    ALOGD("_ZN11unwindstack9RegsArm6418CreateFromUcontextEPv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::Eval(unwindstack::DwarfCie const*, unwindstack::Memory*, unwindstack::DwarfLocations const&, unwindstack::Regs*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjEC1EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjEC1EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_skip() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_skipEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_skipEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_minus() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE8op_minusEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE8op_minusEv() called");
    return 0;
}

/* Demangled: unwindstack::log(unsigned char, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3logEhPKcz(void) {
    ALOGD("_ZN11unwindstack3logEhPKcz() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::InsertFde(unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE9InsertFdeEPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE9InsertFdeEPKNS_8DwarfFdeE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryCache */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack11MemoryCacheE = NULL;

/* Demangled: unwindstack::RegsArm64::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm6416IterateRegistersENSt3__18functionIFvPKcyEEE(void) {
    ALOGD("_ZN11unwindstack9RegsArm6416IterateRegistersENSt3__18functionIFvPKcyEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_or() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_orEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_orEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_shl() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_shlEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_shlEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::InsertFde(unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE9InsertFdeEPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE9InsertFdeEPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::log_to_stdout(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13log_to_stdoutEb(void) {
    ALOGD("_ZN11unwindstack13log_to_stdoutEb() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::GetLogInfo(unsigned long long, unsigned long long, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_shra() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_shraEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_shraEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::StackSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE9StackSizeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE9StackSizeEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::LocalUnwinder::ShouldSkipLibrary(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13LocalUnwinder17ShouldSkipLibraryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN11unwindstack13LocalUnwinder17ShouldSkipLibraryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryRanges */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12MemoryRangesE = NULL;

/* Demangled: unsigned int std::__1::__sort4<bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_register(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE12cfa_registerEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE12cfa_registerEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_restore_state(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE17cfa_restore_stateEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE17cfa_restore_stateEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cur_pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE6cur_pcEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE6cur_pcEv() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterface::~ElfInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterfaceD2Ev(void) {
    ALOGD("_ZN11unwindstack12ElfInterfaceD2Ev() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::LocalUpdatableMaps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack18LocalUpdatableMapsE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyNS_10unique_ptrIN11unwindstack11MemoryRangeENS_14default_deleteIS4_EEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyNS_10unique_ptrIN11unwindstack11MemoryRangeENS_14default_deleteIS4_EEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_undefined(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE13cfa_undefinedEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE13cfa_undefinedEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfEhFrameWithHdr<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack19DwarfEhFrameWithHdrIjEE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_bregx() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE8op_bregxEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE8op_bregxEv() called");
    return 0;
}

/* Demangled: unwindstack::MemoryRange::MemoryRange(std::__1::shared_ptr<unwindstack::Memory> const&, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11MemoryRangeC2ERKNSt3__110shared_ptrINS_6MemoryEEEyyy(void) {
    ALOGD("_ZN11unwindstack11MemoryRangeC2ERKNSt3__110shared_ptrINS_6MemoryEEEyyy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::OperandsSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE12OperandsSizeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE12OperandsSizeEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfMemory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack11DwarfMemoryE = NULL;

/* Demangled: unwindstack::RegsArm64::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack9RegsArm6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::SetPcFromReturnAddress(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm6422SetPcFromReturnAddressEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack9RegsArm6422SetPcFromReturnAddressEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::GetOperandString(unsigned char, unsigned long long, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE16GetOperandStringEhyPy(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE16GetOperandStringEhyPy() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >::__push_back_slow_path<unwindstack::DwarfFde const* const&>(unwindstack::DwarfFde const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_le() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_leEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_leEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrame<unsigned long long>::DwarfEhFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12DwarfEhFrameIyEC1EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12DwarfEhFrameIyEC1EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >::__push_back_slow_path<std::__1::pair<unsigned long long, unsigned long long> >(std::__1::pair<unsigned long long, unsigned long long>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIyyEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIyyEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::GetElf(unwindstack::Maps*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug6GetElfEPNS_4MapsEy(void) {
    ALOGD("_ZN11unwindstack8JitDebug6GetElfEPNS_4MapsEy() called");
    return 0;
}

/* Demangled: unwindstack::Memory::ReadFully(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Memory9ReadFullyEyPvj(void) {
    ALOGD("_ZN11unwindstack6Memory9ReadFullyEyPvj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::regular_memory() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE14regular_memoryEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE14regular_memoryEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::RegsX86() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX86C1Ev(void) {
    ALOGD("_ZN11unwindstack7RegsX86C1Ev() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::LocalMaps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack9LocalMapsE = NULL;

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_advance_loc(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE15cfa_advance_locEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE15cfa_advance_locEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_pick() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_pickEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_pickEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetSoname() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf9GetSonameEv(void) {
    ALOGD("_ZN11unwindstack3Elf9GetSonameEv() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineParts::~MemoryOfflineParts() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryOfflinePartsD1Ev(void) {
    ALOGD("_ZN11unwindstack18MemoryOfflinePartsD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*>&>::push_back(unsigned char*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_shl() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_shlEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_shlEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_deref() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE8op_derefEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE8op_derefEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, unwindstack::DwarfLocation> const&>(unsigned int const&, std::__1::pair<unsigned int const, unwindstack::DwarfLocation> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::last_error() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE10last_errorEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE10last_errorEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::ArmExidx */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8ArmExidxE = NULL;

/* Exported Object: vtable for unwindstack::BufferMaps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack10BufferMapsE = NULL;

/* Demangled: std::__1::deque<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetCfaLocationInfo(unsigned long long, unwindstack::DwarfFde const*, unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::set_regs_info(unwindstack::RegsInfo<unsigned int>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE13set_regs_infoEPNS_8RegsInfoIjEE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE13set_regs_infoEPNS_8RegsInfoIjEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char const&>(char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cur_pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE6cur_pcEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE6cur_pcEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LastErrorAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE16LastErrorAddressEv(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE16LastErrorAddressEv() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryRemote */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12MemoryRemoteE = NULL;

/* Demangled: unwindstack::RegsX86::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX8615GetPcAdjustmentEyPNS_3ElfE(void) {
    ALOGD("_ZN11unwindstack7RegsX8615GetPcAdjustmentEyPNS_3ElfE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjEC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::~MapInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfoD2Ev(void) {
    ALOGD("_ZN11unwindstack7MapInfoD2Ev() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::Init(unwindstack::Maps*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles4InitEPNS_4MapsE(void) {
    ALOGD("_ZN11unwindstack8DexFiles4InitEPNS_4MapsE() called");
    return 0;
}

/* Exported Object: unwindstack::Elf::cache_enabled_ */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack3Elf14cache_enabled_E = NULL;

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEERKT_() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::Arch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm4ArchEv(void) {
    ALOGD("_ZN11unwindstack7RegsArm4ArchEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::Arch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips4ArchEv(void) {
    ALOGD("_ZN11unwindstack8RegsMips4ArchEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::RegsMips() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMipsC1Ev(void) {
    ALOGD("_ZN11unwindstack8RegsMipsC1Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips6416IterateRegistersENSt3__18functionIFvPKcyEEE(void) {
    ALOGD("_ZN11unwindstack10RegsMips6416IterateRegistersENSt3__18functionIFvPKcyEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::Read(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_644ReadEPv(void) {
    ALOGD("_ZN11unwindstack10RegsX86_644ReadEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::Clone() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_645CloneEv(void) {
    ALOGD("_ZN11unwindstack10RegsX86_645CloneEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsX86_64 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack10RegsX86_64E = NULL;

/* Demangled: std::__1::deque<unsigned char, std::__1::allocator<unsigned char> >::push_back(unsigned char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backEOh(void) {
    ALOGD("_ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backEOh() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*>&>::push_back(unwindstack::DwarfLocations*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_ne() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_neEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_neEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_register(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE20cfa_def_cfa_registerEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE20cfa_def_cfa_registerEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_breg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_bregEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_bregEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_regx() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_regxEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_regxEv() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::InitHeadersWithTemplate<unsigned long long>() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIyEEvv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIyEEvv() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterfaceArm::GetFunctionName(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::MemoryBuffer::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12MemoryBuffer4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack12MemoryBuffer4ReadEyPvj() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryOfflineParts */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack18MemoryOfflinePartsE = NULL;

/* Demangled: unwindstack::RegsX86::sp() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX862spEv(void) {
    ALOGD("_ZN11unwindstack7RegsX862spEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdeFromPc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjE12GetFdeFromPcEy(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjE12GetFdeFromPcEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInCieHeader(unwindstack::DwarfCie*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE15FillInCieHeaderEPNS_8DwarfCieE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE15FillInCieHeaderEPNS_8DwarfCieE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::set_sp(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips646set_spEy(void) {
    ALOGD("_ZN11unwindstack10RegsMips646set_spEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_undefined(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE13cfa_undefinedEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE13cfa_undefinedEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetFdeFromPc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE12GetFdeFromPcEy(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE12GetFdeFromPcEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::OperandAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE9OperandAtEj(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE9OperandAtEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_abs() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_absEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_absEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_mul() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_mulEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_mulEv() called");
    return 0;
}

/* Demangled: unwindstack::Symbols::Symbols(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7SymbolsC1Eyyyyy(void) {
    ALOGD("_ZN11unwindstack7SymbolsC1Eyyyyy() called");
    return 0;
}

/* Demangled: unwindstack::Maps::Find(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Maps4FindEy(void) {
    ALOGD("_ZN11unwindstack4Maps4FindEy() called");
    return 0;
}

/* Demangled: unwindstack::MemoryRange::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11MemoryRange4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack11MemoryRange4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::RegsX86_64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_64C1Ev(void) {
    ALOGD("_ZN11unwindstack10RegsX86_64C1Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LogOffsetRegisterString(unsigned int, unsigned long long, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE23LogOffsetRegisterStringEjyh(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE23LogOffsetRegisterStringEjyh() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_plus() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_plusEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_plusEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*> >::push_front(unsigned long long* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfEhFrame<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12DwarfEhFrameIyEE = NULL;

/* Demangled: unwindstack::RemoteMaps::GetMapsFile() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11unwindstack10RemoteMaps11GetMapsFileEv(void) {
    ALOGD("_ZNK11unwindstack10RemoteMaps11GetMapsFileEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrame<unsigned long long>::DwarfEhFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12DwarfEhFrameIyEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12DwarfEhFrameIyEC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::set_cie_loc_regs(unwindstack::DwarfLocations const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE16set_cie_loc_regsEPKNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE16set_cie_loc_regsEPKNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::StackAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7StackAtEj(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7StackAtEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_lit() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_litEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_litEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::dex_pc_set() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE10dex_pc_setEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE10dex_pc_setEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildID<elf64_note>() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface11ReadBuildIDI10elf64_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface11ReadBuildIDI10elf64_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::pc() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX862pcEv(void) {
    ALOGD("_ZN11unwindstack7RegsX862pcEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_set_loc(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE11cfa_set_locEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE11cfa_set_locEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryLocal*, std::__1::default_delete<unwindstack::MemoryLocal>, std::__1::allocator<unwindstack::MemoryLocal> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: unwindstack::Regs::CurrentArch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Regs11CurrentArchEv(void) {
    ALOGD("_ZN11unwindstack4Regs11CurrentArchEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::set_pc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips646set_pcEy(void) {
    ALOGD("_ZN11unwindstack10RegsMips646set_pcEy() called");
    return 0;
}

/* Demangled: unwindstack::ArmExidx::LogByReg() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8ArmExidx8LogByRegEv(void) {
    ALOGD("_ZN11unwindstack8ArmExidx8LogByRegEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_expression(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE14cfa_expressionEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE14cfa_expressionEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_advance_loc(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE15cfa_advance_locEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE15cfa_advance_locEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::GetBuildID() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo10GetBuildIDEv(void) {
    ALOGD("_ZN11unwindstack7MapInfo10GetBuildIDEv() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetBuildID(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf10GetBuildIDEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack3Elf10GetBuildIDEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::MemoryCache::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11MemoryCache4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack11MemoryCache4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::Read(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm644ReadEPv(void) {
    ALOGD("_ZN11unwindstack9RegsArm644ReadEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::Clone() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm645CloneEv(void) {
    ALOGD("_ZN11unwindstack9RegsArm645CloneEv() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::GetAddr(unsigned int, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles7GetAddrEjPy(void) {
    ALOGD("_ZN11unwindstack8DexFiles7GetAddrEjPy() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::SetPcFromReturnAddress(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm22SetPcFromReturnAddressEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7RegsArm22SetPcFromReturnAddressEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_rot() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_rotEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_rotEv() called");
    return 0;
}

/* Demangled: bool unwindstack::Symbols::GetGlobal<elf64_sym>(unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7Symbols9GetGlobalI9elf64_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack7Symbols9GetGlobalI9elf64_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::LogOffsetRegisterString(unsigned int, unsigned long long, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE23LogOffsetRegisterStringEjyh(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE23LogOffsetRegisterStringEjyh() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfOp<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack7DwarfOpIyEE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_over() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_overEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_overEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_abs() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_absEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_absEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_mul() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_mulEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_mulEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::StackPop() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE8StackPopEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE8StackPopEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetNextCieOrFde(unwindstack::DwarfFde const**) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE15GetNextCieOrFdeEPPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE15GetNextCieOrFdeEPPKNS_8DwarfFdeE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Elf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack3ElfE = NULL;

/* Demangled: bool std::__1::__insertion_sort_incomplete<bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::RegsMips64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips64C1Ev(void) {
    ALOGD("_ZN11unwindstack10RegsMips64C1Ev() called");
    return 0;
}

/* Demangled: unwindstack::Unwinder::SetJitDebug(unwindstack::JitDebug*, unwindstack::ArchEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8Unwinder11SetJitDebugEPNS_8JitDebugENS_8ArchEnumE(void) {
    ALOGD("_ZN11unwindstack8Unwinder11SetJitDebugEPNS_8JitDebugENS_8ArchEnumE() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ReadDescriptor32(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug16ReadDescriptor32Ey(void) {
    ALOGD("_ZN11unwindstack8JitDebug16ReadDescriptor32Ey() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineBuffer::MemoryOfflineBuffer(unsigned char const*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19MemoryOfflineBufferC2EPKhyy(void) {
    ALOGD("_ZN11unwindstack19MemoryOfflineBufferC2EPKhyy() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::ReadEntryPtr32(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles14ReadEntryPtr32Ey(void) {
    ALOGD("_ZN11unwindstack8DexFiles14ReadEntryPtr32Ey() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_lit() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_litEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_litEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjEC2EPNS_11DwarfMemoryEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjEC2EPNS_11DwarfMemoryEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrame<unsigned int>::DwarfEhFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12DwarfEhFrameIjEC1EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12DwarfEhFrameIjEC1EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetFunctionName(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack3Elf15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::MemoryFileAtOffset::~MemoryFileAtOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryFileAtOffsetD1Ev(void) {
    ALOGD("_ZN11unwindstack18MemoryFileAtOffsetD1Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_lt() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_ltEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_ltEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsX86 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack7RegsX86E = NULL;

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_val_offset(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE14cfa_val_offsetEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE14cfa_val_offsetEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::Elf::CacheAfterCreateMemory(unwindstack::MapInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf22CacheAfterCreateMemoryEPNS_7MapInfoE(void) {
    ALOGD("_ZN11unwindstack3Elf22CacheAfterCreateMemoryEPNS_7MapInfoE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::Read(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips644ReadEPv(void) {
    ALOGD("_ZN11unwindstack10RegsMips644ReadEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::CreateFromUcontext(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX8618CreateFromUcontextEPv(void) {
    ALOGD("_ZN11unwindstack7RegsX8618CreateFromUcontextEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::Clone() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips645CloneEv(void) {
    ALOGD("_ZN11unwindstack10RegsMips645CloneEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_sf(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE14cfa_def_cfa_sfEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE14cfa_def_cfa_sfEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::is_register() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE11is_registerEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE11is_registerEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_plus_uconst() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE14op_plus_uconstEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE14op_plus_uconstEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::OperandAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE9OperandAtEj(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE9OperandAtEj() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildID<elf32_note>() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface11ReadBuildIDI10elf32_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface11ReadBuildIDI10elf32_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterfaceArm::GetPrel31Addr(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm13GetPrel31AddrEjPj(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm13GetPrel31AddrEjPj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_offset(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdeInfoFromIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjE19GetFdeInfoFromIndexEj(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjE19GetFdeInfoFromIndexEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::Unwinder::SetDexFiles(unwindstack::DexFiles*, unwindstack::ArchEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8Unwinder11SetDexFilesEPNS_8DexFilesENS_8ArchEnumE(void) {
    ALOGD("_ZN11unwindstack8Unwinder11SetDexFilesEPNS_8DexFilesENS_8ArchEnumE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*> >::push_back(unwindstack::DwarfLocations*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryFileAtOffset */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack18MemoryFileAtOffsetE = NULL;

/* Demangled: unwindstack::Global::Global(std::__1::shared_ptr<unwindstack::Memory>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_remember_state(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE18cfa_remember_stateEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE18cfa_remember_stateEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_expression(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_rot() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6op_rotEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6op_rotEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::GetSonameWithTemplate<dynamic>() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface21GetSonameWithTemplateI7dynamicEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface21GetSonameWithTemplateI7dynamicEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: unwindstack::ArmExidx::Eval() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8ArmExidx4EvalEv(void) {
    ALOGD("_ZN11unwindstack8ArmExidx4EvalEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_gt() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_gtEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_gtEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*> >::push_front(unsigned long long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::DwarfSectionImpl(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyEC2EPNS_6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::ElfInterfaceArm */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack15ElfInterfaceArmE = NULL;

/* Demangled: unwindstack::ElfInterfaceArm::HandleUnknownType(unsigned int, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm17HandleUnknownTypeEjyy(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm17HandleUnknownTypeEjyy() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::~JitDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugD0Ev(void) {
    ALOGD("_ZN11unwindstack8JitDebugD0Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::CreateFromUcontext(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_6418CreateFromUcontextEPv(void) {
    ALOGD("_ZN11unwindstack10RegsX86_6418CreateFromUcontextEPv() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips::Read(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips4ReadEPv(void) {
    ALOGD("_ZN11unwindstack8RegsMips4ReadEPv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfEhFrame<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12DwarfEhFrameIjEE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::GetSonameWithTemplate<Elf64_Dyn>() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface21GetSonameWithTemplateI9Elf64_DynEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void) {
    ALOGD("_ZN11unwindstack12ElfInterface21GetSonameWithTemplateI9Elf64_DynEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv() called");
    return 0;
}

/* Exported Object: unwindstack::Elf::cache_ */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack3Elf6cache_E = NULL;

/* Demangled: unwindstack::Elf::IsValidPc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf9IsValidPcEy(void) {
    ALOGD("_ZN11unwindstack3Elf9IsValidPcEy() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInFdeHeader(unwindstack::DwarfFde*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE15FillInFdeHeaderEPNS_8DwarfFdeE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE15FillInFdeHeaderEPNS_8DwarfFdeE() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterface::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface4StepEyPNS_4RegsEPNS_6MemoryEPb(void) {
    ALOGD("_ZN11unwindstack12ElfInterface4StepEyPNS_4RegsEPNS_6MemoryEPb() called");
    return 0;
}

/* Demangled: unwindstack::Elf::CacheUnlock() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf11CacheUnlockEv(void) {
    ALOGD("_ZN11unwindstack3Elf11CacheUnlockEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<unwindstack::MemoryFileAtOffset, std::__1::allocator<unwindstack::MemoryFileAtOffset> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_same_value(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE14cfa_same_valueEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE14cfa_same_valueEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__erase_unique<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIjEEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIjEEjRKT_() called");
    return 0;
}

/* Demangled: unwindstack::ElfInterfaceArm::FindEntry(unsigned int, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack15ElfInterfaceArm9FindEntryEjPy(void) {
    ALOGD("_ZN11unwindstack15ElfInterfaceArm9FindEntryEjPy() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildIDFromMemory<elf64_hdr, elf64_shdr, elf64_note>(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf64_hdr10elf64_shdr10elf64_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf64_hdr10elf64_shdr10elf64_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::RegsMips64::CreateFromUcontext(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsMips6418CreateFromUcontextEPv(void) {
    ALOGD("_ZN11unwindstack10RegsMips6418CreateFromUcontextEPv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsArm64 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack9RegsArm64E = NULL;

/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE8__appendEj() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::ProcessArch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles11ProcessArchEv(void) {
    ALOGD("_ZN11unwindstack8DexFiles11ProcessArchEv() called");
    return 0;
}

/* Exported Object: unwindstack::DwarfOp<unsigned long long>::kOpHandleFuncList */
extern "C" __attribute__((visibility("default"))) void* _ZN11unwindstack7DwarfOpIyE17kOpHandleFuncListE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<unwindstack::MemoryFileAtOffset, std::__1::allocator<unwindstack::MemoryFileAtOffset> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::set_sp(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm6set_spEy(void) {
    ALOGD("_ZN11unwindstack7RegsArm6set_spEy() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES6_RKS9_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES6_RKS9_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::OperandsSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE12OperandsSizeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE12OperandsSizeEv() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::ReadProgramHeaders<elf64_hdr, elf64_phdr>(elf64_hdr const&, long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf64_hdr10elf64_phdrEEvRKT_Px(void) {
    ALOGD("_ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf64_hdr10elf64_phdrEEvRKT_Px() called");
    return 0;
}

/* Demangled: unwindstack::MemoryBuffer::GetPtr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12MemoryBuffer6GetPtrEj(void) {
    ALOGD("_ZN11unwindstack12MemoryBuffer6GetPtrEj() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::set_sp(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX866set_spEy(void) {
    ALOGD("_ZN11unwindstack7RegsX866set_spEy() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::GetFileMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo13GetFileMemoryEv(void) {
    ALOGD("_ZN11unwindstack7MapInfo13GetFileMemoryEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryLocal*, std::__1::default_delete<unwindstack::MemoryLocal>, std::__1::allocator<unwindstack::MemoryLocal> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm64::RegsArm64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm64C1Ev(void) {
    ALOGD("_ZN11unwindstack9RegsArm64C1Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::SetFromUcontext(unwindstack::x86_ucontext_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX8615SetFromUcontextEPNS_14x86_ucontext_tE(void) {
    ALOGD("_ZN11unwindstack7RegsX8615SetFromUcontextEPNS_14x86_ucontext_tE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_or() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_orEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_orEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildIDFromMemory<elf32_hdr, elf32_shdr, elf32_note>(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf32_hdr10elf32_shdr10elf32_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf32_hdr10elf32_shdr10elf32_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::Elf::GetLastError(unwindstack::ErrorData*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack3Elf12GetLastErrorEPNS_9ErrorDataE(void) {
    ALOGD("_ZN11unwindstack3Elf12GetLastErrorEPNS_9ErrorDataE() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7RegsArm19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::GetLocationInfo(unsigned long long, unsigned long long, unsigned long long, unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE15GetLocationInfoEyyyPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE15GetLocationInfoEyyyPNS_14DwarfLocationsE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfOp<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack7DwarfOpIjEE = NULL;

/* Demangled: unwindstack::DwarfEhFrame<unsigned int>::DwarfEhFrame(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12DwarfEhFrameIjEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack12DwarfEhFrameIjEC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::ReadSectionHeaders<elf32_hdr, elf32_shdr>(elf32_hdr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf32_hdr10elf32_shdrEEvRKT_(void) {
    ALOGD("_ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf32_hdr10elf32_shdrEEvRKT_() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOffline::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13MemoryOffline4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void) {
    ALOGD("_ZN11unwindstack13MemoryOffline4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryRange */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack11MemoryRangeE = NULL;

/* Demangled: unwindstack::RegsArm64::Arch() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack9RegsArm644ArchEv(void) {
    ALOGD("_ZN11unwindstack9RegsArm644ArchEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::LogInstruction(unsigned int, unsigned long long, unsigned char, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE14LogInstructionEjyhPy(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE14LogInstructionEjyhPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_deref_size() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE13op_deref_sizeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE13op_deref_sizeEv() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::set_pc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm6set_pcEy(void) {
    ALOGD("_ZN11unwindstack7RegsArm6set_pcEy() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::RegsX86() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX86C2Ev(void) {
    ALOGD("_ZN11unwindstack7RegsX86C2Ev() called");
    return 0;
}

/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<short>(unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory10ReadSignedIsEEbPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory10ReadSignedIsEEbPy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_deref_size() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE13op_deref_sizeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE13op_deref_sizeEv() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ReadVariableData(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug16ReadVariableDataEy(void) {
    ALOGD("_ZN11unwindstack8JitDebug16ReadVariableDataEy() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_set_loc(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE11cfa_set_locEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE11cfa_set_locEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetCieFromOffset(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE16GetCieFromOffsetEy(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE16GetCieFromOffsetEy() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::ReadDescriptor64(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebug16ReadDescriptor64Ey(void) {
    ALOGD("_ZN11unwindstack8JitDebug16ReadDescriptor64Ey() called");
    return 0;
}

/* Demangled: unwindstack::MemoryOfflineParts::~MemoryOfflineParts() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack18MemoryOfflinePartsD2Ev(void) {
    ALOGD("_ZN11unwindstack18MemoryOfflinePartsD2Ev() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::set_pc(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX866set_pcEy(void) {
    ALOGD("_ZN11unwindstack7RegsX866set_pcEy() called");
    return 0;
}

/* Demangled: __cxa_demangle */
extern "C" __attribute__((visibility("default"))) int __cxa_demangle(void) {
    ALOGD("__cxa_demangle() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned char, std::__1::allocator<unsigned char> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIhNS_9allocatorIhEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIhNS_9allocatorIhEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::ReadEntryPtr64(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFiles14ReadEntryPtr64Ey(void) {
    ALOGD("_ZN11unwindstack8DexFiles14ReadEntryPtr64Ey() called");
    return 0;
}

/* Demangled: unwindstack::DexFiles::~DexFiles() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DexFilesD0Ev(void) {
    ALOGD("_ZN11unwindstack8DexFilesD0Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::Eval(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE4EvalEyy(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE4EvalEyy() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*> >::push_front(unsigned char*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_le() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_leEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_leEv() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::GetPrintableBuildID() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo19GetPrintableBuildIDEv(void) {
    ALOGD("_ZN11unwindstack7MapInfo19GetPrintableBuildIDEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_deref() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE8op_derefEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE8op_derefEv() called");
    return 0;
}

/* Demangled: bool unwindstack::ElfInterface::GetGlobalVariableWithTemplate<elf32_sym>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf32_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf32_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::ElfInterface32 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack14ElfInterface32E = NULL;

/* Demangled: unwindstack::RegsMips::Clone() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMips5CloneEv(void) {
    ALOGD("_ZN11unwindstack8RegsMips5CloneEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned int>::set_cie_loc_regs(unwindstack::DwarfLocations const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIjE16set_cie_loc_regsEPKNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIjE16set_cie_loc_regsEPKNS_14DwarfLocationsE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::regular_memory() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE14regular_memoryEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE14regular_memoryEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::last_error() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE10last_errorEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE10last_errorEv() called");
    return 0;
}

/* Demangled: bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void) {
    ALOGD("_ZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy() called");
    return 0;
}

/* Demangled: unwindstack::Memory::CreateProcessMemoryCached(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Memory25CreateProcessMemoryCachedEi(void) {
    ALOGD("_ZN11unwindstack6Memory25CreateProcessMemoryCachedEi() called");
    return 0;
}

/* Demangled: unwindstack::RegsArm::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsArm15GetPcAdjustmentEyPNS_3ElfE(void) {
    ALOGD("_ZN11unwindstack7RegsArm15GetPcAdjustmentEyPNS_3ElfE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::RegsArm */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack7RegsArmE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_drop() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE7op_dropEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE7op_dropEv() called");
    return 0;
}

/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryCache*, std::__1::default_delete<unwindstack::MemoryCache>, std::__1::allocator<unwindstack::MemoryCache> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: unwindstack::RegsMips::RegsMips() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8RegsMipsC2Ev(void) {
    ALOGD("_ZN11unwindstack8RegsMipsC2Ev() called");
    return 0;
}

/* Demangled: unwindstack::Unwinder::FillInDexFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8Unwinder14FillInDexFrameEv(void) {
    ALOGD("_ZN11unwindstack8Unwinder14FillInDexFrameEv() called");
    return 0;
}

/* Demangled: void unwindstack::ElfInterface::GetMaxSizeWithTemplate<elf64_hdr>(unwindstack::Memory*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf64_hdrEEvPNS_6MemoryEPy(void) {
    ALOGD("_ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf64_hdrEEvPNS_6MemoryEPy() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::Elf*, std::__1::default_delete<unwindstack::Elf>, std::__1::allocator<unwindstack::Elf> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryRemote*, std::__1::default_delete<unwindstack::MemoryRemote>, std::__1::allocator<unwindstack::MemoryRemote> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: unwindstack::Unwinder::FillInFrame(unwindstack::MapInfo*, unwindstack::Elf*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8Unwinder11FillInFrameEPNS_7MapInfoEPNS_3ElfEyy(void) {
    ALOGD("_ZN11unwindstack8Unwinder11FillInFrameEPNS_7MapInfoEPNS_3ElfEyy() called");
    return 0;
}

/* Demangled: unwindstack::ArmExidx::LogRawData() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8ArmExidx10LogRawDataEv(void) {
    ALOGD("_ZN11unwindstack8ArmExidx10LogRawDataEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_ge() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_geEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_geEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::cur_op() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6cur_opEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6cur_opEv() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::CreateMemory(std::__1::shared_ptr<unwindstack::Memory> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo12CreateMemoryERKNSt3__110shared_ptrINS_6MemoryEEE(void) {
    ALOGD("_ZN11unwindstack7MapInfo12CreateMemoryERKNSt3__110shared_ptrINS_6MemoryEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryRemote*, std::__1::default_delete<unwindstack::MemoryRemote>, std::__1::allocator<unwindstack::MemoryRemote> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unsigned int unwindstack::DwarfMemory::GetEncodedSize<unsigned long long>(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory14GetEncodedSizeIyEEjh(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory14GetEncodedSizeIyEEjh() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_swap() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE7op_swapEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE7op_swapEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::EvalExpression(unwindstack::DwarfLocation const&, unwindstack::Memory*, unsigned int*, unwindstack::RegsInfo<unsigned int>*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPjPNS_8RegsInfoIjEEPb(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPjPNS_8RegsInfoIjEEPb() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack12MemoryBufferE = NULL;

/* Demangled: unwindstack::Memory::CreateProcessMemory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack6Memory19CreateProcessMemoryEi(void) {
    ALOGD("_ZN11unwindstack6Memory19CreateProcessMemoryEi() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::bool_to_dwarf_bool(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE18bool_to_dwarf_boolEb(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE18bool_to_dwarf_boolEb() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInCieHeader(unwindstack::DwarfCie*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE15FillInCieHeaderEPNS_8DwarfCieE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE15FillInCieHeaderEPNS_8DwarfCieE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unwindstack::Symbols*, std::__1::allocator<unwindstack::Symbols*> >::__push_back_slow_path<unwindstack::Symbols*>(unwindstack::Symbols*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN11unwindstack7SymbolsENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN11unwindstack7SymbolsENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_() called");
    return 0;
}

/* Demangled: unwindstack::ArmExidx::ExtractEntryData(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8ArmExidx16ExtractEntryDataEj(void) {
    ALOGD("_ZN11unwindstack8ArmExidx16ExtractEntryDataEj() called");
    return 0;
}

/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<signed char>(unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory10ReadSignedIaEEbPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory10ReadSignedIaEEbPy() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::RegsX86_64() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_64C2Ev(void) {
    ALOGD("_ZN11unwindstack10RegsX86_64C2Ev() called");
    return 0;
}

/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_gnu_negative_offset_extended(unwindstack::DwarfLocations*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack8DwarfCfaIyE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE(void) {
    ALOGD("_ZN11unwindstack8DwarfCfaIyE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::DwarfSectionImpl<unsigned long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack16DwarfSectionImplIyEE = NULL;

/* Demangled: unwindstack::DwarfOp<unsigned long long>::Decode() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6DecodeEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6DecodeEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyEC1EPNS_11DwarfMemoryEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyEC1EPNS_11DwarfMemoryEPNS_6MemoryE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_6415GetPcAdjustmentEyPNS_3ElfE(void) {
    ALOGD("_ZN11unwindstack10RegsX86_6415GetPcAdjustmentEyPNS_3ElfE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdeInfoFromIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIyE19GetFdeInfoFromIndexEj(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIyE19GetFdeInfoFromIndexEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*>&>::push_back(unsigned long long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPyRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPyRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::op_eq() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE5op_eqEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE5op_eqEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_ne() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE5op_neEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE5op_neEv() called");
    return 0;
}

/* Demangled: unwindstack::Regs::RemoteGet(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack4Regs9RemoteGetEi(void) {
    ALOGD("_ZN11unwindstack4Regs9RemoteGetEi() called");
    return 0;
}

/* Demangled: bool unwindstack::DwarfMemory::ReadEncodedValue<unsigned int>(unsigned char, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack11DwarfMemory16ReadEncodedValueIjEEbhPy(void) {
    ALOGD("_ZN11unwindstack11DwarfMemory16ReadEncodedValueIjEEbhPy() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack10RegsX86_6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Global */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack6GlobalE = NULL;

/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::DwarfSectionImpl(unwindstack::Memory*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIjEC2EPNS_6MemoryE(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIjEC2EPNS_6MemoryE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::EvalExpression(unwindstack::DwarfLocation const&, unwindstack::Memory*, unsigned long long*, unwindstack::RegsInfo<unsigned long long>*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack16DwarfSectionImplIyE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPyPNS_8RegsInfoIyEEPb(void) {
    ALOGD("_ZN11unwindstack16DwarfSectionImplIyE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPyPNS_8RegsInfoIyEEPb() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::dex_pc_set() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE10dex_pc_setEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE10dex_pc_setEv() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_dup() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIyE6op_dupEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIyE6op_dupEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unwindstack::MapInfo::InitFileMemoryFromPreviousReadOnlyMap(unwindstack::MemoryFileAtOffset*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7MapInfo37InitFileMemoryFromPreviousReadOnlyMapEPNS_18MemoryFileAtOffsetE(void) {
    ALOGD("_ZN11unwindstack7MapInfo37InitFileMemoryFromPreviousReadOnlyMapEPNS_18MemoryFileAtOffsetE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfSection::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12DwarfSection4StepEyPNS_4RegsEPNS_6MemoryEPb(void) {
    ALOGD("_ZN11unwindstack12DwarfSection4StepEyPNS_4RegsEPNS_6MemoryEPb() called");
    return 0;
}

/* Demangled: unwindstack::MemoryRanges::Read(unsigned long long, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack12MemoryRanges4ReadEyPvj(void) {
    ALOGD("_ZN11unwindstack12MemoryRanges4ReadEyPvj() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7RegsX8616IterateRegistersENSt3__18functionIFvPKcyEEE(void) {
    ALOGD("_ZN11unwindstack7RegsX8616IterateRegistersENSt3__18functionIFvPKcyEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack19DwarfEhFrameWithHdrIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN11unwindstack19DwarfEhFrameWithHdrIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: unwindstack::DwarfOp<unsigned int>::cur_op() */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack7DwarfOpIjE6cur_opEv(void) {
    ALOGD("_ZN11unwindstack7DwarfOpIjE6cur_opEv() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::MemoryOfflineBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack19MemoryOfflineBufferE = NULL;

/* Demangled: unwindstack::LocalUnwinder::GetMapInfo(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack13LocalUnwinder10GetMapInfoEy(void) {
    ALOGD("_ZN11unwindstack13LocalUnwinder10GetMapInfoEy() called");
    return 0;
}

/* Demangled: unwindstack::RegsX86_64::SetFromUcontext(unwindstack::x86_64_ucontext_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN11unwindstack10RegsX86_6415SetFromUcontextEPNS_17x86_64_ucontext_tE(void) {
    ALOGD("_ZN11unwindstack10RegsX86_6415SetFromUcontextEPNS_17x86_64_ucontext_tE() called");
    return 0;
}
