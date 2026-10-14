package com.mediatek.internal.telephony.test;

import android.net.KeepalivePacketData;
import android.net.LinkProperties;
import android.os.Handler;
import android.os.Message;
import android.telephony.ImsiEncryptionInfo;
import android.telephony.NetworkScanRequest;
import android.telephony.SignalThresholdInfo;
import android.telephony.data.DataProfile;
import android.telephony.emergency.EmergencyNumber;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.RadioCapability;
import com.android.internal.telephony.UUSInfo;
import com.android.internal.telephony.cdma.CdmaSmsBroadcastConfigInfo;
import com.android.internal.telephony.gsm.SmsBroadcastConfigInfo;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;

/* JADX INFO: loaded from: classes.dex */
public class MtkSimulatedCommandsBaseVerifier implements CommandsInterface {
    private static MtkSimulatedCommandsBaseVerifier sInstance;

    private MtkSimulatedCommandsBaseVerifier() {
    }

    public static MtkSimulatedCommandsBaseVerifier getInstance() {
        if (sInstance == null) {
            sInstance = new MtkSimulatedCommandsBaseVerifier();
        }
        return sInstance;
    }

    public void acceptCall(Message message) {
    }

    public void acknowledgeIncomingGsmSmsWithPdu(boolean z, String str, Message message) {
    }

    public void acknowledgeLastIncomingCdmaSms(boolean z, int i, Message message) {
    }

    public void acknowledgeLastIncomingGsmSms(boolean z, int i, Message message) {
    }

    public void cancelPendingUssd(Message message) {
    }

    public void changeBarringPassword(String str, String str2, String str3, Message message) {
    }

    public void changeIccPin(String str, String str2, Message message) {
    }

    public void changeIccPin2(String str, String str2, Message message) {
    }

    public void changeIccPin2ForApp(String str, String str2, String str3, Message message) {
    }

    public void changeIccPinForApp(String str, String str2, String str3, Message message) {
    }

    public void conference(Message message) {
    }

    public void deactivateDataCall(int i, int i2, Message message) {
    }

    public void deleteSmsOnRuim(int i, Message message) {
    }

    public void deleteSmsOnSim(int i, Message message) {
    }

    public void dial(String str, boolean z, EmergencyNumber emergencyNumber, boolean z2, int i, Message message) {
    }

    public void dial(String str, boolean z, EmergencyNumber emergencyNumber, boolean z2, int i, UUSInfo uUSInfo, Message message) {
    }

    public void exitEmergencyCallbackMode(Message message) {
    }

    public void explicitCallTransfer(Message message) {
    }

    public void getAvailableNetworks(Message message) {
    }

    public void getBasebandVersion(Message message) {
    }

    public void getCDMASubscription(Message message) {
    }

    public void getCLIR(Message message) {
    }

    public void getCdmaBroadcastConfig(Message message) {
    }

    public void getCdmaSubscriptionSource(Message message) {
    }

    public void getCurrentCalls(Message message) {
    }

    public void getDataCallList(Message message) {
    }

    public void getDataRegistrationState(Message message) {
    }

    public void getDeviceIdentity(Message message) {
    }

    public void getGsmBroadcastConfig(Message message) {
    }

    public void getHardwareConfig(Message message) {
    }

    public void getIMEI(Message message) {
    }

    public void getIMEISV(Message message) {
    }

    public void getIMSI(Message message) {
    }

    public void getIMSIForApp(String str, Message message) {
    }

    public void getIccCardStatus(Message message) {
    }

    public void getIccSlotsStatus(Message message) {
    }

    public void getImsRegistrationState(Message message) {
    }

    public void getLastCallFailCause(Message message) {
    }

    public void getLastDataCallFailCause(Message message) {
    }

    public void getLastPdpFailCause(Message message) {
    }

    public int getLteOnCdmaMode() {
        return 0;
    }

    public void getMute(Message message) {
    }

    public void getNetworkSelectionMode(Message message) {
    }

    public void getOperator(Message message) {
    }

    public void getPDPContextList(Message message) {
    }

    public void getPreferredNetworkType(Message message) {
    }

    public void getPreferredVoicePrivacy(Message message) {
    }

    public void getRadioCapability(Message message) {
    }

    public int getRadioState() {
        return 2;
    }

    public int getRilVersion() {
        return 0;
    }

    public void getSignalStrength(Message message) {
    }

    public void getSmscAddress(Message message) {
    }

    public void getVoiceRadioTechnology(Message message) {
    }

    public void getVoiceRegistrationState(Message message) {
    }

    public void handleCallSetupRequestFromSim(boolean z, Message message) {
    }

    public void hangupConnection(int i, Message message) {
    }

    public void hangupForegroundResumeBackground(Message message) {
    }

    public void hangupWaitingOrBackground(Message message) {
    }

    public void iccCloseLogicalChannel(int i, Message message) {
    }

    public void iccIO(int i, int i2, String str, int i3, int i4, int i5, String str2, String str3, Message message) {
    }

    public void iccIOForApp(int i, int i2, String str, int i3, int i4, int i5, String str2, String str3, String str4, Message message) {
    }

    public void iccOpenLogicalChannel(String str, int i, Message message) {
    }

    public void iccTransmitApduBasicChannel(int i, int i2, int i3, int i4, int i5, String str, Message message) {
    }

    public void iccTransmitApduLogicalChannel(int i, int i2, int i3, int i4, int i5, int i6, String str, Message message) {
    }

    public void invokeOemRilRequestRaw(byte[] bArr, Message message) {
    }

    public void invokeOemRilRequestStrings(String[] strArr, Message message) {
    }

    public void nvResetConfig(int i, Message message) {
    }

    public void nvWriteCdmaPrl(byte[] bArr, Message message) {
    }

    public void pullLceData(Message message) {
    }

    public void queryAvailableBandMode(Message message) {
    }

    public void queryCLIP(Message message) {
    }

    public void queryCallForwardStatus(int i, int i2, String str, Message message) {
    }

    public void queryCallWaiting(int i, Message message) {
    }

    public void queryCdmaRoamingPreference(Message message) {
    }

    public void queryFacilityLock(String str, String str2, int i, Message message) {
    }

    public void queryFacilityLockForApp(String str, String str2, int i, String str3, Message message) {
    }

    public void queryTTYMode(Message message) {
    }

    public void registerFoT53ClirlInfo(Handler handler, int i, Object obj) {
    }

    public void registerForAvailable(Handler handler, int i, Object obj) {
    }

    public void registerForCallStateChanged(Handler handler, int i, Object obj) {
    }

    public void registerForCallWaitingInfo(Handler handler, int i, Object obj) {
    }

    public void registerForCarrierInfoForImsiEncryption(Handler handler, int i, Object obj) {
    }

    public void registerForCdmaOtaProvision(Handler handler, int i, Object obj) {
    }

    public void registerForCdmaPrlChanged(Handler handler, int i, Object obj) {
    }

    public void registerForCdmaSubscriptionChanged(Handler handler, int i, Object obj) {
    }

    public void registerForCellInfoList(Handler handler, int i, Object obj) {
    }

    public void registerForDataCallListChanged(Handler handler, int i, Object obj) {
    }

    public void registerForDisplayInfo(Handler handler, int i, Object obj) {
    }

    public void registerForEmergencyNumberList(Handler handler, int i, Object obj) {
    }

    public void registerForExitEmergencyCallbackMode(Handler handler, int i, Object obj) {
    }

    public void registerForHardwareConfigChanged(Handler handler, int i, Object obj) {
    }

    public void registerForIccRefresh(Handler handler, int i, Object obj) {
    }

    public void registerForIccSlotStatusChanged(Handler handler, int i, Object obj) {
    }

    public void registerForIccStatusChanged(Handler handler, int i, Object obj) {
    }

    public void registerForImsNetworkStateChanged(Handler handler, int i, Object obj) {
    }

    public void registerForInCallVoicePrivacyOff(Handler handler, int i, Object obj) {
    }

    public void registerForInCallVoicePrivacyOn(Handler handler, int i, Object obj) {
    }

    public void registerForLceInfo(Handler handler, int i, Object obj) {
    }

    public void registerForLineControlInfo(Handler handler, int i, Object obj) {
    }

    public void registerForModemReset(Handler handler, int i, Object obj) {
    }

    public void registerForNattKeepaliveStatus(Handler handler, int i, Object obj) {
    }

    public void registerForNetworkScanResult(Handler handler, int i, Object obj) {
    }

    public void registerForNetworkStateChanged(Handler handler, int i, Object obj) {
    }

    public void registerForNotAvailable(Handler handler, int i, Object obj) {
    }

    public void registerForNumberInfo(Handler handler, int i, Object obj) {
    }

    public void registerForOffOrNotAvailable(Handler handler, int i, Object obj) {
    }

    public void registerForOn(Handler handler, int i, Object obj) {
    }

    public void registerForPcoData(Handler handler, int i, Object obj) {
    }

    public void registerForPhysicalChannelConfiguration(Handler handler, int i, Object obj) {
    }

    public void registerForRadioCapabilityChanged(Handler handler, int i, Object obj) {
    }

    public void registerForRadioStateChanged(Handler handler, int i, Object obj) {
    }

    public void registerForRedirectedNumberInfo(Handler handler, int i, Object obj) {
    }

    public void registerForResendIncallMute(Handler handler, int i, Object obj) {
    }

    public void registerForRilConnected(Handler handler, int i, Object obj) {
    }

    public void registerForRingbackTone(Handler handler, int i, Object obj) {
    }

    public void registerForSignalInfo(Handler handler, int i, Object obj) {
    }

    public void registerForSrvccStateChanged(Handler handler, int i, Object obj) {
    }

    public void registerForSubscriptionStatusChanged(Handler handler, int i, Object obj) {
    }

    public void registerForT53AudioControlInfo(Handler handler, int i, Object obj) {
    }

    public void registerForVoiceRadioTechChanged(Handler handler, int i, Object obj) {
    }

    public void rejectCall(Message message) {
    }

    public void reportSmsMemoryStatus(boolean z, Message message) {
    }

    public void reportStkServiceIsRunning(Message message) {
    }

    public void requestIccSimAuthentication(int i, String str, String str2, Message message) {
    }

    public void requestShutdown(Message message) {
    }

    public void resetRadio(Message message) {
    }

    public void sendBurstDtmf(String str, int i, int i2, Message message) {
    }

    public void sendCDMAFeatureCode(String str, Message message) {
    }

    public void sendCdmaSMSExpectMore(byte[] bArr, Message message) {
    }

    public void sendCdmaSms(byte[] bArr, Message message) {
    }

    public void sendDeviceState(int i, boolean z, Message message) {
    }

    public void sendDtmf(char c, Message message) {
    }

    public void sendEnvelope(String str, Message message) {
    }

    public void sendEnvelopeWithStatus(String str, Message message) {
    }

    public void sendImsCdmaSms(byte[] bArr, int i, int i2, Message message) {
    }

    public void sendImsGsmSms(String str, String str2, int i, int i2, Message message) {
    }

    public void sendSMS(String str, String str2, Message message) {
    }

    public void sendSMSExpectMore(String str, String str2, Message message) {
    }

    public void sendTerminalResponse(String str, Message message) {
    }

    public void sendUSSD(String str, Message message) {
    }

    public void separateConnection(int i, Message message) {
    }

    public void setBandMode(int i, Message message) {
    }

    public void setCLIR(int i, Message message) {
    }

    public void setCallForward(int i, int i2, int i3, String str, int i4, Message message) {
    }

    public void setCallWaiting(boolean z, int i, Message message) {
    }

    public void setCarrierInfoForImsiEncryption(ImsiEncryptionInfo imsiEncryptionInfo, Message message) {
    }

    public void setCdmaBroadcastActivation(boolean z, Message message) {
    }

    public void setCdmaBroadcastConfig(CdmaSmsBroadcastConfigInfo[] cdmaSmsBroadcastConfigInfoArr, Message message) {
    }

    public void setCdmaRoamingPreference(int i, Message message) {
    }

    public void setCdmaSubscriptionSource(int i, Message message) {
    }

    public void setDataAllowed(boolean z, Message message) {
    }

    public void setDataProfile(DataProfile[] dataProfileArr, boolean z, Message message) {
    }

    public void setEmergencyCallbackMode(Handler handler, int i, Object obj) {
    }

    public void setFacilityLock(String str, boolean z, String str2, int i, Message message) {
    }

    public void setFacilityLockForApp(String str, boolean z, String str2, int i, String str3, Message message) {
    }

    public void setGsmBroadcastActivation(boolean z, Message message) {
    }

    public void setGsmBroadcastConfig(SmsBroadcastConfigInfo[] smsBroadcastConfigInfoArr, Message message) {
    }

    public void setInitialAttachApn(DataProfile dataProfile, boolean z, Message message) {
    }

    public void setLinkCapacityReportingCriteria(int i, int i2, int i3, int[] iArr, int[] iArr2, int i4, Message message) {
    }

    public void setLocationUpdates(boolean z, Message message) {
    }

    public void setLogicalToPhysicalSlotMapping(int[] iArr, Message message) {
    }

    public void setMute(boolean z, Message message) {
    }

    public void setNetworkSelectionModeAutomatic(Message message) {
    }

    public void setNetworkSelectionModeManual(String str, int i, Message message) {
    }

    public void setOnCallRing(Handler handler, int i, Object obj) {
    }

    public void setOnCatCallSetUp(Handler handler, int i, Object obj) {
    }

    public void setOnCatCcAlphaNotify(Handler handler, int i, Object obj) {
    }

    public void setOnCatEvent(Handler handler, int i, Object obj) {
    }

    public void setOnCatProactiveCmd(Handler handler, int i, Object obj) {
    }

    public void setOnCatSessionEnd(Handler handler, int i, Object obj) {
    }

    public void setOnIccRefresh(Handler handler, int i, Object obj) {
    }

    public void setOnIccSmsFull(Handler handler, int i, Object obj) {
    }

    public void setOnNITZTime(Handler handler, int i, Object obj) {
    }

    public void setOnNewCdmaSms(Handler handler, int i, Object obj) {
    }

    public void setOnNewGsmBroadcastSms(Handler handler, int i, Object obj) {
    }

    public void setOnNewGsmSms(Handler handler, int i, Object obj) {
    }

    public void setOnRestrictedStateChanged(Handler handler, int i, Object obj) {
    }

    public void setOnSignalStrengthUpdate(Handler handler, int i, Object obj) {
    }

    public void setOnSmsOnSim(Handler handler, int i, Object obj) {
    }

    public void setOnSmsStatus(Handler handler, int i, Object obj) {
    }

    public void setOnSs(Handler handler, int i, Object obj) {
    }

    public void setOnSuppServiceNotification(Handler handler, int i, Object obj) {
    }

    public void setOnUSSD(Handler handler, int i, Object obj) {
    }

    public void setOnUnsolOemHookRaw(Handler handler, int i, Object obj) {
    }

    public void setPhoneType(int i) {
    }

    public void setPreferredNetworkType(int i, Message message) {
    }

    public void setPreferredVoicePrivacy(boolean z, Message message) {
    }

    public void setRadioCapability(RadioCapability radioCapability, Message message) {
    }

    public void setRadioPower(boolean z, Message message) {
    }

    public void setSignalStrengthReportingCriteria(SignalThresholdInfo signalThresholdInfo, int i, Message message) {
    }

    public void setSmscAddress(String str, Message message) {
    }

    public void setSuppServiceNotifications(boolean z, Message message) {
    }

    public void setTTYMode(int i, Message message) {
    }

    public void setUiccSubscription(int i, int i2, int i3, int i4, Message message) {
    }

    public void setUnsolResponseFilter(int i, Message message) {
    }

    public void setupDataCall(int i, DataProfile dataProfile, boolean z, boolean z2, int i2, LinkProperties linkProperties, Message message) {
    }

    public void startDtmf(char c, Message message) {
    }

    public void startLceService(int i, boolean z, Message message) {
    }

    public void startNattKeepalive(int i, KeepalivePacketData keepalivePacketData, int i2, Message message) {
    }

    public void startNetworkScan(NetworkScanRequest networkScanRequest, Message message) {
    }

    public void stopDtmf(Message message) {
    }

    public void stopLceService(Message message) {
    }

    public void stopNattKeepalive(int i, Message message) {
    }

    public void stopNetworkScan(Message message) {
    }

    public void supplyIccPin(String str, Message message) {
    }

    public void supplyIccPin2(String str, Message message) {
    }

    public void supplyIccPin2ForApp(String str, String str2, Message message) {
    }

    public void supplyIccPinForApp(String str, String str2, Message message) {
    }

    public void supplyIccPuk(String str, String str2, Message message) {
    }

    public void supplyIccPuk2(String str, String str2, Message message) {
    }

    public void supplyIccPuk2ForApp(String str, String str2, String str3, Message message) {
    }

    public void supplyIccPukForApp(String str, String str2, String str3, Message message) {
    }

    public void supplyNetworkDepersonalization(String str, Message message) {
    }

    public void supplySimDepersonalization(IccCardApplicationStatus.PersoSubState persoSubState, String str, Message message) {
    }

    public void switchWaitingOrHoldingAndActive(Message message) {
    }

    public void testingEmergencyCall() {
    }

    public void unSetOnCallRing(Handler handler) {
    }

    public void unSetOnCatCallSetUp(Handler handler) {
    }

    public void unSetOnCatCcAlphaNotify(Handler handler) {
    }

    public void unSetOnCatEvent(Handler handler) {
    }

    public void unSetOnCatProactiveCmd(Handler handler) {
    }

    public void unSetOnCatSessionEnd(Handler handler) {
    }

    public void unSetOnIccSmsFull(Handler handler) {
    }

    public void unSetOnNITZTime(Handler handler) {
    }

    public void unSetOnNewCdmaSms(Handler handler) {
    }

    public void unSetOnNewGsmBroadcastSms(Handler handler) {
    }

    public void unSetOnNewGsmSms(Handler handler) {
    }

    public void unSetOnRestrictedStateChanged(Handler handler) {
    }

    public void unSetOnSignalStrengthUpdate(Handler handler) {
    }

    public void unSetOnSmsOnSim(Handler handler) {
    }

    public void unSetOnSmsStatus(Handler handler) {
    }

    public void unSetOnSs(Handler handler) {
    }

    public void unSetOnSuppServiceNotification(Handler handler) {
    }

    public void unSetOnUSSD(Handler handler) {
    }

    public void unSetOnUnsolOemHookRaw(Handler handler) {
    }

    public void unregisterForAvailable(Handler handler) {
    }

    public void unregisterForCallStateChanged(Handler handler) {
    }

    public void unregisterForCallWaitingInfo(Handler handler) {
    }

    public void unregisterForCarrierInfoForImsiEncryption(Handler handler) {
    }

    public void unregisterForCdmaOtaProvision(Handler handler) {
    }

    public void unregisterForCdmaPrlChanged(Handler handler) {
    }

    public void unregisterForCdmaSubscriptionChanged(Handler handler) {
    }

    public void unregisterForCellInfoList(Handler handler) {
    }

    public void unregisterForDataCallListChanged(Handler handler) {
    }

    public void unregisterForDisplayInfo(Handler handler) {
    }

    public void unregisterForEmergencyNumberList(Handler handler) {
    }

    public void unregisterForExitEmergencyCallbackMode(Handler handler) {
    }

    public void unregisterForHardwareConfigChanged(Handler handler) {
    }

    public void unregisterForIccRefresh(Handler handler) {
    }

    public void unregisterForIccSlotStatusChanged(Handler handler) {
    }

    public void unregisterForIccStatusChanged(Handler handler) {
    }

    public void unregisterForImsNetworkStateChanged(Handler handler) {
    }

    public void unregisterForInCallVoicePrivacyOff(Handler handler) {
    }

    public void unregisterForInCallVoicePrivacyOn(Handler handler) {
    }

    public void unregisterForLceInfo(Handler handler) {
    }

    public void unregisterForLineControlInfo(Handler handler) {
    }

    public void unregisterForModemReset(Handler handler) {
    }

    public void unregisterForNattKeepaliveStatus(Handler handler) {
    }

    public void unregisterForNetworkScanResult(Handler handler) {
    }

    public void unregisterForNetworkStateChanged(Handler handler) {
    }

    public void unregisterForNotAvailable(Handler handler) {
    }

    public void unregisterForNumberInfo(Handler handler) {
    }

    public void unregisterForOffOrNotAvailable(Handler handler) {
    }

    public void unregisterForOn(Handler handler) {
    }

    public void unregisterForPcoData(Handler handler) {
    }

    public void unregisterForPhysicalChannelConfiguration(Handler handler) {
    }

    public void unregisterForRadioCapabilityChanged(Handler handler) {
    }

    public void unregisterForRadioStateChanged(Handler handler) {
    }

    public void unregisterForRedirectedNumberInfo(Handler handler) {
    }

    public void unregisterForResendIncallMute(Handler handler) {
    }

    public void unregisterForRilConnected(Handler handler) {
    }

    public void unregisterForRingbackTone(Handler handler) {
    }

    public void unregisterForSignalInfo(Handler handler) {
    }

    public void unregisterForSrvccStateChanged(Handler handler) {
    }

    public void unregisterForSubscriptionStatusChanged(Handler handler) {
    }

    public void unregisterForT53AudioControlInfo(Handler handler) {
    }

    public void unregisterForT53ClirInfo(Handler handler) {
    }

    public void unregisterForVoiceRadioTechChanged(Handler handler) {
    }

    public void unsetOnIccRefresh(Handler handler) {
    }

    public void writeSmsToRuim(int i, byte[] bArr, Message message) {
    }

    public void writeSmsToSim(int i, String str, String str2, Message message) {
    }
}
