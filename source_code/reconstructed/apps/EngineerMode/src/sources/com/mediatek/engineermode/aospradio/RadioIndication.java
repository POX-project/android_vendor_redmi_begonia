package com.mediatek.engineermode.aospradio;

import android.hardware.radio.V1_0.CdmaCallWaiting;
import android.hardware.radio.V1_0.CdmaInformationRecords;
import android.hardware.radio.V1_0.CdmaSignalInfoRecord;
import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.CellInfo;
import android.hardware.radio.V1_0.HardwareConfig;
import android.hardware.radio.V1_0.IRadioIndication;
import android.hardware.radio.V1_0.LceDataInfo;
import android.hardware.radio.V1_0.PcoDataInfo;
import android.hardware.radio.V1_0.RadioCapability;
import android.hardware.radio.V1_0.SetupDataCallResult;
import android.hardware.radio.V1_0.SignalStrength;
import android.hardware.radio.V1_0.SimRefreshResult;
import android.hardware.radio.V1_0.StkCcUnsolSsResult;
import android.hardware.radio.V1_0.SuppSvcNotification;
import android.os.AsyncResult;
import android.os.Message;
import com.android.internal.telephony.RIL;
import com.mediatek.engineermode.Elog;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class RadioIndication extends IRadioIndication.Stub {
    public static final String TAG = "AospRadioIndication";
    public static int stateLast = 2;
    private String[] radioStatus = {"off", "on", "power downm"};

    public RadioIndication(RIL ril) {
    }

    public static String[] radioStateToPrimitiveArrayString(List<String> list) {
        String[] strArr = new String[list.size()];
        for (int i = 0; i < strArr.length; i++) {
            strArr[i] = list.get(i);
        }
        return strArr;
    }

    public static void resetStateLast() {
        stateLast = 2;
    }

    private void sendMessageResponse(Message message, Object obj) {
        try {
            AsyncResult.forMessage(message, obj, (Throwable) null);
            message.sendToTarget();
        } catch (Exception e) {
            Elog.e(TAG, "sendMessageResponse: " + e.getMessage());
        }
    }

    public void callRing(int i, boolean z, CdmaSignalInfoRecord cdmaSignalInfoRecord) {
    }

    public void callStateChanged(int i) {
    }

    public void cdmaCallWaiting(int i, CdmaCallWaiting cdmaCallWaiting) {
    }

    public void cdmaInfoRec(int i, CdmaInformationRecords cdmaInformationRecords) {
    }

    public void cdmaNewSms(int i, CdmaSmsMessage cdmaSmsMessage) {
    }

    public void cdmaOtaProvisionStatus(int i, int i2) {
    }

    public void cdmaPrlChanged(int i, int i2) {
    }

    public void cdmaRuimSmsStorageFull(int i) {
    }

    public void cdmaSubscriptionSourceChanged(int i, int i2) {
    }

    public void cellInfoList(int i, ArrayList<CellInfo> arrayList) {
    }

    public void currentSignalStrength(int i, SignalStrength signalStrength) {
    }

    public void dataCallListChanged(int i, ArrayList<SetupDataCallResult> arrayList) {
    }

    public void enterEmergencyCallbackMode(int i) {
    }

    public void exitEmergencyCallbackMode(int i) {
    }

    int getRadioStateFromInt(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 2;
        }
        if (i == 10) {
            return 1;
        }
        throw new RuntimeException("Unrecognized RadioState: " + i);
    }

    public void hardwareConfigChanged(int i, ArrayList<HardwareConfig> arrayList) {
    }

    public void imsNetworkStateChanged(int i) {
    }

    public void indicateRingbackTone(int i, boolean z) {
    }

    public void lceData(int i, LceDataInfo lceDataInfo) {
    }

    public void modemReset(int i, String str) {
    }

    public void networkStateChanged(int i) {
    }

    public void newBroadcastSms(int i, ArrayList<Byte> arrayList) {
    }

    public void newSms(int i, ArrayList<Byte> arrayList) {
    }

    public void newSmsOnSim(int i, int i2) {
    }

    public void newSmsStatusReport(int i, ArrayList<Byte> arrayList) {
    }

    public void nitzTimeReceived(int i, String str, long j) {
    }

    public void onSupplementaryServiceIndication(int i, StkCcUnsolSsResult stkCcUnsolSsResult) {
    }

    public void onUssd(int i, int i2, String str) {
    }

    public void pcoData(int i, PcoDataInfo pcoDataInfo) {
    }

    public void radioCapabilityIndication(int i, RadioCapability radioCapability) {
    }

    public void radioStateChanged(int i, int i2) {
        int radioStateFromInt = getRadioStateFromInt(i2);
        Elog.v(TAG, "radioStateChanged,state = " + radioStateFromInt + ":" + this.radioStatus[radioStateFromInt]);
        int[] iArr = {radioStateFromInt, 0};
        if (EmRadioHidlAosp.mRadioIndicationType != 3) {
            Elog.v(TAG, "radioStateChanged not send to app");
            return;
        }
        Message messageObtainMessage = EmRadioHidlAosp.mHandler.obtainMessage(EmRadioHidlAosp.mWhat);
        if (radioStateFromInt != stateLast) {
            sendMessageResponse(messageObtainMessage, iArr);
        }
        stateLast = radioStateFromInt;
    }

    public void resendIncallMute(int i) {
    }

    public void restrictedStateChanged(int i, int i2) {
    }

    public void rilConnected(int i) {
    }

    public void simRefresh(int i, SimRefreshResult simRefreshResult) {
    }

    public void simSmsStorageFull(int i) {
    }

    public void simStatusChanged(int i) {
    }

    public void srvccStateNotify(int i, int i2) {
    }

    public void stkCallControlAlphaNotify(int i, String str) {
    }

    public void stkCallSetup(int i, long j) {
    }

    public void stkEventNotify(int i, String str) {
    }

    public void stkProactiveCommand(int i, String str) {
    }

    public void stkSessionEnd(int i) {
    }

    public void subscriptionStatusChanged(int i, boolean z) {
    }

    public void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) {
    }

    public void voiceRadioTechChanged(int i, int i2) {
    }
}
