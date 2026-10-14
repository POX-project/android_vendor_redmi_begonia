/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.misys@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.misys@1.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_1_0_IMPL_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys14MiSysWriteFileERKN7android8hardware11hidl_stringESA_SA_jh */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys::MiSysWriteFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, unsigned char) */
int _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys14MiSysWriteFileERKN7android8hardware11hidl_stringESA_SA_jh(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: HIDL_FETCH_IMiSys */
/* Demangled: HIDL_FETCH_IMiSys */
int HIDL_FETCH_IMiSys(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_014implementation10handlePathERKN7android8hardware11hidl_stringERNSt3__112basic_stringIcNSA_11char_traitsIcEENSA_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::implementation::handlePath(android::hardware::hidl_string const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_014implementation10handlePathERKN7android8hardware11hidl_stringERNSt3__112basic_stringIcNSA_11char_traitsIcEENSA_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_014implementation23traverseFolderForDeleteEPKc */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::implementation::traverseFolderForDelete(char const*) */
int _ZN6vendor6xiaomi8hardware5misys4V1_014implementation23traverseFolderForDeleteEPKc(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys12DirListFilesERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys::DirListFiles(android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys12DirListFilesERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_fstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys20EraseFileOrDirectoryERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys::EraseFileOrDirectory(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys20EraseFileOrDirectoryERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE;

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys13MiSysReadFileERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_11IReadResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys::MiSysReadFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IReadResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSys13MiSysReadFileERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_11IReadResultEEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE;

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE0_NS3_6IMiSysE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys-in-vendor::xiaomi::hardware::misys::V1_0::implementation::MiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V1_014implementation5MiSysE0_NS3_6IMiSysE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_1_0_IMPL_H */
