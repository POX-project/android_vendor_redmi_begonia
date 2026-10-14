package com.mediatek.socket.base;

import android.net.LocalSocketAddress;
import android.os.IHwBinder;
import android.os.RemoteException;
import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.util.ArrayList;
import vendor.mediatek.hardware.lbs.V1_0.ILbs;

/* JADX INFO: loaded from: classes.dex */
public class UdpClient {
    private SocketUtils$BaseBuffer mBuff;
    private String mChannelName;
    private String mHost;
    private InetAddress mInetAddress;
    private DatagramSocket mNetSocket;
    private DatagramPacket mPacket;
    private int mPort;
    ILbs mLbsHidlClient = null;
    LbsHidlDeathRecipient mLLbsHidlDeathRecipient = new LbsHidlDeathRecipient();
    private boolean mIsLocalSocket = true;

    class LbsHidlDeathRecipient implements IHwBinder.DeathRecipient {
        LbsHidlDeathRecipient() {
        }

        public void serviceDied(long j) {
            UdpClient.this.mLbsHidlClient = null;
        }
    }

    public UdpClient(String str, LocalSocketAddress.Namespace namespace, int i) {
        this.mBuff = new SocketUtils$BaseBuffer(i);
        this.mChannelName = str;
    }

    public static ArrayList<Byte> convertByteArrayToArrayList(byte[] bArr, int i) {
        if (bArr == null) {
            return null;
        }
        if (i >= bArr.length) {
            i = bArr.length;
        }
        ArrayList<Byte> arrayList = new ArrayList<>();
        for (int i2 = 0; i2 < i; i2++) {
            arrayList.add(Byte.valueOf(bArr[i2]));
        }
        return arrayList;
    }

    public void close() {
        DatagramSocket datagramSocket;
        if (this.mIsLocalSocket || (datagramSocket = this.mNetSocket) == null) {
            return;
        }
        datagramSocket.close();
    }

    public boolean connect() {
        if (this.mIsLocalSocket) {
            return lbsHidlInit(this.mChannelName);
        }
        try {
            this.mNetSocket = new DatagramSocket();
            if (this.mInetAddress == null) {
                this.mInetAddress = InetAddress.getByName(this.mHost);
            }
            this.mPacket = new DatagramPacket(this.mBuff.getBuff(), this.mBuff.getBuff().length, this.mInetAddress, this.mPort);
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public SocketUtils$BaseBuffer getBuff() {
        return this.mBuff;
    }

    public boolean lbsHidlInit(String str) {
        if (this.mLbsHidlClient != null) {
            return true;
        }
        try {
            ILbs service = ILbs.getService(str);
            this.mLbsHidlClient = service;
            service.linkToDeath(this.mLLbsHidlDeathRecipient, 0L);
            return true;
        } catch (RemoteException | RuntimeException e) {
            e.printStackTrace();
            return false;
        }
    }

    public boolean write() {
        if (this.mIsLocalSocket) {
            try {
                this.mLbsHidlClient.sendToServer(convertByteArrayToArrayList(this.mBuff.getBuff(), this.mBuff.getOffset()));
                this.mBuff.setOffset(0);
                return true;
            } catch (RemoteException | RuntimeException e) {
                this.mBuff.setOffset(0);
                e.printStackTrace();
            }
        } else {
            try {
                this.mPacket.setLength(this.mBuff.getOffset());
                this.mNetSocket.send(this.mPacket);
                this.mBuff.setOffset(0);
                return true;
            } catch (IOException e2) {
                this.mBuff.setOffset(0);
                e2.printStackTrace();
            }
        }
        return false;
    }
}
