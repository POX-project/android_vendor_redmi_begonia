package com.mediatek.lbs.em2.mnldinterface;

import com.mediatek.socket.base.SocketUtils$BaseBuffer;
import com.mediatek.socket.base.UdpClient;

/* JADX INFO: loaded from: classes.dex */
public class Debug2MnldInterface$Debug2MnldInterfaceSender {
    public boolean debugMnldNeMsg(UdpClient udpClient, boolean z) {
        synchronized (udpClient) {
            if (!udpClient.connect()) {
                return false;
            }
            SocketUtils$BaseBuffer buff = udpClient.getBuff();
            buff.putInt(305);
            buff.putInt(1);
            buff.putBool(z);
            boolean zWrite = udpClient.write();
            udpClient.close();
            return zWrite;
        }
    }
}
