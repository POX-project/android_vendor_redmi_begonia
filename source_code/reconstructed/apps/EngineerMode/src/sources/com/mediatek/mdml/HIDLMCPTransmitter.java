package com.mediatek.mdml;

import android.os.IHwBinder;
import android.os.RemoteException;
import android.util.Log;
import java.util.NoSuchElementException;
import vendor.mediatek.hardware.mdmonitor.V1_0.IMDMonitorService;

/* JADX INFO: loaded from: classes3.dex */
class HIDLMCPTransmitter {
    private static final String TAG = "MDML/HIDLMCPTransmitter";
    TransmitterDeathRecipient mHidlDeathRecepient = new TransmitterDeathRecipient();
    private IMDMonitorService m_connection;
    private String m_serviceName;

    class TransmitterDeathRecipient implements IHwBinder.DeathRecipient {
        TransmitterDeathRecipient() {
        }

        public void serviceDied(long j) {
            Log.e(HIDLMCPTransmitter.TAG, "MDM HIDL Service died.");
        }
    }

    public HIDLMCPTransmitter(String str) {
        Log.d(TAG, "HIDLMCPTransmitter constructor");
        if (str != null) {
            this.m_serviceName = str;
        }
        connectMDMHIDL();
        Log.d(TAG, "HIDLMCPTransmitter constructor done");
    }

    public synchronized boolean Send(MCPInfo mCPInfo, MCPInfo mCPInfo2) {
        if (mCPInfo == null) {
            return false;
        }
        Log.d(TAG, "Send HIDL MCP CMD start ...");
        if (MCPHandler.WriteToHIDLService(this.m_connection, mCPInfo, mCPInfo2)) {
            Log.d(TAG, "Send HIDL MCP CMD ok");
            return true;
        }
        Log.d(TAG, "Send HIDL MCP CMD error");
        return false;
    }

    public void connectMDMHIDL() {
        try {
            Log.d(TAG, "connectMDMHIDL");
            IMDMonitorService service = IMDMonitorService.getService(true);
            this.m_connection = service;
            service.linkToDeath(this.mHidlDeathRecepient, 0L);
            Log.d(TAG, "connectMDMHIDL done!");
        } catch (RemoteException e) {
            e.printStackTrace();
            Log.e(TAG, "IMDMonitorService RemoteException ...");
            this.m_connection = null;
        } catch (NoSuchElementException e2) {
            e2.printStackTrace();
            Log.e(TAG, "IMDMonitorService NoSuchElementException ...");
            this.m_connection = null;
        }
    }
}
