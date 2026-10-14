package com.mediatek.ygps;

import android.net.LocalSocketAddress;
import com.mediatek.socket.base.UdpClient;
import com.mediatek.ygps.mnldinterface.Debug2MnldInterface$Debug2MnldInterfaceSender;

/* JADX INFO: loaded from: classes.dex */
public class MnldConn {
    private Debug2MnldInterface$Debug2MnldInterfaceSender mToMnldSender = new Debug2MnldInterface$Debug2MnldInterfaceSender();
    private UdpClient mUdpClient = new UdpClient("mtk_debugService2mnld", LocalSocketAddress.Namespace.ABSTRACT, 23);

    void setMnldProp(String str) {
        this.mToMnldSender.debugMnldRadioMsg(this.mUdpClient, str);
    }

    void setTriggerNe(boolean z) {
        this.mToMnldSender.debugMnldNeMsg(this.mUdpClient, z);
    }
}
