/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.nvram@1.1-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.nvram@1.1-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_1_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_1_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::covertVector2Array(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, char*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram13readFileBylidEitNSt3__18functionIFvRKN7android8hardware11hidl_stringEiaEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::readFileBylid(int, unsigned short, std::__1::function<void (android::hardware::hidl_string const&, int, signed char)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram13readFileBylidEitNSt3__18functionIFvRKN7android8hardware11hidl_stringEiaEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16AddBackupFileNumEi */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::AddBackupFileNum(int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16AddBackupFileNumEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18ResetFileToDefaultEi */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::ResetFileToDefault(int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18ResetFileToDefaultEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram21BackupToBinRegion_AllEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupToBinRegion_All() */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram21BackupToBinRegion_AllEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_NS3_6INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_1::INvram-in-vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_NS3_6INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15BackupAll_NvRamEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupAll_NvRam() */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15BackupAll_NvRamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::writeFileByNamevec(android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram24BackupToBinRegion_All_ExEj */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupToBinRegion_All_Ex(unsigned int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram24BackupToBinRegion_All_ExEj(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_ */
/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char>(unsigned char&&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16RestoreAll_NvRamEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::RestoreAll_NvRam() */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16RestoreAll_NvRamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18BackupData_SpecialERKN7android8hardware8hidl_vecIhEEjj */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupData_Special(android::hardware::hidl_vec<unsigned char> const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18BackupData_SpecialERKN7android8hardware8hidl_vecIhEEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation26covertVector2UnsignedArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPh */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::covertVector2UnsignedArray(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, unsigned char*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation26covertVector2UnsignedArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPh(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvSA_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::readFileByName(android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15ReadFileVerInfoEiNSt3__18functionIFviiiEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::ReadFileVerInfo(int, std::__1::function<void (int, int, int)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15ReadFileVerInfoEiNSt3__18functionIFviiiEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_NS2_4V1_06INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_NS2_4V1_06INvramE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::covertArray2Vector(char const*, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram25BackupToBinRegion_All_ExxERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupToBinRegion_All_Exx(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram25BackupToBinRegion_All_ExxERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: HIDL_FETCH_INvram */
/* Demangled: HIDL_FETCH_INvram */
int HIDL_FETCH_INvram(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14writeFileBylidEitRKN7android8hardware8hidl_vecIhEENSt3__18functionIFviaEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::writeFileBylid(int, unsigned short, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, signed char)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14writeFileBylidEitRKN7android8hardware8hidl_vecIhEENSt3__18functionIFviaEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_1_IMPL_H */
