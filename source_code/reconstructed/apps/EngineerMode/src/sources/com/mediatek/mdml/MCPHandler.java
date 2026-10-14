package com.mediatek.mdml;

import android.os.RemoteException;
import android.util.Log;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import vendor.mediatek.hardware.mdmonitor.V1_0.IMDMonitorService;

/* JADX INFO: loaded from: classes3.dex */
class MCPHandler {
    private static final int PAYLOAD_LEN_BYTES = 4;
    private static final String TAG = "MDML/MCPHandler";
    private static final int TYPE_MAGIC_BYTES = 2;
    private static final byte[] HEADER_MAGIC = {-82, -51, -24, -12};
    private static final TypeMagic[] m_typeMagicTable = {new TypeMagic(MCP_TYPE.MCP_TYPE_JSON_CMD, new byte[]{117, 87}), new TypeMagic(MCP_TYPE.MCP_TYPE_JSON_CMD_RESP, new byte[]{117, 88}), new TypeMagic(MCP_TYPE.MCP_TYPE_TRAP, new byte[]{-84, -54})};

    private static class TypeMagic {
        public byte[] m_magic;
        public MCP_TYPE m_type;

        public TypeMagic(MCP_TYPE mcp_type, byte[] bArr) {
            this.m_type = mcp_type;
            this.m_magic = bArr;
        }
    }

    MCPHandler() {
    }

    private static byte[] GetTypeMagic(MCP_TYPE mcp_type) {
        if (mcp_type == null) {
            return null;
        }
        int i = 0;
        while (true) {
            TypeMagic[] typeMagicArr = m_typeMagicTable;
            if (i >= typeMagicArr.length) {
                return null;
            }
            if (mcp_type.equals(typeMagicArr[i].m_type)) {
                return m_typeMagicTable[i].m_magic;
            }
            i++;
        }
    }

    private static boolean IsHeaderMagic(byte[] bArr, int i) {
        if (bArr == null) {
            return false;
        }
        int length = bArr.length - i;
        byte[] bArr2 = HEADER_MAGIC;
        if (length < bArr2.length) {
            return false;
        }
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr, i, bArr2.length);
        byte[] bArr3 = HEADER_MAGIC;
        return byteBufferWrap.equals(ByteBuffer.wrap(bArr3, 0, bArr3.length));
    }

    private static boolean IsPayloadLenValid(int i) {
        return i <= 131072 && i > 0;
    }

    private static MCP_TYPE IsTypeMagic(byte[] bArr, int i) {
        for (TypeMagic typeMagic : m_typeMagicTable) {
            if (bArr.length - i >= typeMagic.m_magic.length && ByteBuffer.wrap(bArr, i, typeMagic.m_magic.length).equals(ByteBuffer.wrap(typeMagic.m_magic, 0, typeMagic.m_magic.length))) {
                return typeMagic.m_type;
            }
        }
        return null;
    }

    static boolean SearchHeader(MCPInfo mCPInfo, DataQueue dataQueue) {
        MCP_TYPE mcp_type = MCP_TYPE.MCP_TYPE_UNDEFINED;
        if (mCPInfo == null || dataQueue == null) {
            Log.e(TAG, "mcpInfo is null || dataQ is null.");
            return false;
        }
        while (dataQueue.Size() >= HEADER_MAGIC.length + 2 + 4) {
            if (IsHeaderMagic(dataQueue.GetData(), dataQueue.FrontOffset())) {
                dataQueue.Pop(HEADER_MAGIC.length);
                MCP_TYPE mcp_typeIsTypeMagic = IsTypeMagic(dataQueue.GetData(), dataQueue.FrontOffset());
                if (mcp_typeIsTypeMagic == null) {
                    Log.d(TAG, "Type magic is invalid!");
                } else {
                    dataQueue.Pop(2);
                    int iByteArrayToInt = MonitorUtils.ByteArrayToInt(dataQueue.GetData(), dataQueue.FrontOffset(), 4);
                    if (IsPayloadLenValid(iByteArrayToInt)) {
                        dataQueue.Pop(4);
                        mCPInfo.SetData(mcp_typeIsTypeMagic, iByteArrayToInt, null);
                        return true;
                    }
                    Log.d(TAG, "Command length is invalid! len = [" + iByteArrayToInt + "]");
                }
            } else {
                Log.d(TAG, "Not magic header. Pop(1)");
                dataQueue.Pop(1);
            }
        }
        Log.d(TAG, "MCPHandler::SearchHeader failed!");
        return false;
    }

    static boolean WriteToArrayList(ArrayList<Byte> arrayList, byte[] bArr, int i) {
        for (int i2 = 0; i2 < i; i2++) {
            arrayList.add(Byte.valueOf(bArr[i2]));
        }
        return true;
    }

    static boolean WriteToConnection(SocketConnection socketConnection, MCPInfo mCPInfo, MCPInfo mCPInfo2) {
        if (socketConnection == null || mCPInfo == null) {
            Log.e(TAG, "connection or cmd is null");
            return false;
        }
        if (mCPInfo.GetData() == null || mCPInfo.GetLen() == 0 || mCPInfo.GetType() == null) {
            Log.e(TAG, "cmd data/type is null or length is 0.");
            return true;
        }
        byte[] bArrGetTypeMagic = GetTypeMagic(mCPInfo.GetType());
        if (bArrGetTypeMagic == null) {
            Log.e(TAG, "Undefined type! type = [" + mCPInfo.GetType().name() + "]. DROP.");
            return true;
        }
        int iGetLen = mCPInfo.GetLen();
        if (!IsPayloadLenValid(iGetLen)) {
            Log.e(TAG, "Payload length is invalid! len = [" + iGetLen + "]. DROP.");
            return true;
        }
        byte[] bArr = HEADER_MAGIC;
        if (!socketConnection.Write(bArr, bArr.length)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (HEADER_MAGIC) failed!");
            return false;
        }
        if (!socketConnection.Write(bArrGetTypeMagic, 2)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (TYPE_Magic) failed!");
            return false;
        }
        byte[] bArrIntToByteArray = MonitorUtils.IntToByteArray(iGetLen);
        if (!socketConnection.Write(bArrIntToByteArray, bArrIntToByteArray.length)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (Len) failed!");
            return false;
        }
        if (!socketConnection.Write(mCPInfo.GetData(), iGetLen)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (Data) failed!");
            return false;
        }
        if (mCPInfo2 == null) {
            return true;
        }
        mCPInfo2.Reset();
        for (int i = 0; i <= 10; i++) {
            if (!socketConnection.ReadToBuffer()) {
                Log.e(TAG, "Failed to refresh buffer. (read error)");
                break;
            }
            while (true) {
                DataQueue dataQueueGetDataQueue = socketConnection.GetDataQueue();
                if (dataQueueGetDataQueue.Size() == 0) {
                    break;
                }
                if (mCPInfo2.GetLen() != 0) {
                    if (dataQueueGetDataQueue.Size() >= mCPInfo2.GetLen()) {
                        if (dataQueueGetDataQueue.FrontOffset() != 0) {
                            dataQueueGetDataQueue.Pop(0);
                        }
                        mCPInfo2.SetData(mCPInfo2.GetType(), mCPInfo2.GetLen(), dataQueueGetDataQueue.GetData(), true);
                        dataQueueGetDataQueue.Pop(mCPInfo2.GetLen());
                        return true;
                    }
                    Log.d(TAG, "Data size [" + dataQueueGetDataQueue.Size() + "] < Payload length [" + mCPInfo2.GetLen() + "]. Wait for next time.");
                    break;
                }
                if (!SearchHeader(mCPInfo2, dataQueueGetDataQueue)) {
                    break;
                }
                Log.d(TAG, "Header is found! Type = [" + mCPInfo2.GetType() + "] Payload length = [" + mCPInfo2.GetLen() + "]");
            }
            Log.d(TAG, "No packet is processed. RETRY.");
            try {
                Thread.sleep(100L);
            } catch (Exception e) {
            }
        }
        return true;
    }

    static boolean WriteToHIDLService(IMDMonitorService iMDMonitorService, MCPInfo mCPInfo, MCPInfo mCPInfo2) {
        Log.d(TAG, "WriteToHIDLService start");
        if (iMDMonitorService == null || mCPInfo == null) {
            Log.e(TAG, "connection or cmd is null");
            return false;
        }
        if (mCPInfo.GetData() == null || mCPInfo.GetLen() == 0 || mCPInfo.GetType() == null) {
            Log.e(TAG, "cmd data/type is null or length is 0.");
            return true;
        }
        byte[] bArrGetTypeMagic = GetTypeMagic(mCPInfo.GetType());
        if (bArrGetTypeMagic == null) {
            Log.e(TAG, "Undefined type! type = [" + mCPInfo.GetType().name() + "]. DROP.");
            return true;
        }
        int iGetLen = mCPInfo.GetLen();
        if (!IsPayloadLenValid(iGetLen)) {
            Log.e(TAG, "Payload length is invalid! len = [" + iGetLen + "]. DROP.");
            return true;
        }
        ArrayList<Byte> arrayList = new ArrayList<>();
        byte[] bArr = HEADER_MAGIC;
        if (!WriteToArrayList(arrayList, bArr, bArr.length)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (HEADER_MAGIC) failed!");
            return false;
        }
        if (!WriteToArrayList(arrayList, bArrGetTypeMagic, 2)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (TYPE_Magic) failed!");
            return false;
        }
        byte[] bArrIntToByteArray = MonitorUtils.IntToByteArray(iGetLen);
        if (!WriteToArrayList(arrayList, bArrIntToByteArray, bArrIntToByteArray.length)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (Len) failed!");
            return false;
        }
        if (!WriteToArrayList(arrayList, mCPInfo.GetData(), iGetLen)) {
            Log.e(TAG, "MCPHandler::WriteToConnection (Data) failed!");
            return false;
        }
        if (iMDMonitorService == null) {
            Log.e(TAG, "MCPHandler::WriteToConnection HIDL connection is null!");
            return false;
        }
        Log.d(TAG, "Write MCP Payload to HIDL connection.");
        try {
            ArrayList<Byte> arrayListSendMCPData = iMDMonitorService.sendMCPData(arrayList);
            Log.d(TAG, "WriteToHIDLService send done");
            if (mCPInfo2 == null) {
                return true;
            }
            Log.d(TAG, "WriteToHIDLService wait reply start");
            mCPInfo2.Reset();
            if (arrayListSendMCPData == null || arrayListSendMCPData.size() <= 0) {
                Log.e(TAG, "HIDL Return Data size [" + arrayListSendMCPData.size() + "] is 0 or null.");
                return false;
            }
            DataQueue dataQueue = new DataQueue();
            dataQueue.PushArrayList(arrayListSendMCPData);
            if (!SearchHeader(mCPInfo2, dataQueue)) {
                Log.e(TAG, "HIDL return data have no MCP header!");
                return false;
            }
            Log.d(TAG, "Header is found! Type = [" + mCPInfo2.GetType() + "] Payload length = [" + mCPInfo2.GetLen() + "]");
            if (dataQueue.Size() >= mCPInfo2.GetLen()) {
                if (dataQueue.FrontOffset() != 0) {
                    dataQueue.Pop(0);
                }
                mCPInfo2.SetData(mCPInfo2.GetType(), mCPInfo2.GetLen(), dataQueue.GetData(), true);
                Log.d(TAG, "WriteToHIDLService wait reply done");
                return true;
            }
            Log.e(TAG, "Data size [" + dataQueue.Size() + "] < Payload length [" + mCPInfo2.GetLen() + "].");
            return false;
        } catch (RemoteException e) {
            e.printStackTrace();
            Log.e(TAG, "MCPHandler::WriteToConnection HIDL call failed with RemoteException exception!");
            return false;
        }
    }
}
