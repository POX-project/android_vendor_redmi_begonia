package com.mediatek.ims.config;

import android.content.Context;
import android.os.Handler;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public final class ConfigRegister extends Register {
    public ConfigRegister(Context context, int i) {
        this(context, i, null);
    }

    public ConfigRegister(Context context, int i, Handler handler) {
        super(context, i, handler);
        this.argType = "config";
    }

    @Override // com.mediatek.ims.config.Register
    public Register addArg(int i) {
        if (ImsConfigContract.Validator.isValidConfigId(i)) {
            super.addArg(i);
            return this;
        }
        throw new IllegalArgumentException("Invalid config id " + i + " to register");
    }

    @Override // com.mediatek.ims.config.Register
    public void register(Register.IArgsChangeListener iArgsChangeListener) {
        super.register(iArgsChangeListener);
        Iterator<Integer> it = this.mRegArgs.iterator();
        while (it.hasNext()) {
            this.mContext.getContentResolver().registerContentObserver(ImsConfigContract.Master.getUriWithConfigId(this.mPhoneId, it.next().intValue()), false, this.mArgsObserver);
        }
    }

    @Override // com.mediatek.ims.config.Register
    public void unregister() {
        super.unregister();
    }
}
