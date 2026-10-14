package com.mediatek.ims.ril;

import android.hardware.radio.V1_0.CdmaCallWaiting;
import android.hardware.radio.V1_0.CdmaInformationRecords;
import android.hardware.radio.V1_0.CdmaSignalInfoRecord;
import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.CellInfo;
import android.hardware.radio.V1_0.HardwareConfig;
import android.hardware.radio.V1_0.LceDataInfo;
import android.hardware.radio.V1_0.PcoDataInfo;
import android.hardware.radio.V1_0.RadioCapability;
import android.hardware.radio.V1_0.SetupDataCallResult;
import android.hardware.radio.V1_0.SignalStrength;
import android.hardware.radio.V1_0.SimRefreshResult;
import android.hardware.radio.V1_0.StkCcUnsolSsResult;
import android.hardware.radio.V1_0.SuppSvcNotification;
import android.hardware.radio.V1_1.KeepaliveStatus;
import android.hardware.radio.V1_1.NetworkScanResult;
import android.hardware.radio.V1_2.LinkCapacityEstimate;
import android.hardware.radio.V1_2.PhysicalChannelConfig;
import android.hardware.radio.V1_4.EmergencyNumber;
import android.hardware.radio.V1_4.IRadioIndication;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class RadioIndicationBase extends IRadioIndication.Stub {
    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void callRing(int i, boolean z, CdmaSignalInfoRecord cdmaSignalInfoRecord) {
        riljLoge("No implementation in callRing");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void callStateChanged(int i) {
        riljLoge("No implementation in callStateChanged");
    }

    @Override // android.hardware.radio.V1_1.IRadioIndication
    public void carrierInfoForImsiEncryption(int i) {
        riljLoge("No implementation in carrierInfoForImsiEncryption");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaCallWaiting(int i, CdmaCallWaiting cdmaCallWaiting) {
        riljLoge("No implementation in cdmaCallWaiting");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaInfoRec(int i, CdmaInformationRecords cdmaInformationRecords) {
        riljLoge("No implementation in cdmaInfoRec");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaNewSms(int i, CdmaSmsMessage cdmaSmsMessage) {
        riljLoge("No implementation in cdmaNewSms");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaOtaProvisionStatus(int i, int i2) {
        riljLoge("No implementation in cdmaOtaProvisionStatus");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaPrlChanged(int i, int i2) {
        riljLoge("No implementation in cdmaPrlChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaRuimSmsStorageFull(int i) {
        riljLoge("No implementation in cdmaRuimSmsStorageFull");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cdmaSubscriptionSourceChanged(int i, int i2) {
        riljLoge("No implementation in cdmaSubscriptionSourceChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void cellInfoList(int i, ArrayList<CellInfo> arrayList) {
        riljLoge("No implementation in cellInfoList");
    }

    @Override // android.hardware.radio.V1_2.IRadioIndication
    public void cellInfoList_1_2(int i, ArrayList<android.hardware.radio.V1_2.CellInfo> arrayList) {
        riljLoge("No implementation in cellInfoList_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioIndication
    public void cellInfoList_1_4(int i, ArrayList<android.hardware.radio.V1_4.CellInfo> arrayList) {
        riljLoge("No implementation in cellInfoList_1_4");
    }

    @Override // android.hardware.radio.V1_4.IRadioIndication
    public void currentEmergencyNumberList(int i, ArrayList<EmergencyNumber> arrayList) {
        riljLoge("No implementation in currentEmergencyNumberList");
    }

    @Override // android.hardware.radio.V1_2.IRadioIndication
    public void currentLinkCapacityEstimate(int i, LinkCapacityEstimate linkCapacityEstimate) {
        riljLoge("No implementation in currentLinkCapacityEstimate");
    }

    @Override // android.hardware.radio.V1_2.IRadioIndication
    public void currentPhysicalChannelConfigs(int i, ArrayList<PhysicalChannelConfig> arrayList) {
        riljLoge("No implementation in currentPhysicalChannelConfigs");
    }

    @Override // android.hardware.radio.V1_4.IRadioIndication
    public void currentPhysicalChannelConfigs_1_4(int i, ArrayList<android.hardware.radio.V1_4.PhysicalChannelConfig> arrayList) {
        riljLoge("No implementation in currentPhysicalChannelConfigs_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void currentSignalStrength(int i, SignalStrength signalStrength) {
        riljLoge("No implementation in currentSignalStrength");
    }

    @Override // android.hardware.radio.V1_2.IRadioIndication
    public void currentSignalStrength_1_2(int i, android.hardware.radio.V1_2.SignalStrength signalStrength) {
        riljLoge("No implementation in currentSignalStrength_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioIndication
    public void currentSignalStrength_1_4(int i, android.hardware.radio.V1_4.SignalStrength signalStrength) {
        riljLoge("No implementation in currentSignalStrength_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void dataCallListChanged(int i, ArrayList<SetupDataCallResult> arrayList) {
        riljLoge("No implementation in dataCallListChanged");
    }

    @Override // android.hardware.radio.V1_4.IRadioIndication
    public void dataCallListChanged_1_4(int i, ArrayList<android.hardware.radio.V1_4.SetupDataCallResult> arrayList) {
        riljLoge("No implementation in dataCallListChanged_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void enterEmergencyCallbackMode(int i) {
        riljLoge("No implementation in enterEmergencyCallbackMode");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void exitEmergencyCallbackMode(int i) {
        riljLoge("No implementation in exitEmergencyCallbackMode");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void hardwareConfigChanged(int i, ArrayList<HardwareConfig> arrayList) {
        riljLoge("No implementation in hardwareConfigChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void imsNetworkStateChanged(int i) {
        riljLoge("No implementation in imsNetworkStateChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void indicateRingbackTone(int i, boolean z) {
        riljLoge("No implementation in indicateRingbackTone");
    }

    @Override // android.hardware.radio.V1_1.IRadioIndication
    public void keepaliveStatus(int i, KeepaliveStatus keepaliveStatus) {
        riljLoge("No implementation in keepaliveStatus");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void lceData(int i, LceDataInfo lceDataInfo) {
        riljLoge("No implementation in lceData");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void modemReset(int i, String str) {
        riljLoge("No implementation in modemReset");
    }

    @Override // android.hardware.radio.V1_1.IRadioIndication
    public void networkScanResult(int i, NetworkScanResult networkScanResult) {
        riljLoge("No implementation in networkScanResult");
    }

    @Override // android.hardware.radio.V1_2.IRadioIndication
    public void networkScanResult_1_2(int i, android.hardware.radio.V1_2.NetworkScanResult networkScanResult) {
        riljLoge("No implementation in networkScanResult_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioIndication
    public void networkScanResult_1_4(int i, android.hardware.radio.V1_4.NetworkScanResult networkScanResult) {
        riljLoge("No implementation in networkScanResult_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void networkStateChanged(int i) {
        riljLoge("No implementation in networkStateChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void newBroadcastSms(int i, ArrayList<Byte> arrayList) {
        riljLoge("No implementation in newBroadcastSms");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void newSms(int i, ArrayList<Byte> arrayList) {
        riljLoge("No implementation in newSms");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void newSmsOnSim(int i, int i2) {
        riljLoge("No implementation in newSmsOnSim");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void newSmsStatusReport(int i, ArrayList<Byte> arrayList) {
        riljLoge("No implementation in newSmsStatusReport");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void nitzTimeReceived(int i, String str, long j) {
        riljLoge("No implementation in nitzTimeReceived");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void onSupplementaryServiceIndication(int i, StkCcUnsolSsResult stkCcUnsolSsResult) {
        riljLoge("No implementation in onSupplementaryServiceIndication");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void onUssd(int i, int i2, String str) {
        riljLoge("No implementation in onUssd");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void pcoData(int i, PcoDataInfo pcoDataInfo) {
        riljLoge("No implementation in pcoData");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void radioCapabilityIndication(int i, RadioCapability radioCapability) {
        riljLoge("No implementation in radioCapabilityIndication");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void radioStateChanged(int i, int i2) {
        riljLoge("No implementation in radioStateChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void resendIncallMute(int i) {
        riljLoge("No implementation in resendIncallMute");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void restrictedStateChanged(int i, int i2) {
        riljLoge("No implementation in restrictedStateChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void rilConnected(int i) {
        riljLoge("No implementation in rilConnected");
    }

    protected void riljLoge(String str) {
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void simRefresh(int i, SimRefreshResult simRefreshResult) {
        riljLoge("No implementation in simRefresh");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void simSmsStorageFull(int i) {
        riljLoge("No implementation in simSmsStorageFull");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void simStatusChanged(int i) {
        riljLoge("No implementation in simStatusChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void srvccStateNotify(int i, int i2) {
        riljLoge("No implementation in srvccStateNotify");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void stkCallControlAlphaNotify(int i, String str) {
        riljLoge("No implementation in stkCallControlAlphaNotify");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void stkCallSetup(int i, long j) {
        riljLoge("No implementation in stkCallSetup");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void stkEventNotify(int i, String str) {
        riljLoge("No implementation in stkEventNotify");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void stkProactiveCommand(int i, String str) {
        riljLoge("No implementation in stkProactiveCommand");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void stkSessionEnd(int i) {
        riljLoge("No implementation in stkSessionEnd");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void subscriptionStatusChanged(int i, boolean z) {
        riljLoge("No implementation in subscriptionStatusChanged");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) {
        riljLoge("No implementation in suppSvcNotify");
    }

    @Override // android.hardware.radio.V1_0.IRadioIndication
    public void voiceRadioTechChanged(int i, int i2) {
        riljLoge("No implementation in voiceRadioTechChanged");
    }
}
