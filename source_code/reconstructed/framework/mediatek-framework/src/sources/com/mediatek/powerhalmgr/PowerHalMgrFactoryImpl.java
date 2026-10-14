package com.mediatek.powerhalmgr;

/* JADX INFO: loaded from: classes.dex */
public class PowerHalMgrFactoryImpl extends PowerHalMgrFactory {
    public PowerHalMgr makePowerHalMgr() {
        return PowerHalMgrImpl.getInstance();
    }
}
