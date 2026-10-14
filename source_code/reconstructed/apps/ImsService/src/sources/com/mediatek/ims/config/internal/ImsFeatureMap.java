package com.mediatek.ims.config.internal;

import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class ImsFeatureMap {
    private HashMap<Integer, Boolean> mFeatureMap = new HashMap<>();
    private int mPhoneId;

    public ImsFeatureMap(int i) {
        this.mPhoneId = i;
    }

    public HashMap<Integer, Boolean> getFeatureMap() {
        return this.mFeatureMap;
    }
}
