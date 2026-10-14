package com.mediatek.internal.telephony;

import android.hardware.radio.V1_0.SuppSvcNotification;
import com.android.internal.telephony.RIL;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.CfuStatusNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.CipherNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.CrssNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.DedicateDataCall;
import vendor.mediatek.hardware.mtkradioex.V2_0.EtwsNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication;
import vendor.mediatek.hardware.mtkradioex.V2_0.IncomingCallNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.PcoDataAttachedInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.PlmnMvnoInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.SignalStrengthWithWcdmaEcio;
import vendor.mediatek.hardware.mtkradioex.V2_0.VsimOperationEvent;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioExIndicationBase extends IMtkRadioExIndication.Stub {
    MtkRadioExIndicationBase(RIL ril) {
    }

    public void bipProactiveCommand(int i, String str) {
    }

    public void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void cdmaCallAccepted(int i) {
    }

    public void cfuStatusNotify(int i, CfuStatusNotification cfuStatusNotification) {
    }

    public void cipherIndication(int i, CipherNotification cipherNotification) {
    }

    public void confSRVCC(int i, ArrayList<Integer> arrayList) {
    }

    public void crssIndication(int i, CrssNotification crssNotification) {
    }

    public void currentSignalStrengthWithWcdmaEcioInd(int i, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) {
    }

    public void dataAllowedNotification(int i, int i2) {
    }

    public void dedicatedBearerActivationInd(int i, DedicateDataCall dedicateDataCall) {
    }

    public void dedicatedBearerDeactivationInd(int i, int i2) {
    }

    public void dedicatedBearerModificationInd(int i, DedicateDataCall dedicateDataCall) {
    }

    public void dsbpStateChanged(int i, int i2) {
    }

    public void eMBMSAtInfoIndication(int i, String str) {
    }

    public void eMBMSSessionStatusIndication(int i, int i2) {
    }

    public void eccNumIndication(int i, String str, String str2) {
    }

    public void esnMeidChangeInd(int i, String str) {
    }

    public void gmssRatChangedIndication(int i, ArrayList<Integer> arrayList) {
    }

    public void iccidChanged(int i, String str) {
    }

    public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) {
    }

    public void mdChangedApnInd(int i, int i2) {
    }

    public void meSmsStorageFullInd(int i) {
    }

    public void mobileDataUsageInd(int i, ArrayList<Integer> arrayList) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void networkBandInfoInd(int i, ArrayList<Integer> arrayList) {
    }

    public void networkInfoInd(int i, ArrayList<String> arrayList) {
    }

    public void networkRejectCauseInd(int i, ArrayList<Integer> arrayList) {
    }

    public void newEtwsInd(int i, EtwsNotification etwsNotification) {
    }

    public void oemHookRaw(int i, ArrayList<Byte> arrayList) {
    }

    public void onCardDetectedInd(int i) {
    }

    public void onCellularQualityChangedInd(int i, ArrayList<Integer> arrayList) {
    }

    public void onDsdaChangedInd(int i, int i2) {
    }

    public void onImeiLock(int i) {
    }

    public void onImsiRefreshDone(int i) {
    }

    public void onMccMncChanged(int i, String str) {
    }

    public void onMdDataRetryCountReset(int i) {
    }

    public void onNwLimitInd(int i, ArrayList<Integer> arrayList) {
    }

    public void onPlmnDataInd(int i, PlmnMvnoInfo plmnMvnoInfo) {
    }

    public void onPseudoCellInfoInd(int i, ArrayList<Integer> arrayList) {
    }

    public void onRemoveRestrictEutran(int i) {
    }

    public void onRsuEvent(int i, int i2, String str) {
    }

    public void onRsuSimLockEvent(int i, int i2) {
    }

    public void onSimHotSwapInd(int i, int i2, String str) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onSimMeLockEvent(int i) {
    }

    public void onSimPowerChangedInd(int i, ArrayList<Integer> arrayList) {
    }

    public void onStkMenuReset(int i) {
    }

    public void onTxPowerIndication(int i, ArrayList<Integer> arrayList) {
    }

    public void onTxPowerStatusIndication(int i, ArrayList<Integer> arrayList) {
    }

    public void onVirtualSimOff(int i, int i2) {
    }

    public void onVirtualSimOn(int i, int i2) {
    }

    public void onVirtualSimStatusChanged(int i, int i2) {
    }

    public void onVsimEventIndication(int i, VsimOperationEvent vsimOperationEvent) {
    }

    public void pcoDataAfterAttached(int i, PcoDataAttachedInfo pcoDataAttachedInfo) {
    }

    public void phbReadyNotification(int i, int i2) {
    }

    public void plmnChangedIndication(int i, ArrayList<String> arrayList) {
    }

    public void qualifiedNetworkTypesChangedInd(int i, ArrayList<Integer> arrayList) {
    }

    public void registrationSuspendedIndication(int i, ArrayList<Integer> arrayList) {
    }

    public void resetAttachApnInd(int i) {
    }

    public void responseCsNetworkStateChangeInd(int i, ArrayList<String> arrayList) {
    }

    public void responseFemtocellInfo(int i, ArrayList<String> arrayList) {
    }

    public void responseInvalidSimInd(int i, ArrayList<String> arrayList) {
    }

    public void responseLteNetworkInfo(int i, int i2) {
    }

    public void responseModulationInfoInd(int i, ArrayList<Integer> arrayList) {
    }

    public void responseNetworkEventInd(int i, ArrayList<Integer> arrayList) {
    }

    public void responsePsNetworkStateChangeInd(int i, ArrayList<Integer> arrayList) {
    }

    public void smlSlotLockInfoChangedInd(int i, ArrayList<Integer> arrayList) {
    }

    public void smsInfoExtInd(int i, String str) {
    }

    public void smsReadyInd(int i) {
    }

    public void suppSvcNotifyEx(int i, SuppSvcNotification suppSvcNotification) {
    }

    public void triggerOtaSP(int i) {
    }

    public void worldModeChangedIndication(int i, ArrayList<Integer> arrayList) {
    }
}
