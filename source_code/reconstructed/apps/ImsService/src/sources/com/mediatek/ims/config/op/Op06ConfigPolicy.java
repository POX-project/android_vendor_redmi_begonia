package com.mediatek.ims.config.op;

import com.mediatek.ims.config.ImsConfigPolicy;

/* JADX INFO: loaded from: classes.dex */
public class Op06ConfigPolicy extends ImsConfigPolicy {
    public Op06ConfigPolicy() {
        super("Op06ConfigPolicy");
    }

    @Override // com.mediatek.ims.config.ImsConfigPolicy
    public boolean onSetDefaultValue(int i, ImsConfigPolicy.DefaultConfig defaultConfig) {
        if (i == 28) {
            defaultConfig.defVal = "0";
            return true;
        }
        if (i != 1000) {
            return false;
        }
        defaultConfig.defVal = "";
        return true;
    }
}
