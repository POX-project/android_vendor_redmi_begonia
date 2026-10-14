package com.mediatek.internal.telephony;

import com.android.internal.telephony.Phone;

/* JADX INFO: loaded from: classes.dex */
public class MtkNetworkStatusUpdater {
    private static MtkNetworkStatusUpdater sMtkNetworkStatusUpdater;

    public MtkNetworkStatusUpdater(Phone[] phoneArr, int i) {
        for (int i2 = 0; i2 < i; i2++) {
            phoneArr[i2].getServiceStateTracker().pollState();
        }
    }

    public static MtkNetworkStatusUpdater init(Phone[] phoneArr, int i) {
        MtkNetworkStatusUpdater mtkNetworkStatusUpdater;
        synchronized (MtkNetworkStatusUpdater.class) {
            if (sMtkNetworkStatusUpdater == null) {
                sMtkNetworkStatusUpdater = new MtkNetworkStatusUpdater(phoneArr, i);
            }
            mtkNetworkStatusUpdater = sMtkNetworkStatusUpdater;
        }
        return mtkNetworkStatusUpdater;
    }
}
