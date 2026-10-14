package com.mediatek.engineermode.wifi;

/* JADX INFO: compiled from: ChannelInfo.java */
/* JADX INFO: loaded from: classes3.dex */
class ChannelDataFormat {
    private int mId;
    private boolean mIs5G;
    private String mName;

    public ChannelDataFormat(int i, String str, boolean z) {
        this.mId = i;
        this.mName = str;
        this.mIs5G = z;
    }

    int getId() {
        return this.mId;
    }

    String getName() {
        return this.mName;
    }

    boolean is5G() {
        return this.mIs5G;
    }
}
