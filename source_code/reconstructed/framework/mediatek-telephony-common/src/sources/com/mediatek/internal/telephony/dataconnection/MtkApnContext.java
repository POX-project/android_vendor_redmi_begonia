package com.mediatek.internal.telephony.dataconnection;

import android.net.NetworkCapabilities;
import android.os.Bundle;
import android.telephony.data.ApnSetting;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.dataconnection.ApnContext;
import com.android.internal.telephony.dataconnection.DataConnection;
import com.android.internal.telephony.dataconnection.DcTracker;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import vendor.mediatek.hardware.mtkradioex.V2_0.MtkApnTypes;

/* JADX INFO: loaded from: classes.dex */
public class MtkApnContext extends ApnContext {
    private static final int NETWORK_TYPE_BIP = 2002;
    private static final int NETWORK_TYPE_MCX = 1001;
    private static final int NETWORK_TYPE_RCS = 2001;
    private static final int NETWORK_TYPE_VSIM = 2003;
    private static final int NETWORK_TYPE_XCAP = 1002;
    private static final String SLOG_TAG = "MtkApnContext";
    private DataConnection mDataConnectionSscMode3;
    private boolean mNeedNotify;

    public MtkApnContext(Phone phone, int i, String str, DcTracker dcTracker, int i2) {
        super(phone, i, str, dcTracker, i2);
        this.mNeedNotify = needNotifyType(ApnSetting.getApnTypeString(i));
    }

    private static Bundle getApnTypeFromNetworkRequestEx(NetworkCapabilities networkCapabilities, int i, boolean z) {
        if (networkCapabilities.hasCapability(8)) {
            if (i != 0) {
                z = true;
            }
            i = MtkApnTypes.RCS;
        }
        if (networkCapabilities.hasCapability(27)) {
            if (i != 0) {
                z = true;
            }
            i = MtkApnTypes.BIP;
        }
        if (networkCapabilities.hasCapability(26)) {
            if (i != 0) {
                z = true;
            }
            i = MtkApnTypes.VSIM;
        }
        Bundle bundle = new Bundle();
        bundle.putInt("apnType", i);
        bundle.putBoolean("error", z);
        return bundle;
    }

    private static int getApnTypeFromNetworkTypeEx(int i) {
        if (i == 1001) {
            return 1024;
        }
        if (i == 1002) {
            return MtkApnTypes.XCAP;
        }
        switch (i) {
            case 2001:
                return MtkApnTypes.RCS;
            case 2002:
                return MtkApnTypes.BIP;
            case NETWORK_TYPE_VSIM /* 2003 */:
                return MtkApnTypes.VSIM;
            default:
                return 0;
        }
    }

    private boolean needNotifyType(String str) {
        return (str.equals("xcap") || str.equals("rcs") || str.equals("bip") || str.equals("vsim")) ? false : true;
    }

    public synchronized DataConnection getDataConnectionSscMode3() {
        return this.mDataConnectionSscMode3;
    }

    public ApnSetting getNextApnSetting() {
        return MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3.equals(getReason()) ? getApnSetting() : super.getNextApnSetting();
    }

    public boolean isNeedNotify() {
        return this.mNeedNotify;
    }

    public synchronized void setDataConnectionSscMode3(DataConnection dataConnection) {
        this.mDataConnectionSscMode3 = dataConnection;
    }

    public void setEnabled(boolean z) {
        super.setEnabled(z);
        this.mNeedNotify = true;
    }
}
