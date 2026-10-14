package com.mediatek.mdml;

import android.util.Log;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
class MCPReceiver implements ConnectionHandlerInterface, HIDLHandlerInterface {
    private static final String TAG = "MDML/MCPReceiver";
    private PayloadHandlerInterface mPayloadHandler = null;
    private MCPInfo mMcpInfo = new MCPInfo();

    @Override // com.mediatek.mdml.ConnectionHandlerInterface
    public boolean DataIn(SocketConnection socketConnection) {
        int i = 0;
        for (int i2 = 0; i2 <= 5; i2++) {
            if (!socketConnection.ReadToBuffer()) {
                Log.e(TAG, "Failed to read from connection. (read error)");
                return false;
            }
            while (true) {
                DataQueue dataQueueGetDataQueue = socketConnection.GetDataQueue();
                if (dataQueueGetDataQueue.Size() == 0) {
                    break;
                }
                if (this.mMcpInfo.GetLen() == 0) {
                    if (!MCPHandler.SearchHeader(this.mMcpInfo, dataQueueGetDataQueue)) {
                        Log.e(TAG, "Header is not found!");
                        break;
                    }
                } else {
                    if (dataQueueGetDataQueue.Size() < this.mMcpInfo.GetLen()) {
                        Log.d(TAG, "Data size [" + dataQueueGetDataQueue.Size() + "] < Payload length [" + this.mMcpInfo.GetLen() + "]. Wait for next time.");
                        break;
                    }
                    dataQueueGetDataQueue.Pop(0);
                    MCPInfo mCPInfo = this.mMcpInfo;
                    mCPInfo.SetData(mCPInfo.GetType(), this.mMcpInfo.GetLen(), dataQueueGetDataQueue.GetData());
                    MCPInfo mCPInfo2 = new MCPInfo();
                    PayloadHandlerInterface payloadHandlerInterface = this.mPayloadHandler;
                    if (payloadHandlerInterface != null) {
                        payloadHandlerInterface.ProcessPayload(this.mMcpInfo, mCPInfo2);
                        if (mCPInfo2.GetLen() > 0) {
                            Log.d(TAG, "Send command reply: type:[" + mCPInfo2.GetType() + "], len:[" + mCPInfo2.GetLen() + "], data:");
                            if (!MCPHandler.WriteToConnection(socketConnection, mCPInfo2, null)) {
                                Log.e(TAG, "Failed to write socket. (write error)");
                                return false;
                            }
                        }
                    }
                    i++;
                    dataQueueGetDataQueue.Pop(this.mMcpInfo.GetLen());
                    this.mMcpInfo.SetData(MCP_TYPE.MCP_TYPE_UNDEFINED, 0, null);
                }
            }
            if (i > 0) {
                break;
            }
            Log.d(TAG, "No packet is processed. RETRY.");
            try {
                Thread.sleep(1L);
            } catch (Exception e) {
            }
        }
        if (i == 0 && this.mMcpInfo.GetLen() > 0) {
            socketConnection.GetDataQueue().Clear();
            this.mMcpInfo.SetData(MCP_TYPE.MCP_TYPE_UNDEFINED, 0, null);
        }
        return i != 0;
    }

    @Override // com.mediatek.mdml.HIDLHandlerInterface
    public boolean DataIn(ArrayList<Byte> arrayList) {
        DataQueue dataQueue = new DataQueue();
        dataQueue.PushArrayList(arrayList);
        this.mMcpInfo.SetData(MCP_TYPE.MCP_TYPE_UNDEFINED, 0, null);
        if (dataQueue.Size() == 0) {
            Log.e(TAG, "Trap data is empty");
            return false;
        }
        if (!MCPHandler.SearchHeader(this.mMcpInfo, dataQueue)) {
            Log.e(TAG, "Trap data has no MCP header");
            return false;
        }
        if (dataQueue.Size() < this.mMcpInfo.GetLen()) {
            Log.e(TAG, "Data size [" + dataQueue.Size() + "] < Payload length [" + this.mMcpInfo.GetLen() + "]. ");
            return false;
        }
        dataQueue.Pop(0);
        MCPInfo mCPInfo = this.mMcpInfo;
        mCPInfo.SetData(mCPInfo.GetType(), this.mMcpInfo.GetLen(), dataQueue.GetData());
        MCPInfo mCPInfo2 = new MCPInfo();
        PayloadHandlerInterface payloadHandlerInterface = this.mPayloadHandler;
        if (payloadHandlerInterface == null) {
            return true;
        }
        payloadHandlerInterface.ProcessPayload(this.mMcpInfo, mCPInfo2);
        mCPInfo2.GetLen();
        return true;
    }

    public void setPayloadHandler(PayloadHandlerInterface payloadHandlerInterface) {
        this.mPayloadHandler = payloadHandlerInterface;
    }
}
