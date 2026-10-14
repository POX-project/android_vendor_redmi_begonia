package com.mediatek.internal.telephony;

import com.android.internal.telephony.DisplayInfoController;
import com.android.internal.telephony.Phone;

/* JADX INFO: loaded from: classes.dex */
public final class MtkDisplayInfoController extends DisplayInfoController {
    public MtkDisplayInfoController(Phone phone) {
        super(phone);
        this.mNetworkTypeController = new MtkNetworkTypeController(phone, this);
        this.mNetworkTypeController.sendMessage(0);
    }
}
