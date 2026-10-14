/*
 * Reverse-Engineered ABI Specification for: libimsma_adapt.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libimsma_adapt.so
 */

#ifndef BEGONIA_RE_LIBIMSMA_ADAPT_H
#define BEGONIA_RE_LIBIMSMA_ADAPT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN16RxAdaptationInfo20CheckAndTriggerTMMBREbjt */
/* Demangled: RxAdaptationInfo::CheckAndTriggerTMMBR(bool, unsigned int, unsigned short) */
int _ZN16RxAdaptationInfo20CheckAndTriggerTMMBREbjt(void);

/* Symbol: _ZN16RxAdaptationInfo12GetdebugInfoEbPijjP18RTPDebugNotifyInfoS0_Pbi */
/* Demangled: RxAdaptationInfo::GetdebugInfo(bool, int*, unsigned int, unsigned int, RTPDebugNotifyInfo*, int*, bool*, int) */
int _ZN16RxAdaptationInfo12GetdebugInfoEbPijjP18RTPDebugNotifyInfoS0_Pbi(void);

/* Symbol: _ZN16TxAdaptationInfoC2Ev */
/* Demangled: TxAdaptationInfo::TxAdaptationInfo() */
int _ZN16TxAdaptationInfoC2Ev(void);

/* Symbol: _ZN16TxAdaptationInfo19checkAllowIncrEncBREj */
/* Demangled: TxAdaptationInfo::checkAllowIncrEncBR(unsigned int) */
int _ZN16TxAdaptationInfo19checkAllowIncrEncBREj(void);

/* Symbol: _ZN16TxAdaptationInfoD1Ev */
/* Demangled: TxAdaptationInfo::~TxAdaptationInfo() */
int _ZN16TxAdaptationInfoD1Ev(void);

/* Symbol: _ZN16RxAdaptationInfoC1Ev */
/* Demangled: RxAdaptationInfo::RxAdaptationInfo() */
int _ZN16RxAdaptationInfoC1Ev(void);

/* Symbol: _ZN16RxAdaptationInfo17processSenderInfoEPhPmPj */
/* Demangled: RxAdaptationInfo::processSenderInfo(unsigned char*, unsigned long*, unsigned int*) */
int _ZN16RxAdaptationInfo17processSenderInfoEPhPmPj(void);

/* Symbol: _ZN16RxAdaptationInfo19checkAllowIncrEncBREv */
/* Demangled: RxAdaptationInfo::checkAllowIncrEncBR() */
int _ZN16RxAdaptationInfo19checkAllowIncrEncBREv(void);

/* Symbol: _ZN16RxAdaptationInfo18estimateNewBitRateEPb */
/* Demangled: RxAdaptationInfo::estimateNewBitRate(bool*) */
int _ZN16RxAdaptationInfo18estimateNewBitRateEPb(void);

/* Symbol: _ZN16RxAdaptationInfo15getFractionLostEj */
/* Demangled: RxAdaptationInfo::getFractionLost(unsigned int) */
int _ZN16RxAdaptationInfo15getFractionLostEj(void);

/* Symbol: _ZN16RxAdaptationInfo12processTMMBNEPh */
/* Demangled: RxAdaptationInfo::processTMMBN(unsigned char*) */
int _ZN16RxAdaptationInfo12processTMMBNEPh(void);

/* Symbol: _ZN16RxAdaptationInfo16resetParamOnstopEv */
/* Demangled: RxAdaptationInfo::resetParamOnstop() */
int _ZN16RxAdaptationInfo16resetParamOnstopEv(void);

/* Symbol: _ZN16TxAdaptationInfo17notifyAdjustEncBREjb */
/* Demangled: TxAdaptationInfo::notifyAdjustEncBR(unsigned int, bool) */
int _ZN16TxAdaptationInfo17notifyAdjustEncBREjb(void);

/* Symbol: _ZN16TxAdaptationInfoC1Ev */
/* Demangled: TxAdaptationInfo::TxAdaptationInfo() */
int _ZN16TxAdaptationInfoC1Ev(void);

/* Symbol: _ZN16RxAdaptationInfo20updateLastSecBitrateEv */
/* Demangled: RxAdaptationInfo::updateLastSecBitrate() */
int _ZN16RxAdaptationInfo20updateLastSecBitrateEv(void);

/* Symbol: _ZN16RxAdaptationInfo17getCumulativeLostEjj */
/* Demangled: RxAdaptationInfo::getCumulativeLost(unsigned int, unsigned int) */
int _ZN16RxAdaptationInfo17getCumulativeLostEjj(void);

/* Symbol: _ZN16RxAdaptationInfo14tuneNetBitRateEj */
/* Demangled: RxAdaptationInfo::tuneNetBitRate(unsigned int) */
int _ZN16RxAdaptationInfo14tuneNetBitRateEj(void);

/* Symbol: _ZN16RxAdaptationInfo19pollingCheckTSDelayEv */
/* Demangled: RxAdaptationInfo::pollingCheckTSDelay() */
int _ZN16RxAdaptationInfo19pollingCheckTSDelayEv(void);

/* Symbol: _ZN16TxAdaptationInfo18processReportBlockEPhi10signalInfoPjPb */
/* Demangled: TxAdaptationInfo::processReportBlock(unsigned char*, int, signalInfo, unsigned int*, bool*) */
int _ZN16TxAdaptationInfo18processReportBlockEPhi10signalInfoPjPb(void);

/* Symbol: _ZN16TxAdaptationInfo19updateStatisticInfoElmm */
/* Demangled: TxAdaptationInfo::updateStatisticInfo(long, unsigned long, unsigned long) */
int _ZN16TxAdaptationInfo19updateStatisticInfoElmm(void);

/* Symbol: _ZN16RxAdaptationInfo10updateInfoEjjj */
/* Demangled: RxAdaptationInfo::updateInfo(unsigned int, unsigned int, unsigned int) */
int _ZN16RxAdaptationInfo10updateInfoEjjj(void);

/* Symbol: _ZN16RxAdaptationInfo16clearTSDelayInfoEv */
/* Demangled: RxAdaptationInfo::clearTSDelayInfo() */
int _ZN16RxAdaptationInfo16clearTSDelayInfoEv(void);

/* Symbol: _ZN16RxAdaptationInfo22addReceiverReportBlockEjPhjjjPb */
/* Demangled: RxAdaptationInfo::addReceiverReportBlock(unsigned int, unsigned char*, unsigned int, unsigned int, unsigned int, bool*) */
int _ZN16RxAdaptationInfo22addReceiverReportBlockEjPhjjjPb(void);

/* Symbol: _ZN16TxAdaptationInfo20initAdaptationParamsEv */
/* Demangled: TxAdaptationInfo::initAdaptationParams() */
int _ZN16TxAdaptationInfo20initAdaptationParamsEv(void);

/* Symbol: _ZN16TxAdaptationInfo11riseBitrateEPj10signalInfo */
/* Demangled: TxAdaptationInfo::riseBitrate(unsigned int*, signalInfo) */
int _ZN16TxAdaptationInfo11riseBitrateEPj10signalInfo(void);

/* Symbol: _ZN16TxAdaptationInfo14tuneNetBitRateEj */
/* Demangled: TxAdaptationInfo::tuneNetBitRate(unsigned int) */
int _ZN16TxAdaptationInfo14tuneNetBitRateEj(void);

/* Symbol: _ZN16TxAdaptationInfo16updateEncBitRateElj */
/* Demangled: TxAdaptationInfo::updateEncBitRate(long, unsigned int) */
int _ZN16TxAdaptationInfo16updateEncBitRateElj(void);

/* Symbol: _ZN16RxAdaptationInfoD2Ev */
/* Demangled: RxAdaptationInfo::~RxAdaptationInfo() */
int _ZN16RxAdaptationInfoD2Ev(void);

/* Symbol: _ZN16RxAdaptationInfo8GetMaxBREv */
/* Demangled: RxAdaptationInfo::GetMaxBR() */
int _ZN16RxAdaptationInfo8GetMaxBREv(void);

/* Symbol: _ZN16RxAdaptationInfo20peerPausedSendStreamEv */
/* Demangled: RxAdaptationInfo::peerPausedSendStream() */
int _ZN16RxAdaptationInfo20peerPausedSendStreamEv(void);

/* Symbol: _ZN16TxAdaptationInfo13addSenderInfoEPh */
/* Demangled: TxAdaptationInfo::addSenderInfo(unsigned char*) */
int _ZN16TxAdaptationInfo13addSenderInfoEPh(void);

/* Symbol: _ZN16RxAdaptationInfo20initAdaptationParamsEv */
/* Demangled: RxAdaptationInfo::initAdaptationParams() */
int _ZN16RxAdaptationInfo20initAdaptationParamsEv(void);

/* Symbol: _ZN16RxAdaptationInfo22calculateArrivalJitterEjlj */
/* Demangled: RxAdaptationInfo::calculateArrivalJitter(unsigned int, long, unsigned int) */
int _ZN16RxAdaptationInfo22calculateArrivalJitterEjlj(void);

/* Symbol: _ZN16RxAdaptationInfo17resetParamOnstartEv */
/* Demangled: RxAdaptationInfo::resetParamOnstart() */
int _ZN16RxAdaptationInfo17resetParamOnstartEv(void);

/* Symbol: _ZN16TxAdaptationInfo13resetFirParamEv */
/* Demangled: TxAdaptationInfo::resetFirParam() */
int _ZN16TxAdaptationInfo13resetFirParamEv(void);

/* Symbol: _ZN16TxAdaptationInfo12processTMMBREPhPjj10signalInfo */
/* Demangled: TxAdaptationInfo::processTMMBR(unsigned char*, unsigned int*, unsigned int, signalInfo) */
int _ZN16TxAdaptationInfo12processTMMBREPhPjj10signalInfo(void);

/* Symbol: _ZN16TxAdaptationInfoD2Ev */
/* Demangled: TxAdaptationInfo::~TxAdaptationInfo() */
int _ZN16TxAdaptationInfoD2Ev(void);

/* Symbol: _ZN16TxAdaptationInfo18processGenericNACKEPhj */
/* Demangled: TxAdaptationInfo::processGenericNACK(unsigned char*, unsigned int) */
int _ZN16TxAdaptationInfo18processGenericNACKEPhj(void);

/* Symbol: _ZN16RxAdaptationInfoC2Ev */
/* Demangled: RxAdaptationInfo::RxAdaptationInfo() */
int _ZN16RxAdaptationInfoC2Ev(void);

/* Symbol: _ZN16RxAdaptationInfo15fillTMMBRbufferEPhPb */
/* Demangled: RxAdaptationInfo::fillTMMBRbuffer(unsigned char*, bool*) */
int _ZN16RxAdaptationInfo15fillTMMBRbufferEPhPb(void);

/* Symbol: _ZN16RxAdaptationInfoD1Ev */
/* Demangled: RxAdaptationInfo::~RxAdaptationInfo() */
int _ZN16RxAdaptationInfoD1Ev(void);

/* Symbol: _ZN16TxAdaptationInfo17updateSendingRateEv */
/* Demangled: TxAdaptationInfo::updateSendingRate() */
int _ZN16TxAdaptationInfo17updateSendingRateEv(void);

/* Symbol: _ZN16TxAdaptationInfo10processFIREh */
/* Demangled: TxAdaptationInfo::processFIR(unsigned char) */
int _ZN16TxAdaptationInfo10processFIREh(void);

/* Symbol: _ZN16RxAdaptationInfo19updateStatisticInfoEiijji */
/* Demangled: RxAdaptationInfo::updateStatisticInfo(int, int, unsigned int, unsigned int, int) */
int _ZN16RxAdaptationInfo19updateStatisticInfoEiijji(void);

/* Symbol: _ZN16RxAdaptationInfo15EstimateTSDelayEl */
/* Demangled: RxAdaptationInfo::EstimateTSDelay(long) */
int _ZN16RxAdaptationInfo15EstimateTSDelayEl(void);

/* Symbol: _ZN16RxAdaptationInfo21peerResumedSendStreamEv */
/* Demangled: RxAdaptationInfo::peerResumedSendStream() */
int _ZN16RxAdaptationInfo21peerResumedSendStreamEv(void);

/* Symbol: _ZN16TxAdaptationInfo13checkFallBackEPjj */
/* Demangled: TxAdaptationInfo::checkFallBack(unsigned int*, unsigned int) */
int _ZN16TxAdaptationInfo13checkFallBackEPjj(void);

/* Symbol: _ZN16TxAdaptationInfo11resetOnStopEv */
/* Demangled: TxAdaptationInfo::resetOnStop() */
int _ZN16TxAdaptationInfo11resetOnStopEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMSMA_ADAPT_H */
