package com.mediatek.wfo.util;

import android.net.ConnectivityManager;
import android.net.NetworkRequest;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class RssiMonitoringProcessor {
    static final String TAG = "RssiMonitoringProcessor";
    ConnectivityManager mConnectivityManager;
    private RssiMonitorRequest[][] mRssiMonitoringList;
    int mSimCount;

    class RssiMonitorRequest {
        ConnectivityManager.NetworkCallback mCallback;
        NetworkRequest mRequest;

        RssiMonitorRequest(NetworkRequest networkRequest, ConnectivityManager.NetworkCallback networkCallback) {
            this.mRequest = networkRequest;
            this.mCallback = networkCallback;
        }
    }

    public RssiMonitoringProcessor(ConnectivityManager connectivityManager) {
        this.mConnectivityManager = connectivityManager;
    }

    private boolean checkInvalidSimIdx(int i, String str) {
        if (i >= 0 && i < this.mSimCount) {
            return false;
        }
        Log.d(TAG, str);
        return true;
    }

    private String printIntArray(int[] iArr) {
        if (iArr == null) {
            return "input is null";
        }
        String str = new String();
        for (int i = 0; i < iArr.length; i++) {
            str = i == 0 ? "" + iArr[i] : str + "," + iArr[i];
        }
        return str;
    }

    public void initialize(int i) {
        this.mSimCount = i;
        this.mRssiMonitoringList = new RssiMonitorRequest[i][];
    }

    public void registerRssiMonitoring(int i, int i2, int[] iArr) {
        if (checkInvalidSimIdx(i, "onRssiMonitorRequest: invalid SIM id")) {
            return;
        }
        Log.d(TAG, "onRssiMonitorRequest simId: " + i + " size: " + i2 + " rssiThresholds: " + printIntArray(iArr));
        if (this.mConnectivityManager == null) {
            Log.d(TAG, "onRssiMonitorRequest: mConnectivityManager is null");
            return;
        }
        unregisterAllRssiMonitoring(i);
        RssiMonitorRequest[] rssiMonitorRequestArr = new RssiMonitorRequest[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            NetworkRequest networkRequestBuild = new NetworkRequest.Builder().setSignalStrength(iArr[i3]).addTransportType(1).build();
            ConnectivityManager.NetworkCallback networkCallback = new ConnectivityManager.NetworkCallback();
            this.mConnectivityManager.registerNetworkCallback(networkRequestBuild, networkCallback);
            Log.d(TAG, "onRssiMonitorRequest registerNetworkCallback with rssi: " + iArr[i3]);
            rssiMonitorRequestArr[i3] = new RssiMonitorRequest(networkRequestBuild, networkCallback);
        }
        this.mRssiMonitoringList[i] = rssiMonitorRequestArr;
    }

    public void unregisterAllRssiMonitoring(int i) {
        Log.d(TAG, "unregisterAllRssiMonitoring(), simId:" + i);
        if (this.mRssiMonitoringList[i] == null) {
            return;
        }
        int i2 = 0;
        while (true) {
            RssiMonitorRequest[][] rssiMonitorRequestArr = this.mRssiMonitoringList;
            if (i2 >= rssiMonitorRequestArr[i].length) {
                rssiMonitorRequestArr[i] = null;
                return;
            } else {
                this.mConnectivityManager.unregisterNetworkCallback(rssiMonitorRequestArr[i][i2].mCallback);
                i2++;
            }
        }
    }
}
