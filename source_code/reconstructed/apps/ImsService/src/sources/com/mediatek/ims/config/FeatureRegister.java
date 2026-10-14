package com.mediatek.ims.config;

import android.content.Context;
import android.os.Handler;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public final class FeatureRegister extends Register {
    private int mNetworkType;

    public FeatureRegister(Context context, int i, int i2) {
        this(context, i, i2, null);
    }

    public FeatureRegister(Context context, int i, int i2, Handler handler) {
        super(context, i, handler);
        this.argType = "feature";
        this.mNetworkType = i2;
    }

    @Override // com.mediatek.ims.config.Register
    public Register addArg(int i) {
        if (ImsConfigContract.Validator.isValidFeatureId(i)) {
            super.addArg(i);
            return this;
        }
        throw new IllegalArgumentException("Invalid feature id " + i + " to register");
    }

    @Override // com.mediatek.ims.config.Register
    public void register(Register.IArgsChangeListener iArgsChangeListener) {
        super.register(iArgsChangeListener);
        Iterator<Integer> it = this.mRegArgs.iterator();
        while (it.hasNext()) {
            this.mContext.getContentResolver().registerContentObserver(ImsConfigContract.Feature.getUriWithFeatureId(this.mPhoneId, it.next().intValue(), this.mNetworkType), false, this.mArgsObserver);
        }
    }

    @Override // com.mediatek.ims.config.Register
    public void unregister() {
        super.unregister();
    }
}
