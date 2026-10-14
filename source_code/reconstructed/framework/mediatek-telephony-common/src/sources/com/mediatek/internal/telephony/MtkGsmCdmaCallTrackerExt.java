package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.Bundle;
import com.android.internal.telephony.Connection;
import com.android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmCdmaCallTrackerExt implements IMtkGsmCdmaCallTrackerExt {
    static final String TAG = "GsmCdmaCallTkrExt";
    protected Context mContext;

    public MtkGsmCdmaCallTrackerExt() {
    }

    public MtkGsmCdmaCallTrackerExt(Context context) {
        this.mContext = context;
    }

    protected static boolean equalsBaseDialString(String str, String str2) {
        if (str == null) {
            if (str2 == null) {
                return true;
            }
        } else if (str2 != null && str.startsWith(str2)) {
            return true;
        }
        return false;
    }

    protected static boolean equalsHandlesNulls(Object obj, Object obj2) {
        if (obj == null) {
            return obj2 == null;
        }
        return obj.equals(obj2);
    }

    @Override // com.mediatek.internal.telephony.IMtkGsmCdmaCallTrackerExt
    public boolean areConnectionsInSameLine(Connection[] connectionArr) {
        return true;
    }

    @Override // com.mediatek.internal.telephony.IMtkGsmCdmaCallTrackerExt
    public String convertAddress(String str) {
        return null;
    }

    @Override // com.mediatek.internal.telephony.IMtkGsmCdmaCallTrackerExt
    public String convertDialString(Bundle bundle, String str) {
        return null;
    }

    @Override // com.mediatek.internal.telephony.IMtkGsmCdmaCallTrackerExt
    public Bundle getAddressExtras(String str) {
        return null;
    }

    @Override // com.mediatek.internal.telephony.IMtkGsmCdmaCallTrackerExt
    public boolean isAddressChanged(boolean z, String str, String str2) {
        return !equalsHandlesNulls(str2, str);
    }

    @Override // com.mediatek.internal.telephony.IMtkGsmCdmaCallTrackerExt
    public boolean isAddressChanged(boolean z, String str, String str2, String str3) {
        if (equalsBaseDialString(str2, str)) {
            return false;
        }
        return (z && equalsBaseDialString(str3, str)) ? false : true;
    }

    public void log(String str) {
        Rlog.d(TAG, str);
    }
}
