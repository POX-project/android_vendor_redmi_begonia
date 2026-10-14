/*
 * Reverse-Engineered ABI Specification for: libvt_avsync.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libvt_avsync.so
 */

#ifndef BEGONIA_RE_LIBVT_AVSYNC_H
#define BEGONIA_RE_LIBVT_AVSYNC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9VTService8VTAVSync10resetParamEv */
/* Demangled: VTService::VTAVSync::resetParam() */
int _ZN9VTService8VTAVSync10resetParamEv(void);

/* Symbol: _ZTVN9VTService8VTAVSyncE */
/* Demangled: vtable for VTService::VTAVSync */
extern void* _ZTVN9VTService8VTAVSyncE;

/* Symbol: _ZN9VTService17g_pthreadDownlinkE */
/* Demangled: VTService::g_pthreadDownlink */
extern void* _ZN9VTService17g_pthreadDownlinkE;

/* Symbol: _ZN9VTService12g_lockAVsyncE */
/* Demangled: VTService::g_lockAVsync */
extern void* _ZN9VTService12g_lockAVsyncE;

/* Symbol: _ZN9VTService8VTAVSyncD2Ev */
/* Demangled: VTService::VTAVSync::~VTAVSync() */
int _ZN9VTService8VTAVSyncD2Ev(void);

/* Symbol: _ZN9VTService8VTAVSyncD0Ev */
/* Demangled: VTService::VTAVSync::~VTAVSync() */
int _ZN9VTService8VTAVSyncD0Ev(void);

/* Symbol: _ZN9VTService8VTAVSyncC1Ev */
/* Demangled: VTService::VTAVSync::VTAVSync() */
int _ZN9VTService8VTAVSyncC1Ev(void);

/* Symbol: _ZN9VTService8VTAVSync7checkFDEv */
/* Demangled: VTService::VTAVSync::checkFD() */
int _ZN9VTService8VTAVSync7checkFDEv(void);

/* Symbol: _ZN9VTService8VTAVSync6avInitEv */
/* Demangled: VTService::VTAVSync::avInit() */
int _ZN9VTService8VTAVSync6avInitEv(void);

/* Symbol: _ZN9VTService8VTAVSync7closeFDEv */
/* Demangled: VTService::VTAVSync::closeFD() */
int _ZN9VTService8VTAVSync7closeFDEv(void);

/* Symbol: _ZN9VTService8VTAVSync14HandleDLAVSyncEPh */
/* Demangled: VTService::VTAVSync::HandleDLAVSync(unsigned char*) */
int _ZN9VTService8VTAVSync14HandleDLAVSyncEPh(void);

/* Symbol: _ZN9VTService8VTAVSync6openFDEv */
/* Demangled: VTService::VTAVSync::openFD() */
int _ZN9VTService8VTAVSync6openFDEv(void);

/* Symbol: _ZN9VTService30g_bAVSyncDownlinkThreadRunningE */
/* Demangled: VTService::g_bAVSyncDownlinkThreadRunning */
extern void* _ZN9VTService30g_bAVSyncDownlinkThreadRunningE;

/* Symbol: _ZN9VTService8VTAVSync6initFDEv */
/* Demangled: VTService::VTAVSync::initFD() */
int _ZN9VTService8VTAVSync6initFDEv(void);

/* Symbol: _ZN9VTService8VTAVSync7writeFDEiPvi */
/* Demangled: VTService::VTAVSync::writeFD(int, void*, int) */
int _ZN9VTService8VTAVSync7writeFDEiPvi(void);

/* Symbol: _ZN9VTService8VTAVSyncC2Ev */
/* Demangled: VTService::VTAVSync::VTAVSync() */
int _ZN9VTService8VTAVSyncC2Ev(void);

/* Symbol: _ZN9VTService8VTAVSync3mAVE */
/* Demangled: VTService::VTAVSync::mAV */
extern void* _ZN9VTService8VTAVSync3mAVE;

/* Symbol: _ZN9VTService9g_fd_nameE */
/* Demangled: VTService::g_fd_name */
extern void* _ZN9VTService9g_fd_nameE;

/* Symbol: _ZN9VTService8VTAVSync14downlinkThreadEPv */
/* Demangled: VTService::VTAVSync::downlinkThread(void*) */
int _ZN9VTService8VTAVSync14downlinkThreadEPv(void);

/* Symbol: _ZN9VTService11g_fd_avsyncE */
/* Demangled: VTService::g_fd_avsync */
extern void* _ZN9VTService11g_fd_avsyncE;

/* Symbol: _ZN9VTService8VTAVSyncD1Ev */
/* Demangled: VTService::VTAVSync::~VTAVSync() */
int _ZN9VTService8VTAVSyncD1Ev(void);

/* Symbol: _ZN9VTService14g_thin_md_modeE */
/* Demangled: VTService::g_thin_md_mode */
extern void* _ZN9VTService14g_thin_md_modeE;

/* Symbol: _ZN9VTService10g_poll_cntE */
/* Demangled: VTService::g_poll_cnt */
extern void* _ZN9VTService10g_poll_cntE;

/* Symbol: _ZN9VTService10g_poll_fdsE */
/* Demangled: VTService::g_poll_fds */
extern void* _ZN9VTService10g_poll_fdsE;

/* Symbol: _ZN9VTService8VTAVSync19getDLAudioTimeStampEPl */
/* Demangled: VTService::VTAVSync::getDLAudioTimeStamp(long*) */
int _ZN9VTService8VTAVSync19getDLAudioTimeStampEPl(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVT_AVSYNC_H */
