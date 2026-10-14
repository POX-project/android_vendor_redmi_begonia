/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.misys@3.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.misys@3.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_3_0_IMPL_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_3_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11GetFileSizeERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::GetFileSize(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IFileSizeResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11GetFileSizeERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12MiSysSetPropERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::MiSysSetProp(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12MiSysSetPropERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReadFromFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_NSt3__18functionIFvRKNS3_12IBlockResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::ReadFromFile(android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReadFromFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_NSt3__18functionIFvRKNS3_12IBlockResultEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReleaseBlockERKN7android8hardware11hidl_memoryE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::ReleaseBlock(android::hardware::hidl_memory const&) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReleaseBlockERKN7android8hardware11hidl_memoryE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys14GetCallBackPidEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::GetCallBackPid(unsigned int, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IGetPidResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys14GetCallBackPidEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE */
/* Demangled: VTT for vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern void* _ZTTN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE;

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: HIDL_FETCH_IMiSys */
/* Demangled: HIDL_FETCH_IMiSys */
int HIDL_FETCH_IMiSys(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11SetCallBackERKN7android2spINS3_14IMiSysCallBackEEEji */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::SetCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11SetCallBackERKN7android2spINS3_14IMiSysCallBackEEEji(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13AllocateBlockEyNSt3__18functionIFvRKNS3_12IBlockResultEEEE */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::AllocateBlock(unsigned long long, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13AllocateBlockEyNSt3__18functionIFvRKNS3_12IBlockResultEEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_fstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11OnDataReadyERKN7android8hardware11hidl_memoryEyj */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::OnDataReady(android::hardware::hidl_memory const&, unsigned long long, unsigned int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11OnDataReadyERKN7android8hardware11hidl_memoryEyj(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11WriteToFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_y */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::WriteToFile(android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11WriteToFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_y(void);

/* Symbol: _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys15ReleaseCallBackERKN7android2spINS3_14IMiSysCallBackEEEji */
/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::ReleaseCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys15ReleaseCallBackERKN7android2spINS3_14IMiSysCallBackEEEji(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE0_NS3_6IMiSysE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSys-in-vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern void* _ZTCN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE0_NS3_6IMiSysE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE */
/* Demangled: vtable for vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern void* _ZTVN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__16vectorIN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13CallBackEventENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent, std::__1::allocator<vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent> >::__push_back_slow_path<vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent const&>(vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent const&) */
int _ZNSt3__16vectorIN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13CallBackEventENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MISYS_3_0_IMPL_H */
