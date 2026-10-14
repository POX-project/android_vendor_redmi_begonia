package com.mediatek.ims.internal;

import android.net.Uri;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class ImsXuiManager {
    private static final String LOG_TAG = "ImsXuiManager";
    static ImsXuiManager sInstance;
    public String[] mXui = new String[TelephonyManager.getDefault().getPhoneCount()];

    private ImsXuiManager() {
    }

    public static ImsXuiManager getInstance() {
        if (sInstance == null) {
            ImsXuiManager imsXuiManager = new ImsXuiManager();
            sInstance = imsXuiManager;
            imsXuiManager.loadXui();
        }
        return sInstance;
    }

    private void loadXui() {
    }

    public void clearStoredXui() {
        this.mXui = null;
    }

    public Uri[] getSelfIdentifyUri(int i) {
        if (i >= 0) {
            String[] strArr = this.mXui;
            if (i < strArr.length) {
                String str = strArr[i];
                if (str == null) {
                    return null;
                }
                String[] strArrSplit = str.split(",");
                int length = strArrSplit.length;
                Uri[] uriArr = new Uri[length];
                for (int i2 = 0; i2 < length; i2++) {
                    String schemeSpecificPart = Uri.parse(strArrSplit[i2]).getSchemeSpecificPart();
                    if (TextUtils.isEmpty(schemeSpecificPart)) {
                        Rlog.d(LOG_TAG, "empty XUI");
                    } else {
                        String[] strArrSplit2 = schemeSpecificPart.split("[@;:]");
                        if (strArrSplit2.length == 0) {
                            Rlog.d(LOG_TAG, "no number in XUI handle");
                        } else {
                            uriArr[i2] = Uri.parse(strArrSplit2[0]);
                            Rlog.d(LOG_TAG, "IMS: getSelfIdentifyUri() uri = " + Rlog.pii(LOG_TAG, uriArr[i2]));
                        }
                    }
                }
                return uriArr;
            }
        }
        Rlog.d(LOG_TAG, "IMS: getSelfIdentifyUri() invalid phone Id: " + i);
        return null;
    }

    public String getXui() {
        return this.mXui[0];
    }

    public String getXui(int i) {
        return this.mXui[i];
    }

    public void setXui(int i, String str) {
        this.mXui[i] = str;
    }

    public void setXui(String str) {
        this.mXui[0] = str;
    }
}
