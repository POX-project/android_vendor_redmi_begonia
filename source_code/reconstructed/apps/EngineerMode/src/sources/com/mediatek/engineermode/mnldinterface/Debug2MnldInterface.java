package com.mediatek.engineermode.mnldinterface;

import com.mediatek.socket.base.SocketUtils;
import com.mediatek.socket.base.UdpClient;

/* JADX INFO: loaded from: classes.dex */
public class Debug2MnldInterface {
    public static final int DEBUG_MNLD_NE_MSG = 1;
    public static final int DEBUG_MNLD_RADIO_MSG = 2;
    public static final int DEBUG_REQ_MNLD_MSG = 0;
    public static final int MAX_BUFF_SIZE = 23;
    public static final int PROTOCOL_TYPE = 305;

    public static abstract class Debug2MnldInterfaceReceiver implements SocketUtils.ProtocolHandler {
        public abstract void debugMnldNeMsg(boolean z);

        public abstract void debugMnldRadioMsg(String str);

        public abstract void debugReqMnldMsg(DebugReqStatusCategory debugReqStatusCategory);

        @Override // com.mediatek.socket.base.SocketUtils.ProtocolHandler
        public boolean decode(SocketUtils.UdpServerInterface udpServerInterface) {
            SocketUtils.BaseBuffer buff = udpServerInterface.getBuff();
            buff.setOffset(4);
            int i = buff.getInt();
            if (i == 0) {
                debugReqMnldMsg((DebugReqStatusCategory) buff.getCodable(DebugReqStatusCategory._instance));
                return true;
            }
            if (i == 1) {
                debugMnldNeMsg(buff.getBool());
                return true;
            }
            if (i != 2) {
                return false;
            }
            debugMnldRadioMsg(buff.getString());
            return true;
        }

        @Override // com.mediatek.socket.base.SocketUtils.ProtocolHandler
        public int getProtocolType() {
            return 305;
        }

        public boolean readAndDecode(SocketUtils.UdpServerInterface udpServerInterface) {
            if (udpServerInterface.read()) {
                return decode(udpServerInterface);
            }
            return false;
        }
    }

    public static class Debug2MnldInterfaceSender {
        public boolean debugMnldNeMsg(UdpClient udpClient, boolean z) {
            synchronized (udpClient) {
                if (!udpClient.connect()) {
                    return false;
                }
                SocketUtils.BaseBuffer buff = udpClient.getBuff();
                buff.putInt(305);
                buff.putInt(1);
                buff.putBool(z);
                boolean zWrite = udpClient.write();
                udpClient.close();
                return zWrite;
            }
        }

        public boolean debugMnldRadioMsg(UdpClient udpClient, String str) {
            synchronized (udpClient) {
                if (!udpClient.connect()) {
                    return false;
                }
                SocketUtils.BaseBuffer buff = udpClient.getBuff();
                buff.putInt(305);
                buff.putInt(2);
                SocketUtils.assertSize(str, 10, 0);
                buff.putString(str);
                boolean zWrite = udpClient.write();
                udpClient.close();
                return zWrite;
            }
        }

        public boolean debugReqMnldMsg(UdpClient udpClient, DebugReqStatusCategory debugReqStatusCategory) {
            synchronized (udpClient) {
                if (!udpClient.connect()) {
                    return false;
                }
                SocketUtils.BaseBuffer buff = udpClient.getBuff();
                buff.putInt(305);
                buff.putInt(0);
                buff.putCodable(debugReqStatusCategory);
                boolean zWrite = udpClient.write();
                udpClient.close();
                return zWrite;
            }
        }
    }
}
