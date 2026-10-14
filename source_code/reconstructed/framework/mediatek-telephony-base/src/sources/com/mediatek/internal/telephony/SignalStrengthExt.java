package com.mediatek.internal.telephony;

import android.telephony.Rlog;
import mediatek.telephony.ISignalStrengthExt;

/* JADX INFO: loaded from: classes.dex */
public class SignalStrengthExt implements ISignalStrengthExt {
    private static final boolean DBG = true;
    static final String TAG = "SignalStrengthExt";

    public static void log(String str) {
        Rlog.d(TAG, str);
    }

    private void loge(String str) {
        Rlog.e(TAG, str);
    }

    @Override // mediatek.telephony.ISignalStrengthExt
    public int mapLteSignalLevel(int i, int i2, int i3) {
        int i4 = 0;
        int i5 = -1;
        int i6 = -1;
        if (i > -44) {
            i5 = -1;
        } else if (i >= -85) {
            i5 = 4;
        } else if (i >= -95) {
            i5 = 3;
        } else if (i >= -105) {
            i5 = 2;
        } else if (i >= -115) {
            i5 = 1;
        } else if (i >= -140) {
            i5 = 0;
        }
        if (i2 > 300) {
            i6 = -1;
        } else if (i2 >= 130) {
            i6 = 4;
        } else if (i2 >= 45) {
            i6 = 3;
        } else if (i2 >= 10) {
            i6 = 2;
        } else if (i2 >= -30) {
            i6 = 1;
        } else if (i2 >= -200) {
            i6 = 0;
        }
        Rlog.i(TAG, "getLTELevel - rsrp:" + i + " snr:" + i2 + " rsrpIconLevel:" + i5 + " snrIconLevel:" + i6);
        if (i6 != -1 && i5 != -1) {
            return i5 < i6 ? i5 : i6;
        }
        if (i6 != -1) {
            return i6;
        }
        if (i5 != -1) {
            return i5;
        }
        if (i3 > 63) {
            i4 = 0;
        } else if (i3 >= 12) {
            i4 = 4;
        } else if (i3 >= 8) {
            i4 = 3;
        } else if (i3 >= 5) {
            i4 = 2;
        } else if (i3 >= 0) {
            i4 = 1;
        }
        Rlog.i(TAG, "getLTELevel - rssi:" + i3 + " rssiIconLevel:" + i4);
        return i4;
    }

    @Override // mediatek.telephony.ISignalStrengthExt
    public int mapUmtsSignalLevel(int i, int i2) {
        int i3;
        log("mapUmtsSignalLevel, phoneId=" + i);
        if (i2 > -25 || i2 == Integer.MAX_VALUE) {
            i3 = 0;
        } else if (i2 >= -72) {
            i3 = 4;
        } else if (i2 >= -88) {
            i3 = 3;
        } else if (i2 >= -104) {
            i3 = 2;
        } else {
            i3 = i2 >= -120 ? 1 : 0;
        }
        log("mapUmtsSignalLevel, level=" + i3);
        return i3;
    }
}
