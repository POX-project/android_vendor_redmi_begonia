package com.mediatek.ims.config.op;

import com.mediatek.ims.config.ImsConfigPolicy;

/* JADX INFO: loaded from: classes.dex */
public class Op08ConfigPolicy extends ImsConfigPolicy {
    public Op08ConfigPolicy() {
        super("Op08ConfigPolicy");
    }

    @Override // com.mediatek.ims.config.ImsConfigPolicy
    public boolean onSetDefaultValue(int i, ImsConfigPolicy.DefaultConfig defaultConfig) {
        if (i != 10) {
            return false;
        }
        defaultConfig.defVal = "0";
        return true;
    }
}
