package com.mediatek.internal.telephony;

import android.telephony.Rlog;
import com.android.internal.telephony.DisplayInfoController;
import com.android.internal.telephony.NetworkTypeController;
import com.android.internal.telephony.Phone;

/* JADX INFO: loaded from: classes.dex */
public final class MtkNetworkTypeController extends NetworkTypeController {
    public static final String TAG = "MtkNetworkTypeController";

    public MtkNetworkTypeController(Phone phone, DisplayInfoController displayInfoController) {
        super(phone, displayInfoController);
    }

    protected void registerForAllEvents() {
        super.registerForAllEvents();
        Rlog.d(TAG, "registerForAllEvents: register rat changed for TRANSPORT_TYPE_WLAN");
        this.mPhone.getServiceStateTracker().registerForDataRegStateOrRatChanged(2, getHandler(), 2, (Object) null);
    }

    protected void unRegisterForAllEvents() {
        super.unRegisterForAllEvents();
        this.mPhone.getServiceStateTracker().unregisterForDataRegStateOrRatChanged(2, getHandler());
    }
}
