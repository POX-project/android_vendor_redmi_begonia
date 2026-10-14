package com.mediatek.internal.telephony.selfactivation;

import android.content.Context;
import android.os.Bundle;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class SelfActivationDefault implements ISelfActivation {
    private static final String TAG = "SelfActivationDefault";
    protected int mPhoneId;
    protected Context mContext = null;
    protected CommandsInterface mCi = null;

    public SelfActivationDefault(int i) {
        this.mPhoneId = -1;
        Rlog.d(TAG, "init");
        this.mPhoneId = i;
    }

    @Override // com.mediatek.internal.telephony.selfactivation.ISelfActivation
    public ISelfActivation buildParams() {
        return this;
    }

    @Override // com.mediatek.internal.telephony.selfactivation.ISelfActivation
    public int getPCO520State() {
        return 0;
    }

    @Override // com.mediatek.internal.telephony.selfactivation.ISelfActivation
    public int getSelfActivateState() {
        return 0;
    }

    @Override // com.mediatek.internal.telephony.selfactivation.ISelfActivation
    public int selfActivationAction(int i, Bundle bundle) {
        return -1;
    }

    @Override // com.mediatek.internal.telephony.selfactivation.ISelfActivation
    public ISelfActivation setCommandsInterface(CommandsInterface commandsInterface) {
        this.mCi = commandsInterface;
        return this;
    }

    @Override // com.mediatek.internal.telephony.selfactivation.ISelfActivation
    public ISelfActivation setContext(Context context) {
        this.mContext = context;
        return this;
    }
}
