/*
 * Reverse-Engineered Source for: librilfusion.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "librilfusion"

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
#include "librilfusion.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VNDBINDER "/dev/vndbinder"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_VNDBINDER, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VNDBINDER, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VNDBINDER, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: radio::getClirResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15getClirResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15getClirResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: decodeInactiveTimer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19decodeInactiveTimerj(void) {
    ALOGD("_Z19decodeInactiveTimerj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::enableSCGfailure(int, bool, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16enableSCGfailureEibiii(void) {
    ALOGD("_ZN14MtkRadioExImpl16enableSCGfailureEibiii() called");
    return 0;
}

/* Demangled: RadioImpl::setTTYMode(int, android::hardware::radio::V1_0::TtyMode) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE(void) {
    ALOGD("_ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE() called");
    return 0;
}

/* Demangled: dispatchVoid(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12dispatchVoidiii(void) {
    ALOGD("_Z12dispatchVoidiii() called");
    return 0;
}

/* Demangled: RadioImpl::getCellInfoList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15getCellInfoListEi(void) {
    ALOGD("_ZN9RadioImpl15getCellInfoListEi() called");
    return 0;
}

/* Demangled: RadioImpl::startNetworkScan(int, android::hardware::radio::V1_1::NetworkScanRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE(void) {
    ALOGD("_ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal() called");
    return 0;
}

/* Demangled: rilSocketIdToString */
extern "C" __attribute__((visibility("default"))) int rilSocketIdToString(void) {
    ALOGD("rilSocketIdToString() called");
    return 0;
}

/* Demangled: mtkRadioEx::cfgB1offsetResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19cfgB1offsetResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19cfgB1offsetResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::controlCall(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11controlCallEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl11controlCallEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::dataConnectionDetach(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20dataConnectionDetachEii(void) {
    ALOGD("_ZN14MtkRadioExImpl20dataConnectionDetachEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setVoiceDomainPreference(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24setVoiceDomainPreferenceEii(void) {
    ALOGD("_ZN14MtkRadioExImpl24setVoiceDomainPreferenceEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::callInfoIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21callInfoIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21callInfoIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendWifiIpAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25sendWifiIpAddressResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25sendWifiIpAddressResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::enableDsdaIndicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28enableDsdaIndicationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28enableDsdaIndicationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: ril_event_del(ril_event*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_event_delP9ril_event(void) {
    ALOGD("_Z13ril_event_delP9ril_event() called");
    return 0;
}

/* Demangled: convertRilRadioCapabilityToHal(void const*, unsigned long, android::hardware::radio::V1_0::RadioCapability&) */
extern "C" __attribute__((visibility("default"))) int _Z30convertRilRadioCapabilityToHalPKvmRN7android8hardware5radio4V1_015RadioCapabilityE(void) {
    ALOGD("_Z30convertRilRadioCapabilityToHalPKvmRN7android8hardware5radio4V1_015RadioCapabilityE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_2::ISap-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android8hardware5radio4V1_24ISapE = NULL;

/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::setEccNumResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17setEccNumResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17setEccNumResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getClipResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15getClipResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15getClipResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::selectFemtocell(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15selectFemtocellEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN14MtkRadioExImpl15selectFemtocellEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: radio::getModemStackStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27getModemStackStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27getModemStackStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendAtciRequest(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15sendAtciRequestEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN14MtkRadioExImpl15sendAtciRequestEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsRtpInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13imsRtpInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13imsRtpInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getSignalStrengthResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25getSignalStrengthResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25getSignalStrengthResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilCellInfoListToHal_1_5(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_5::CellInfo>&) */
extern "C" __attribute__((visibility("default"))) int _Z31convertRilCellInfoListToHal_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_58CellInfoEEE(void) {
    ALOGD("_Z31convertRilCellInfoListToHal_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_58CellInfoEEE() called");
    return 0;
}

/* Demangled: RadioImpl::setIndicationFilter_1_5(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23setIndicationFilter_1_5Eii(void) {
    ALOGD("_ZN9RadioImpl23setIndicationFilter_1_5Eii() called");
    return 0;
}

/* Demangled: mtkRadioEx::rttModifyRequestResponseResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32rttModifyRequestResponseResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32rttModifyRequestResponseResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioConfigImpl::setPreferredDataModem(int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl21setPreferredDataModemEih(void) {
    ALOGD("_ZN15RadioConfigImpl21setPreferredDataModemEih() called");
    return 0;
}

/* Demangled: mtkRadioEx::onNattKeepAliveChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22onNattKeepAliveChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22onNattKeepAliveChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWifiSignalLevelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26setWifiSignalLevelResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26setWifiSignalLevelResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::onBarringInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16onBarringInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio16onBarringInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilCdmaSignalInfoRecordToHal(RIL_CDMA_SignalInfoRecord*, android::hardware::radio::V1_0::CdmaSignalInfoRecord&) */
extern "C" __attribute__((visibility("default"))) int _Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE(void) {
    ALOGD("_Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readPhoneBookEntryExt(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21readPhoneBookEntryExtEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl21readPhoneBookEntryExtEiii() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPuk2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::reportSmsMemoryStatus(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21reportSmsMemoryStatusEib(void) {
    ALOGD("_ZN9RadioImpl21reportSmsMemoryStatusEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::volteSettingInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15volteSettingIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15volteSettingIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWifiIpAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24setWifiIpAddressResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24setWifiIpAddressResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: failCauseToString */
extern "C" __attribute__((visibility("default"))) int failCauseToString(void) {
    ALOGD("failCauseToString() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendSarIndicator(int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16sendSarIndicatorEiiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl16sendSarIndicatorEiiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setColrResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15setColrResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15setColrResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendBurstDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21sendBurstDtmfResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21sendBurstDtmfResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::separateConnectionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26separateConnectionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26separateConnectionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSimPower(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11setSimPowerEii(void) {
    ALOGD("_ZN14MtkRadioExImpl11setSimPowerEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::deleteUPBEntry(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14deleteUPBEntryEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl14deleteUPBEntryEiiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::writePhoneBookEntryExt(int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryExt const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22writePhoneBookEntryExtEiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE(void) {
    ALOGD("_ZN14MtkRadioExImpl22writePhoneBookEntryExtEiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE() called");
    return 0;
}

/* Demangled: RadioImpl::getMute(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7getMuteEi(void) {
    ALOGD("_ZN9RadioImpl7getMuteEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::getDsdaStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21getDsdaStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21getDsdaStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::currentSignalStrengthInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24currentSignalStrengthIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio24currentSignalStrengthIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::sOnRequestComplete(void*, RIL_Errno, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_m(void) {
    ALOGD("_ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_m() called");
    return 0;
}

/* Demangled: convertRilSignalStrengthToHal_1_4(void const*, unsigned long, android::hardware::radio::V1_4::SignalStrength&) */
extern "C" __attribute__((visibility("default"))) int _Z33convertRilSignalStrengthToHal_1_4PKvmRN7android8hardware5radio4V1_414SignalStrengthE(void) {
    ALOGD("_Z33convertRilSignalStrengthToHal_1_4PKvmRN7android8hardware5radio4V1_414SignalStrengthE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setModemImsCfg(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14setModemImsCfgEiRKN7android8hardware11hidl_stringES4_i(void) {
    ALOGD("_ZN14MtkRadioExImpl14setModemImsCfgEiRKN7android8hardware11hidl_stringES4_i() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendUssi(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl8sendUssiEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl8sendUssiEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::getPreferredNetworkType(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getPreferredNetworkTypeEi(void) {
    ALOGD("_ZN9RadioImpl23getPreferredNetworkTypeEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal() called");
    return 0;
}

/* Demangled: radio::cancelPendingUssdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25cancelPendingUssdResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25cancelPendingUssdResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: SapImpl::setCallback(android::sp<android::hardware::radio::V1_0::ISapCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE(void) {
    ALOGD("_ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal_abort(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal_abort() called");
    return 0;
}

/* Demangled: radio::cdmaOtaProvisionStatusInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25cdmaOtaProvisionStatusIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25cdmaOtaProvisionStatusIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: s_vendorFunctions */
extern "C" __attribute__((visibility("default"))) void* s_vendorFunctions = NULL;

/* Demangled: radio::sendEnvelopeWithStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30sendEnvelopeWithStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio30sendEnvelopeWithStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWifiPingResult(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setWifiPingResultEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl17setWifiPingResultEiiii() called");
    return 0;
}

/* Demangled: RadioImpl::exitEmergencyCallbackMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25exitEmergencyCallbackModeEi(void) {
    ALOGD("_ZN9RadioImpl25exitEmergencyCallbackModeEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDataInfoNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20imsDataInfoNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20imsDataInfoNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::smlSlotLockInfoChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25smlSlotLockInfoChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25smlSlotLockInfoChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: android::onCommandDisconnect(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19onCommandDisconnectEjj(void) {
    ALOGD("_ZN7android19onCommandDisconnectEjj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::smartRatSwitch(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14smartRatSwitchEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl14smartRatSwitchEiii() called");
    return 0;
}

/* Demangled: RadioImpl::getTTYMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10getTTYModeEi(void) {
    ALOGD("_ZN9RadioImpl10getTTYModeEi() called");
    return 0;
}

/* Demangled: pb_encode_fixed32 */
extern "C" __attribute__((visibility("default"))) int pb_encode_fixed32(void) {
    ALOGD("pb_encode_fixed32() called");
    return 0;
}

/* Demangled: mtkRadioEx::onMccMncChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18onMccMncChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18onMccMncChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setEccMode(int, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl10setEccModeEiRKN7android8hardware11hidl_stringEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl10setEccModeEiRKN7android8hardware11hidl_stringEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setRoamingEnable(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16setRoamingEnableEiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN14MtkRadioExImpl16setRoamingEnableEiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setColpResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15setColpResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15setColpResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onRemoveRestrictEutran(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22onRemoveRestrictEutranEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22onRemoveRestrictEutranEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::dataConnectionAttachResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28dataConnectionAttachResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28dataConnectionAttachResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::rilConnectedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15rilConnectedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15rilConnectedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::enableDsdaIndication(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20enableDsdaIndicationEib(void) {
    ALOGD("_ZN14MtkRadioExImpl20enableDsdaIndicationEib() called");
    return 0;
}

/* Demangled: RadioImpl::setBarringPassword(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::setCarrierInfoForImsiEncryption(int, android::hardware::radio::V1_1::ImsiEncryptionInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE(void) {
    ALOGD("_ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE() called");
    return 0;
}

/* Exported Object: s_radioConfigFunctions */
extern "C" __attribute__((visibility("default"))) void* s_radioConfigFunctions = NULL;

/* Demangled: responseLceStatusInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void) {
    ALOGD("_Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: radioConfigService */
extern "C" __attribute__((visibility("default"))) void* radioConfigService = NULL;

/* Demangled: mtkRadioEx::onDsdaChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16onDsdaChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16onDsdaChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertCallsSpeechCodecToHidlAudioQuality(int) */
extern "C" __attribute__((visibility("default"))) int _Z41convertCallsSpeechCodecToHidlAudioQualityi(void) {
    ALOGD("_Z41convertCallsSpeechCodecToHidlAudioQualityi() called");
    return 0;
}

/* Demangled: mtkRadioEx::smsReadyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx11smsReadyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx11smsReadyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getXcapStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21getXcapStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21getXcapStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setPhoneBookMemStorageResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30setPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30setPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::onRegistrationFailedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23onRegistrationFailedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23onRegistrationFailedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::queryPhbStorageInfo(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl19queryPhbStorageInfoEii(void) {
    ALOGD("_ZN14MtkRadioExImpl19queryPhbStorageInfoEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getImsCfgResourceCapValue(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl25getImsCfgResourceCapValueEii(void) {
    ALOGD("_ZN14MtkRadioExImpl25getImsCfgResourceCapValueEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWifiPdnOOS(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12onWifiPdnOOSEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12onWifiPdnOOSEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertCharPtrToVecHidlString(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z29convertCharPtrToVecHidlStringPKc(void) {
    ALOGD("_Z29convertCharPtrToVecHidlStringPKc() called");
    return 0;
}

/* Exported Object: radioService */
extern "C" __attribute__((visibility("default"))) void* radioService = NULL;

/* Demangled: resetWakelock */
extern "C" __attribute__((visibility("default"))) int resetWakelock(void) {
    ALOGD("resetWakelock() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::querySsacStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15querySsacStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl15querySsacStatusEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setTxPowerStatus(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16setTxPowerStatusEii(void) {
    ALOGD("_ZN14MtkRadioExImpl16setTxPowerStatusEii() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: mtkRadioEx::getDeactivateNrScgCommunicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx39getDeactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx39getDeactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCallForwardResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setCallForwardResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22setCallForwardResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: responseInt(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void) {
    ALOGD("_Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::isTidInRLock(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio12isTidInRLockEjl(void) {
    ALOGD("_ZN5radio12isTidInRLockEjl() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWfcPdnError(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13onWfcPdnErrorEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13onWfcPdnErrorEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setIgnoreSameNumberIntervalResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx35setIgnoreSameNumberIntervalResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx35setIgnoreSameNumberIntervalResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getSmscAddress(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14getSmscAddressEi(void) {
    ALOGD("_ZN9RadioImpl14getSmscAddressEi() called");
    return 0;
}

/* Demangled: radio::rejectCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18rejectCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18rejectCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setLocationUpdatesResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setLocationUpdatesResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26setLocationUpdatesResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendRequestRaw(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN14MtkRadioExImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::responseAcknowledgementMtk() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl26responseAcknowledgementMtkEv(void) {
    ALOGD("_ZN14MtkRadioExImpl26responseAcknowledgementMtkEv() called");
    return 0;
}

/* Demangled: RadioImpl::setFacilityLockForApp(int, android::hardware::hidl_string const&, bool, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_(void) {
    ALOGD("_ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_() called");
    return 0;
}

/* Demangled: mtkRadioEx::smartRatSwitchInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17smartRatSwitchIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17smartRatSwitchIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::acknowledgeRequest(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18acknowledgeRequestEji(void) {
    ALOGD("_ZN5radio18acknowledgeRequestEji() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendVsimNotification(int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20sendVsimNotificationEijjj(void) {
    ALOGD("_ZN14MtkRadioExImpl20sendVsimNotificationEijjj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsSmartRatSwitch(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISmartRatSwitchRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISmartRatSwitchRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl34setResponseFunctionsSmartRatSwitchERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_028ISmartRatSwitchRadioResponseEEERKNS1_INS6_30ISmartRatSwitchRadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl34setResponseFunctionsSmartRatSwitchERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_028ISmartRatSwitchRadioResponseEEERKNS1_INS6_30ISmartRatSwitchRadioIndicationEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::resetSuppServ(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13resetSuppServEi(void) {
    ALOGD("_ZN14MtkRadioExImpl13resetSuppServEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSipHeaderReport(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18setSipHeaderReportEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl18setSipHeaderReportEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal_abort(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::bipProactiveCommandInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22bipProactiveCommandIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22bipProactiveCommandIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::dialWithSipUriResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22dialWithSipUriResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22dialWithSipUriResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::currentPhysicalChannelConfigs(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29currentPhysicalChannelConfigsEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29currentPhysicalChannelConfigsEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setCallIndication(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setCallIndicationEiiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl17setCallIndicationEiiiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSmartSceneSwitch(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl19setSmartSceneSwitchEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl19setSmartSceneSwitchEiiii() called");
    return 0;
}

/* Demangled: RIL_onUnsolicitedResponse */
extern "C" __attribute__((visibility("default"))) int RIL_onUnsolicitedResponse(void) {
    ALOGD("RIL_onUnsolicitedResponse() called");
    return 0;
}

/* Demangled: memsetAndFreeStrings(int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z20memsetAndFreeStringsiz(void) {
    ALOGD("_Z20memsetAndFreeStringsiz() called");
    return 0;
}

/* Demangled: convertHexStringToBytes(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z23convertHexStringToBytesPKvm(void) {
    ALOGD("_Z23convertHexStringToBytesPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::nvResetConfig(int, android::hardware::radio::V1_0::ResetNvType) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE(void) {
    ALOGD("_ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE() called");
    return 0;
}

/* Demangled: RadioImpl::setCallWaiting(int, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setCallWaitingEibi(void) {
    ALOGD("_ZN9RadioImpl14setCallWaitingEibi() called");
    return 0;
}

/* Demangled: RadioImpl::setSystemSelectionChannels(int, bool, android::hardware::hidl_vec<android::hardware::radio::V1_1::RadioAccessSpecifier> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl26setSystemSelectionChannelsEibRKN7android8hardware8hidl_vecINS1_5radio4V1_120RadioAccessSpecifierEEE(void) {
    ALOGD("_ZN9RadioImpl26setSystemSelectionChannelsEibRKN7android8hardware8hidl_vecINS1_5radio4V1_120RadioAccessSpecifierEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWfcProfileResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21setWfcProfileResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21setWfcProfileResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::startKeepaliveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22startKeepaliveResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22startKeepaliveResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::supplyDepersonalization(int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23supplyDepersonalizationEiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN14MtkRadioExImpl23supplyDepersonalizationEiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: RadioImpl::getModemStackStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19getModemStackStatusEi(void) {
    ALOGD("_ZN9RadioImpl19getModemStackStatusEi() called");
    return 0;
}

/* Demangled: radio::newSmsStatusReportInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21newSmsStatusReportIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21newSmsStatusReportIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::imsBearerStateConfirm(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21imsBearerStateConfirmEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl21imsBearerStateConfirmEiiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::enableCAPlusBandWidthFilter(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl27enableCAPlusBandWidthFilterEib(void) {
    ALOGD("_ZN14MtkRadioExImpl27enableCAPlusBandWidthFilterEib() called");
    return 0;
}

/* Demangled: RadioImpl::getNeighboringCids(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getNeighboringCidsEi(void) {
    ALOGD("_ZN9RadioImpl18getNeighboringCidsEi() called");
    return 0;
}

/* Demangled: RadioImpl::iccTransmitApduBasicChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE(void) {
    ALOGD("_ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE() called");
    return 0;
}

/* Demangled: convertRilLceDataInfoToHal(void const*, unsigned long, android::hardware::radio::V1_0::LceDataInfo&) */
extern "C" __attribute__((visibility("default"))) int _Z26convertRilLceDataInfoToHalPKvmRN7android8hardware5radio4V1_011LceDataInfoE(void) {
    ALOGD("_Z26convertRilLceDataInfoToHalPKvmRN7android8hardware5radio4V1_011LceDataInfoE() called");
    return 0;
}

/* Demangled: RadioConfigImpl::setResponseFunctions(android::sp<android::hardware::radio::config::V1_0::IRadioConfigResponse> const&, android::sp<android::hardware::radio::config::V1_0::IRadioConfigIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio6config4V1_020IRadioConfigResponseEEERKNS1_INS5_22IRadioConfigIndicationEEE(void) {
    ALOGD("_ZN15RadioConfigImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio6config4V1_020IRadioConfigResponseEEERKNS1_INS5_22IRadioConfigIndicationEEE() called");
    return 0;
}

/* Demangled: RilOpProxy::initOpLibrary() */
extern "C" __attribute__((visibility("default"))) int _ZN10RilOpProxy13initOpLibraryEv(void) {
    ALOGD("_ZN10RilOpProxy13initOpLibraryEv() called");
    return 0;
}

/* Demangled: mtkRadioEx::resetAllConnectionsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx27resetAllConnectionsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx27resetAllConnectionsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::simStatusChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19simStatusChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19simStatusChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::radioStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20radioStateChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio20radioStateChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::worldModeChangedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26worldModeChangedIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26worldModeChangedIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::enterEmergencyCallbackModeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29enterEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29enterEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getFemtocellList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16getFemtocellListEi(void) {
    ALOGD("_ZN14MtkRadioExImpl16getFemtocellListEi() called");
    return 0;
}

/* Demangled: radio::handleStkCallSetupRequestFromSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40handleStkCallSetupRequestFromSimResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio40handleStkCallSetupRequestFromSimResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendRequestRawResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22sendRequestRawResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22sendRequestRawResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setEtws(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl7setEtwsEii(void) {
    ALOGD("_ZN14MtkRadioExImpl7setEtwsEii() called");
    return 0;
}

/* Demangled: pb_decode_fixed64 */
extern "C" __attribute__((visibility("default"))) int pb_decode_fixed64(void) {
    ALOGD("pb_decode_fixed64() called");
    return 0;
}

/* Demangled: mtkRadioEx::eiregDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12eiregDataIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12eiregDataIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::cdmaCallWaitingInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18cdmaCallWaitingIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18cdmaCallWaitingIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setSignalStrengthReportingCriteriaResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio42setSignalStrengthReportingCriteriaResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio42setSignalStrengthReportingCriteriaResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::requestIsimAuthentication(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setTxPowerStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24setTxPowerStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24setTxPowerStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setProvisionValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setProvisionValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::supplyIccPukForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26supplyIccPukForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26supplyIccPukForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getIccidResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16getIccidResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16getIccidResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getPlmnNameFromSE13TableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32getPlmnNameFromSE13TableResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32getPlmnNameFromSE13TableResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: android::releaseWakeLock() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15releaseWakeLockEv(void) {
    ALOGD("_ZN7android15releaseWakeLockEv() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::abortCertificate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16abortCertificateEii(void) {
    ALOGD("_ZN14MtkRadioExImpl16abortCertificateEii() called");
    return 0;
}

/* Demangled: RadioImpl::requestIccSimAuthentication(int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: convertResetSimResponseProtoToHal(_RIL_SIM_SAP_RESET_SIM_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response(void) {
    ALOGD("_Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response() called");
    return 0;
}

/* Demangled: radio::sendUssdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16sendUssdResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio16sendUssdResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getAvailableBandModesResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29getAvailableBandModesResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29getAvailableBandModesResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getEccNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl9getEccNumEi(void) {
    ALOGD("_ZN14MtkRadioExImpl9getEccNumEi() called");
    return 0;
}

/* Demangled: radio::stkEventNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio17stkEventNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio17stkEventNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::enableModem(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11enableModemEib(void) {
    ALOGD("_ZN9RadioImpl11enableModemEib() called");
    return 0;
}

/* Demangled: void freeSetDataProfileData<RIL_MtkDataProfileInfo>(int, RIL_MtkDataProfileInfo*, RIL_MtkDataProfileInfo**, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z22freeSetDataProfileDataI22RIL_MtkDataProfileInfoEviPT_PS2_iz(void) {
    ALOGD("_Z22freeSetDataProfileDataI22RIL_MtkDataProfileInfoEviPT_PS2_iz() called");
    return 0;
}

/* Demangled: RadioImpl::setDataAllowed(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setDataAllowedEib(void) {
    ALOGD("_ZN9RadioImpl14setDataAllowedEib() called");
    return 0;
}

/* Demangled: RadioImpl::setInitialAttachApn_1_5(int, android::hardware::radio::V1_5::DataProfileInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23setInitialAttachApn_1_5EiRKN7android8hardware5radio4V1_515DataProfileInfoE(void) {
    ALOGD("_ZN9RadioImpl23setInitialAttachApn_1_5EiRKN7android8hardware5radio4V1_515DataProfileInfoE() called");
    return 0;
}

/* Demangled: mtkRadioEx::oemHookRawInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13oemHookRawIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13oemHookRawIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: ril_service_name_base */
extern "C" __attribute__((visibility("default"))) void* ril_service_name_base = NULL;

/* Demangled: MtkRadioExImpl::queryNetworkLock(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16queryNetworkLockEii(void) {
    ALOGD("_ZN14MtkRadioExImpl16queryNetworkLockEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getGsmBroadcastActivation(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl25getGsmBroadcastActivationEi(void) {
    ALOGD("_ZN14MtkRadioExImpl25getGsmBroadcastActivationEi() called");
    return 0;
}

/* Demangled: radio::acknowledgeIncomingGsmSmsWithPduResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setLinkCapacityReportingCriteriaResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40setLinkCapacityReportingCriteriaResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio40setLinkCapacityReportingCriteriaResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: fillCellIdentityResponse_1_5(android::hardware::radio::V1_5::CellIdentity&, RIL_CellIdentity_v16 const&) */
extern "C" __attribute__((visibility("default"))) int _Z28fillCellIdentityResponse_1_5RN7android8hardware5radio4V1_512CellIdentityERK20RIL_CellIdentity_v16(void) {
    ALOGD("_Z28fillCellIdentityResponse_1_5RN7android8hardware5radio4V1_512CellIdentityERK20RIL_CellIdentity_v16() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSearchRat(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12setSearchRatEiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN14MtkRadioExImpl12setSearchRatEiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: RadioImpl::getBarringInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14getBarringInfoEi(void) {
    ALOGD("_ZN9RadioImpl14getBarringInfoEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::dedicatedBearerDeactivationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30dedicatedBearerDeactivationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30dedicatedBearerDeactivationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setGwsdMode(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11setGwsdModeEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl11setGwsdModeEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: RadioImpl::getCdmaSubscriptionSource(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25getCdmaSubscriptionSourceEi(void) {
    ALOGD("_ZN9RadioImpl25getCdmaSubscriptionSourceEi() called");
    return 0;
}

/* Demangled: RadioImpl::setMute(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7setMuteEib(void) {
    ALOGD("_ZN9RadioImpl7setMuteEib() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_2::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_26IRadioE = NULL;

/* Demangled: SapImpl::sendFailedResponse(_MsgId, int, int, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl18sendFailedResponseE6_MsgIdiiz(void) {
    ALOGD("_ZN7SapImpl18sendFailedResponseE6_MsgIdiiz() called");
    return 0;
}

/* Demangled: mtkRadioEx::deleteUPBEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22deleteUPBEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22deleteUPBEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsEmergencyDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24imsEmergencyDialResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24imsEmergencyDialResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::startNetworkScan_1_4(int, android::hardware::radio::V1_2::NetworkScanRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20startNetworkScan_1_4EiRKN7android8hardware5radio4V1_218NetworkScanRequestE(void) {
    ALOGD("_ZN9RadioImpl20startNetworkScan_1_4EiRKN7android8hardware5radio4V1_218NetworkScanRequestE() called");
    return 0;
}

/* Demangled: mtkRadioEx::getSmsMemStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23getSmsMemStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23getSmsMemStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: hexCharToInt(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z12hexCharToInth(void) {
    ALOGD("_Z12hexCharToInth() called");
    return 0;
}

/* Demangled: dispatchGrpEntry(int, int, int, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _Z16dispatchGrpEntryiiiiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_Z16dispatchGrpEntryiiiiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: RadioImpl::getCallForwardStatus(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void) {
    ALOGD("_ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsRadioInfoChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21imsRadioInfoChangeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21imsRadioInfoChangeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::rttModifyRequestResponse(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24rttModifyRequestResponseEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl24rttModifyRequestResponseEiii() called");
    return 0;
}

/* Demangled: convertRilCellInfoListToHal_1_4(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_4::CellInfo>&) */
extern "C" __attribute__((visibility("default"))) int _Z31convertRilCellInfoListToHal_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_48CellInfoEEE(void) {
    ALOGD("_Z31convertRilCellInfoListToHal_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_48CellInfoEEE() called");
    return 0;
}

/* Demangled: RadioImpl::getIccCardStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl16getIccCardStatusEi(void) {
    ALOGD("_ZN9RadioImpl16getIccCardStatusEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getPOLCapability(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16getPOLCapabilityEi(void) {
    ALOGD("_ZN14MtkRadioExImpl16getPOLCapabilityEi() called");
    return 0;
}

/* Demangled: RadioImpl::iccOpenLogicalChannel(int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: RadioImpl::sendCdmaSmsExpectMore(int, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21sendCdmaSmsExpectMoreEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl21sendCdmaSmsExpectMoreEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE() called");
    return 0;
}

/* Demangled: mtkRadioEx::registerCellQltyReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30registerCellQltyReportResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30registerCellQltyReportResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::radioCapabilityIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28radioCapabilityIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28radioCapabilityIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsMtk(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMtkRadioExResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMtkRadioExIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setResponseFunctionsMtkERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_019IMtkRadioExResponseEEERKNS1_INS6_21IMtkRadioExIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setResponseFunctionsMtkERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_019IMtkRadioExResponseEEERKNS1_INS6_21IMtkRadioExIndicationEEE() called");
    return 0;
}

/* Demangled: pb_encode_tag */
extern "C" __attribute__((visibility("default"))) int pb_encode_tag(void) {
    ALOGD("pb_encode_tag() called");
    return 0;
}

/* Demangled: mtkRadioEx::vsimNotificationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24vsimNotificationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24vsimNotificationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setKeepAliveByIpData(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20setKeepAliveByIpDataEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl20setKeepAliveByIpDataEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: VTT for RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT9RadioImpl = NULL;

/* Demangled: mtkRadioEx::mdChangeApnInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx14mdChangeApnIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx14mdChangeApnIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15imsDialResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15imsDialResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::atciInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx7atciIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx7atciIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: constructCdmaSms(RIL_CDMA_SMS_Message&, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void) {
    ALOGD("_Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE() called");
    return 0;
}

/* Demangled: pb_decode_svarint */
extern "C" __attribute__((visibility("default"))) int pb_decode_svarint(void) {
    ALOGD("pb_decode_svarint() called");
    return 0;
}

/* Demangled: ril_event_init() */
extern "C" __attribute__((visibility("default"))) int _Z14ril_event_initv(void) {
    ALOGD("_Z14ril_event_initv() called");
    return 0;
}

/* Demangled: mtkRadioEx::readPhbEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20readPhbEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20readPhbEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::writeSmsToRuimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22writeSmsToRuimResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22writeSmsToRuimResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::requestIccSimAuthenticationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35requestIccSimAuthenticationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio35requestIccSimAuthenticationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getRxTestResult(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15getRxTestResultEii(void) {
    ALOGD("_ZN14MtkRadioExImpl15getRxTestResultEii() called");
    return 0;
}

/* Demangled: RadioImpl::writeSmsToSim(int, android::hardware::radio::V1_0::SmsWriteArgs const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE(void) {
    ALOGD("_ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: sendErrorResponse(android::RequestInfo*, RIL_Errno) */
extern "C" __attribute__((visibility("default"))) int _Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno(void) {
    ALOGD("_Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno() called");
    return 0;
}

/* Demangled: mtkRadioEx::suppSvcNotifyExInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18suppSvcNotifyExIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18suppSvcNotifyExIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getNetworkSelectionModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getNetworkSelectionModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio31getNetworkSelectionModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getCurrentUiccCardProvisioningStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl36getCurrentUiccCardProvisioningStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl36getCurrentUiccCardProvisioningStatusEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::emergencyBearerInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22emergencyBearerInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22emergencyBearerInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::phbReadyNotificationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23phbReadyNotificationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23phbReadyNotificationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::imsNetworkStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25imsNetworkStateChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25imsNetworkStateChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: toClientSlot */
extern "C" __attribute__((visibility("default"))) int toClientSlot(void) {
    ALOGD("toClientSlot() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::notifyImsServiceReady() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21notifyImsServiceReadyEv(void) {
    ALOGD("_ZN14MtkRadioExImpl21notifyImsServiceReadyEv() called");
    return 0;
}

/* Demangled: pb_decode_delimited_noinit */
extern "C" __attribute__((visibility("default"))) int pb_decode_delimited_noinit(void) {
    ALOGD("pb_decode_delimited_noinit() called");
    return 0;
}

/* Demangled: pb_encode_tag_for_field */
extern "C" __attribute__((visibility("default"))) int pb_encode_tag_for_field(void) {
    ALOGD("pb_encode_tag_for_field() called");
    return 0;
}

/* Demangled: mtkRadioEx::setTxPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18setTxPowerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18setTxPowerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::toggleRttAudioIndicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32toggleRttAudioIndicationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32toggleRttAudioIndicationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWfcProfile(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13setWfcProfileEii(void) {
    ALOGD("_ZN14MtkRadioExImpl13setWfcProfileEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWifiAssociated(int, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_iS4_(void) {
    ALOGD("_ZN14MtkRadioExImpl17setWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_iS4_() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::syncDataSettingsToMdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28syncDataSettingsToMdResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28syncDataSettingsToMdResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::srvccStateNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19srvccStateNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19srvccStateNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchVsimOperationEvent(int, int, int, unsigned int, unsigned int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _Z26dispatchVsimOperationEventiiijjiiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_Z26dispatchVsimOperationEventiiijjiiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::queryCallForwardInTimeSlotStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx40queryCallForwardInTimeSlotStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx40queryCallForwardInTimeSlotStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal_abort() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::forceReleaseCall(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16forceReleaseCallEii(void) {
    ALOGD("_ZN14MtkRadioExImpl16forceReleaseCallEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getAvailableNetworksWithAct(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl27getAvailableNetworksWithActEi(void) {
    ALOGD("_ZN14MtkRadioExImpl27getAvailableNetworksWithActEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsSubsidyLock(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISubsidyLockResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISubsidyLockIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl31setResponseFunctionsSubsidyLockERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020ISubsidyLockResponseEEERKNS1_INS6_22ISubsidyLockIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl31setResponseFunctionsSubsidyLockERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020ISubsidyLockResponseEEERKNS1_INS6_22ISubsidyLockIndicationEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setPOLEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19setPOLEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19setPOLEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::suppSvcNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16suppSvcNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio16suppSvcNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: removeTidFromRLock(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _Z18removeTidFromRLockjl(void) {
    ALOGD("_Z18removeTidFromRLockjl() called");
    return 0;
}

/* Demangled: convertRilHardwareConfigListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::HardwareConfig>&) */
extern "C" __attribute__((visibility("default"))) int _Z33convertRilHardwareConfigListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_014HardwareConfigEEE(void) {
    ALOGD("_Z33convertRilHardwareConfigListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_014HardwareConfigEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSearchStoredFreqInfo(int, int, int, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setSearchStoredFreqInfoEiiiiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setSearchStoredFreqInfoEiiiiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: radio::getOperatorResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19getOperatorResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19getOperatorResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: android::RIL_getServiceName() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18RIL_getServiceNameEv(void) {
    ALOGD("_ZN7android18RIL_getServiceNameEv() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendRttText(int, int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11sendRttTextEiiiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl11sendRttTextEiiiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: radio::sendDeviceStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23sendDeviceStateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23sendDeviceStateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertCharPtrToHidlString(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26convertCharPtrToHidlStringPKc(void) {
    ALOGD("_Z26convertCharPtrToHidlStringPKc() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setLteReleaseVersion(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20setLteReleaseVersionEii(void) {
    ALOGD("_ZN14MtkRadioExImpl20setLteReleaseVersionEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImscfg(int, bool, bool, bool, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl9setImscfgEibbbbbb(void) {
    ALOGD("_ZN14MtkRadioExImpl9setImscfgEibbbbbb() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImscfgResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17setImscfgResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17setImscfgResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setSuppServiceNotificationsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35setSuppServiceNotificationsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio35setSuppServiceNotificationsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal_abort(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal_abort() called");
    return 0;
}

/* Demangled: convertRilDataCallListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::SetupDataCallResult>&) */
extern "C" __attribute__((visibility("default"))) int _Z27convertRilDataCallListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEE(void) {
    ALOGD("_Z27convertRilDataCallListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::eccPreferredRat(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15eccPreferredRatEii(void) {
    ALOGD("_ZN14MtkRadioExImpl15eccPreferredRatEii() called");
    return 0;
}

/* Demangled: RadioImpl::acknowledgeLastIncomingGsmSms(int, bool, android::hardware::radio::V1_0::SmsAcknowledgeFailCause) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE(void) {
    ALOGD("_ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE() called");
    return 0;
}

/* Demangled: pb_write */
extern "C" __attribute__((visibility("default"))) int pb_write(void) {
    ALOGD("pb_write() called");
    return 0;
}

/* Demangled: mtkRadioEx::routeAuthMessageResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24routeAuthMessageResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24routeAuthMessageResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setNitzTimeReceived(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19setNitzTimeReceivedEjl(void) {
    ALOGD("_ZN5radio19setNitzTimeReceivedEjl() called");
    return 0;
}

/* Demangled: dispatchIccApdu(int, int, int, android::hardware::radio::V1_0::SimApdu const&) */
extern "C" __attribute__((visibility("default"))) int _Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE(void) {
    ALOGD("_Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::queryVopsStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15queryVopsStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl15queryVopsStatusEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::cancelAvailableNetworks(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23cancelAvailableNetworksEi(void) {
    ALOGD("_ZN14MtkRadioExImpl23cancelAvailableNetworksEi() called");
    return 0;
}

/* Demangled: RadioImpl::nvReadItem(int, android::hardware::radio::V1_0::NvItem) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE(void) {
    ALOGD("_ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE() called");
    return 0;
}

/* Demangled: RadioImpl::getCurrentCalls(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15getCurrentCallsEi(void) {
    ALOGD("_ZN9RadioImpl15getCurrentCallsEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::pullCall(int, android::hardware::hidl_string const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl8pullCallEiRKN7android8hardware11hidl_stringEb(void) {
    ALOGD("_ZN14MtkRadioExImpl8pullCallEiRKN7android8hardware11hidl_stringEb() called");
    return 0;
}

/* Demangled: RadioImpl::sendCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE() called");
    return 0;
}

/* Exported Object: vtable for RadioConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV15RadioConfigImpl = NULL;

/* Demangled: pb_decode_delimited */
extern "C" __attribute__((visibility("default"))) int pb_decode_delimited(void) {
    ALOGD("pb_decode_delimited() called");
    return 0;
}

/* Demangled: mtkRadioEx::readUPBGasListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22readUPBGasListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22readUPBGasListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getCurrentUiccCardProvisioningStatusRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx39getCurrentUiccCardProvisioningStatusRspEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx39getCurrentUiccCardProvisioningStatusRspEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getAllowedCarriersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getAllowedCarriersResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26getAllowedCarriersResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getRxTestResultResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23getRxTestResultResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23getRxTestResultResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::doGeneralSimAuthentication(int, vendor::mediatek::hardware::mtkradioex::V2_0::SimAuthStructure const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl26doGeneralSimAuthenticationEiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE(void) {
    ALOGD("_ZN14MtkRadioExImpl26doGeneralSimAuthenticationEiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE() called");
    return 0;
}

/* Demangled: RadioImpl::changeIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: SapImpl::checkReturnStatus(android::hardware::Return<void>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void) {
    ALOGD("_ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE() called");
    return 0;
}

/* Demangled: SapImpl::addPayloadAndDispatchRequest(_MsgHeader*, unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh(void) {
    ALOGD("_ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh() called");
    return 0;
}

/* Demangled: mtkRadioEx::setEtwsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15setEtwsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15setEtwsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sipHeaderReportInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18sipHeaderReportIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18sipHeaderReportIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchStrings(int, int, int, bool, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z15dispatchStringsiiibiz(void) {
    ALOGD("_Z15dispatchStringsiiibiz() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsRsu(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRsuRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRsuRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setResponseFunctionsRsuERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRsuRadioResponseEEERKNS1_INS6_19IRsuRadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setResponseFunctionsRsuERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRsuRadioResponseEEERKNS1_INS6_19IRsuRadioIndicationEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::forceReleaseCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24forceReleaseCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24forceReleaseCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setPhonebookReadyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setPhonebookReadyResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setPhonebookReadyResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::dialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio12dialResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio12dialResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCdmaBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30setCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio30setCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSipHeader(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12setSipHeaderEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl12setSipHeaderEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsVideoEnable(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setImsVideoEnableEib(void) {
    ALOGD("_ZN14MtkRadioExImpl17setImsVideoEnableEib() called");
    return 0;
}

/* Demangled: RadioImpl::acknowledgeIncomingGsmSmsWithPdu(int, bool, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: sap::processUnsolResponse(_MsgHeader*, RilSapSocket*) */
extern "C" __attribute__((visibility("default"))) int _ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket(void) {
    ALOGD("_ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWifiIpAddress(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16setWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_(void) {
    ALOGD("_ZN14MtkRadioExImpl16setWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendVsimOperation(int, unsigned int, unsigned int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17sendVsimOperationEijjiiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN14MtkRadioExImpl17sendVsimOperationEijjiiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: RadioImpl::hangup(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl6hangupEii(void) {
    ALOGD("_ZN9RadioImpl6hangupEii() called");
    return 0;
}

/* Demangled: radio::startNetworkScanResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24startNetworkScanResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio24startNetworkScanResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::deactivateUiccCardRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21deactivateUiccCardRspEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21deactivateUiccCardRspEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setCallSubAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setCallSubAddressResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setCallSubAddressResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::startNetworkScan_1_5(int, android::hardware::radio::V1_5::NetworkScanRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20startNetworkScan_1_5EiRKN7android8hardware5radio4V1_518NetworkScanRequestE(void) {
    ALOGD("_ZN9RadioImpl20startNetworkScan_1_5EiRKN7android8hardware5radio4V1_518NetworkScanRequestE() called");
    return 0;
}

/* Demangled: android::sp<RadioConfigImpl>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI15RadioConfigImplED2Ev(void) {
    ALOGD("_ZN7android2spI15RadioConfigImplED2Ev() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendSarIndicatorResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24sendSarIndicatorResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24sendSarIndicatorResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setVendorSetting(int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16setVendorSettingEiiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl16setVendorSettingEiiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::queryFemtoCellSystemSelectionMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl33queryFemtoCellSystemSelectionModeEi(void) {
    ALOGD("_ZN14MtkRadioExImpl33queryFemtoCellSystemSelectionModeEi() called");
    return 0;
}

/* Demangled: RadioImpl::sendBurstDtmf(int, android::hardware::hidl_string const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii(void) {
    ALOGD("_ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::onVolteSubscription(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19onVolteSubscriptionEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19onVolteSubscriptionEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::editUPBEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20editUPBEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20editUPBEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: getAdjustedRaf(int) */
extern "C" __attribute__((visibility("default"))) int _Z14getAdjustedRafi(void) {
    ALOGD("_Z14getAdjustedRafi() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsBearerStateNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23imsBearerStateNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23imsBearerStateNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: responseRadioCapability(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long, android::hardware::radio::V1_0::RadioCapability&) */
extern "C" __attribute__((visibility("default"))) int _Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvmRNS2_15RadioCapabilityE(void) {
    ALOGD("_Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvmRNS2_15RadioCapabilityE() called");
    return 0;
}

/* Demangled: RadioImpl::setPreferredVoicePrivacy(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24setPreferredVoicePrivacyEib(void) {
    ALOGD("_ZN9RadioImpl24setPreferredVoicePrivacyEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendRttTextResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19sendRttTextResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19sendRttTextResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::runGbaAuthenticationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28runGbaAuthenticationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28runGbaAuthenticationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: sap::processResponse(_MsgHeader*, RilSapSocket*) */
extern "C" __attribute__((visibility("default"))) int _ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket(void) {
    ALOGD("_ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::cfgA2offset(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11cfgA2offsetEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl11cfgA2offsetEiii() called");
    return 0;
}

/* Demangled: RadioImpl::setUiccSubscription(int, android::hardware::radio::V1_0::SelectUiccSub const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE(void) {
    ALOGD("_ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE() called");
    return 0;
}

/* Demangled: RadioImpl::getVoiceRegistrationState_1_5(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29getVoiceRegistrationState_1_5Ei(void) {
    ALOGD("_ZN9RadioImpl29getVoiceRegistrationState_1_5Ei() called");
    return 0;
}

/* Demangled: RadioImpl::iccTransmitApduLogicalChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE(void) {
    ALOGD("_ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_3::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_36IRadioE = NULL;

/* Exported Object: vtable for MtkRadioExImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV14MtkRadioExImpl = NULL;

/* Demangled: getSapImpl(RilSapSocket*) */
extern "C" __attribute__((visibility("default"))) int _Z10getSapImplP12RilSapSocket(void) {
    ALOGD("_Z10getSapImplP12RilSapSocket() called");
    return 0;
}

/* Exported Object: vtable for SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV7SapImpl = NULL;

/* Demangled: mtkRadioEx::meSmsStorageFullInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19meSmsStorageFullIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19meSmsStorageFullIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendRsuRequestResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22sendRsuRequestResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22sendRsuRequestResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setInitialAttachApnResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setInitialAttachApnResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27setInitialAttachApnResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getDataRegistrationStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32getDataRegistrationStateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio32getDataRegistrationStateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getCDMASubscription(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19getCDMASubscriptionEi(void) {
    ALOGD("_ZN9RadioImpl19getCDMASubscriptionEi() called");
    return 0;
}

/* Demangled: pb_field_iter_next */
extern "C" __attribute__((visibility("default"))) int pb_field_iter_next(void) {
    ALOGD("pb_field_iter_next() called");
    return 0;
}

/* Demangled: radio::setRadioCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setRadioCapabilityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26setRadioCapabilityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioStateToString */
extern "C" __attribute__((visibility("default"))) int radioStateToString(void) {
    ALOGD("radioStateToString() called");
    return 0;
}

/* Demangled: dispatchStrings(int, int, int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: convertRilDataCallToHalEx(MTK_RIL_Data_Call_Response_v11*, android::hardware::radio::V1_0::SetupDataCallResult&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25convertRilDataCallToHalExP30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultEj(void) {
    ALOGD("_Z25convertRilDataCallToHalExP30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultEj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::conferenceDial(int, vendor::mediatek::hardware::mtkradioex::V2_0::ConferenceDial const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14conferenceDialEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014ConferenceDialE(void) {
    ALOGD("_ZN14MtkRadioExImpl14conferenceDialEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014ConferenceDialE() called");
    return 0;
}

/* Demangled: RadioConfigImpl::setModemsConfig(int, android::hardware::radio::config::V1_1::ModemsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl15setModemsConfigEiRKN7android8hardware5radio6config4V1_112ModemsConfigE(void) {
    ALOGD("_ZN15RadioConfigImpl15setModemsConfigEiRKN7android8hardware5radio6config4V1_112ModemsConfigE() called");
    return 0;
}

/* Demangled: radio::getAvailableNetworksResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getAvailableNetworksResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28getAvailableNetworksResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::dataConnectionAttach(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20dataConnectionAttachEii(void) {
    ALOGD("_ZN14MtkRadioExImpl20dataConnectionAttachEii() called");
    return 0;
}

/* Demangled: RadioImpl::deleteSmsOnSim(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14deleteSmsOnSimEii(void) {
    ALOGD("_ZN9RadioImpl14deleteSmsOnSimEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::getGsmBroadcastLangsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28getGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28getGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setSimCardPower_1_1(int, android::hardware::radio::V1_1::CardPowerState) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE(void) {
    ALOGD("_ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaSubscriptionSource(int, android::hardware::radio::V1_0::CdmaSubscriptionSource) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE(void) {
    ALOGD("_ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendEmbmsAtCommandResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26sendEmbmsAtCommandResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26sendEmbmsAtCommandResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::registrationSuspendedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31registrationSuspendedIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31registrationSuspendedIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::pullLceDataResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19pullLceDataResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19pullLceDataResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onImeiLock(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx10onImeiLockEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx10onImeiLockEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onTxPowerStatusIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25onTxPowerStatusIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25onTxPowerStatusIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setGsmBroadcastLangsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28setGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28setGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::controlImsConferenceCallMemberResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx38controlImsConferenceCallMemberResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx38controlImsConferenceCallMemberResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: responseIccIo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void) {
    ALOGD("_Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsForAtci(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IAtciResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IAtciIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl27setResponseFunctionsForAtciERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_013IAtciResponseEEERKNS1_INS6_15IAtciIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl27setResponseFunctionsForAtciERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_013IAtciResponseEEERKNS1_INS6_15IAtciIndicationEEE() called");
    return 0;
}

/* Demangled: RadioImpl::startKeepalive(int, android::hardware::radio::V1_1::KeepaliveRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE(void) {
    ALOGD("_ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimPlugIn(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx11onSimPlugInEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx11onSimPlugInEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::newSmsOnSimInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio14newSmsOnSimIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio14newSmsOnSimIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilSignalStrengthToHal(void const*, unsigned long, android::hardware::radio::V1_0::SignalStrength&) */
extern "C" __attribute__((visibility("default"))) int _Z29convertRilSignalStrengthToHalPKvmRN7android8hardware5radio4V1_014SignalStrengthE(void) {
    ALOGD("_Z29convertRilSignalStrengthToHalPKvmRN7android8hardware5radio4V1_014SignalStrengthE() called");
    return 0;
}

/* Demangled: RadioImpl::getAllowedCarriers(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getAllowedCarriersEi(void) {
    ALOGD("_ZN9RadioImpl18getAllowedCarriersEi() called");
    return 0;
}

/* Demangled: RadioImpl::hangupForegroundResumeBackground(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32hangupForegroundResumeBackgroundEi(void) {
    ALOGD("_ZN9RadioImpl32hangupForegroundResumeBackgroundEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::rttTextReceiveInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17rttTextReceiveIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17rttTextReceiveIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendWifiAssociatedResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26sendWifiAssociatedResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26sendWifiAssociatedResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: sap::registerService(RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3sap15registerServiceEPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN3sap15registerServiceEPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSuppServProperty(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl19setSuppServPropertyEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN14MtkRadioExImpl19setSuppServPropertyEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: RadioImpl::areUiccApplicationsEnabled(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl26areUiccApplicationsEnabledEi(void) {
    ALOGD("_ZN9RadioImpl26areUiccApplicationsEnabledEi() called");
    return 0;
}

/* Demangled: radio::iccTransmitApduBasicChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35iccTransmitApduBasicChannelResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio35iccTransmitApduBasicChannelResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: android::s_wakelock_count */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16s_wakelock_countE = NULL;

/* Demangled: MtkRadioExImpl::setImsCfgFeatureValue(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21setImsCfgFeatureValueEiiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl21setImsCfgFeatureValueEiiiii() called");
    return 0;
}

/* Demangled: RadioImpl::getCallWaiting(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14getCallWaitingEii(void) {
    ALOGD("_ZN9RadioImpl14getCallWaitingEii() called");
    return 0;
}

/* Demangled: radio::sendCdmaSmsExpectMoreResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29sendCdmaSmsExpectMoreResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29sendCdmaSmsExpectMoreResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE(void) {
    ALOGD("_Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE() called");
    return 0;
}

/* Demangled: pb_decode_nullterminated */
extern "C" __attribute__((visibility("default"))) int pb_decode_nullterminated(void) {
    ALOGD("pb_decode_nullterminated() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWifiPingRequest(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onWifiPingRequestEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onWifiPingRequestEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::responseInvalidSimInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21responseInvalidSimIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21responseInvalidSimIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioConfig::getSimSlotsStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig25getSimSlotsStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN11radioConfig25getSimSlotsStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::deleteSmsOnSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22deleteSmsOnSimResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22deleteSmsOnSimResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getDeviceIdentityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25getDeviceIdentityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25getDeviceIdentityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendCDMAFeatureCodeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27sendCDMAFeatureCodeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27sendCDMAFeatureCodeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setIndicationFilterResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setIndicationFilterResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27setIndicationFilterResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertResponseStringEntryToInt(char**, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z31convertResponseStringEntryToIntPPcii(void) {
    ALOGD("_Z31convertResponseStringEntryToIntPPcii() called");
    return 0;
}

/* Demangled: RadioImpl::getVoiceRadioTechnology(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getVoiceRadioTechnologyEi(void) {
    ALOGD("_ZN9RadioImpl23getVoiceRadioTechnologyEi() called");
    return 0;
}

/* Demangled: RadioImpl::dial(int, android::hardware::radio::V1_0::Dial const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE(void) {
    ALOGD("_ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsRegistrationReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32setImsRegistrationReportResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32setImsRegistrationReportResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCarrierInfoForImsiEncryptionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio39setCarrierInfoForImsiEncryptionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio39setCarrierInfoForImsiEncryptionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onVirtualSimStatusChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25onVirtualSimStatusChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25onVirtualSimStatusChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendRequestStrings(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::onNwLimitInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12onNwLimitIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12onNwLimitIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setSystemSelectionChannelsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio34setSystemSelectionChannelsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio34setSystemSelectionChannelsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilEmergencyNumberListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_4::EmergencyNumber>&) */
extern "C" __attribute__((visibility("default"))) int _Z34convertRilEmergencyNumberListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_415EmergencyNumberEEE(void) {
    ALOGD("_Z34convertRilEmergencyNumberListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_415EmergencyNumberEEE() called");
    return 0;
}

/* Demangled: RadioImpl::setupDataCall(int, android::hardware::radio::V1_0::RadioTechnology, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb(void) {
    ALOGD("_ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWfcConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20setWfcConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20setWfcConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setApcMode(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl10setApcModeEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl10setApcModeEiiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::modifyModemType(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15modifyModemTypeEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl15modifyModemTypeEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setCallAdditionalInfo(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21setCallAdditionalInfoEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl21setCallAdditionalInfoEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: RadioImpl::setNetworkSelectionModeManual(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWifiLock(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx10onWifiLockEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx10onWifiLockEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::routeCertificateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24routeCertificateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24routeCertificateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::voiceRadioTechChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24voiceRadioTechChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio24voiceRadioTechChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::RilSapSocket(char const*, unsigned int, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocketC1EPKcjPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocketC1EPKcjPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsEnable(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12setImsEnableEib(void) {
    ALOGD("_ZN14MtkRadioExImpl12setImsEnableEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendImsSmsExResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20sendImsSmsExResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20sendImsSmsExResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsCfgProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31setImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31setImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getRadioServiceRwlock(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21getRadioServiceRwlockEi(void) {
    ALOGD("_ZN5radio21getRadioServiceRwlockEi() called");
    return 0;
}

/* Demangled: RilSapSocket::sOnUnsolicitedResponse(int, void const*, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvmj(void) {
    ALOGD("_ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvmj() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20setImsEnableResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20setImsEnableResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getImsRegistrationState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getImsRegistrationStateEi(void) {
    ALOGD("_ZN9RadioImpl23getImsRegistrationStateEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSuppServPropertyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx27setSuppServPropertyResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx27setSuppServPropertyResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setMaxUlSpeed(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13setMaxUlSpeedEii(void) {
    ALOGD("_ZN14MtkRadioExImpl13setMaxUlSpeedEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getSmsRuimMemoryStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22getSmsRuimMemoryStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl22getSmsRuimMemoryStatusEi() called");
    return 0;
}

/* Demangled: RadioImpl::setResponseFunctions(android::sp<android::hardware::radio::V1_0::IRadioResponse> const&, android::sp<android::hardware::radio::V1_0::IRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE(void) {
    ALOGD("_ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE() called");
    return 0;
}

/* Demangled: pb_ostream_from_buffer */
extern "C" __attribute__((visibility("default"))) int pb_ostream_from_buffer(void) {
    ALOGD("pb_ostream_from_buffer() called");
    return 0;
}

/* Demangled: convertConfigCharPtrToHidlString(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z32convertConfigCharPtrToHidlStringPKc(void) {
    ALOGD("_Z32convertConfigCharPtrToHidlStringPKc() called");
    return 0;
}

/* Demangled: pb_get_encoded_size */
extern "C" __attribute__((visibility("default"))) int pb_get_encoded_size(void) {
    ALOGD("pb_get_encoded_size() called");
    return 0;
}

/* Demangled: populateResponseInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno) */
extern "C" __attribute__((visibility("default"))) int _Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno(void) {
    ALOGD("_Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getLteReleaseVersion(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20getLteReleaseVersionEi(void) {
    ALOGD("_ZN14MtkRadioExImpl20getLteReleaseVersionEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendVopsIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18sendVopsIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18sendVopsIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::smartRatSwitchResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22smartRatSwitchResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22smartRatSwitchResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWifiAssociatedResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setWifiAssociatedResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setWifiAssociatedResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::deactivateDataCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26deactivateDataCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26deactivateDataCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setVoicePreferStatus(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20setVoicePreferStatusEii(void) {
    ALOGD("_ZN14MtkRadioExImpl20setVoicePreferStatusEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::getCurrentPOLListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25getCurrentPOLListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25getCurrentPOLListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::onUnsolicitedResponse(int, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket21onUnsolicitedResponseEiPvm(void) {
    ALOGD("_ZN12RilSapSocket21onUnsolicitedResponseEiPvm() called");
    return 0;
}

/* Demangled: convertRilPhbEntryExtStrucutreToHal(void const*, unsigned long, android::hardware::hidl_vec<vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryExt>&) */
extern "C" __attribute__((visibility("default"))) int _Z35convertRilPhbEntryExtStrucutreToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtEEE(void) {
    ALOGD("_Z35convertRilPhbEntryExtStrucutreToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResumeRegistration(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21setResumeRegistrationEii(void) {
    ALOGD("_ZN14MtkRadioExImpl21setResumeRegistrationEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsSE(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISERadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISERadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22setResponseFunctionsSEERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016ISERadioResponseEEERKNS1_INS6_18ISERadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl22setResponseFunctionsSEERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016ISERadioResponseEEERKNS1_INS6_18ISERadioIndicationEEE() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaRoamingPreference(int, android::hardware::radio::V1_0::CdmaRoamingType) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE(void) {
    ALOGD("_ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE() called");
    return 0;
}

/* Demangled: rilc_thread_pool */
extern "C" __attribute__((visibility("default"))) int rilc_thread_pool(void) {
    ALOGD("rilc_thread_pool() called");
    return 0;
}

/* Demangled: mtkRadioEx::onImsConferenceInfoIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29onImsConferenceInfoIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29onImsConferenceInfoIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onLteMessageWaitingIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29onLteMessageWaitingIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29onLteMessageWaitingIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16sendDtmfResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio16sendDtmfResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCdmaBroadcastActivationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio34setCdmaBroadcastActivationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio34setCdmaBroadcastActivationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::hangupAll(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl9hangupAllEi(void) {
    ALOGD("_ZN14MtkRadioExImpl9hangupAllEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::setTrmResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx14setTrmResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx14setTrmResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::queryVopsStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23queryVopsStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23queryVopsStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setDataProfile_1_5(int, android::hardware::hidl_vec<android::hardware::radio::V1_5::DataProfileInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setDataProfile_1_5EiRKN7android8hardware8hidl_vecINS1_5radio4V1_515DataProfileInfoEEE(void) {
    ALOGD("_ZN9RadioImpl18setDataProfile_1_5EiRKN7android8hardware8hidl_vecINS1_5radio4V1_515DataProfileInfoEEE() called");
    return 0;
}

/* Demangled: RadioImpl::getDataRegistrationState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24getDataRegistrationStateEi(void) {
    ALOGD("_ZN9RadioImpl24getDataRegistrationStateEi() called");
    return 0;
}

/* Demangled: RadioImpl::stopDtmf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl8stopDtmfEi(void) {
    ALOGD("_ZN9RadioImpl8stopDtmfEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::onRsuEvent(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx10onRsuEventEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx10onRsuEventEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setKeepAliveByIpDataResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28setKeepAliveByIpDataResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28setKeepAliveByIpDataResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCellInfoListRateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setCellInfoListRateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27setCellInfoListRateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::eccRedialApprove(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16eccRedialApproveEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl16eccRedialApproveEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getSmsParameters(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16getSmsParametersEi(void) {
    ALOGD("_ZN14MtkRadioExImpl16getSmsParametersEi() called");
    return 0;
}

/* Demangled: RadioImpl::responseAcknowledgement() */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23responseAcknowledgementEv(void) {
    ALOGD("_ZN9RadioImpl23responseAcknowledgementEv() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsCfgConfigChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22imsCfgConfigChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22imsCfgConfigChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::registerService(RIL_RadioFunctions*, android::CommandInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void) {
    ALOGD("_ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE() called");
    return 0;
}

/* Demangled: radio::exitEmergencyCallbackModeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28exitEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28exitEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::requestShutdown(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15requestShutdownEi(void) {
    ALOGD("_ZN9RadioImpl15requestShutdownEi() called");
    return 0;
}

/* Exported Object: VTT for RadioConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT15RadioConfigImpl = NULL;

/* Demangled: pb_decode_tag */
extern "C" __attribute__((visibility("default"))) int pb_decode_tag(void) {
    ALOGD("pb_decode_tag() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimTrayPlugIn(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15onSimTrayPlugInEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15onSimTrayPlugInEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onUssiInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx9onUssiIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx9onUssiIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::changeIccPin2ForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27changeIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27changeIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::acknowledgeLastIncomingGsmSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio37acknowledgeLastIncomingGsmSmsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio37acknowledgeLastIncomingGsmSmsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchInts(int, int, int, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z12dispatchIntsiiiiz(void) {
    ALOGD("_Z12dispatchIntsiiiiz() called");
    return 0;
}

/* Demangled: mtkRadioEx::videoCallAcceptResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23videoCallAcceptResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23videoCallAcceptResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::videoCapabilityIndicatorInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx27videoCapabilityIndicatorIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx27videoCapabilityIndicatorIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::readUPBAasListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22readUPBAasListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22readUPBAasListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsCfgFeatureValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29setImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29setImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::sendImsSms(int, android::hardware::radio::V1_0::ImsSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE() called");
    return 0;
}

/* Exported Object: mCounterRadioConfig */
extern "C" __attribute__((visibility("default"))) void* mCounterRadioConfig = NULL;

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: RIL_setcallbacks */
extern "C" __attribute__((visibility("default"))) int RIL_setcallbacks(void) {
    ALOGD("RIL_setcallbacks() called");
    return 0;
}

/* Demangled: mtkRadioEx::queryPhbStorageInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx27queryPhbStorageInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx27queryPhbStorageInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::callAdditionalInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21callAdditionalInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21callAdditionalInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setModemPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21setModemPowerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21setModemPowerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::readUPBEmailEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25readUPBEmailEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25readUPBEmailEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioConfig::setModemsConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig23setModemsConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN11radioConfig23setModemsConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::cdmaRuimSmsStorageFullInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25cdmaRuimSmsStorageFullIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25cdmaRuimSmsStorageFullIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setNetworkSelectionModeAutomaticResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40setNetworkSelectionModeAutomaticResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio40setNetworkSelectionModeAutomaticResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RIL_onRequestComplete */
extern "C" __attribute__((visibility("default"))) int RIL_onRequestComplete(void) {
    ALOGD("RIL_onRequestComplete() called");
    return 0;
}

/* Demangled: mtkRadioEx::confSRVCCInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12confSRVCCIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12confSRVCCIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::readUPBAnrEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23readUPBAnrEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23readUPBAnrEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::uiccApplicationsEnablementChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33uiccApplicationsEnablementChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33uiccApplicationsEnablementChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setIgnoreSameNumberInterval(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl27setIgnoreSameNumberIntervalEii(void) {
    ALOGD("_ZN14MtkRadioExImpl27setIgnoreSameNumberIntervalEii() called");
    return 0;
}

/* Demangled: RadioImpl::acceptCall(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10acceptCallEi(void) {
    ALOGD("_ZN9RadioImpl10acceptCallEi() called");
    return 0;
}

/* Demangled: ril_event_set(ril_event*, int, bool, void (*)(int, short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_event_setP9ril_eventibPFvisPvES1_(void) {
    ALOGD("_Z13ril_event_setP9ril_eventibPFvisPvES1_() called");
    return 0;
}

/* Demangled: RilOpProxy::getOpCommandInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10RilOpProxy16getOpCommandInfoEi(void) {
    ALOGD("_ZN10RilOpProxy16getOpCommandInfoEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::onPdnHandover(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13onPdnHandoverEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13onPdnHandoverEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::networkInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx14networkInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx14networkInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::dataCallListChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22dataCallListChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22dataCallListChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: pb_encode_fixed64 */
extern "C" __attribute__((visibility("default"))) int pb_encode_fixed64(void) {
    ALOGD("pb_encode_fixed64() called");
    return 0;
}

/* Demangled: RilSapSocket::printList() */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket9printListEv(void) {
    ALOGD("_ZN12RilSapSocket9printListEv() called");
    return 0;
}

/* Demangled: RadioImpl::deleteSmsOnRuim(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15deleteSmsOnRuimEii(void) {
    ALOGD("_ZN9RadioImpl15deleteSmsOnRuimEii() called");
    return 0;
}

/* Demangled: RadioImpl::setDataProfile_1_4(int, android::hardware::hidl_vec<android::hardware::radio::V1_4::DataProfileInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setDataProfile_1_4EiRKN7android8hardware8hidl_vecINS1_5radio4V1_415DataProfileInfoEEE(void) {
    ALOGD("_ZN9RadioImpl18setDataProfile_1_4EiRKN7android8hardware8hidl_vecINS1_5radio4V1_415DataProfileInfoEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::getVoiceDomainPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32getVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32getVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioConfig::getPhoneCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig26getPhoneCapabilityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN11radioConfig26getPhoneCapabilityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setRemoveRestrictEutranMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl27setRemoveRestrictEutranModeEii(void) {
    ALOGD("_ZN14MtkRadioExImpl27setRemoveRestrictEutranModeEii() called");
    return 0;
}

/* Demangled: RilOpProxy::registerOpService(RIL_RadioFunctions*, android::CommandInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10RilOpProxy17registerOpServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void) {
    ALOGD("_ZN10RilOpProxy17registerOpServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE() called");
    return 0;
}

/* Demangled: mtkRadioEx::incomingCallIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25incomingCallIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25incomingCallIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal() called");
    return 0;
}

/* Exported Object: ril_service_name */
extern "C" __attribute__((visibility("default"))) void* ril_service_name = NULL;

/* Demangled: MtkRadioExImpl::runGbaAuthentication(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20runGbaAuthenticationEiRKN7android8hardware11hidl_stringES4_bi(void) {
    ALOGD("_ZN14MtkRadioExImpl20runGbaAuthenticationEiRKN7android8hardware11hidl_stringES4_bi() called");
    return 0;
}

/* Demangled: RadioImpl::setRadioPower(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13setRadioPowerEib(void) {
    ALOGD("_ZN9RadioImpl13setRadioPowerEib() called");
    return 0;
}

/* Exported Object: mtkRadioExService */
extern "C" __attribute__((visibility("default"))) void* mtkRadioExService = NULL;

/* Demangled: radio::getGsmBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29getGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29getGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: appendRequestIntoPendingInd(unsigned int, int, int, void const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z27appendRequestIntoPendingIndjiiPKvi(void) {
    ALOGD("_Z27appendRequestIntoPendingIndjiiPKvi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setProvisionValue(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setProvisionValueEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN14MtkRadioExImpl17setProvisionValueEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: RadioConfigImpl::getModemsConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl15getModemsConfigEi(void) {
    ALOGD("_ZN15RadioConfigImpl15getModemsConfigEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::editUPBEntry(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12editUPBEntryEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl12editUPBEntryEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsAssist(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IAssistRadioResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl26setResponseFunctionsAssistERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020IAssistRadioResponseEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl26setResponseFunctionsAssistERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020IAssistRadioResponseEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::embmsAtInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx14embmsAtInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx14embmsAtInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsRegistrationInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22imsRegistrationInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22imsRegistrationInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::newSmsStatusReportIndEx(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23newSmsStatusReportIndExEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23newSmsStatusReportIndExEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendImsSmsEx(int, android::hardware::radio::V1_0::ImsSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12sendImsSmsExEiRKN7android8hardware5radio4V1_013ImsSmsMessageE(void) {
    ALOGD("_ZN14MtkRadioExImpl12sendImsSmsExEiRKN7android8hardware5radio4V1_013ImsSmsMessageE() called");
    return 0;
}

/* Demangled: RadioImpl::setGsmBroadcastActivation(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25setGsmBroadcastActivationEib(void) {
    ALOGD("_ZN9RadioImpl25setGsmBroadcastActivationEib() called");
    return 0;
}

/* Demangled: radio::getFacilityLockForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29getFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29getFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::stopNetworkScan(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15stopNetworkScanEi(void) {
    ALOGD("_ZN9RadioImpl15stopNetworkScanEi() called");
    return 0;
}

/* Demangled: RadioImpl::setSignalStrengthReportingCriteria(int, int, int, android::hardware::hidl_vec<int> const&, android::hardware::radio::V1_2::AccessNetwork) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl34setSignalStrengthReportingCriteriaEiiiRKN7android8hardware8hidl_vecIiEENS1_5radio4V1_213AccessNetworkE(void) {
    ALOGD("_ZN9RadioImpl34setSignalStrengthReportingCriteriaEiiiRKN7android8hardware8hidl_vecIiEENS1_5radio4V1_213AccessNetworkE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setRoamingEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24setRoamingEnableResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24setRoamingEnableResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setKeepAliveByPDCPCtrlPDUResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx33setKeepAliveByPDCPCtrlPDUResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx33setKeepAliveByPDCPCtrlPDUResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPukForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: radio::getModemActivityInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getModemActivityInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28getModemActivityInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: makeCdmaSmsMessage(android::hardware::radio::V1_0::CdmaSmsMessage&, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z18makeCdmaSmsMessageRN7android8hardware5radio4V1_014CdmaSmsMessageEPKvm(void) {
    ALOGD("_Z18makeCdmaSmsMessageRN7android8hardware5radio4V1_014CdmaSmsMessageEPKvm() called");
    return 0;
}

/* Demangled: fillCellIdentityFromVoiceRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
extern "C" __attribute__((visibility("default"))) int _Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void) {
    ALOGD("_Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::routeCertificate(int, int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16routeCertificateEiiRKN7android8hardware8hidl_vecIhEES5_(void) {
    ALOGD("_ZN14MtkRadioExImpl16routeCertificateEiiRKN7android8hardware8hidl_vecIhEES5_() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setNetworkSelectionModeManualWithAct(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl36setNetworkSelectionModeManualWithActEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN14MtkRadioExImpl36setNetworkSelectionModeManualWithActEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: radioConfig::registerService(RIL_RadioFunctions*, android::CommandInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void) {
    ALOGD("_ZN11radioConfig15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsIms(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IImsRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IImsRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setResponseFunctionsImsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IImsRadioResponseEEERKNS1_INS6_19IImsRadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setResponseFunctionsImsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IImsRadioResponseEEERKNS1_INS6_19IImsRadioIndicationEEE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: SapImpl::disconnectReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl13disconnectReqEi(void) {
    ALOGD("_ZN7SapImpl13disconnectReqEi() called");
    return 0;
}

/* Demangled: SapImpl::createMsgHeader(_MsgId, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl15createMsgHeaderE6_MsgIdi(void) {
    ALOGD("_ZN7SapImpl15createMsgHeaderE6_MsgIdi() called");
    return 0;
}

/* Demangled: mtkRadioEx::iccidChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15iccidChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15iccidChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::mobileDataUsageInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18mobileDataUsageIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18mobileDataUsageIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::enableCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24enableCapabilityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24enableCapabilityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getPhoneBookMemStorageResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30getPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30getPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::emergencyDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21emergencyDialResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21emergencyDialResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setGsmBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29setGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29setGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getSuggestedPlmnList(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20getSuggestedPlmnListEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl20getSuggestedPlmnListEiiii() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::abortFemtocellList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18abortFemtocellListEi(void) {
    ALOGD("_ZN14MtkRadioExImpl18abortFemtocellListEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getIccid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl8getIccidEi(void) {
    ALOGD("_ZN14MtkRadioExImpl8getIccidEi() called");
    return 0;
}

/* Demangled: RadioImpl::setPreferredNetworkTypeBitmap(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29setPreferredNetworkTypeBitmapEii(void) {
    ALOGD("_ZN9RadioImpl29setPreferredNetworkTypeBitmapEii() called");
    return 0;
}

/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_builtin_unreachable_minimal(void) {
    ALOGD("__ubsan_handle_builtin_unreachable_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::resetSuppServResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21resetSuppServResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21resetSuppServResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::areUiccApplicationsEnabledResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio34areUiccApplicationsEnabledResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio34areUiccApplicationsEnabledResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::rejectCall(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10rejectCallEi(void) {
    ALOGD("_ZN9RadioImpl10rejectCallEi() called");
    return 0;
}

/* Demangled: RadioImpl::sendSms(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE() called");
    return 0;
}

/* Demangled: pb_make_string_substream */
extern "C" __attribute__((visibility("default"))) int pb_make_string_substream(void) {
    ALOGD("pb_make_string_substream() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal_abort(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal_abort() called");
    return 0;
}

/* Demangled: RIL_onRequestAck */
extern "C" __attribute__((visibility("default"))) int RIL_onRequestAck(void) {
    ALOGD("RIL_onRequestAck() called");
    return 0;
}

/* Demangled: radio::requestShutdownResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23requestShutdownResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23requestShutdownResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::restrictedStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25restrictedStateChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25restrictedStateChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readUPBGasList(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14readUPBGasListEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl14readUPBGasListEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setClip(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl7setClipEii(void) {
    ALOGD("_ZN14MtkRadioExImpl7setClipEii() called");
    return 0;
}

/* Demangled: RadioImpl::setLinkCapacityReportingCriteria_1_5(int, int, int, int, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<int> const&, android::hardware::radio::V1_5::AccessNetwork) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl36setLinkCapacityReportingCriteria_1_5EiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_513AccessNetworkE(void) {
    ALOGD("_ZN9RadioImpl36setLinkCapacityReportingCriteria_1_5EiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_513AccessNetworkE() called");
    return 0;
}

/* Demangled: android::triggerWarning(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14triggerWarningEPc(void) {
    ALOGD("_ZN7android14triggerWarningEPc() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setRxTestConfig(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15setRxTestConfigEii(void) {
    ALOGD("_ZN14MtkRadioExImpl15setRxTestConfigEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::videoCallAccept(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15videoCallAcceptEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl15videoCallAcceptEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::enableCapabaility(int, android::hardware::hidl_string const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17enableCapabailityEiRKN7android8hardware11hidl_stringEii(void) {
    ALOGD("_ZN14MtkRadioExImpl17enableCapabailityEiRKN7android8hardware11hidl_stringEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getImsCfgFeatureValue(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21getImsCfgFeatureValueEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl21getImsCfgFeatureValueEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getVoiceDomainPreference(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24getVoiceDomainPreferenceEi(void) {
    ALOGD("_ZN14MtkRadioExImpl24getVoiceDomainPreferenceEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::config::V1_1::IRadioConfig-in-RadioConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC15RadioConfigImpl0_N7android8hardware5radio6config4V1_112IRadioConfigE = NULL;

/* Demangled: mtkRadioEx::cancelUssiResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18cancelUssiResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18cancelUssiResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendRttModifyRequestResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28sendRttModifyRequestResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28sendRttModifyRequestResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::networkStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22networkStateChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22networkStateChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilDataCallListToHalEx(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::SetupDataCallResult>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29convertRilDataCallListToHalExPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEEj(void) {
    ALOGD("_Z29convertRilDataCallListToHalExPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEEj() called");
    return 0;
}

/* Demangled: pb_encode_svarint */
extern "C" __attribute__((visibility("default"))) int pb_encode_svarint(void) {
    ALOGD("pb_encode_svarint() called");
    return 0;
}

/* Demangled: ril_timer_add(ril_event*, timeval*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_timer_addP9ril_eventP7timeval(void) {
    ALOGD("_Z13ril_timer_addP9ril_eventP7timeval() called");
    return 0;
}

/* Demangled: radio::lceDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio10lceDataIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio10lceDataIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setNetworkSelectionModeManualResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio37setNetworkSelectionModeManualResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio37setNetworkSelectionModeManualResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: stringToLong(char*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z12stringToLongPciPi(void) {
    ALOGD("_Z12stringToLongPciPi() called");
    return 0;
}

/* Demangled: mtkRadioEx::callRatIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17callRatIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17callRatIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_0::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_06IRadioE = NULL;

/* Demangled: RadioConfigImpl::setSimSlotsMapping(int, android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl18setSimSlotsMappingEiRKN7android8hardware8hidl_vecIjEE(void) {
    ALOGD("_ZN15RadioConfigImpl18setSimSlotsMappingEiRKN7android8hardware8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsBearerInitInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16imsBearerInitIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16imsBearerInitIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsCallModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22setImsCallModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22setImsCallModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::supplyNetworkDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio38supplyNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio38supplyNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsRtpReport(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15setImsRtpReportEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl15setImsRtpReportEiiii() called");
    return 0;
}

/* Demangled: RadioImpl::checkReturnStatus(android::hardware::Return<void>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void) {
    ALOGD("_ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsVideoEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setImsVideoEnableResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setImsVideoEnableResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::writeUPBGrpEntry(int, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16writeUPBGrpEntryEiiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN14MtkRadioExImpl16writeUPBGrpEntryEiiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setServiceStateToModem(int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22setServiceStateToModemEiiiiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl22setServiceStateToModemEiiiiiii() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::CdmaBroadcastSmsConfigInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE(void) {
    ALOGD("_ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setModemImsCfgResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22setModemImsCfgResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22setModemImsCfgResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setNetworkSelectionModeManual_1_5(int, android::hardware::hidl_string const&, android::hardware::radio::V1_5::RadioAccessNetworks) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl33setNetworkSelectionModeManual_1_5EiRKN7android8hardware11hidl_stringENS1_5radio4V1_519RadioAccessNetworksE(void) {
    ALOGD("_ZN9RadioImpl33setNetworkSelectionModeManual_1_5EiRKN7android8hardware11hidl_stringENS1_5radio4V1_519RadioAccessNetworksE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimRecovery(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13onSimRecoveryEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13onSimRecoveryEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::resetMdDataRetryCount(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21resetMdDataRetryCountEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl21resetMdDataRetryCountEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::setSimCardPower(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15setSimCardPowerEib(void) {
    ALOGD("_ZN9RadioImpl15setSimCardPowerEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWifiRoveout(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13onWifiRoveoutEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13onWifiRoveoutEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWifiPingResultResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setWifiPingResultResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setWifiPingResultResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::queryUPBCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26queryUPBCapabilityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26queryUPBCapabilityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchCallForwardStatus(int, int, int, android::hardware::radio::V1_0::CallForwardInfo const&) */
extern "C" __attribute__((visibility("default"))) int _Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE(void) {
    ALOGD("_Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getSmartRatSwitch(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17getSmartRatSwitchEii(void) {
    ALOGD("_ZN14MtkRadioExImpl17getSmartRatSwitchEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getCallSubAddress(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17getCallSubAddressEi(void) {
    ALOGD("_ZN14MtkRadioExImpl17getCallSubAddressEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-MtkRadioExImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC14MtkRadioExImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: mtkRadioEx::getSmsParametersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24getSmsParametersResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24getSmsParametersResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setDataAllowedResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setDataAllowedResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22setDataAllowedResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readUPBAnrEntry(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15readUPBAnrEntryEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl15readUPBAnrEntryEiii() called");
    return 0;
}

/* Demangled: RadioImpl::sendEnvelopeWithStatus(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkradioex::V2_0::IMtkRadioEx-in-MtkRadioExImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC14MtkRadioExImpl0_N6vendor8mediatek8hardware10mtkradioex4V2_011IMtkRadioExE = NULL;

/* Demangled: mtkRadioEx::imsVtDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17imsVtDialResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17imsVtDialResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onImsiRefreshDone(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onImsiRefreshDoneEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onImsiRefreshDoneEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getIMSIForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21getIMSIForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21getIMSIForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setEmergencyAddressId(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21setEmergencyAddressIdEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl21setEmergencyAddressIdEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::controlImsConferenceCallMember(int, int, int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl30controlImsConferenceCallMemberEiiiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN14MtkRadioExImpl30controlImsConferenceCallMemberEiiiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: radio::resendIncallMuteInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19resendIncallMuteIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19resendIncallMuteIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilSignalStrengthToHal_1_2(void const*, unsigned long, android::hardware::radio::V1_2::SignalStrength&) */
extern "C" __attribute__((visibility("default"))) int _Z33convertRilSignalStrengthToHal_1_2PKvmRN7android8hardware5radio4V1_214SignalStrengthE(void) {
    ALOGD("_Z33convertRilSignalStrengthToHal_1_2PKvmRN7android8hardware5radio4V1_214SignalStrengthE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsBearerNotification(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24setImsBearerNotificationEii(void) {
    ALOGD("_ZN14MtkRadioExImpl24setImsBearerNotificationEii() called");
    return 0;
}

/* Demangled: RadioImpl::getLastCallFailCause(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getLastCallFailCauseEi(void) {
    ALOGD("_ZN9RadioImpl20getLastCallFailCauseEi() called");
    return 0;
}

/* Demangled: pb_skip_field */
extern "C" __attribute__((visibility("default"))) int pb_skip_field(void) {
    ALOGD("pb_skip_field() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::onRsuSimLockEvent(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onRsuSimLockEventEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onRsuSimLockEventEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDeregNotificationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28imsDeregNotificationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28imsDeregNotificationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getHardwareConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25getHardwareConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25getHardwareConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendSMSExpectMoreResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25sendSMSExpectMoreResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio25sendSMSExpectMoreResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::explicitCallTransferResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28explicitCallTransferResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28explicitCallTransferResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::acknowledgeLastIncomingCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsAck const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE(void) {
    ALOGD("_ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE() called");
    return 0;
}

/* Demangled: sapDecodeMessage(_MsgId, _MsgType, unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z16sapDecodeMessage6_MsgId8_MsgTypePhm(void) {
    ALOGD("_Z16sapDecodeMessage6_MsgId8_MsgTypePhm() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: radio::iccOpenLogicalChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29iccOpenLogicalChannelResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29iccOpenLogicalChannelResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::networkRejectCauseInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21networkRejectCauseIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21networkRejectCauseIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25getProvisionValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25getProvisionValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::readPhoneBookEntryExtResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29readPhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29readPhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setBandModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19setBandModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19setBandModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: vtable for RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV9RadioImpl = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-RadioConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC15RadioConfigImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __ubsan_handle_missing_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_missing_return_minimal(void) {
    ALOGD("__ubsan_handle_missing_return_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::pullCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16pullCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16pullCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::econfResultIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24econfResultIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24econfResultIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendImsSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18sendImsSmsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18sendImsSmsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal_abort(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal() called");
    return 0;
}

/* Exported Object: vtable for RilSapSocket */
extern "C" __attribute__((visibility("default"))) void* _ZTV12RilSapSocket = NULL;

/* Demangled: MtkRadioExImpl::readUPBAasList(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14readUPBAasListEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl14readUPBAasListEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::checkReturnStatusMtk(android::hardware::Return<void>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20checkReturnStatusMtkERN7android8hardware6ReturnIvEEj(void) {
    ALOGD("_ZN14MtkRadioExImpl20checkReturnStatusMtkERN7android8hardware6ReturnIvEEj() called");
    return 0;
}

/* Demangled: RadioImpl::setSuppServiceNotifications(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl27setSuppServiceNotificationsEib(void) {
    ALOGD("_ZN9RadioImpl27setSuppServiceNotificationsEib() called");
    return 0;
}

/* Demangled: RadioImpl::getClip(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7getClipEi(void) {
    ALOGD("_ZN9RadioImpl7getClipEi() called");
    return 0;
}

/* Demangled: radio::getVoiceRegistrationStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33getVoiceRegistrationStateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33getVoiceRegistrationStateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: fillCellIdentityResponse(android::hardware::radio::V1_0::CellIdentity&, RIL_CellIdentity_v16&) */
extern "C" __attribute__((visibility("default"))) int _Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16(void) {
    ALOGD("_Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getXcapStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13getXcapStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl13getXcapStatusEi() called");
    return 0;
}

/* Demangled: RadioImpl::setPreferredNetworkType(int, android::hardware::radio::V1_0::PreferredNetworkType) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE(void) {
    ALOGD("_ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE() called");
    return 0;
}

/* Demangled: mtkRadioEx::onLocationRequest(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onLocationRequestEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onLocationRequestEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::eccPreferredRatResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23eccPreferredRatResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23eccPreferredRatResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::abortCertificateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24abortCertificateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24abortCertificateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getRoamingEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24getRoamingEnableResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24getRoamingEnableResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getSmartRatSwitchResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25getSmartRatSwitchResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25getSmartRatSwitchResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::stkSessionEndInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16stkSessionEndIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio16stkSessionEndIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: requestToString */
extern "C" __attribute__((visibility("default"))) int requestToString(void) {
    ALOGD("requestToString() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::imsDeregNotification(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20imsDeregNotificationEii(void) {
    ALOGD("_ZN14MtkRadioExImpl20imsDeregNotificationEii() called");
    return 0;
}

/* Demangled: ril_event_add(ril_event*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_event_addP9ril_event(void) {
    ALOGD("_Z13ril_event_addP9ril_event() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getPhoneBookStringsLength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl25getPhoneBookStringsLengthEi(void) {
    ALOGD("_ZN14MtkRadioExImpl25getPhoneBookStringsLengthEi() called");
    return 0;
}

/* Demangled: RIL_startEventLoop */
extern "C" __attribute__((visibility("default"))) int RIL_startEventLoop(void) {
    ALOGD("RIL_startEventLoop() called");
    return 0;
}

/* Demangled: mtkRadioEx::setResumeRegistrationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29setResumeRegistrationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29setResumeRegistrationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchVsimEvent(int, int, int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17dispatchVsimEventiiijjj(void) {
    ALOGD("_Z17dispatchVsimEventiiijjj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWifiSignalLevel(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18setWifiSignalLevelEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl18setWifiSignalLevelEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getGsmBroadcastLangs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20getGsmBroadcastLangsEi(void) {
    ALOGD("_ZN14MtkRadioExImpl20getGsmBroadcastLangsEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal_abort(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::enableSCGfailureResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24enableSCGfailureResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24enableSCGfailureResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: toRealSlot */
extern "C" __attribute__((visibility("default"))) int toRealSlot(void) {
    ALOGD("toRealSlot() called");
    return 0;
}

/* Demangled: RadioImpl::setCellInfoListRate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setCellInfoListRateEii(void) {
    ALOGD("_ZN9RadioImpl19setCellInfoListRateEii() called");
    return 0;
}

/* Demangled: radio::callRingInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio11callRingIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio11callRingIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setNetworkLock(int, int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14setNetworkLockEiiiRKN7android8hardware11hidl_stringES4_S4_S4_(void) {
    ALOGD("_ZN14MtkRadioExImpl14setNetworkLockEiiiRKN7android8hardware11hidl_stringES4_S4_S4_() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::eccNumIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16eccNumIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16eccNumIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onCardDetectedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onCardDetectedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onCardDetectedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::stopKeepaliveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21stopKeepaliveResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21stopKeepaliveResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setAllowedCarriersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setAllowedCarriersResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26setAllowedCarriersResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::writePhbEntry(int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryStructure const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13writePhbEntryEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE(void) {
    ALOGD("_ZN14MtkRadioExImpl13writePhbEntryEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendWifiEnabled(int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15sendWifiEnabledEiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN14MtkRadioExImpl15sendWifiEnabledEiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::setCallForwardInTimeSlotResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32setCallForwardInTimeSlotResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32setCallForwardInTimeSlotResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::stopDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16stopDtmfResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio16stopDtmfResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getCurrentCallsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23getCurrentCallsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23getCurrentCallsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getVoiceRadioTechnologyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getVoiceRadioTechnologyResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio31getVoiceRadioTechnologyResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setPOLEntry(int, int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11setPOLEntryEiiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN14MtkRadioExImpl11setPOLEntryEiiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setFemtoCellSystemSelectionMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl31setFemtoCellSystemSelectionModeEii(void) {
    ALOGD("_ZN14MtkRadioExImpl31setFemtoCellSystemSelectionModeEii() called");
    return 0;
}

/* Demangled: convertPowerResponseProtoToHal(_RIL_SIM_SAP_POWER_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response(void) {
    ALOGD("_Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response() called");
    return 0;
}

/* Demangled: pb_encode_varint */
extern "C" __attribute__((visibility("default"))) int pb_encode_varint(void) {
    ALOGD("pb_encode_varint() called");
    return 0;
}

/* Demangled: radio::exitEmergencyCallbackModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33exitEmergencyCallbackModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33exitEmergencyCallbackModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: android::addRequestToList(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16addRequestToListEiii(void) {
    ALOGD("_ZN7android16addRequestToListEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsCfgProvisionValue(int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setImsCfgProvisionValueEiiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setImsCfgProvisionValueEiiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::setInitialAttachApn_1_4(int, android::hardware::radio::V1_4::DataProfileInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23setInitialAttachApn_1_4EiRKN7android8hardware5radio4V1_415DataProfileInfoE(void) {
    ALOGD("_ZN9RadioImpl23setInitialAttachApn_1_4EiRKN7android8hardware5radio4V1_415DataProfileInfoE() called");
    return 0;
}

/* Exported Object: VTT for MtkRadioExImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT14MtkRadioExImpl = NULL;

/* Demangled: radio::getCdmaRoamingPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32getCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio32getCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::sendUssd(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::crssNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13crssNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13crssNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sipCallProgressIndicatorInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx27sipCallProgressIndicatorIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx27sipCallProgressIndicatorIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setRemoveRestrictEutranModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx35setRemoveRestrictEutranModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx35setRemoveRestrictEutranModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getDataCallListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23getDataCallListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23getDataCallListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getEccNumResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17getEccNumResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17getEccNumResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setSimCardPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23setSimCardPowerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23setSimCardPowerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::unlockRadioServiceWlock(pthread_rwlock_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23unlockRadioServiceWlockEP16pthread_rwlock_ti(void) {
    ALOGD("_ZN5radio23unlockRadioServiceWlockEP16pthread_rwlock_ti() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIlEE = NULL;

/* Demangled: radio::nvWriteCdmaPrlResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22nvWriteCdmaPrlResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22nvWriteCdmaPrlResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::unlockRadioServiceRlock(pthread_rwlock_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23unlockRadioServiceRlockEP16pthread_rwlock_ti(void) {
    ALOGD("_ZN5radio23unlockRadioServiceRlockEP16pthread_rwlock_ti() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: convertRilCellInfoListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::CellInfo>&) */
extern "C" __attribute__((visibility("default"))) int _Z27convertRilCellInfoListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_08CellInfoEEE(void) {
    ALOGD("_Z27convertRilCellInfoListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_08CellInfoEEE() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::onTxPowerIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19onTxPowerIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19onTxPowerIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsCfgFeatureChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23imsCfgFeatureChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23imsCfgFeatureChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getCDMASubscriptionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27getCDMASubscriptionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27getCDMASubscriptionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWifiEnabled(int, android::hardware::hidl_string const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14setWifiEnabledEiRKN7android8hardware11hidl_stringEii(void) {
    ALOGD("_ZN14MtkRadioExImpl14setWifiEnabledEiRKN7android8hardware11hidl_stringEii() called");
    return 0;
}

/* Demangled: RadioImpl::separateConnection(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18separateConnectionEii(void) {
    ALOGD("_ZN9RadioImpl18separateConnectionEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsEventPackageIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28imsEventPackageIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28imsEventPackageIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioConfig::simSlotStatusChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig23simSlotStatusChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN11radioConfig23simSlotStatusChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::deactivateDataCall(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18deactivateDataCallEiib(void) {
    ALOGD("_ZN9RadioImpl18deactivateDataCallEiib() called");
    return 0;
}

/* Demangled: mtkRadioEx::triggerModeSwitchByEccResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30triggerModeSwitchByEccResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30triggerModeSwitchByEccResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSearchStoredFreqInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31setSearchStoredFreqInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31setSearchStoredFreqInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setMuteResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15setMuteResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15setMuteResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setUiccSubscriptionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setUiccSubscriptionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27setUiccSubscriptionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchSmsParametrs(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::SmsParams const&) */
extern "C" __attribute__((visibility("default"))) int _Z20dispatchSmsParametrsiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE(void) {
    ALOGD("_Z20dispatchSmsParametrsiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setBarringPasswordCheckedByNW(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl29setBarringPasswordCheckedByNWEiRKN7android8hardware11hidl_stringES4_S4_S4_(void) {
    ALOGD("_ZN14MtkRadioExImpl29setBarringPasswordCheckedByNWEiRKN7android8hardware11hidl_stringES4_S4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::getDataCallList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15getDataCallListEi(void) {
    ALOGD("_ZN9RadioImpl15getDataCallListEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsEctCommandResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21imsEctCommandResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21imsEctCommandResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setModemPower(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13setModemPowerEib(void) {
    ALOGD("_ZN14MtkRadioExImpl13setModemPowerEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::setVoicePreferStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28setVoicePreferStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28setVoicePreferStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::keepaliveStatusInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18keepaliveStatusIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18keepaliveStatusIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getPreferredVoicePrivacy(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24getPreferredVoicePrivacyEi(void) {
    ALOGD("_ZN9RadioImpl24getPreferredVoicePrivacyEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_1::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_16IRadioE = NULL;

/* Exported Object: VTT for SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT7SapImpl = NULL;

/* Demangled: mtkRadioEx::setApcModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18setApcModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18setApcModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::restartRILDResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19restartRILDResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19restartRILDResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::RilSapSocket(char const*, unsigned int, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocketC2EPKcjPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocketC2EPKcjPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: RadioImpl::getPreferredNetworkTypeBitmap(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29getPreferredNetworkTypeBitmapEi(void) {
    ALOGD("_ZN9RadioImpl29getPreferredNetworkTypeBitmapEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::setFemtoCellSystemSelectionModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx39setFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx39setFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::dispatchRequest(_MsgHeader*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket15dispatchRequestEP10_MsgHeader(void) {
    ALOGD("_ZN12RilSapSocket15dispatchRequestEP10_MsgHeader() called");
    return 0;
}

/* Demangled: fillCellIdentityResponse_1_2(android::hardware::radio::V1_2::CellIdentity&, RIL_CellIdentity_v16 const&) */
extern "C" __attribute__((visibility("default"))) int _Z28fillCellIdentityResponse_1_2RN7android8hardware5radio4V1_212CellIdentityERK20RIL_CellIdentity_v16(void) {
    ALOGD("_Z28fillCellIdentityResponse_1_2RN7android8hardware5radio4V1_212CellIdentityERK20RIL_CellIdentity_v16() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::syncDataSettingsToMd(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20syncDataSettingsToMdEiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN14MtkRadioExImpl20syncDataSettingsToMdEiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setPhoneBookMemStorage(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22setPhoneBookMemStorageEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN14MtkRadioExImpl22setPhoneBookMemStorageEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setBgsrchDeltaSleepTimer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24setBgsrchDeltaSleepTimerEii(void) {
    ALOGD("_ZN14MtkRadioExImpl24setBgsrchDeltaSleepTimerEii() called");
    return 0;
}

/* Demangled: RadioImpl::getRadioCapability(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getRadioCapabilityEi(void) {
    ALOGD("_ZN9RadioImpl18getRadioCapabilityEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWfcPdnStateChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20onWfcPdnStateChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20onWfcPdnStateChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setSmsParameters(int, vendor::mediatek::hardware::mtkradioex::V2_0::SmsParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16setSmsParametersEiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE(void) {
    ALOGD("_ZN14MtkRadioExImpl16setSmsParametersEiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendCnapResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16sendCnapResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16sendCnapResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::cfgA2offsetResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19cfgA2offsetResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19cfgA2offsetResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchString(int, int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14dispatchStringiiiPKc(void) {
    ALOGD("_Z14dispatchStringiiiPKc() called");
    return 0;
}

/* Demangled: RadioImpl::getFacilityLockForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_(void) {
    ALOGD("_ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::handleStkCallSetupRequestFromSimWithResCodeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx51handleStkCallSetupRequestFromSimWithResCodeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx51handleStkCallSetupRequestFromSimWithResCodeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::routeAuthMessage(int, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16routeAuthMessageEiiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN14MtkRadioExImpl16routeAuthMessageEiiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: RadioImpl::getAllowedCarriers_1_4(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22getAllowedCarriers_1_4Ei(void) {
    ALOGD("_ZN9RadioImpl22getAllowedCarriers_1_4Ei() called");
    return 0;
}

/* Demangled: mtkRadioEx::acknowledgeLastIncomingGsmSmsExResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx39acknowledgeLastIncomingGsmSmsExResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx39acknowledgeLastIncomingGsmSmsExResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getATR(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl6getATREi(void) {
    ALOGD("_ZN14MtkRadioExImpl6getATREi() called");
    return 0;
}

/* Demangled: radio::getCellInfoListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23getCellInfoListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23getCellInfoListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setCallForwardInTimeSlot(int, vendor::mediatek::hardware::mtkradioex::V2_0::CallForwardInfoEx const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24setCallForwardInTimeSlotEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE(void) {
    ALOGD("_ZN14MtkRadioExImpl24setCallForwardInTimeSlotEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE() called");
    return 0;
}

/* Demangled: RadioImpl::getDeviceIdentity(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17getDeviceIdentityEi(void) {
    ALOGD("_ZN9RadioImpl17getDeviceIdentityEi() called");
    return 0;
}

/* Demangled: RadioImpl::setupDataCall_1_5(int, android::hardware::radio::V1_5::AccessNetwork, android::hardware::radio::V1_5::DataProfileInfo const&, bool, android::hardware::radio::V1_2::DataRequestReason, android::hardware::hidl_vec<android::hardware::radio::V1_5::LinkAddress> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17setupDataCall_1_5EiN7android8hardware5radio4V1_513AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS3_11LinkAddressEEERKNSA_INS1_11hidl_stringEEE(void) {
    ALOGD("_ZN9RadioImpl17setupDataCall_1_5EiN7android8hardware5radio4V1_513AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS3_11LinkAddressEEERKNSA_INS1_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: RadioImpl::setInitialAttachApn(int, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb(void) {
    ALOGD("_ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb() called");
    return 0;
}

/* Demangled: radio::getCdmaSubscriptionSourceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33getCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33getCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilDataCallToHalEx_1_4(MTK_RIL_Data_Call_Response_v11*, android::hardware::radio::V1_4::SetupDataCallResult&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29convertRilDataCallToHalEx_1_4P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_419SetupDataCallResultEj(void) {
    ALOGD("_Z29convertRilDataCallToHalEx_1_4P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_419SetupDataCallResultEj() called");
    return 0;
}

/* Demangled: RadioImpl::startLceService(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15startLceServiceEiib(void) {
    ALOGD("_ZN9RadioImpl15startLceServiceEiib() called");
    return 0;
}

/* Demangled: mtkRadioEx::onDsbpStateChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18onDsbpStateChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18onDsbpStateChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::rttModifyResponseInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20rttModifyResponseIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20rttModifyResponseIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::selectFemtocellResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23selectFemtocellResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23selectFemtocellResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getCdmaBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30getCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio30getCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchSearchRat(int, int, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _Z17dispatchSearchRatiiiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_Z17dispatchSearchRatiiiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsCallMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14setImsCallModeEii(void) {
    ALOGD("_ZN14MtkRadioExImpl14setImsCallModeEii() called");
    return 0;
}

/* Demangled: RadioImpl::getClir(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7getClirEi(void) {
    ALOGD("_ZN9RadioImpl7getClirEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::responseCsNetworkStateChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31responseCsNetworkStateChangeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31responseCsNetworkStateChangeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::cdmaInfoRecInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio14cdmaInfoRecIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio14cdmaInfoRecIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setWfcConfig(int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12setWfcConfigEiiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN14MtkRadioExImpl12setWfcConfigEiiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: radio::hardwareConfigChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24hardwareConfigChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio24hardwareConfigChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setCallForward(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void) {
    ALOGD("_ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::getGsmBroadcastConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getGsmBroadcastConfigEi(void) {
    ALOGD("_ZN9RadioImpl21getGsmBroadcastConfigEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::getApcInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18getApcInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18getApcInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::dataAllowedNotificationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26dataAllowedNotificationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26dataAllowedNotificationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSipHeaderReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26setSipHeaderReportResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26setSipHeaderReportResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getImsCfgResourceCapValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx33getImsCfgResourceCapValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx33getImsCfgResourceCapValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::deactivateNrScgCommunicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx36deactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx36deactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setRttMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl10setRttModeEii(void) {
    ALOGD("_ZN14MtkRadioExImpl10setRttModeEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::setRttModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18setRttModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18setRttModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setLocationInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23setLocationInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23setLocationInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::simSmsStorageFullInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20simSmsStorageFullIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio20simSmsStorageFullIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilOpProxy::getOpHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10RilOpProxy12getOpHandlerEv(void) {
    ALOGD("_ZN10RilOpProxy12getOpHandlerEv() called");
    return 0;
}

/* Exported Object: RilOpProxy::sDlOpHandler */
extern "C" __attribute__((visibility("default"))) void* _ZN10RilOpProxy12sDlOpHandlerE = NULL;

/* Demangled: mtkRadioEx::readUPBSneEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23readUPBSneEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23readUPBSneEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setVoiceDomainPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32setVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32setVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::conferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18conferenceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18conferenceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::indicateRingbackToneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23indicateRingbackToneIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23indicateRingbackToneIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::reportSmsMemoryStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29reportSmsMemoryStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29reportSmsMemoryStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setImsRegistrationReport(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24setImsRegistrationReportEi(void) {
    ALOGD("_ZN14MtkRadioExImpl24setImsRegistrationReportEi() called");
    return 0;
}

/* Demangled: RadioImpl::setLinkCapacityReportingCriteria(int, int, int, int, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<int> const&, android::hardware::radio::V1_2::AccessNetwork) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32setLinkCapacityReportingCriteriaEiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_213AccessNetworkE(void) {
    ALOGD("_ZN9RadioImpl32setLinkCapacityReportingCriteriaEiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_213AccessNetworkE() called");
    return 0;
}

/* Demangled: pb_close_string_substream */
extern "C" __attribute__((visibility("default"))) int pb_close_string_substream(void) {
    ALOGD("pb_close_string_substream() called");
    return 0;
}

/* Demangled: mtkRadioEx::getCallSubAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25getCallSubAddressResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25getCallSubAddressResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertIntToRadioIndicationType(int) */
extern "C" __attribute__((visibility("default"))) int _Z31convertIntToRadioIndicationTypei(void) {
    ALOGD("_Z31convertIntToRadioIndicationTypei() called");
    return 0;
}

/* Demangled: RadioImpl::startDtmf(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsBearerStateConfirmResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29imsBearerStateConfirmResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29imsBearerStateConfirmResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::modemResetInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13modemResetIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio13modemResetIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::writePhoneBookEntryExtResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30writePhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30writePhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::hangupWaitingOrBackgroundResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33hangupWaitingOrBackgroundResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33hangupWaitingOrBackgroundResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::addSocketToList(char const*, unsigned int, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket15addSocketToListEPKcjPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocket15addSocketToListEPKcjPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getSmsMemStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15getSmsMemStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl15getSmsMemStatusEi() called");
    return 0;
}

/* Demangled: convertTransferCardReaderStatusResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response(void) {
    ALOGD("_Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSimPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19setSimPowerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19setSimPowerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::acceptCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18acceptCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18acceptCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::queryUPBAvailable(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17queryUPBAvailableEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl17queryUPBAvailableEiii() called");
    return 0;
}

/* Demangled: SapImpl::transferAtrReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl14transferAtrReqEi(void) {
    ALOGD("_ZN7SapImpl14transferAtrReqEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::setFdModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17setFdModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17setFdModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::vtDialWithSipUri(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16vtDialWithSipUriEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl16vtDialWithSipUriEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendEmbmsAtCommand(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18sendEmbmsAtCommandEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl18sendEmbmsAtCommandEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::stopLceService(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14stopLceServiceEi(void) {
    ALOGD("_ZN9RadioImpl14stopLceServiceEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::modifyModemTypeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23modifyModemTypeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23modifyModemTypeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::triggerModeSwitchByEcc(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22triggerModeSwitchByEccEii(void) {
    ALOGD("_ZN14MtkRadioExImpl22triggerModeSwitchByEccEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsSupportEccInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16imsSupportEccIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16imsSupportEccIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendAtciResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16sendAtciResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16sendAtciResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setBarringPasswordResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setBarringPasswordResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26setBarringPasswordResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: void freeSetDataProfileData<RIL_DataProfileInfo>(int, RIL_DataProfileInfo*, RIL_DataProfileInfo**, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz(void) {
    ALOGD("_Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz() called");
    return 0;
}

/* Demangled: mtkRadioEx::networkBandInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18networkBandInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18networkBandInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setTrm(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl6setTrmEii(void) {
    ALOGD("_ZN14MtkRadioExImpl6setTrmEii() called");
    return 0;
}

/* Demangled: RadioImpl::supplyNetworkDepersonalization(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: radio::cdmaPrlChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio17cdmaPrlChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio17cdmaPrlChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: checkReturnStatusMtk(unsigned int, android::hardware::Return<void>&, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20checkReturnStatusMtkjRN7android8hardware6ReturnIvEEbj(void) {
    ALOGD("_Z20checkReturnStatusMtkjRN7android8hardware6ReturnIvEEbj() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDisableDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17imsDisableDoneIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17imsDisableDoneIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::subscriptionStatusChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28subscriptionStatusChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28subscriptionStatusChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::switchWaitingOrHoldingAndActiveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio39switchWaitingOrHoldingAndActiveResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio39switchWaitingOrHoldingAndActiveResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getAvailableNetworks(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getAvailableNetworksEi(void) {
    ALOGD("_ZN9RadioImpl20getAvailableNetworksEi() called");
    return 0;
}

/* Demangled: RadioImpl::getAvailableBandModes(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getAvailableBandModesEi(void) {
    ALOGD("_ZN9RadioImpl21getAvailableBandModesEi() called");
    return 0;
}

/* Demangled: RadioImpl::iccCloseLogicalChannel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22iccCloseLogicalChannelEii(void) {
    ALOGD("_ZN9RadioImpl22iccCloseLogicalChannelEii() called");
    return 0;
}

/* Demangled: pb_decode */
extern "C" __attribute__((visibility("default"))) int pb_decode(void) {
    ALOGD("pb_decode() called");
    return 0;
}

/* Demangled: mtkRadioEx::getFemtocellListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24getFemtocellListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24getFemtocellListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getGsmBroadcastActivationRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28getGsmBroadcastActivationRspEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28getGsmBroadcastActivationRspEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::cdmaNewSmsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13cdmaNewSmsIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio13cdmaNewSmsIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::newBroadcastSmsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18newBroadcastSmsIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18newBroadcastSmsIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::resetAllConnections(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl19resetAllConnectionsEi(void) {
    ALOGD("_ZN14MtkRadioExImpl19resetAllConnectionsEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendRttModifyRequest(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20sendRttModifyRequestEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl20sendRttModifyRequestEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getColp(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl7getColpEi(void) {
    ALOGD("_ZN14MtkRadioExImpl7getColpEi() called");
    return 0;
}

/* Demangled: RadioImpl::getSignalStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17getSignalStrengthEi(void) {
    ALOGD("_ZN9RadioImpl17getSignalStrengthEi() called");
    return 0;
}

/* Demangled: SapImpl::connectReq(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl10connectReqEii(void) {
    ALOGD("_ZN7SapImpl10connectReqEii() called");
    return 0;
}

/* Demangled: radio::getIccCardStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24getIccCardStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio24getIccCardStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: getCellInfoTypeRadioTechnology(char*) */
extern "C" __attribute__((visibility("default"))) int _Z30getCellInfoTypeRadioTechnologyPc(void) {
    ALOGD("_Z30getCellInfoTypeRadioTechnologyPc() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getCurrentPOLList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17getCurrentPOLListEi(void) {
    ALOGD("_ZN14MtkRadioExImpl17getCurrentPOLListEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendWifiIpAddress(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17sendWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_(void) {
    ALOGD("_ZN14MtkRadioExImpl17sendWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_() called");
    return 0;
}

/* Demangled: RadioImpl::explicitCallTransfer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20explicitCallTransferEi(void) {
    ALOGD("_ZN9RadioImpl20explicitCallTransferEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::currentSignalStrengthWithWcdmaEcioInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx37currentSignalStrengthWithWcdmaEcioIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx37currentSignalStrengthWithWcdmaEcioIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getSignalStrength_1_4(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getSignalStrength_1_4Ei(void) {
    ALOGD("_ZN9RadioImpl21getSignalStrength_1_4Ei() called");
    return 0;
}

/* Demangled: mtkRadioEx::writeUPBGrpEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24writeUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24writeUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setTTYModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18setTTYModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18setTTYModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::handleStkCallSetupRequestFromSimWithResCode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl43handleStkCallSetupRequestFromSimWithResCodeEii(void) {
    ALOGD("_ZN14MtkRadioExImpl43handleStkCallSetupRequestFromSimWithResCodeEii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setFdMode(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl9setFdModeEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl9setFdModeEiiii() called");
    return 0;
}

/* Demangled: RadioImpl::startNetworkScan_1_2(int, android::hardware::radio::V1_2::NetworkScanRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20startNetworkScan_1_2EiRKN7android8hardware5radio4V1_218NetworkScanRequestE(void) {
    ALOGD("_ZN9RadioImpl20startNetworkScan_1_2EiRKN7android8hardware5radio4V1_218NetworkScanRequestE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setKeepAliveByPDCPCtrlPDU(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl25setKeepAliveByPDCPCtrlPDUEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl25setKeepAliveByPDCPCtrlPDUEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::cancelPendingUssd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17cancelPendingUssdEi(void) {
    ALOGD("_ZN9RadioImpl17cancelPendingUssdEi() called");
    return 0;
}

/* Demangled: RadioImpl::handleStkCallSetupRequestFromSim(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32handleStkCallSetupRequestFromSimEib(void) {
    ALOGD("_ZN9RadioImpl32handleStkCallSetupRequestFromSimEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::rttModifyRequestReceiveInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26rttModifyRequestReceiveIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26rttModifyRequestReceiveIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::getSocketById(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket13getSocketByIdEj(void) {
    ALOGD("_ZN12RilSapSocket13getSocketByIdEj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::notifyEPDGScreenState(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl21notifyEPDGScreenStateEii(void) {
    ALOGD("_ZN14MtkRadioExImpl21notifyEPDGScreenStateEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::audioIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18audioIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18audioIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setEmergencyAddressIdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29setEmergencyAddressIdResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29setEmergencyAddressIdResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15sendSmsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15sendSmsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendCnap(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl8sendCnapEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl8sendCnapEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDialogIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22imsDialogIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22imsDialogIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::dedicatedBearerActivationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28dedicatedBearerActivationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28dedicatedBearerActivationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: SapImpl::apduReq(int, android::hardware::radio::V1_0::SapApduType, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE(void) {
    ALOGD("_ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::multiImsCountInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16multiImsCountIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16multiImsCountIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioConfig::setPreferredDataModemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig29setPreferredDataModemResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN11radioConfig29setPreferredDataModemResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: pb_encode_submessage */
extern "C" __attribute__((visibility("default"))) int pb_encode_submessage(void) {
    ALOGD("pb_encode_submessage() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaBroadcastActivation(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl26setCdmaBroadcastActivationEib(void) {
    ALOGD("_ZN9RadioImpl26setCdmaBroadcastActivationEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::controlCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19controlCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19controlCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getPhoneBookStringsLengthResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx33getPhoneBookStringsLengthResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx33getPhoneBookStringsLengthResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::nvResetConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21nvResetConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21nvResetConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb(void) {
    ALOGD("_Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getDeactivateNrScgCommunication(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl31getDeactivateNrScgCommunicationEi(void) {
    ALOGD("_ZN14MtkRadioExImpl31getDeactivateNrScgCommunicationEi() called");
    return 0;
}

/* Demangled: RadioImpl::switchWaitingOrHoldingAndActive(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi(void) {
    ALOGD("_ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::esnMeidChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16esnMeidChangeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16esnMeidChangeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::startLceServiceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23startLceServiceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23startLceServiceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::deactivateDataCall_1_2(int, int, android::hardware::radio::V1_2::DataRequestReason) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22deactivateDataCall_1_2EiiN7android8hardware5radio4V1_217DataRequestReasonE(void) {
    ALOGD("_ZN9RadioImpl22deactivateDataCall_1_2EiiN7android8hardware5radio4V1_217DataRequestReasonE() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::setBgsrchDeltaSleepTimerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32setBgsrchDeltaSleepTimerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32setBgsrchDeltaSleepTimerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setPreferredNetworkTypeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31setPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio31setPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setEccNum(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl9setEccNumEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN14MtkRadioExImpl9setEccNumEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: mtkRadioEx::readUPBGrpEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23readUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23readUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsRtpReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23setImsRtpReportResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23setImsRtpReportResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsCfgDynamicImsSwitchCompleteInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx33imsCfgDynamicImsSwitchCompleteIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx33imsCfgDynamicImsSwitchCompleteIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setPreferredVoicePrivacyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32setPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio32setPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: pb_encode_string */
extern "C" __attribute__((visibility("default"))) int pb_encode_string(void) {
    ALOGD("pb_encode_string() called");
    return 0;
}

/* Demangled: mtkRadioEx::rttCapabilityIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26rttCapabilityIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26rttCapabilityIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::acknowledgeLastIncomingCdmaSmsExResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx40acknowledgeLastIncomingCdmaSmsExResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx40acknowledgeLastIncomingCdmaSmsExResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setClirResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15setClirResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15setClirResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::enableModemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19enableModemResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19enableModemResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getCallWaitingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22getCallWaitingResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22getCallWaitingResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::cdmaSubscriptionSourceChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32cdmaSubscriptionSourceChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio32cdmaSubscriptionSourceChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setServiceStateToModemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30setServiceStateToModemResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30setServiceStateToModemResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::reportStkServiceIsRunning(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25reportStkServiceIsRunningEi(void) {
    ALOGD("_ZN9RadioImpl25reportStkServiceIsRunningEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::resetAttachApnInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17resetAttachApnIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17resetAttachApnIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getSmscAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22getSmscAddressResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22getSmscAddressResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendTerminalResponseToSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33sendTerminalResponseToSimResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33sendTerminalResponseToSimResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilOpProxy::getOpUnsolResponseInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10RilOpProxy22getOpUnsolResponseInfoEi(void) {
    ALOGD("_ZN10RilOpProxy22getOpUnsolResponseInfoEi() called");
    return 0;
}

/* Demangled: dispatchCallForwardInTimeSlotStatus(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::CallForwardInfoEx const&) */
extern "C" __attribute__((visibility("default"))) int _Z35dispatchCallForwardInTimeSlotStatusiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE(void) {
    ALOGD("_Z35dispatchCallForwardInTimeSlotStatusiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE() called");
    return 0;
}

/* Demangled: RadioImpl::stopKeepalive(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13stopKeepaliveEii(void) {
    ALOGD("_ZN9RadioImpl13stopKeepaliveEii() called");
    return 0;
}

/* Exported Object: mCounterRadio */
extern "C" __attribute__((visibility("default"))) void* mCounterRadio = NULL;

/* Demangled: mtkRadioEx::queryNetworkLockResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24queryNetworkLockResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24queryNetworkLockResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::startDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio17startDtmfResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio17startDtmfResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: pb_field_iter_begin */
extern "C" __attribute__((visibility("default"))) int pb_field_iter_begin(void) {
    ALOGD("pb_field_iter_begin() called");
    return 0;
}

/* Demangled: pb_encode_nullterminated */
extern "C" __attribute__((visibility("default"))) int pb_encode_nullterminated(void) {
    ALOGD("pb_encode_nullterminated() called");
    return 0;
}

/* Demangled: mtkRadioEx::setWifiEnabledResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22setWifiEnabledResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22setWifiEnabledResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: callStateToString */
extern "C" __attribute__((visibility("default"))) int callStateToString(void) {
    ALOGD("callStateToString() called");
    return 0;
}

/* Demangled: RadioImpl::sendDtmf(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: pb_read */
extern "C" __attribute__((visibility("default"))) int pb_read(void) {
    ALOGD("pb_read() called");
    return 0;
}

/* Demangled: mtkRadioEx::onStkMenuResetInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onStkMenuResetIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onStkMenuResetIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::callmodChangeIndicatorInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25callmodChangeIndicatorIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25callmodChangeIndicatorIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::stkCallSetupInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15stkCallSetupIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15stkCallSetupIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: isServiceTypeCfQuery(RIL_SsServiceType, RIL_SsRequestType) */
extern "C" __attribute__((visibility("default"))) int _Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType(void) {
    ALOGD("_Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType() called");
    return 0;
}

/* Demangled: RadioImpl::setAllowedCarriers_1_4(int, android::hardware::radio::V1_4::CarrierRestrictionsWithPriority const&, android::hardware::radio::V1_4::SimLockMultiSimPolicy) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22setAllowedCarriers_1_4EiRKN7android8hardware5radio4V1_431CarrierRestrictionsWithPriorityENS3_21SimLockMultiSimPolicyE(void) {
    ALOGD("_ZN9RadioImpl22setAllowedCarriers_1_4EiRKN7android8hardware5radio4V1_431CarrierRestrictionsWithPriorityENS3_21SimLockMultiSimPolicyE() called");
    return 0;
}

/* Demangled: mtkRadioEx::onMdDataRetryCountReset(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23onMdDataRetryCountResetEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23onMdDataRetryCountResetEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getPreferredNetworkTypeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio31getPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal() called");
    return 0;
}

/* Demangled: radio::supplySimDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio34supplySimDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio34supplySimDepersonalizationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setupDataCall_1_2(int, android::hardware::radio::V1_2::AccessNetwork, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool, bool, android::hardware::radio::V1_2::DataRequestReason, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17setupDataCall_1_2EiN7android8hardware5radio4V1_213AccessNetworkERKNS2_4V1_015DataProfileInfoEbbbNS3_17DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_(void) {
    ALOGD("_ZN9RadioImpl17setupDataCall_1_2EiN7android8hardware5radio4V1_213AccessNetworkERKNS2_4V1_015DataProfileInfoEbbbNS3_17DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_() called");
    return 0;
}

/* Demangled: RadioImpl::changeIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::setLocationUpdates(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setLocationUpdatesEib(void) {
    ALOGD("_ZN9RadioImpl18setLocationUpdatesEib() called");
    return 0;
}

/* Demangled: mtkRadioEx::supplyDeviceNetworkDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx44supplyDeviceNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx44supplyDeviceNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertOperatorStatusToInt(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26convertOperatorStatusToIntPKc(void) {
    ALOGD("_Z26convertOperatorStatusToIntPKc() called");
    return 0;
}

/* Demangled: RadioImpl::setIndicationFilter(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setIndicationFilterEii(void) {
    ALOGD("_ZN9RadioImpl19setIndicationFilterEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::hangupAllResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17hangupAllResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17hangupAllResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::activateUiccCardRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19activateUiccCardRspEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19activateUiccCardRspEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setNetworkSelectionModeManualWithActResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx44setNetworkSelectionModeManualWithActResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx44setNetworkSelectionModeManualWithActResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::nvReadItemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18nvReadItemResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18nvReadItemResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: makeSendSmsResult(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void) {
    ALOGD("_Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getLteReleaseVersionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28getLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28getLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::requestIsimAuthenticationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33requestIsimAuthenticationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33requestIsimAuthenticationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: getClientBySlot */
extern "C" __attribute__((visibility("default"))) int getClientBySlot(void) {
    ALOGD("getClientBySlot() called");
    return 0;
}

/* Demangled: dispatchImsCdmaSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void) {
    ALOGD("_Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getColr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl7getColrEi(void) {
    ALOGD("_ZN14MtkRadioExImpl7getColrEi() called");
    return 0;
}

/* Demangled: RadioImpl::enableUiccApplications(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22enableUiccApplicationsEib(void) {
    ALOGD("_ZN9RadioImpl22enableUiccApplicationsEib() called");
    return 0;
}

/* Demangled: radio::stkCallControlAlphaNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28stkCallControlAlphaNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28stkCallControlAlphaNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::disableNR(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl9disableNREib(void) {
    ALOGD("_ZN14MtkRadioExImpl9disableNREib() called");
    return 0;
}

/* Demangled: mtkRadioEx::getSuggestedPlmnListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28getSuggestedPlmnListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28getSuggestedPlmnListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setLteReleaseVersionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28setLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28setLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: radio::setCdmaRoamingPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32setCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio32setCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilKeepaliveStatusToHal(RIL_KeepaliveStatus*, android::hardware::radio::V1_1::KeepaliveStatus&) */
extern "C" __attribute__((visibility("default"))) int _Z30convertRilKeepaliveStatusToHalP19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE(void) {
    ALOGD("_Z30convertRilKeepaliveStatusToHalP19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getDsdaStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13getDsdaStatusEi(void) {
    ALOGD("_ZN14MtkRadioExImpl13getDsdaStatusEi() called");
    return 0;
}

/* Demangled: RadioImpl::iccIOForApp(int, android::hardware::radio::V1_0::IccIo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE(void) {
    ALOGD("_ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE() called");
    return 0;
}

/* Demangled: RadioImpl::setAllowedCarriers(int, bool, android::hardware::radio::V1_0::CarrierRestrictions const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE(void) {
    ALOGD("_ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE() called");
    return 0;
}

/* Demangled: RadioConfigImpl::getPhoneCapability(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl18getPhoneCapabilityEi(void) {
    ALOGD("_ZN15RadioConfigImpl18getPhoneCapabilityEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::smsInfoExtInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13smsInfoExtIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13smsInfoExtIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::notifyEPDGScreenStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29notifyEPDGScreenStateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29notifyEPDGScreenStateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::emergencyNumberListInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22emergencyNumberListIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22emergencyNumberListIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::removeCbMsg(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11removeCbMsgEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl11removeCbMsgEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsMwi(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMwiRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMwiRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setResponseFunctionsMwiERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IMwiRadioResponseEEERKNS1_INS6_19IMwiRadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setResponseFunctionsMwiERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IMwiRadioResponseEEERKNS1_INS6_19IMwiRadioIndicationEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::sipRegInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13sipRegInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13sipRegInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Exported Object: RilSapSocket::uimRilEnv */
extern "C" __attribute__((visibility("default"))) void* _ZN12RilSapSocket9uimRilEnvE = NULL;

/* Demangled: radio::callStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19callStateChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19callStateChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsRcs(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRcsRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRcsRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setResponseFunctionsRcsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRcsRadioResponseEEERKNS1_INS6_19IRcsRadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setResponseFunctionsRcsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRcsRadioResponseEEERKNS1_INS6_19IRcsRadioIndicationEEE() called");
    return 0;
}

/* Demangled: SapImpl::transferCardReaderStatusReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl27transferCardReaderStatusReqEi(void) {
    ALOGD("_ZN7SapImpl27transferCardReaderStatusReqEi() called");
    return 0;
}

/* Demangled: pb_istream_from_buffer */
extern "C" __attribute__((visibility("default"))) int pb_istream_from_buffer(void) {
    ALOGD("pb_istream_from_buffer() called");
    return 0;
}

/* Demangled: mtkRadioEx::supplyDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31supplyDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31supplyDepersonalizationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: getRafFromNetworkType(int) */
extern "C" __attribute__((visibility("default"))) int _Z21getRafFromNetworkTypei(void) {
    ALOGD("_Z21getRafFromNetworkTypei() called");
    return 0;
}

/* Demangled: RadioImpl::getOperator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11getOperatorEi(void) {
    ALOGD("_ZN9RadioImpl11getOperatorEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDeregDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15imsDeregDoneIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15imsDeregDoneIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::iccTransmitApduLogicalChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio37iccTransmitApduLogicalChannelResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio37iccTransmitApduLogicalChannelResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setEccModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18setEccModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18setEccModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilPhbEntryStructureToHal(void const*, unsigned long, android::hardware::hidl_vec<vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryStructure>&) */
extern "C" __attribute__((visibility("default"))) int _Z32convertRilPhbEntryStructureToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureEEE(void) {
    ALOGD("_Z32convertRilPhbEntryStructureToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::responseModulationInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25responseModulationInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25responseModulationInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::queryCallForwardInTimeSlotStatus(int, vendor::mediatek::hardware::mtkradioex::V2_0::CallForwardInfoEx const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl32queryCallForwardInTimeSlotStatusEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE(void) {
    ALOGD("_ZN14MtkRadioExImpl32queryCallForwardInTimeSlotStatusEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE() called");
    return 0;
}

/* Demangled: RadioImpl::getImsiForApp(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::getHardwareConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17getHardwareConfigEi(void) {
    ALOGD("_ZN9RadioImpl17getHardwareConfigEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsRegistrationStateInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23imsRegistrationStateIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23imsRegistrationStateIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendEnvelopeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20sendEnvelopeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio20sendEnvelopeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::hangupForegroundResumeBackgroundResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40hangupForegroundResumeBackgroundResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio40hangupForegroundResumeBackgroundResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::deleteSmsOnRuimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23deleteSmsOnRuimResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23deleteSmsOnRuimResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setBandMode(int, android::hardware::radio::V1_0::RadioBandMode) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE(void) {
    ALOGD("_ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSipHeaderResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20setSipHeaderResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20setSipHeaderResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setNetworkSelectionModeAutomatic(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32setNetworkSelectionModeAutomaticEi(void) {
    ALOGD("_ZN9RadioImpl32setNetworkSelectionModeAutomaticEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::cdmaNewSmsIndEx(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15cdmaNewSmsIndExEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15cdmaNewSmsIndExEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSearchRatResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20setSearchRatResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20setSearchRatResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setPhonebookReady(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setPhonebookReadyEii(void) {
    ALOGD("_ZN14MtkRadioExImpl17setPhonebookReadyEii() called");
    return 0;
}

/* Demangled: radio::getNeighboringCidsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getNeighboringCidsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26getNeighboringCidsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::reportStkServiceIsRunningResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33reportStkServiceIsRunningResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33reportStkServiceIsRunningResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::lockRadioServiceWlock(pthread_rwlock_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21lockRadioServiceWlockEP16pthread_rwlock_ti(void) {
    ALOGD("_ZN5radio21lockRadioServiceWlockEP16pthread_rwlock_ti() called");
    return 0;
}

/* Demangled: dispatchSimGeneralAuth(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::SimAuthStructure const&) */
extern "C" __attribute__((visibility("default"))) int _Z22dispatchSimGeneralAuthiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE(void) {
    ALOGD("_Z22dispatchSimGeneralAuthiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE() called");
    return 0;
}

/* Demangled: convertRilDataCallToHalEx_1_5(MTK_RIL_Data_Call_Response_v11*, android::hardware::radio::V1_5::SetupDataCallResult&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29convertRilDataCallToHalEx_1_5P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_519SetupDataCallResultEj(void) {
    ALOGD("_Z29convertRilDataCallToHalEx_1_5P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_519SetupDataCallResultEj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::cfgB1offset(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11cfgB1offsetEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl11cfgB1offsetEiii() called");
    return 0;
}

/* Demangled: RadioImpl::getBasebandVersion(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getBasebandVersionEi(void) {
    ALOGD("_ZN9RadioImpl18getBasebandVersionEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimPowerChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx20onSimPowerChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx20onSimPowerChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::lockRadioServiceRlock(pthread_rwlock_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21lockRadioServiceRlockEP16pthread_rwlock_ti(void) {
    ALOGD("_ZN5radio21lockRadioServiceRlockEP16pthread_rwlock_ti() called");
    return 0;
}

/* Demangled: radio::setRadioPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21setRadioPowerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21setRadioPowerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendRequestStringsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26sendRequestStringsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26sendRequestStringsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::currentLinkCapacityEstimate(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27currentLinkCapacityEstimateEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27currentLinkCapacityEstimateEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getImsCfgProvisionValue(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23getImsCfgProvisionValueEii(void) {
    ALOGD("_ZN14MtkRadioExImpl23getImsCfgProvisionValueEii() called");
    return 0;
}

/* Demangled: RadioImpl::sendEnvelope(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: populateConfigResponseInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno) */
extern "C" __attribute__((visibility("default"))) int _Z26populateConfigResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno(void) {
    ALOGD("_Z26populateConfigResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno() called");
    return 0;
}

/* Demangled: mtkRadioEx::getProvisionDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19getProvisionDoneIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19getProvisionDoneIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::hangupWithReasonResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24hangupWithReasonResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24hangupWithReasonResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setCallValidTimerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setCallValidTimerResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setCallValidTimerResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: android::onNewCommandConnect(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19onNewCommandConnectEjj(void) {
    ALOGD("_ZN7android19onNewCommandConnectEjj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setColp(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl7setColpEii(void) {
    ALOGD("_ZN14MtkRadioExImpl7setColpEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::setGwsdModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19setGwsdModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19setGwsdModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::networkScanResultInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20networkScanResultIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio20networkScanResultIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::stopNetworkScanResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23stopNetworkScanResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio23stopNetworkScanResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertTransferAtrResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response(void) {
    ALOGD("_Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response() called");
    return 0;
}

/* Demangled: SapImpl::setTransferProtocolReq(int, android::hardware::radio::V1_0::SapTransferProtocol) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE(void) {
    ALOGD("_ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE() called");
    return 0;
}

/* Demangled: pb_decode_fixed32 */
extern "C" __attribute__((visibility("default"))) int pb_decode_fixed32(void) {
    ALOGD("pb_decode_fixed32() called");
    return 0;
}

/* Demangled: mtkRadioEx::gmssRatChangedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24gmssRatChangedIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24gmssRatChangedIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::enableCAPlusBandWidthFilterResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx35enableCAPlusBandWidthFilterResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx35enableCAPlusBandWidthFilterResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onXuiInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx8onXuiIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx8onXuiIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCdmaSubscriptionSourceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33setCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33setCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertApduResponseProtoToHal(_RIL_SIM_SAP_APDU_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response(void) {
    ALOGD("_Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response() called");
    return 0;
}

/* Demangled: mtkRadioEx::plmnChangedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21plmnChangedIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21plmnChangedIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::responseNetworkEventInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23responseNetworkEventIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23responseNetworkEventIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: checkReturnStatus(unsigned int, android::hardware::Return<void>&, bool) */
extern "C" __attribute__((visibility("default"))) int _Z17checkReturnStatusjRN7android8hardware6ReturnIvEEb(void) {
    ALOGD("_Z17checkReturnStatusjRN7android8hardware6ReturnIvEEb() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::vtDial(int, android::hardware::radio::V1_0::Dial const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl6vtDialEiRKN7android8hardware5radio4V1_04DialE(void) {
    ALOGD("_ZN14MtkRadioExImpl6vtDialEiRKN7android8hardware5radio4V1_04DialE() called");
    return 0;
}

/* Demangled: processResponse(_MsgHeader*, RilSapSocket*, _MsgType) */
extern "C" __attribute__((visibility("default"))) int _Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType(void) {
    ALOGD("_Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendUssiResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16sendUssiResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16sendUssiResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsEnableStartInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17imsEnableStartIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17imsEnableStartIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setCallIndicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25setCallIndicationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25setCallIndicationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setTxPower(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl10setTxPowerEii(void) {
    ALOGD("_ZN14MtkRadioExImpl10setTxPowerEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::getColrResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15getColrResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15getColrResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setNattKeepAliveStatus(int, android::hardware::hidl_string const&, bool, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22setNattKeepAliveStatusEiRKN7android8hardware11hidl_stringEbS4_iS4_i(void) {
    ALOGD("_ZN14MtkRadioExImpl22setNattKeepAliveStatusEiRKN7android8hardware11hidl_stringEbS4_iS4_i() called");
    return 0;
}

/* Demangled: mtkRadioEx::newEtwsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx10newEtwsIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx10newEtwsIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::redialEmergencyIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25redialEmergencyIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25redialEmergencyIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::responsePsNetworkStateChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31responsePsNetworkStateChangeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31responsePsNetworkStateChangeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::writeSmsToSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21writeSmsToSimResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21writeSmsToSimResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::acknowledgeLastIncomingCdmaSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setRadioCapability(int, android::hardware::radio::V1_0::RadioCapability const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE(void) {
    ALOGD("_ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE() called");
    return 0;
}

/* Demangled: RadioConfigImpl::getSimSlotsStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl17getSimSlotsStatusEi(void) {
    ALOGD("_ZN15RadioConfigImpl17getSimSlotsStatusEi() called");
    return 0;
}

/* Exported Object: android::s_callbacks */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11s_callbacksE = NULL;

/* Demangled: MtkRadioExImpl::acknowledgeLastIncomingCdmaSmsEx(int, android::hardware::radio::V1_0::CdmaSmsAck const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl32acknowledgeLastIncomingCdmaSmsExEiRKN7android8hardware5radio4V1_010CdmaSmsAckE(void) {
    ALOGD("_ZN14MtkRadioExImpl32acknowledgeLastIncomingCdmaSmsExEiRKN7android8hardware5radio4V1_010CdmaSmsAckE() called");
    return 0;
}

/* Demangled: RadioImpl::getDataRegistrationState_1_5(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl28getDataRegistrationState_1_5Ei(void) {
    ALOGD("_ZN9RadioImpl28getDataRegistrationState_1_5Ei() called");
    return 0;
}

/* Demangled: RadioImpl::setSignalStrengthReportingCriteria_1_5(int, android::hardware::radio::V1_5::SignalThresholdInfo const&, android::hardware::radio::V1_5::AccessNetwork) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl38setSignalStrengthReportingCriteria_1_5EiRKN7android8hardware5radio4V1_519SignalThresholdInfoENS3_13AccessNetworkE(void) {
    ALOGD("_ZN9RadioImpl38setSignalStrengthReportingCriteria_1_5EiRKN7android8hardware5radio4V1_519SignalThresholdInfoENS3_13AccessNetworkE() called");
    return 0;
}

/* Exported Object: nitzTimeReceived */
extern "C" __attribute__((visibility("default"))) void* nitzTimeReceived = NULL;

/* Demangled: convertConfigIntToRadioIndicationType(int) */
extern "C" __attribute__((visibility("default"))) int _Z37convertConfigIntToRadioIndicationTypei(void) {
    ALOGD("_Z37convertConfigIntToRadioIndicationTypei() called");
    return 0;
}

/* Demangled: radio::onSupplementaryServiceIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35onSupplementaryServiceIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio35onSupplementaryServiceIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendRsuRequest(int, vendor::mediatek::hardware::mtkradioex::V2_0::RsuRequestInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14sendRsuRequestEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014RsuRequestInfoE(void) {
    ALOGD("_ZN14MtkRadioExImpl14sendRsuRequestEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014RsuRequestInfoE() called");
    return 0;
}

/* Demangled: radio::iccIOForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19iccIOForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19iccIOForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::nvWriteItemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19nvWriteItemResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19nvWriteItemResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: responseIntOrEmpty(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void) {
    ALOGD("_Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: fillCellIdentityFromDataRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
extern "C" __attribute__((visibility("default"))) int _Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void) {
    ALOGD("_Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setCallValidTimer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setCallValidTimerEii(void) {
    ALOGD("_ZN14MtkRadioExImpl17setCallValidTimerEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::abortFemtocellListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26abortFemtocellListResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26abortFemtocellListResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::radioStateChangedToImsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25radioStateChangedToImsIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25radioStateChangedToImsIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::responseLteNetworkInfo(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22responseLteNetworkInfoEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22responseLteNetworkInfoEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::dedicatedBearerModificationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30dedicatedBearerModificationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30dedicatedBearerModificationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::enableUiccApplicationsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30enableUiccApplicationsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio30enableUiccApplicationsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::queryUPBCapability(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18queryUPBCapabilityEi(void) {
    ALOGD("_ZN14MtkRadioExImpl18queryUPBCapabilityEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::getATRResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx14getATRResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx14getATRResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getColpResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15getColpResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15getColpResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setNetworkLockResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22setNetworkLockResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22setNetworkLockResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getImsCfgFeatureValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29getImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29getImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getMuteResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15getMuteResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15getMuteResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchFdMode(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14dispatchFdModeiiiiii(void) {
    ALOGD("_Z14dispatchFdModeiiiiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setupXcapUserAgentString(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24setupXcapUserAgentStringEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl24setupXcapUserAgentStringEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::getNetworkSelectionMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getNetworkSelectionModeEi(void) {
    ALOGD("_ZN9RadioImpl23getNetworkSelectionModeEi() called");
    return 0;
}

/* Demangled: checkReturnStatus(int, android::hardware::Return<void>&) */
extern "C" __attribute__((visibility("default"))) int _Z17checkReturnStatusiRN7android8hardware6ReturnIvEE(void) {
    ALOGD("_Z17checkReturnStatusiRN7android8hardware6ReturnIvEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::removeCbMsgResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19removeCbMsgResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19removeCbMsgResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendWifiEnabledResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23sendWifiEnabledResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23sendWifiEnabledResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setGsmBroadcastActivationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33setGsmBroadcastActivationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio33setGsmBroadcastActivationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::onRequestComplete(void*, RIL_Errno, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_m(void) {
    ALOGD("_ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_m() called");
    return 0;
}

/* Demangled: RadioImpl::emergencyDial(int, android::hardware::radio::V1_0::Dial const&, int, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::radio::V1_4::EmergencyCallRouting, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13emergencyDialEiRKN7android8hardware5radio4V1_04DialEiRKNS1_8hidl_vecINS1_11hidl_stringEEENS2_4V1_420EmergencyCallRoutingEbb(void) {
    ALOGD("_ZN9RadioImpl13emergencyDialEiRKN7android8hardware5radio4V1_04DialEiRKNS1_8hidl_vecINS1_11hidl_stringEEENS2_4V1_420EmergencyCallRoutingEbb() called");
    return 0;
}

/* Demangled: RadioImpl::hangupWaitingOrBackground(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25hangupWaitingOrBackgroundEi(void) {
    ALOGD("_ZN9RadioImpl25hangupWaitingOrBackgroundEi() called");
    return 0;
}

/* Demangled: pb_encode_delimited */
extern "C" __attribute__((visibility("default"))) int pb_encode_delimited(void) {
    ALOGD("pb_encode_delimited() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getSignalStrengthWithWcdmaEcio(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl30getSignalStrengthWithWcdmaEcioEi(void) {
    ALOGD("_ZN14MtkRadioExImpl30getSignalStrengthWithWcdmaEcioEi() called");
    return 0;
}

/* Demangled: RadioImpl::setIndicationFilter_1_2(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23setIndicationFilter_1_2Eii(void) {
    ALOGD("_ZN9RadioImpl23setIndicationFilter_1_2Eii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: SapImpl::resetSimReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl11resetSimReqEi(void) {
    ALOGD("_ZN7SapImpl11resetSimReqEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSsacStatus(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12onSsacStatusEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12onSsacStatusEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendWifiAssociated(int, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18sendWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_i(void) {
    ALOGD("_ZN14MtkRadioExImpl18sendWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_i() called");
    return 0;
}

/* Demangled: radio::cellInfoListInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15cellInfoListIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio15cellInfoListIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchRaw(int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: SapImpl::powerReq(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl8powerReqEib(void) {
    ALOGD("_ZN7SapImpl8powerReqEib() called");
    return 0;
}

/* Demangled: pb_decode_noinit */
extern "C" __attribute__((visibility("default"))) int pb_decode_noinit(void) {
    ALOGD("pb_decode_noinit() called");
    return 0;
}

/* Demangled: pb_release */
extern "C" __attribute__((visibility("default"))) int pb_release(void) {
    ALOGD("pb_release() called");
    return 0;
}

/* Demangled: RIL_register */
extern "C" __attribute__((visibility("default"))) int RIL_register(void) {
    ALOGD("RIL_register() called");
    return 0;
}

/* Demangled: RadioImpl::sendDeviceState(int, android::hardware::radio::V1_0::DeviceStateType, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb(void) {
    ALOGD("_ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb() called");
    return 0;
}

/* Demangled: RadioImpl::sendCDMAFeatureCode(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::embmsSessionStatusInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21embmsSessionStatusIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21embmsSessionStatusIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getAvailableNetworksWithActResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx35getAvailableNetworksWithActResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx35getAvailableNetworksWithActResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setRxTestConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23setRxTestConfigResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23setRxTestConfigResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readUPBGrpEntry(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15readUPBGrpEntryEii(void) {
    ALOGD("_ZN14MtkRadioExImpl15readUPBGrpEntryEii() called");
    return 0;
}

/* Demangled: RadioImpl::pullLceData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11pullLceDataEi(void) {
    ALOGD("_ZN9RadioImpl11pullLceDataEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_4::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_46IRadioE = NULL;

/* Demangled: pb_field_iter_find */
extern "C" __attribute__((visibility("default"))) int pb_field_iter_find(void) {
    ALOGD("pb_field_iter_find() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsDisableStartInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18imsDisableStartIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18imsDisableStartIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::qualifiedNetworkTypesChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31qualifiedNetworkTypesChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31qualifiedNetworkTypesChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::stopLceServiceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22stopLceServiceResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22stopLceServiceResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: isMtkFwkAddonNotExisted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23isMtkFwkAddonNotExistedj(void) {
    ALOGD("_Z23isMtkFwkAddonNotExistedj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getRoamingEnable(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16getRoamingEnableEii(void) {
    ALOGD("_ZN14MtkRadioExImpl16getRoamingEnableEii() called");
    return 0;
}

/* Demangled: RadioImpl::setSystemSelectionChannels_1_5(int, bool, android::hardware::hidl_vec<android::hardware::radio::V1_5::RadioAccessSpecifier> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl30setSystemSelectionChannels_1_5EibRKN7android8hardware8hidl_vecINS1_5radio4V1_520RadioAccessSpecifierEEE(void) {
    ALOGD("_ZN9RadioImpl30setSystemSelectionChannels_1_5EibRKN7android8hardware8hidl_vecINS1_5radio4V1_520RadioAccessSpecifierEEE() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsEnableDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16imsEnableDoneIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16imsEnableDoneIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::noEmergencyCallbackModeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx26noEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx26noEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::resetMdDataRetryCountResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29resetMdDataRetryCountResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29resetMdDataRetryCountResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getApcInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl10getApcInfoEi(void) {
    ALOGD("_ZN14MtkRadioExImpl10getApcInfoEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::pcoDataAfterAttachedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23pcoDataAfterAttachedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23pcoDataAfterAttachedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getImsCfgProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31getImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31getImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::pcoDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio10pcoDataIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio10pcoDataIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::onUssdInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio9onUssdIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio9onUssdIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getSmsRuimMemoryStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30getSmsRuimMemoryStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30getSmsRuimMemoryStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getImsRegistrationStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getImsRegistrationStateResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio31getImsRegistrationStateResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchPhbEntryExt(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryExt const&) */
extern "C" __attribute__((visibility("default"))) int _Z19dispatchPhbEntryExtiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE(void) {
    ALOGD("_Z19dispatchPhbEntryExtiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE() called");
    return 0;
}

/* Exported Object: sapService */
extern "C" __attribute__((visibility("default"))) void* sapService = NULL;

/* Exported Object: construction vtable for android::hardware::radio::config::V1_0::IRadioConfig-in-RadioConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC15RadioConfigImpl0_N7android8hardware5radio6config4V1_012IRadioConfigE = NULL;

/* Demangled: radio::stkProactiveCommandInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22stkProactiveCommandIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22stkProactiveCommandIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::writeSmsToRuim(int, android::hardware::radio::V1_0::CdmaSmsWriteArgs const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE(void) {
    ALOGD("_ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE() called");
    return 0;
}

/* Demangled: mtkRadioEx::vsimOperationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21vsimOperationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21vsimOperationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: addTidToRLock(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _Z13addTidToRLockjl(void) {
    ALOGD("_Z13addTidToRLockjl() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setLocationInfo(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15setLocationInfoEiRKN7android8hardware11hidl_stringES4_S4_S4_S4_S4_S4_S4_S4_S4_S4_(void) {
    ALOGD("_ZN14MtkRadioExImpl15setLocationInfoEiRKN7android8hardware11hidl_stringES4_S4_S4_S4_S4_S4_S4_S4_S4_S4_() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::triggerOtaSPInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15triggerOtaSPIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15triggerOtaSPIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onCellularQualityChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx27onCellularQualityChangedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx27onCellularQualityChangedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getCallForwardStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getCallForwardStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28getCallForwardStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::activateUiccCard(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16activateUiccCardEi(void) {
    ALOGD("_ZN14MtkRadioExImpl16activateUiccCardEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readUPBEmailEntry(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17readUPBEmailEntryEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl17readUPBEmailEntryEiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getPhoneBookMemStorage(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22getPhoneBookMemStorageEi(void) {
    ALOGD("_ZN14MtkRadioExImpl22getPhoneBookMemStorageEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::speechCodecInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18speechCodecInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18speechCodecInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::eccRedialApproveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24eccRedialApproveResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24eccRedialApproveResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setCallSubAddress(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17setCallSubAddressEib(void) {
    ALOGD("_ZN14MtkRadioExImpl17setCallSubAddressEib() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::supplyDeviceNetworkDepersonalization(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl36supplyDeviceNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl36supplyDeviceNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: mCounterMtkRadioEx */
extern "C" __attribute__((visibility("default"))) void* mCounterMtkRadioEx = NULL;

/* Demangled: mtkRadioEx::onVsimEventIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21onVsimEventIndicationEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21onVsimEventIndicationEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: getNetworkTypeFromRaf(int) */
extern "C" __attribute__((visibility("default"))) int _Z21getNetworkTypeFromRafi(void) {
    ALOGD("_Z21getNetworkTypeFromRafi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::restartRILD(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl11restartRILDEi(void) {
    ALOGD("_ZN14MtkRadioExImpl11restartRILDEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setGsmBroadcastLangs(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl20setGsmBroadcastLangsEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl20setGsmBroadcastLangsEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::deactivateNrScgCommunication(int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl28deactivateNrScgCommunicationEibb(void) {
    ALOGD("_ZN14MtkRadioExImpl28deactivateNrScgCommunicationEibb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_0::ISap-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android8hardware5radio4V1_04ISapE = NULL;

/* Demangled: dispatchConfigVoid(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18dispatchConfigVoidiii(void) {
    ALOGD("_Z18dispatchConfigVoidiii() called");
    return 0;
}

/* Demangled: mtkRadioEx::responseFemtocellInfo(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21responseFemtocellInfoEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21responseFemtocellInfoEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setupDataCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21setupDataCallResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio21setupDataCallResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::conference(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10conferenceEi(void) {
    ALOGD("_ZN9RadioImpl10conferenceEi() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setSmsParametersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24setSmsParametersResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24setSmsParametersResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilDataCallToHal(RIL_Data_Call_Response_v11*, android::hardware::radio::V1_0::SetupDataCallResult&) */
extern "C" __attribute__((visibility("default"))) int _Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE(void) {
    ALOGD("_Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE() called");
    return 0;
}

/* Demangled: convertCharPtrToVecLinkAddress(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z30convertCharPtrToVecLinkAddressPKc(void) {
    ALOGD("_Z30convertCharPtrToVecLinkAddressPKc() called");
    return 0;
}

/* Demangled: pb_decode_varint */
extern "C" __attribute__((visibility("default"))) int pb_decode_varint(void) {
    ALOGD("pb_decode_varint() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal() called");
    return 0;
}

/* Demangled: ril_event_loop() */
extern "C" __attribute__((visibility("default"))) int _Z14ril_event_loopv(void) {
    ALOGD("_Z14ril_event_loopv() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::cancelUssi(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl10cancelUssiEi(void) {
    ALOGD("_ZN14MtkRadioExImpl10cancelUssiEi() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readPhbEntry(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl12readPhbEntryEiiii(void) {
    ALOGD("_ZN14MtkRadioExImpl12readPhbEntryEiiii() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::dialWithSipUri(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl14dialWithSipUriEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl14dialWithSipUriEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::sendTerminalResponseToSim(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: radio::changeIccPinForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26changeIccPinForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26changeIccPinForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getProvisionValue(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl17getProvisionValueEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN14MtkRadioExImpl17getProvisionValueEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: pb_encode */
extern "C" __attribute__((visibility("default"))) int pb_encode(void) {
    ALOGD("pb_encode() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::setClipResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx15setClipResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx15setClipResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::newSmsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio9newSmsIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio9newSmsIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchPhbEntry(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryStructure const&) */
extern "C" __attribute__((visibility("default"))) int _Z16dispatchPhbEntryiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE(void) {
    ALOGD("_Z16dispatchPhbEntryiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setColr(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl7setColrEii(void) {
    ALOGD("_ZN14MtkRadioExImpl7setColrEii() called");
    return 0;
}

/* Demangled: RadioImpl::setClir(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7setClirEii(void) {
    ALOGD("_ZN9RadioImpl7setClirEii() called");
    return 0;
}

/* Demangled: mtkRadioEx::getSignalStrengthWithWcdmaEcioResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx38getSignalStrengthWithWcdmaEcioResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx38getSignalStrengthWithWcdmaEcioResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: convertRilDataCallListToHalEx_1_5(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_5::SetupDataCallResult>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z33convertRilDataCallListToHalEx_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_519SetupDataCallResultEEEj(void) {
    ALOGD("_Z33convertRilDataCallListToHalEx_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_519SetupDataCallResultEEEj() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::toggleRttAudioIndication(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24toggleRttAudioIndicationEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl24toggleRttAudioIndicationEiii() called");
    return 0;
}

/* Demangled: RadioImpl::setRadioPower_1_5(int, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17setRadioPower_1_5Eibbb(void) {
    ALOGD("_ZN9RadioImpl17setRadioPower_1_5Eibbb() called");
    return 0;
}

/* Demangled: RadioImpl::supplySimDepersonalization(int, android::hardware::radio::V1_5::PersoSubstate, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl26supplySimDepersonalizationEiN7android8hardware5radio4V1_513PersoSubstateERKNS1_11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl26supplySimDepersonalizationEiN7android8hardware5radio4V1_513PersoSubstateERKNS1_11hidl_stringE() called");
    return 0;
}

/* Demangled: mtkRadioEx::dataConnectionDetachResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx28dataConnectionDetachResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx28dataConnectionDetachResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setNattKeepAliveStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx30setNattKeepAliveStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx30setNattKeepAliveStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::initSapSocket(char const*, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: radio::simRefreshInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13simRefreshIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio13simRefreshIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setVendorSettingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24setVendorSettingResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24setVendorSettingResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::registerCellQltyReport(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22registerCellQltyReportEiRKN7android8hardware11hidl_stringES4_S4_S4_(void) {
    ALOGD("_ZN14MtkRadioExImpl22registerCellQltyReportEiRKN7android8hardware11hidl_stringES4_S4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::setGsmBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::GsmBroadcastSmsConfigInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE(void) {
    ALOGD("_ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::cipherIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19cipherIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19cipherIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::nitzTimeReceivedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19nitzTimeReceivedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19nitzTimeReceivedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: clientTypeToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18clientTypeToStringj(void) {
    ALOGD("_Z18clientTypeToStringj() called");
    return 0;
}

/* Demangled: mtkRadioEx::cancelAvailableNetworksResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx31cancelAvailableNetworksResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx31cancelAvailableNetworksResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::queryFemtoCellSystemSelectionModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx41queryFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx41queryFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getLastCallFailCauseResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getLastCallFailCauseResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio28getLastCallFailCauseResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsCap(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ICapRadioResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl23setResponseFunctionsCapERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017ICapRadioResponseEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl23setResponseFunctionsCapERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017ICapRadioResponseEEE() called");
    return 0;
}

/* Demangled: RadioImpl::nvWriteCdmaPrl(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: RadioConfigImpl::checkReturnStatus(android::hardware::Return<void>&) */
extern "C" __attribute__((visibility("default"))) int _ZN15RadioConfigImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void) {
    ALOGD("_ZN15RadioConfigImpl17checkReturnStatusERN7android8hardware6ReturnIvEE() called");
    return 0;
}

/* Demangled: pb_decode_varint32 */
extern "C" __attribute__((visibility("default"))) int pb_decode_varint32(void) {
    ALOGD("pb_decode_varint32() called");
    return 0;
}

/* Demangled: mtkRadioEx::onPseudoCellInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19onPseudoCellInfoIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19onPseudoCellInfoIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWifiMonitoringThreshouldChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx33onWifiMonitoringThreshouldChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx33onWifiMonitoringThreshouldChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::sendCdmaSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19sendCdmaSmsResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio19sendCdmaSmsResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::hangupWithReason(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl16hangupWithReasonEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl16hangupWithReasonEiii() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimPlugOut(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12onSimPlugOutEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12onSimPlugOutEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::setResponseFunctionsEm(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IEmRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IEmRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22setResponseFunctionsEmERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016IEmRadioResponseEEERKNS1_INS6_18IEmRadioIndicationEEE(void) {
    ALOGD("_ZN14MtkRadioExImpl22setResponseFunctionsEmERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016IEmRadioResponseEEERKNS1_INS6_18IEmRadioIndicationEEE() called");
    return 0;
}

/* Demangled: radio::getTTYModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18getTTYModeResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio18getTTYModeResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setDataProfileResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setDataProfileResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22setDataProfileResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getBasebandVersionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getBasebandVersionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26getBasebandVersionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchImsGsmSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void) {
    ALOGD("_Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE() called");
    return 0;
}

/* Demangled: convertRilDataCallListToHalEx_1_4(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_4::SetupDataCallResult>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z33convertRilDataCallListToHalEx_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_419SetupDataCallResultEEEj(void) {
    ALOGD("_Z33convertRilDataCallListToHalEx_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_419SetupDataCallResultEEEj() called");
    return 0;
}

/* Demangled: mtkRadioEx::onPlmnDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx13onPlmnDataIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx13onPlmnDataIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::ectIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx16ectIndicationIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx16ectIndicationIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::writePhbEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21writePhbEntryResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21writePhbEntryResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::conferenceDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx22conferenceDialResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx22conferenceDialResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::vtDialWithSipUriResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24vtDialWithSipUriResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24vtDialWithSipUriResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setCallWaitingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setCallWaitingResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22setCallWaitingResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: dispatchSearchStoredFreqInfo(int, int, int, int, int, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _Z28dispatchSearchStoredFreqInfoiiiiiiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_Z28dispatchSearchStoredFreqInfoiiiiiiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::imsEctCommand(int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl13imsEctCommandEiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN14MtkRadioExImpl13imsEctCommandEiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: RadioImpl::getModemActivityInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getModemActivityInfoEi(void) {
    ALOGD("_ZN9RadioImpl20getModemActivityInfoEi() called");
    return 0;
}

/* Demangled: RIL_register_socket */
extern "C" __attribute__((visibility("default"))) int RIL_register_socket(void) {
    ALOGD("RIL_register_socket() called");
    return 0;
}

/* Demangled: mtkRadioEx::newSmsIndEx(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx11newSmsIndExEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx11newSmsIndExEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::cfuStatusNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx18cfuStatusNotifyIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx18cfuStatusNotifyIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::setupXcapUserAgentStringResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32setupXcapUserAgentStringResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32setupXcapUserAgentStringResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::iccCloseLogicalChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30iccCloseLogicalChannelResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio30iccCloseLogicalChannelResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::queryUPBAvailableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx25queryUPBAvailableResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx25queryUPBAvailableResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::setSmscAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setSmscAddressResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22setSmscAddressResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::nvWriteItem(int, android::hardware::radio::V1_0::NvWriteItem const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE(void) {
    ALOGD("_ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_1::ISap-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android8hardware5radio4V1_14ISapE = NULL;

/* Demangled: radio::setFacilityLockForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29setFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio29setFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RilSapSocket::SocketExists(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket12SocketExistsEPKc(void) {
    ALOGD("_ZN12RilSapSocket12SocketExistsEPKc() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimMissing(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx12onSimMissingEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx12onSimMissingEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::readUPBSneEntry(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl15readUPBSneEntryEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl15readUPBSneEntryEiii() called");
    return 0;
}

/* Demangled: mtkRadioEx::onWifiPdnActivate(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17onWifiPdnActivateEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17onWifiPdnActivateEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::sendSubsidyLockRequest(int, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl22sendSubsidyLockRequestEiiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN14MtkRadioExImpl22sendSubsidyLockRequestEiiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::getPlmnNameFromSE13Table(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl24getPlmnNameFromSE13TableEiii(void) {
    ALOGD("_ZN14MtkRadioExImpl24getPlmnNameFromSE13TableEiii() called");
    return 0;
}

/* Demangled: RadioImpl::getCdmaBroadcastConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22getCdmaBroadcastConfigEi(void) {
    ALOGD("_ZN9RadioImpl22getCdmaBroadcastConfigEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::disableNRResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx17disableNRResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx17disableNRResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::hangupConnectionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24hangupConnectionResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio24hangupConnectionResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::acknowledgeLastIncomingGsmSmsEx(int, bool, android::hardware::radio::V1_0::SmsAcknowledgeFailCause) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl31acknowledgeLastIncomingGsmSmsExEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE(void) {
    ALOGD("_ZN14MtkRadioExImpl31acknowledgeLastIncomingGsmSmsExEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE() called");
    return 0;
}

/* Demangled: mtkRadioEx::sendSubsidyLockResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23sendSubsidyLockResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23sendSubsidyLockResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::getPOLCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24getPOLCapabilityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24getPOLCapabilityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::onSimCommonSlotNoChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx24onSimCommonSlotNoChangedEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx24onSimCommonSlotNoChangedEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setDataProfile(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::DataProfileInfo> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb(void) {
    ALOGD("_ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb() called");
    return 0;
}

/* Demangled: RadioImpl::getVoiceRegistrationState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25getVoiceRegistrationStateEi(void) {
    ALOGD("_ZN9RadioImpl25getVoiceRegistrationStateEi() called");
    return 0;
}

/* Demangled: radio::getPreferredVoicePrivacyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32getPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio32getPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: mtkRadioEx::querySsacStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx23querySsacStatusResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx23querySsacStatusResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::supplyIccPinForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26supplyIccPinForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26supplyIccPinForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::supplyIccPin2ForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27supplyIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27supplyIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::getCdmaRoamingPreference(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24getCdmaRoamingPreferenceEi(void) {
    ALOGD("_ZN9RadioImpl24getCdmaRoamingPreferenceEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal_abort() called");
    return 0;
}

/* Demangled: mtkRadioEx::cdmaCallAcceptedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx19cdmaCallAcceptedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx19cdmaCallAcceptedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getBarringInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22getBarringInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio22getBarringInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::sendSMSExpectMore(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_5::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_56IRadioE = NULL;

/* Demangled: RIL_requestTimedCallback */
extern "C" __attribute__((visibility("default"))) int RIL_requestTimedCallback(void) {
    ALOGD("RIL_requestTimedCallback() called");
    return 0;
}

/* Demangled: mtkRadioEx::setCallAdditionalInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx29setCallAdditionalInfoResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx29setCallAdditionalInfoResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radioConfig::setSimSlotsMappingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11radioConfig26setSimSlotsMappingResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN11radioConfig26setSimSlotsMappingResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::supplyIccPuk2ForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27supplyIccPuk2ForAppResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio27supplyIccPuk2ForAppResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: android::checkAndDequeueRequestInfoIfAck(android::RequestInfo*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android31checkAndDequeueRequestInfoIfAckEPNS_11RequestInfoEb(void) {
    ALOGD("_ZN7android31checkAndDequeueRequestInfoIfAckEPNS_11RequestInfoEb() called");
    return 0;
}

/* Demangled: convertRilCellInfoListToHal_1_2(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_2::CellInfo>&) */
extern "C" __attribute__((visibility("default"))) int _Z31convertRilCellInfoListToHal_1_2PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_28CellInfoEEE(void) {
    ALOGD("_Z31convertRilCellInfoListToHal_1_2PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_28CellInfoEEE() called");
    return 0;
}

/* Demangled: MtkRadioExImpl::deactivateUiccCard(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkRadioExImpl18deactivateUiccCardEi(void) {
    ALOGD("_ZN14MtkRadioExImpl18deactivateUiccCardEi() called");
    return 0;
}

/* Demangled: mtkRadioEx::setImsBearerNotificationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx32setImsBearerNotificationResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx32setImsBearerNotificationResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: radio::getRadioCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getRadioCapabilityResponseEjjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN5radio26getRadioCapabilityResponseEjjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setSmscAddress(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: __ubsan_handle_add_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal() called");
    return 0;
}

/* Demangled: mtkRadioEx::imsCfgConfigLoadedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10mtkRadioEx21imsCfgConfigLoadedIndEjii9RIL_ErrnoPKvm(void) {
    ALOGD("_ZN10mtkRadioEx21imsCfgConfigLoadedIndEjii9RIL_ErrnoPKvm() called");
    return 0;
}

/* Demangled: RadioImpl::setupDataCall_1_4(int, android::hardware::radio::V1_4::AccessNetwork, android::hardware::radio::V1_4::DataProfileInfo const&, bool, android::hardware::radio::V1_2::DataRequestReason, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17setupDataCall_1_4EiN7android8hardware5radio4V1_413AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_(void) {
    ALOGD("_ZN9RadioImpl17setupDataCall_1_4EiN7android8hardware5radio4V1_413AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_() called");
    return 0;
}
