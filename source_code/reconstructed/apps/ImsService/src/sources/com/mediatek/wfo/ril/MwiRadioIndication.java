package com.mediatek.wfo.ril;

import android.os.AsyncResult;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication;

/* JADX INFO: loaded from: classes.dex */
public class MwiRadioIndication extends IMwiRadioIndication.Stub {
    private int mPhoneId;
    private MwiRIL mRil;

    MwiRadioIndication(MwiRIL mwiRIL, int i) {
        this.mRil = mwiRIL;
        this.mPhoneId = i;
        mwiRIL.riljLogv("MwiRadioIndication, phone = " + this.mPhoneId);
    }

    private int[] convertArrayListToIntArray(ArrayList<Integer> arrayList) {
        int[] iArr = new int[arrayList.size()];
        for (int i = 0; i < arrayList.size(); i++) {
            iArr[i] = arrayList.get(i).intValue();
        }
        return iArr;
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onLocationRequest(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(MwiRILConstants.RIL_UNSOL_REQUEST_GEO_LOCATION);
        arrayList.add(Integer.toString(this.mRil.mPhoneId.intValue()));
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        if (this.mRil.mRequestGeoLocationRegistrants != null) {
            this.mRil.mRequestGeoLocationRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onNattKeepAliveChanged(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(MwiRILConstants.RIL_UNSOL_NATT_KEEP_ALIVE_CHANGED);
        arrayList.add(Integer.toString(this.mRil.mPhoneId.intValue()));
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        if (this.mRil.mNattKeepAliveChangedRegistrants != null) {
            this.mRil.mNattKeepAliveChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onPdnHandover(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_MOBILE_WIFI_HANDOVER, arrayList);
        if (this.mRil.mWifiPdnHandoverRegistrants != null) {
            this.mRil.mWifiPdnHandoverRegistrants.notifyRegistrants(new AsyncResult((Object) null, convertArrayListToIntArray(arrayList), (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWfcPdnError(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_WIFI_PDN_ERROR, arrayList);
        if (this.mRil.mWifiPdnErrorRegistrants != null) {
            this.mRil.mWifiPdnErrorRegistrants.notifyRegistrants(new AsyncResult((Object) null, convertArrayListToIntArray(arrayList), (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWfcPdnStateChanged(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_WFC_PDN_STATE, arrayList);
        if (this.mRil.mWfcPdnStateChangedRegistrants != null) {
            this.mRil.mWfcPdnStateChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, convertArrayListToIntArray(arrayList), (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWifiLock(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(3127, arrayList);
        arrayList.add(Integer.toString(this.mRil.mPhoneId.intValue()));
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        if (this.mRil.mWifiLockRegistrants != null) {
            this.mRil.mWifiLockRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWifiMonitoringThreshouldChanged(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_WIFI_RSSI_MONITORING_CONFIG, arrayList);
        if (this.mRil.mRssiThresholdChangedRegistrants != null) {
            this.mRil.mRssiThresholdChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, convertArrayListToIntArray(arrayList), (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWifiPdnActivate(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_ACTIVE_WIFI_PDN_COUNT, arrayList);
        if (this.mRil.mWifiPdnActivatedRegistrants != null) {
            this.mRil.mWifiPdnActivatedRegistrants.notifyRegistrants(new AsyncResult((Object) null, convertArrayListToIntArray(arrayList), (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWifiPdnOOS(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_WIFI_PDN_OOS, arrayList);
        arrayList.add(Integer.toString(this.mRil.mPhoneId.intValue()));
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        if (this.mRil.mWifiPdnOosRegistrants != null) {
            this.mRil.mWifiPdnOosRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWifiPingRequest(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_WIFI_PING_REQUEST, arrayList);
        if (this.mRil.mWifiPingRequestRegistrants != null) {
            this.mRil.mWifiPingRequestRegistrants.notifyRegistrants(new AsyncResult((Object) null, convertArrayListToIntArray(arrayList), (Throwable) null));
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioIndication
    public void onWifiRoveout(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLogRet(MwiRILConstants.RIL_UNSOL_MOBILE_WIFI_ROVEOUT, arrayList);
        arrayList.add(Integer.toString(this.mRil.mPhoneId.intValue()));
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        if (this.mRil.mWifiPdnRoveOutRegistrants != null) {
            this.mRil.mWifiPdnRoveOutRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }
}
