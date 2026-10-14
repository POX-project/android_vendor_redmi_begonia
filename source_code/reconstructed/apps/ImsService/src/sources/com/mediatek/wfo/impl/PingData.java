package com.mediatek.wfo.impl;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class PingData {
    private static final String TAG = "PingData";
    private double mLatencyData;
    private int mPacketLostData;
    private int mSimId;

    public PingData(int i, double d, int i2) {
        this.mSimId = i;
        this.mLatencyData = d;
        this.mPacketLostData = i2;
    }

    private void debugInfo(String str) {
        Log.i(TAG, "[" + this.mSimId + "]: " + str);
    }

    public int getPacketLoss() {
        debugInfo("mPacketLost:" + this.mPacketLostData);
        return this.mPacketLostData;
    }

    public double getPingLatency() {
        debugInfo("mPingLatency:" + this.mLatencyData);
        return this.mLatencyData;
    }
}
