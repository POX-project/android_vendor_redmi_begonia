package com.mediatek.internal.telephony;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class DeviceSarConfig {
    private String mDeviceName = null;
    private String mListeners = null;
    private Map<String, String> mPropList = new HashMap();
    private Map<String, String> mDsiList = new HashMap();

    DeviceSarConfig() {
    }

    public String getDeviceName() {
        return this.mDeviceName;
    }

    public Map<String, String> getDsiList() {
        return this.mDsiList;
    }

    public String getListeners() {
        return this.mListeners;
    }

    public Map<String, String> getPropList() {
        return this.mPropList;
    }

    public void setDeviceName(String str) {
        this.mDeviceName = str;
    }

    public void setDsiList(String str, String str2) {
        this.mDsiList.put(str, str2);
    }

    public void setListeners(String str) {
        this.mListeners = str;
    }

    public void setPropList(String str, String str2) {
        this.mPropList.put(str, str2);
    }
}
