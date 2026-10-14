package com.mediatek.ygps.mnldinterface;

import com.mediatek.socket.base.SocketUtils;
import com.mediatek.socket.base.UdpClient;

/* JADX INFO: loaded from: classes.dex */
public class Debug2MnldInterface$Debug2MnldInterfaceSender {
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
}
