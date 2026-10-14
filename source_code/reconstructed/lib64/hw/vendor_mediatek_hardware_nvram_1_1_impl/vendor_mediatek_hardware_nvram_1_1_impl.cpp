/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.nvram@1.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_nvram_1_1_impl"

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
#include "vendor_mediatek_hardware_nvram_1_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::covertVector2Array(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertVector2ArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPc() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::readFileBylid(int, unsigned short, std::__1::function<void (android::hardware::hidl_string const&, int, signed char)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram13readFileBylidEitNSt3__18functionIFvRKN7android8hardware11hidl_stringEiaEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram13readFileBylidEitNSt3__18functionIFvRKN7android8hardware11hidl_stringEiaEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::AddBackupFileNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16AddBackupFileNumEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16AddBackupFileNumEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::ResetFileToDefault(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18ResetFileToDefaultEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18ResetFileToDefaultEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupToBinRegion_All() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram21BackupToBinRegion_AllEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram21BackupToBinRegion_AllEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::nvram::V1_1::INvram-in-vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_NS3_6INvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupAll_NvRam() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15BackupAll_NvRamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15BackupAll_NvRamEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::writeFileByNamevec(android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS7_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS7_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupToBinRegion_All_Ex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram24BackupToBinRegion_All_ExEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram24BackupToBinRegion_All_ExEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char>(unsigned char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIhEEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::RestoreAll_NvRam() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16RestoreAll_NvRamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram16RestoreAll_NvRamEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupData_Special(android::hardware::hidl_vec<unsigned char> const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18BackupData_SpecialERKN7android8hardware8hidl_vecIhEEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram18BackupData_SpecialERKN7android8hardware8hidl_vecIhEEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::covertVector2UnsignedArray(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation26covertVector2UnsignedArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPh(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation26covertVector2UnsignedArrayENSt3__16vectorIhNS5_9allocatorIhEEEEPh() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::readFileByName(android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::ReadFileVerInfo(int, std::__1::function<void (int, int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15ReadFileVerInfoEiNSt3__18functionIFviiiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram15ReadFileVerInfoEiNSt3__18functionIFviiiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_NS2_4V1_06INvramE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::covertArray2Vector(char const*, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation18covertArray2VectorEPKciRNSt3__16vectorIhNS7_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::BackupToBinRegion_All_Exx(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram25BackupToBinRegion_All_ExxERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram25BackupToBinRegion_All_ExxERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: HIDL_FETCH_INvram */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_INvram(void) {
    ALOGD("HIDL_FETCH_INvram() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram::writeFileBylid(int, unsigned short, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, signed char)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14writeFileBylidEitRKN7android8hardware8hidl_vecIhEENSt3__18functionIFviaEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_114implementation5Nvram14writeFileBylidEitRKN7android8hardware8hidl_vecIhEENSt3__18functionIFviaEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::nvram::V1_1::implementation::Nvram */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5nvram4V1_114implementation5NvramE = NULL;
