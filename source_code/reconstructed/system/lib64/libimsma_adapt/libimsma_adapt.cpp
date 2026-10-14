/*
 * Reverse-Engineered Source for: libimsma_adapt.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libimsma_adapt"

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
#include "libimsma_adapt.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: RxAdaptationInfo::CheckAndTriggerTMMBR(bool, unsigned int, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo20CheckAndTriggerTMMBREbjt(void) {
    ALOGD("_ZN16RxAdaptationInfo20CheckAndTriggerTMMBREbjt() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::GetdebugInfo(bool, int*, unsigned int, unsigned int, RTPDebugNotifyInfo*, int*, bool*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo12GetdebugInfoEbPijjP18RTPDebugNotifyInfoS0_Pbi(void) {
    ALOGD("_ZN16RxAdaptationInfo12GetdebugInfoEbPijjP18RTPDebugNotifyInfoS0_Pbi() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::TxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfoC2Ev(void) {
    ALOGD("_ZN16TxAdaptationInfoC2Ev() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::checkAllowIncrEncBR(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo19checkAllowIncrEncBREj(void) {
    ALOGD("_ZN16TxAdaptationInfo19checkAllowIncrEncBREj() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::~TxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfoD1Ev(void) {
    ALOGD("_ZN16TxAdaptationInfoD1Ev() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::RxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfoC1Ev(void) {
    ALOGD("_ZN16RxAdaptationInfoC1Ev() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::processSenderInfo(unsigned char*, unsigned long*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo17processSenderInfoEPhPmPj(void) {
    ALOGD("_ZN16RxAdaptationInfo17processSenderInfoEPhPmPj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::checkAllowIncrEncBR() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo19checkAllowIncrEncBREv(void) {
    ALOGD("_ZN16RxAdaptationInfo19checkAllowIncrEncBREv() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::estimateNewBitRate(bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo18estimateNewBitRateEPb(void) {
    ALOGD("_ZN16RxAdaptationInfo18estimateNewBitRateEPb() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::getFractionLost(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo15getFractionLostEj(void) {
    ALOGD("_ZN16RxAdaptationInfo15getFractionLostEj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::processTMMBN(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo12processTMMBNEPh(void) {
    ALOGD("_ZN16RxAdaptationInfo12processTMMBNEPh() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::resetParamOnstop() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo16resetParamOnstopEv(void) {
    ALOGD("_ZN16RxAdaptationInfo16resetParamOnstopEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::notifyAdjustEncBR(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo17notifyAdjustEncBREjb(void) {
    ALOGD("_ZN16TxAdaptationInfo17notifyAdjustEncBREjb() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::TxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfoC1Ev(void) {
    ALOGD("_ZN16TxAdaptationInfoC1Ev() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::updateLastSecBitrate() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo20updateLastSecBitrateEv(void) {
    ALOGD("_ZN16RxAdaptationInfo20updateLastSecBitrateEv() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::getCumulativeLost(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo17getCumulativeLostEjj(void) {
    ALOGD("_ZN16RxAdaptationInfo17getCumulativeLostEjj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::tuneNetBitRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo14tuneNetBitRateEj(void) {
    ALOGD("_ZN16RxAdaptationInfo14tuneNetBitRateEj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::pollingCheckTSDelay() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo19pollingCheckTSDelayEv(void) {
    ALOGD("_ZN16RxAdaptationInfo19pollingCheckTSDelayEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::processReportBlock(unsigned char*, int, signalInfo, unsigned int*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo18processReportBlockEPhi10signalInfoPjPb(void) {
    ALOGD("_ZN16TxAdaptationInfo18processReportBlockEPhi10signalInfoPjPb() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::updateStatisticInfo(long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo19updateStatisticInfoElmm(void) {
    ALOGD("_ZN16TxAdaptationInfo19updateStatisticInfoElmm() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::updateInfo(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo10updateInfoEjjj(void) {
    ALOGD("_ZN16RxAdaptationInfo10updateInfoEjjj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::clearTSDelayInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo16clearTSDelayInfoEv(void) {
    ALOGD("_ZN16RxAdaptationInfo16clearTSDelayInfoEv() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::addReceiverReportBlock(unsigned int, unsigned char*, unsigned int, unsigned int, unsigned int, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo22addReceiverReportBlockEjPhjjjPb(void) {
    ALOGD("_ZN16RxAdaptationInfo22addReceiverReportBlockEjPhjjjPb() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::initAdaptationParams() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo20initAdaptationParamsEv(void) {
    ALOGD("_ZN16TxAdaptationInfo20initAdaptationParamsEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::riseBitrate(unsigned int*, signalInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo11riseBitrateEPj10signalInfo(void) {
    ALOGD("_ZN16TxAdaptationInfo11riseBitrateEPj10signalInfo() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::tuneNetBitRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo14tuneNetBitRateEj(void) {
    ALOGD("_ZN16TxAdaptationInfo14tuneNetBitRateEj() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::updateEncBitRate(long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo16updateEncBitRateElj(void) {
    ALOGD("_ZN16TxAdaptationInfo16updateEncBitRateElj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::~RxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfoD2Ev(void) {
    ALOGD("_ZN16RxAdaptationInfoD2Ev() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::GetMaxBR() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo8GetMaxBREv(void) {
    ALOGD("_ZN16RxAdaptationInfo8GetMaxBREv() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::peerPausedSendStream() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo20peerPausedSendStreamEv(void) {
    ALOGD("_ZN16RxAdaptationInfo20peerPausedSendStreamEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::addSenderInfo(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo13addSenderInfoEPh(void) {
    ALOGD("_ZN16TxAdaptationInfo13addSenderInfoEPh() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::initAdaptationParams() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo20initAdaptationParamsEv(void) {
    ALOGD("_ZN16RxAdaptationInfo20initAdaptationParamsEv() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::calculateArrivalJitter(unsigned int, long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo22calculateArrivalJitterEjlj(void) {
    ALOGD("_ZN16RxAdaptationInfo22calculateArrivalJitterEjlj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::resetParamOnstart() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo17resetParamOnstartEv(void) {
    ALOGD("_ZN16RxAdaptationInfo17resetParamOnstartEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::resetFirParam() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo13resetFirParamEv(void) {
    ALOGD("_ZN16TxAdaptationInfo13resetFirParamEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::processTMMBR(unsigned char*, unsigned int*, unsigned int, signalInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo12processTMMBREPhPjj10signalInfo(void) {
    ALOGD("_ZN16TxAdaptationInfo12processTMMBREPhPjj10signalInfo() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::~TxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfoD2Ev(void) {
    ALOGD("_ZN16TxAdaptationInfoD2Ev() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::processGenericNACK(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo18processGenericNACKEPhj(void) {
    ALOGD("_ZN16TxAdaptationInfo18processGenericNACKEPhj() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::RxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfoC2Ev(void) {
    ALOGD("_ZN16RxAdaptationInfoC2Ev() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::fillTMMBRbuffer(unsigned char*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo15fillTMMBRbufferEPhPb(void) {
    ALOGD("_ZN16RxAdaptationInfo15fillTMMBRbufferEPhPb() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::~RxAdaptationInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfoD1Ev(void) {
    ALOGD("_ZN16RxAdaptationInfoD1Ev() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::updateSendingRate() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo17updateSendingRateEv(void) {
    ALOGD("_ZN16TxAdaptationInfo17updateSendingRateEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::processFIR(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo10processFIREh(void) {
    ALOGD("_ZN16TxAdaptationInfo10processFIREh() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::updateStatisticInfo(int, int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo19updateStatisticInfoEiijji(void) {
    ALOGD("_ZN16RxAdaptationInfo19updateStatisticInfoEiijji() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::EstimateTSDelay(long) */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo15EstimateTSDelayEl(void) {
    ALOGD("_ZN16RxAdaptationInfo15EstimateTSDelayEl() called");
    return 0;
}

/* Demangled: RxAdaptationInfo::peerResumedSendStream() */
extern "C" __attribute__((visibility("default"))) int _ZN16RxAdaptationInfo21peerResumedSendStreamEv(void) {
    ALOGD("_ZN16RxAdaptationInfo21peerResumedSendStreamEv() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::checkFallBack(unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo13checkFallBackEPjj(void) {
    ALOGD("_ZN16TxAdaptationInfo13checkFallBackEPjj() called");
    return 0;
}

/* Demangled: TxAdaptationInfo::resetOnStop() */
extern "C" __attribute__((visibility("default"))) int _ZN16TxAdaptationInfo11resetOnStopEv(void) {
    ALOGD("_ZN16TxAdaptationInfo11resetOnStopEv() called");
    return 0;
}
