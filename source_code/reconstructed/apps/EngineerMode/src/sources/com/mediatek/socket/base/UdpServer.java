package com.mediatek.socket.base;

import android.net.LocalSocket;
import android.net.LocalSocketAddress;
import android.os.IHwBinder;
import android.os.RemoteException;
import java.io.DataInputStream;
import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.SocketException;
import java.util.ArrayList;
import vendor.mediatek.hardware.lbs.V1_0.ILbs;
import vendor.mediatek.hardware.lbs.V1_0.ILbsCallback;

/* JADX INFO: loaded from: classes3.dex */
public class UdpServer implements SocketUtils.UdpServerInterface {
    private SocketUtils.BaseBuffer mBuff;
    private String mChannelName;
    private DataInputStream mIn;
    ILbs mLbsHidlClient;
    private LocalSocket mLocalSocket;
    private LocalSocketAddress.Namespace mNamespace;
    private DatagramSocket mNetSocket;
    private DatagramPacket mPacket;
    private int mPort;
    SocketUtils.ProtocolHandler mReceiver;
    private LbsHidlCallback mLbsHidlCallback = new LbsHidlCallback();
    private LbsHidlDeathRecipient mLLbsHidlDeathRecipient = new LbsHidlDeathRecipient();
    private boolean mIsLocalSocket = false;

    class LbsHidlCallback extends ILbsCallback.Stub {
        LbsHidlCallback() {
        }

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbsCallback
        public boolean callbackToClient(ArrayList<Byte> arrayList) {
            if (UdpServer.this.mReceiver == null) {
                return true;
            }
            UdpServer.covertArrayListToByteArray(arrayList, UdpServer.this.mBuff.getBuff());
            UdpServer.this.mReceiver.decode(UdpServer.this);
            return true;
        }
    }

    class LbsHidlDeathRecipient implements IHwBinder.DeathRecipient {
        LbsHidlDeathRecipient() {
        }

        public void serviceDied(long j) {
            UdpServer.this.mLbsHidlClient = null;
            boolean zLbsHidlInit = false;
            while (!zLbsHidlInit) {
                UdpServer.this.msleep(300L);
                UdpServer udpServer = UdpServer.this;
                zLbsHidlInit = udpServer.lbsHidlInit(udpServer.mChannelName);
            }
        }
    }

    public UdpServer(int i, int i2) {
        this.mBuff = new SocketUtils.BaseBuffer(i2);
        this.mPort = i;
    }

    public UdpServer(String str, LocalSocketAddress.Namespace namespace, int i) {
        this.mBuff = new SocketUtils.BaseBuffer(i);
        this.mChannelName = str;
        this.mNamespace = namespace;
        lbsHidlInit(str);
    }

    public static void covertArrayListToByteArray(ArrayList<Byte> arrayList, byte[] bArr) {
        for (int i = 0; i < arrayList.size() && i < bArr.length; i++) {
            bArr[i] = arrayList.get(i).byteValue();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean lbsHidlInit(String str) {
        try {
            ILbs service = ILbs.getService(str);
            this.mLbsHidlClient = service;
            service.linkToDeath(this.mLLbsHidlDeathRecipient, 0L);
            this.mLbsHidlClient.setCallback(this.mLbsHidlCallback);
            return true;
        } catch (RemoteException | RuntimeException e) {
            e.printStackTrace();
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void msleep(long j) {
        try {
            Thread.sleep(j);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public int available() {
        if (this.mIsLocalSocket) {
            try {
                return this.mIn.available();
            } catch (IOException e) {
                e.printStackTrace();
                return -1;
            }
        }
        try {
            throw new RuntimeException("Network Type does not support available() API");
        } catch (Exception e2) {
            e2.printStackTrace();
            return -1;
        }
    }

    public boolean bind() {
        for (int i = 0; i < 5; i++) {
            if (this.mIsLocalSocket) {
                try {
                    LocalSocket localSocket = new LocalSocket(1);
                    this.mLocalSocket = localSocket;
                    localSocket.bind(new LocalSocketAddress(this.mChannelName, this.mNamespace));
                    this.mIn = new DataInputStream(this.mLocalSocket.getInputStream());
                    return true;
                } catch (IOException e) {
                    if (i == 4) {
                        throw new RuntimeException(e);
                    }
                    msleep(200L);
                }
            } else {
                try {
                    this.mNetSocket = new DatagramSocket(this.mPort);
                    this.mPacket = new DatagramPacket(this.mBuff.getBuff(), this.mBuff.getBuff().length);
                    return true;
                } catch (SocketException e2) {
                    msleep(200L);
                    if (i == 4) {
                        throw new RuntimeException(e2);
                    }
                }
            }
        }
        return false;
    }

    public void close() {
        if (this.mIsLocalSocket) {
            return;
        }
        this.mNetSocket.close();
    }

    @Override // com.mediatek.socket.base.SocketUtils.UdpServerInterface
    public SocketUtils.BaseBuffer getBuff() {
        return this.mBuff;
    }

    @Override // com.mediatek.socket.base.SocketUtils.UdpServerInterface
    public boolean read() {
        this.mBuff.clear();
        if (this.mIsLocalSocket) {
            return true;
        }
        try {
            this.mNetSocket.receive(this.mPacket);
            return true;
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        }
    }

    public void setReceiver(SocketUtils.ProtocolHandler protocolHandler) {
        this.mReceiver = protocolHandler;
    }

    @Override // com.mediatek.socket.base.SocketUtils.UdpServerInterface
    public boolean setSoTimeout(int i) {
        if (this.mIsLocalSocket) {
            try {
                this.mLocalSocket.setSoTimeout(i);
                return true;
            } catch (IOException e) {
                e.printStackTrace();
                return false;
            }
        }
        try {
            this.mNetSocket.setSoTimeout(i);
            return true;
        } catch (SocketException e2) {
            e2.printStackTrace();
            return false;
        }
    }
}
