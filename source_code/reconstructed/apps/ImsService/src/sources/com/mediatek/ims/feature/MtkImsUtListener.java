package com.mediatek.ims.feature;

import android.annotation.SystemApi;
import android.os.RemoteException;
import android.telephony.ims.ImsCallForwardInfo;
import android.util.Log;
import com.mediatek.ims.MtkImsCallForwardInfo;
import com.mediatek.ims.internal.IMtkImsUt;
import com.mediatek.ims.internal.IMtkImsUtListener;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class MtkImsUtListener {
    private static final String LOG_TAG = "MtkImsUtListener";
    private IMtkImsUtListener mServiceInterface;

    public MtkImsUtListener(IMtkImsUtListener iMtkImsUtListener) {
        this.mServiceInterface = iMtkImsUtListener;
    }

    public void onUtConfigurationCallForwardInTimeSlotQueried(int i, MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) {
        try {
            this.mServiceInterface.utConfigurationCallForwardInTimeSlotQueried((IMtkImsUt) null, i, mtkImsCallForwardInfoArr);
        } catch (RemoteException e) {
            Log.w(LOG_TAG, "onUtConfigurationCallForwardInTimeSlotQueried: remote exception");
        }
    }

    public void onUtConfigurationCallForwardQueried(int i, ImsCallForwardInfo[] imsCallForwardInfoArr) {
        try {
            this.mServiceInterface.utConfigurationCallForwardQueried((IMtkImsUt) null, i, imsCallForwardInfoArr);
        } catch (RemoteException e) {
            Log.w(LOG_TAG, "utConfigurationCallForwardQueried: remote exception");
        }
    }
}
