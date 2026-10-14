package com.mediatek.ims.plugin;

import android.telephony.ims.ImsCallForwardInfo;
import com.android.internal.telephony.CallForwardInfo;

/* JADX INFO: loaded from: classes.dex */
public interface ImsSSExtPlugin {
    ImsCallForwardInfo[] getImsCallForwardInfo(CallForwardInfo[] callForwardInfoArr);
}
