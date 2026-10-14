package com.mediatek.ims.config.op;

import com.mediatek.ims.config.ImsConfigPolicy;

/* JADX INFO: loaded from: classes.dex */
public class Op236ConfigPolicy extends ImsConfigPolicy {
    public Op236ConfigPolicy() {
        super("Op236ConfigPolicy");
    }

    @Override // com.mediatek.ims.config.ImsConfigPolicy
    public boolean onSetDefaultValue(int i, ImsConfigPolicy.DefaultConfig defaultConfig) {
        if (i != 1003) {
            return false;
        }
        defaultConfig.defVal = "1";
        return true;
    }
}
