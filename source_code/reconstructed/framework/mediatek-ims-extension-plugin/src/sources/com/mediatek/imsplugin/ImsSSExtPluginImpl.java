package com.mediatek.imsplugin;

import android.content.Context;
import android.telephony.ims.ImsCallForwardInfo;
import android.util.Log;
import com.android.internal.telephony.CallForwardInfo;
import com.mediatek.ims.ImsUtImpl;
import com.mediatek.ims.plugin.impl.ImsSSExtPluginBase;

/* JADX INFO: loaded from: classes.dex */
public class ImsSSExtPluginImpl extends ImsSSExtPluginBase {
    private static final String TAG = "ImsSSExtPluginImpl";
    private Context mContext;

    public ImsSSExtPluginImpl(Context context) {
        super(context);
        this.mContext = context;
    }

    public ImsCallForwardInfo[] getImsCallForwardInfo(CallForwardInfo[] callForwardInfoArr) {
        ImsCallForwardInfo[] imsCallForwardInfoArr = null;
        if (callForwardInfoArr != null) {
            imsCallForwardInfoArr = new ImsCallForwardInfo[callForwardInfoArr.length];
            for (int i = 0; i < callForwardInfoArr.length; i++) {
                Log.d(TAG, "getImsCallForwardInfo: info[" + i + "] = " + callForwardInfoArr[i]);
                imsCallForwardInfoArr[i] = new ImsCallForwardInfo();
                imsCallForwardInfoArr[i].mCondition = ImsUtImpl.getConditionFromCFReason(callForwardInfoArr[i].reason);
                imsCallForwardInfoArr[i].mStatus = callForwardInfoArr[i].status;
                imsCallForwardInfoArr[i].mServiceClass = callForwardInfoArr[i].serviceClass;
                imsCallForwardInfoArr[i].mToA = callForwardInfoArr[i].toa;
                imsCallForwardInfoArr[i].mNumber = callForwardInfoArr[i].number;
                imsCallForwardInfoArr[i].mTimeSeconds = callForwardInfoArr[i].timeSeconds;
            }
        }
        return imsCallForwardInfoArr;
    }
}
