/*
 * Reverse-Engineered ABI Specification for: jcos_client.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: jcos_client.so
 */

#ifndef BEGONIA_RE_JCOS_CLIENT_H
#define BEGONIA_RE_JCOS_CLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN11JcopOsDwnld8finalizeEv */
/* Demangled: JcopOsDwnld::finalize() */
int _ZN11JcopOsDwnld8finalizeEv(void);

/* Symbol: gpJcopOs_Dwnld_Context */
/* Demangled: gpJcopOs_Dwnld_Context */
extern void* gpJcopOs_Dwnld_Context;

/* Symbol: _ZN11JcopOsDwnld17load_JcopOS_imageEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo */
/* Demangled: JcopOsDwnld::load_JcopOS_image(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
int _ZN11JcopOsDwnld17load_JcopOS_imageEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void);

/* Symbol: _ZN11JcopOsDwnld25JcopOs_update_seq_handlerEv */
/* Demangled: JcopOsDwnld::JcopOs_update_seq_handler() */
int _ZN11JcopOsDwnld25JcopOs_update_seq_handlerEv(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: isPatchUpdate */
/* Demangled: isPatchUpdate */
extern void* isPatchUpdate;

/* Symbol: jd */
/* Demangled: jd */
extern void* jd;

/* Symbol: _ZN11JcopOsDwnld11TriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo */
/* Demangled: JcopOsDwnld::TriggerApdu(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
int _ZN11JcopOsDwnld11TriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void);

/* Symbol: _ZN11JcopOsDwnld14SetJcopOsStateEP16JcopOs_ImageInfoh */
/* Demangled: JcopOsDwnld::SetJcopOsState(JcopOs_ImageInfo*, unsigned char) */
int _ZN11JcopOsDwnld14SetJcopOsStateEP16JcopOs_ImageInfoh(void);

/* Symbol: _ZN11JcopOsDwnld14UaiTriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo */
/* Demangled: JcopOsDwnld::UaiTriggerApdu(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
int _ZN11JcopOsDwnld14UaiTriggerApduEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void);

/* Symbol: _Z11JCDNLD_InitP8IChannel */
/* Demangled: JCDNLD_Init(IChannel*) */
int _Z11JCDNLD_InitP8IChannel(void);

/* Symbol: _Z19JCDNLD_CheckVersionv */
/* Demangled: JCDNLD_CheckVersion() */
int _Z19JCDNLD_CheckVersionv(void);

/* Symbol: channel */
/* Demangled: channel */
extern void* channel;

/* Symbol: _ZN11JcopOsDwnld17getJcopOsFileInfoEv */
/* Demangled: JcopOsDwnld::getJcopOsFileInfo() */
int _ZN11JcopOsDwnld17getJcopOsFileInfoEv(void);

/* Symbol: _ZN11JcopOsDwnld10initializeEP8IChannel */
/* Demangled: JcopOsDwnld::initialize(IChannel*) */
int _ZN11JcopOsDwnld10initializeEP8IChannel(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: JcopOs_dwnld_seqhandler */
/* Demangled: JcopOs_dwnld_seqhandler */
extern void* JcopOs_dwnld_seqhandler;

/* Symbol: _ZN11JcopOsDwnld10sJcopDwnldE */
/* Demangled: JcopOsDwnld::sJcopDwnld */
extern void* _ZN11JcopOsDwnld10sJcopDwnldE;

/* Symbol: _ZN11JcopOsDwnld11SendUAICmdsEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo */
/* Demangled: JcopOsDwnld::SendUAICmds(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
int _ZN11JcopOsDwnld11SendUAICmdsEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void);

/* Symbol: _ZN11JcopOsDwnld14GetJcopOsStateEP16JcopOs_ImageInfoPh */
/* Demangled: JcopOsDwnld::GetJcopOsState(JcopOs_ImageInfo*, unsigned char*) */
int _ZN11JcopOsDwnld14GetJcopOsStateEP16JcopOs_ImageInfoPh(void);

/* Symbol: isUaiEnabled */
/* Demangled: isUaiEnabled */
extern void* isUaiEnabled;

/* Symbol: _Z20JCDNLD_StartDownloadv */
/* Demangled: JCDNLD_StartDownload() */
int _Z20JCDNLD_StartDownloadv(void);

/* Symbol: _ZN11JcopOsDwnld7GetInfoEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo */
/* Demangled: JcopOsDwnld::GetInfo(JcopOs_ImageInfo*, unsigned char, JcopOs_TranscieveInfo*) */
int _ZN11JcopOsDwnld7GetInfoEP16JcopOs_ImageInfohP21JcopOs_TranscieveInfo(void);

/* Symbol: _Z13JCDNLD_DeInitv */
/* Demangled: JCDNLD_DeInit() */
int _Z13JCDNLD_DeInitv(void);

/* Symbol: _ZN11JcopOsDwnld11getInstanceEv */
/* Demangled: JcopOsDwnld::getInstance() */
int _ZN11JcopOsDwnld11getInstanceEv(void);

/* Symbol: _ZN11JcopOsDwnld15JcopOs_DownloadEv */
/* Demangled: JcopOsDwnld::JcopOs_Download() */
int _ZN11JcopOsDwnld15JcopOs_DownloadEv(void);

__END_DECLS

#endif /* BEGONIA_RE_JCOS_CLIENT_H */
