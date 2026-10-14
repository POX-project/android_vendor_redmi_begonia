package com.mediatek.mdml;

import android.os.RemoteException;
import android.util.Log;
import java.util.ArrayList;
import vendor.mediatek.hardware.mdmonitor.V1_0.IMDMonitorClientCallback;

/* JADX INFO: loaded from: classes3.dex */
class MDMonitorClientCallback extends IMDMonitorClientCallback.Stub {
    private static final String TAG = "MDML/MDMonitorClientCallback";
    private HIDLHandlerInterface m_mcpHandlerInstance = null;

    @Override // vendor.mediatek.hardware.mdmonitor.V1_0.IMDMonitorClientCallback
    public boolean MCPReceiver(ArrayList<Byte> arrayList) throws RemoteException {
        HIDLHandlerInterface hIDLHandlerInterface = this.m_mcpHandlerInstance;
        if (hIDLHandlerInterface == null) {
            Log.d(TAG, "MCPReceiver end without handler");
            return false;
        }
        hIDLHandlerInterface.DataIn(arrayList);
        Log.d(TAG, "MCPReceiver end");
        return true;
    }

    public void SetMCPHandler(HIDLHandlerInterface hIDLHandlerInterface) {
        this.m_mcpHandlerInstance = hIDLHandlerInterface;
    }
}
