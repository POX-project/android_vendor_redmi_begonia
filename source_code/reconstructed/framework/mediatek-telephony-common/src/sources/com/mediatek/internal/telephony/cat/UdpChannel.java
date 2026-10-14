package com.mediatek.internal.telephony.cat;

import android.net.Network;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

/* JADX INFO: compiled from: Channel.java */
/* JADX INFO: loaded from: classes.dex */
class UdpChannel extends Channel {
    private static final int UDP_SOCKET_TIMEOUT = 3000;
    DatagramSocket mSocket;
    Thread rt;

    UdpChannel(int i, int i2, int i3, InetAddress inetAddress, int i4, int i5, MtkCatService mtkCatService, BipService bipService) {
        super(i, i2, i3, inetAddress, i4, i5, mtkCatService, bipService);
        this.mSocket = null;
        this.rt = null;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int closeChannel() {
        MtkCatLog.d("[BIP]", "[UDP]closeChannel.");
        if (this.rt != null) {
            requestStop();
            this.rt = null;
        }
        if (this.mSocket != null) {
            MtkCatLog.d("[BIP]", "[UDP]closeSocket.");
            this.mSocket.close();
            this.mChannelStatus = 2;
            this.mSocket = null;
            this.mRxBuffer = null;
            this.mTxBuffer = null;
        }
        return 0;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int getTxAvailBufferSize() {
        if (this.mTxBuffer == null) {
            MtkCatLog.e("[BIP]", "[UDP]getTxAvailBufferSize - mTxBuffer null:");
            return 0;
        }
        int length = this.mTxBuffer.length - this.mTxBufferCount;
        MtkCatLog.d("[BIP]", "[UDP]available tx buffer size:" + length);
        return length;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int openChannel(BipCmdMessage bipCmdMessage, Network network) {
        int iCheckBufferSize = 0;
        this.mNetwork = network;
        if (this.mLinkMode == 0) {
            try {
                this.mSocket = new DatagramSocket();
                this.mNetwork.bindSocket(this.mSocket);
                this.mChannelStatus = 4;
                this.mChannelStatusData.mChannelStatus = 128;
                Thread thread = new Thread(new Channel.UdpReceiverThread(this.mSocket));
                this.rt = thread;
                thread.start();
                MtkCatLog.d("[BIP]", "[UDP]: sock status:" + this.mChannelStatus);
            } catch (Exception e) {
                e.printStackTrace();
            }
            iCheckBufferSize = checkBufferSize();
            if (iCheckBufferSize == 3) {
                MtkCatLog.d("[BIP]", "[UDP]openChannel: buffer size is modified");
                bipCmdMessage.mBufferSize = this.mBufferSize;
            }
            this.mRxBuffer = new byte[this.mBufferSize];
            this.mTxBuffer = new byte[this.mBufferSize];
        }
        return iCheckBufferSize;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int receiveData(int i, ReceiveDataResult receiveDataResult) {
        if (receiveDataResult == null) {
            MtkCatLog.e("[BIP]", "[UDP]rdr is null");
            return 5;
        }
        MtkCatLog.d("[BIP]", "[UDP]receiveData mRxBufferCount:" + this.mRxBufferCount + " requestSize: " + i + " mRxBufferOffset:" + this.mRxBufferOffset);
        receiveDataResult.buffer = new byte[i];
        if (this.mRxBufferCount < i) {
            MtkCatLog.e("[BIP]", "[UDP]rx buffer is insufficient !!!");
            try {
                synchronized (this.mLock) {
                    System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, this.mRxBufferCount);
                    this.mRxBufferOffset = 0;
                    this.mRxBufferCount = 0;
                    this.mLock.notify();
                }
                receiveDataResult.remainingCount = 0;
                return 9;
            } catch (IndexOutOfBoundsException e) {
                MtkCatLog.e("[BIP]", "[UDP]fail copy rx buffer out 2");
                return 5;
            }
        }
        try {
            synchronized (this.mLock) {
                try {
                    System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, i);
                    this.mRxBufferOffset += i;
                    this.mRxBufferCount -= i;
                    if (this.mRxBufferCount == 0) {
                        this.mRxBufferOffset = 0;
                    }
                    receiveDataResult.remainingCount = this.mRxBufferCount;
                } catch (Throwable th) {
                    throw th;
                }
            }
            return 0;
        } catch (IndexOutOfBoundsException e2) {
            MtkCatLog.e("[BIP]", "[UDP]fail copy rx buffer out 1");
            return 5;
        }
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public ReceiveDataResult receiveData(int i) {
        ReceiveDataResult receiveDataResult = new ReceiveDataResult();
        receiveDataResult.buffer = new byte[i];
        MtkCatLog.d("[BIP]", "[UDP]receiveData " + this.mRxBufferCount + "/" + i + "/" + this.mRxBufferOffset);
        if (this.mRxBufferCount >= i) {
            try {
                System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, i);
                this.mRxBufferOffset += i;
                this.mRxBufferCount -= i;
                receiveDataResult.remainingCount = this.mRxBufferCount;
            } catch (IndexOutOfBoundsException e) {
            }
        } else {
            int i2 = i;
            int i3 = this.mRxBufferCount;
            int i4 = 0;
            boolean z = false;
            while (!z) {
                if (i2 > i3) {
                    try {
                        System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, i4, i3);
                        i4 += i3;
                        i2 -= i3;
                        this.mRxBufferOffset += i3;
                        this.mRxBufferCount -= i3;
                    } catch (IndexOutOfBoundsException e2) {
                    }
                } else {
                    try {
                        System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, i4, i2);
                        this.mRxBufferOffset += i2;
                        this.mRxBufferCount -= i2;
                        i4 += i2;
                        i2 = 0;
                    } catch (IndexOutOfBoundsException e3) {
                    }
                }
                if (i2 == 0) {
                    z = true;
                } else {
                    try {
                        this.mSocket.setSoTimeout(UDP_SOCKET_TIMEOUT);
                        DatagramPacket datagramPacket = new DatagramPacket(this.mRxBuffer, this.mRxBuffer.length);
                        this.mSocket.receive(datagramPacket);
                        this.mRxBufferOffset = 0;
                        this.mRxBufferCount = datagramPacket.getLength();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                }
            }
        }
        return receiveDataResult;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int sendData(byte[] bArr, int i) {
        byte[] bArr2;
        if (bArr == null) {
            MtkCatLog.e("[BIP]", "[UDP]sendData - data null:");
            return 5;
        }
        if (this.mTxBuffer == null) {
            MtkCatLog.e("[BIP]", "[UDP]sendData - mTxBuffer null:");
            return 5;
        }
        int length = this.mTxBuffer.length - this.mTxBufferCount;
        MtkCatLog.d("[BIP]", "[UDP]sendData: size of data:" + bArr.length + " mode:" + i);
        MtkCatLog.d("[BIP]", "[UDP]sendData: size of buffer:" + this.mTxBuffer.length + " count:" + this.mTxBufferCount);
        try {
            if (this.mTxBufferCount == 0 && 1 == i) {
                bArr2 = bArr;
                this.mTxBufferCount = bArr.length;
            } else {
                if (length >= bArr.length) {
                    try {
                        System.arraycopy(bArr, 0, this.mTxBuffer, this.mTxBufferCount, bArr.length);
                        this.mTxBufferCount += bArr.length;
                    } catch (IndexOutOfBoundsException e) {
                        MtkCatLog.e("[BIP]", "[UDP]sendData - IndexOutOfBoundsException");
                    }
                } else {
                    MtkCatLog.d("[BIP]", "[UDP]sendData - tx buffer is not enough:" + length);
                }
                bArr2 = this.mTxBuffer;
            }
            if (i != 1) {
                return 0;
            }
            MtkCatLog.d("[BIP]", "[UDP]Send data(" + this.mAddress + ":" + this.mPort + "):" + this.mTxBuffer.length + " count:" + this.mTxBufferCount);
            DatagramPacket datagramPacket = new DatagramPacket(bArr2, 0, this.mTxBufferCount, this.mAddress, this.mPort);
            if (this.mSocket == null) {
                return 0;
            }
            try {
                this.mSocket.send(datagramPacket);
                this.mTxBufferCount = 0;
                return 0;
            } catch (Exception e2) {
                MtkCatLog.e("[BIP]", "[UDP]sendData - Exception");
                this.mChannelStatusData.mChannelStatus = 0;
                e2.printStackTrace();
                return 5;
            }
        } catch (NullPointerException e3) {
            MtkCatLog.d("[BIP]", "[UDP]sendData NE");
            e3.printStackTrace();
            return 5;
        }
    }
}
