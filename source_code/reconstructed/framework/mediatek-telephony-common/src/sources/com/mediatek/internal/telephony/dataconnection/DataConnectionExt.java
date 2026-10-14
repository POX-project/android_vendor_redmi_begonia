package com.mediatek.internal.telephony.dataconnection;

import android.content.Context;
import android.os.AsyncResult;
import android.provider.Settings;
import android.telephony.PcoData;
import android.telephony.Rlog;
import android.telephony.data.ApnSetting;
import android.text.TextUtils;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.dataconnection.ApnContext;
import com.android.internal.telephony.dataconnection.DcTrackerInjector;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class DataConnectionExt implements IDataConnectionExt {
    static final String TAG = "DataConnectionExt";
    private Context mContext;

    public DataConnectionExt(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public long getDisconnectDoneRetryTimer(String str, long j) {
        if (MtkGsmCdmaPhone.REASON_RA_FAILED.equals(str)) {
            return 90000L;
        }
        return j;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean getIsPcoAllowedDefault() {
        return true;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public int getPcoActionByApnType(ApnContext apnContext, PcoData pcoData) {
        return 0;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public void handlePcoDataAfterAttached(AsyncResult asyncResult, Phone phone, ArrayList<ApnSetting> arrayList) {
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean ignoreDataRoaming(String str) {
        if (!TextUtils.equals(str, "ims")) {
            return false;
        }
        log("ignoreDataRoaming, apnType = " + str);
        return true;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean ignoreDefaultDataUnselected(String str) {
        if (!TextUtils.equals(str, "ims") && !TextUtils.equals(str, "emergency") && !TextUtils.equals(str, "xcap") && !TextUtils.equals(str, "mms")) {
            return false;
        }
        log("ignoreDefaultDataUnselected, apnType = " + str);
        return true;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isDataAllowedAsOff(String str) {
        if (TextUtils.equals(str, "default")) {
            return false;
        }
        return ((TextUtils.equals(str, "mms") && Settings.System.getInt(this.mContext.getContentResolver(), "always_enable_mms", DcTrackerInjector.getDefaultAlwaysEnableMms(this.mContext)) != 1) || TextUtils.equals(str, "dun") || TextUtils.equals(str, "supl")) ? false : true;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isDomesticRoamingEnabled() {
        return false;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isFdnEnableSupport() {
        return false;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isMeteredApnType(String str, boolean z) {
        log("isMeteredApnType, apnType = " + str + ", isRoaming = " + z);
        return TextUtils.equals(str, "default") || TextUtils.equals(str, "supl") || TextUtils.equals(str, "dun") || TextUtils.equals(str, "mms");
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isMeteredApnTypeByLoad() {
        return false;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isOnlySingleDcAllowed() {
        return false;
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public boolean isPermanentCause(int i) {
        return false;
    }

    public void log(String str) {
        Rlog.d(TAG, str);
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public void onDcActivated(String[] strArr, String str) {
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public void onDcDeactivated(String[] strArr, String str) {
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public void setIsPcoAllowedDefault(boolean z) {
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public void startDataRoamingStrategy(Phone phone) {
    }

    @Override // com.mediatek.internal.telephony.dataconnection.IDataConnectionExt
    public void stopDataRoamingStrategy() {
    }
}
