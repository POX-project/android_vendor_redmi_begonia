package com.mediatek.mdml;

import android.util.Log;

/* JADX INFO: loaded from: classes3.dex */
class MCPTransmitter {
    private static final String TAG = "MDML/MCPTransmitter";
    private SocketConnection m_connection;
    private String m_serverName;

    public MCPTransmitter(String str) {
        if (str != null) {
            this.m_serverName = str;
            SocketConnection socketConnection = new SocketConnection();
            this.m_connection = socketConnection;
            socketConnection.Connect(str);
        }
    }

    public synchronized boolean Send(MCPInfo mCPInfo, MCPInfo mCPInfo2) {
        if (mCPInfo == null) {
            return false;
        }
        if (MCPHandler.WriteToConnection(this.m_connection, mCPInfo, mCPInfo2)) {
            return true;
        }
        for (int i = 0; i < 5; i++) {
            try {
                Thread.sleep(2000L);
            } catch (Exception e) {
            }
            if (this.m_connection.Connect(this.m_serverName) && MCPHandler.WriteToConnection(this.m_connection, mCPInfo, mCPInfo2)) {
                return true;
            }
            Log.e(TAG, "Reconnect to [" + this.m_serverName + "] failed.");
        }
        return true;
    }
}
