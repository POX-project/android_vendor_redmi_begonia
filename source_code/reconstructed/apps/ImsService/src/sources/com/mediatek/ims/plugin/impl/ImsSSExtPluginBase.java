package com.mediatek.ims.plugin.impl;

import android.content.Context;
import android.telephony.ims.ImsCallForwardInfo;
import android.util.Log;
import com.android.internal.telephony.CallForwardInfo;
import com.mediatek.ims.ImsUtImpl;
import com.mediatek.ims.plugin.ImsSSExtPlugin;

/* JADX INFO: loaded from: classes.dex */
public class ImsSSExtPluginBase implements ImsSSExtPlugin {
    private static final String TAG = "ImsSSExtPluginBase";
    private Context mContext;

    public ImsSSExtPluginBase(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.ims.plugin.ImsSSExtPlugin
    public ImsCallForwardInfo[] getImsCallForwardInfo(CallForwardInfo[] callForwardInfoArr) {
        ImsCallForwardInfo[] imsCallForwardInfoArr = new ImsCallForwardInfo[1];
        if (callForwardInfoArr != null) {
            for (int i = 0; i < callForwardInfoArr.length; i++) {
                Log.d(TAG, "getImsCallForwardInfo: info[" + i + "] = " + callForwardInfoArr[i]);
                if (callForwardInfoArr[i].serviceClass == 1) {
                    imsCallForwardInfoArr[0] = new ImsCallForwardInfo();
                    imsCallForwardInfoArr[0].mCondition = ImsUtImpl.getConditionFromCFReason(callForwardInfoArr[i].reason);
                    imsCallForwardInfoArr[0].mStatus = callForwardInfoArr[i].status;
                    imsCallForwardInfoArr[0].mServiceClass = callForwardInfoArr[i].serviceClass;
                    imsCallForwardInfoArr[0].mToA = callForwardInfoArr[i].toa;
                    imsCallForwardInfoArr[0].mNumber = callForwardInfoArr[i].number;
                    imsCallForwardInfoArr[0].mTimeSeconds = callForwardInfoArr[i].timeSeconds;
                    return imsCallForwardInfoArr;
                }
            }
            imsCallForwardInfoArr[0] = new ImsCallForwardInfo();
            imsCallForwardInfoArr[0].mCondition = ImsUtImpl.getConditionFromCFReason(callForwardInfoArr[0].reason);
            imsCallForwardInfoArr[0].mStatus = 0;
            imsCallForwardInfoArr[0].mServiceClass = 1;
            imsCallForwardInfoArr[0].mToA = 0;
            imsCallForwardInfoArr[0].mNumber = "";
            imsCallForwardInfoArr[0].mTimeSeconds = 0;
        }
        return imsCallForwardInfoArr;
    }
}
