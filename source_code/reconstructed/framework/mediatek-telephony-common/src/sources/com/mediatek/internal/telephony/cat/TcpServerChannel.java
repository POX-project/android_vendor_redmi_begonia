package com.mediatek.internal.telephony.cat;

import android.net.Network;
import java.io.BufferedOutputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.net.Inet4Address;
import java.net.ServerSocket;
import java.net.Socket;

/* JADX INFO: compiled from: Channel.java */
/* JADX INFO: loaded from: classes.dex */
class TcpServerChannel extends Channel {
    private boolean mCloseBackToTcpListen;
    protected DataInputStream mInput;
    protected BufferedOutputStream mOutput;
    protected ServerSocket mSSocket;
    protected Socket mSocket;
    private Thread rt;

    TcpServerChannel(int i, int i2, int i3, int i4, int i5, MtkCatService mtkCatService, BipService bipService) {
        super(i, i2, i3, null, i4, i5, mtkCatService, bipService);
        this.mSSocket = null;
        this.mSocket = null;
        this.mInput = null;
        this.mOutput = null;
        this.rt = null;
        this.mCloseBackToTcpListen = false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.mediatek.internal.telephony.cat.Channel
    public int closeChannel() {
        MtkCatLog.d("[BIP]", "[UICC]closeChannel.");
        if (true != this.mCloseBackToTcpListen) {
            if (this.rt != null) {
                requestStop();
                this.rt = null;
            }
            try {
                try {
                    if (this.mInput != null) {
                        this.mInput.close();
                    }
                    if (this.mOutput != null) {
                        this.mOutput.close();
                    }
                    if (this.mSocket != null) {
                        this.mSocket.close();
                    }
                    if (this.mSSocket != null) {
                        this.mSSocket.close();
                    }
                } catch (IOException e) {
                    MtkCatLog.e("[BIP]", "[UICC]IOEX closeChannel");
                }
            } finally {
                this.mSocket = null;
                this.mRxBuffer = null;
                this.mTxBuffer = null;
            }
        } else if (-128 == this.mChannelStatusData.mChannelStatus) {
            try {
                try {
                    this.mChannelStatusData.mChannelStatus = 64;
                    if (this.mInput != null) {
                        this.mInput.close();
                    }
                    if (this.mOutput != null) {
                        this.mOutput.close();
                    }
                    if (this.mSocket != null) {
                        this.mSocket.close();
                    }
                    this.rt.interrupt();
                } catch (IOException e2) {
                    MtkCatLog.e("[BIP]", "[UICC]IOEX closeChannel back to tcp listen.");
                }
            } finally {
                this.mSocket = null;
                this.mRxBuffer = null;
                this.mTxBuffer = null;
            }
        }
        return 0;
    }

    public byte getTcpStatus() {
        try {
            return (byte) this.mChannelStatusData.mChannelStatus;
        } catch (NullPointerException e) {
            MtkCatLog.e("[BIP]", "[TCP]getTcpStatus");
            return (byte) 0;
        }
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int getTxAvailBufferSize() {
        if (this.mTxBuffer == null) {
            MtkCatLog.e("[BIP]", "[UICC]getTxAvailBufferSize - mTxBuffer null:");
            return 0;
        }
        int length = this.mTxBuffer.length - this.mTxBufferCount;
        MtkCatLog.d("[BIP]", "[UICC]available tx buffer size:" + length);
        return length;
    }

    public boolean isCloseBackToTcpListen() {
        return this.mCloseBackToTcpListen;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int openChannel(BipCmdMessage bipCmdMessage, Network network) {
        this.mNetwork = network;
        MtkCatLog.d("[BIP]", "[UICC]openChannel mLinkMode:" + this.mLinkMode);
        try {
            MtkCatLog.d("[BIP]", "[UICC]New server socket.mChannelStatus:" + this.mChannelStatus + ",port:" + this.mPort);
            this.mSSocket = new ServerSocket(this.mPort, 0, Inet4Address.LOOPBACK);
            if (this.mChannelStatus == 0 || this.mChannelStatus == 2) {
                setTcpStatus(BipUtils.TCP_STATUS_LISTEN, false);
                this.mChannelStatus = 4;
                Thread thread = new Thread(new Channel.UICCServerThread(this));
                this.rt = thread;
                thread.start();
            }
            int iCheckBufferSize = checkBufferSize();
            if (iCheckBufferSize == 3) {
                MtkCatLog.d("[BIP]", "[UICC]openChannel: buffer size is modified");
                bipCmdMessage.mBufferSize = this.mBufferSize;
            }
            bipCmdMessage.mChannelStatusData.mChannelStatus = getTcpStatus();
            this.mRxBuffer = new byte[this.mBufferSize];
            this.mTxBuffer = new byte[this.mBufferSize];
            return iCheckBufferSize;
        } catch (IOException e) {
            MtkCatLog.d("[BIP]", "[UICC]IOEX to create server socket");
            return 5;
        } catch (Exception e2) {
            MtkCatLog.d("[BIP]", "[UICC]EX to create server socket " + e2);
            return 5;
        }
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int receiveData(int i, ReceiveDataResult receiveDataResult) {
        MtkCatLog.d("[BIP]", "[UICC]new receiveData method");
        int i2 = 0;
        if (receiveDataResult == null) {
            MtkCatLog.d("[BIP]", "[UICC]rdr is null");
            return 5;
        }
        MtkCatLog.d("[BIP]", "[UICC]receiveData " + this.mRxBufferCount + "/" + i + "/" + this.mRxBufferOffset);
        receiveDataResult.buffer = new byte[i];
        synchronized (this.mLock) {
            if (this.mRxBufferCount >= i) {
                MtkCatLog.d("[BIP]", "[UICC]rx buffer has enough data");
                try {
                    System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, i);
                    this.mRxBufferOffset += i;
                    this.mRxBufferCount -= i;
                    if (this.mRxBufferCount == 0) {
                        this.mRxBufferOffset = 0;
                    }
                    receiveDataResult.remainingCount = this.mRxBufferCount + this.mRxBufferCacheCount;
                    if (this.mRxBufferCount < this.mBufferSize) {
                        MtkCatLog.d("[BIP]", ">= [UICC]notify to read data more to mRxBuffer");
                        this.mLock.notify();
                    }
                    MtkCatLog.d("[BIP]", "[UICC]rx buffer has enough data - end");
                } catch (IndexOutOfBoundsException e) {
                    MtkCatLog.d("[BIP]", "[UICC]fail copy rx buffer out 1");
                    return 5;
                }
            } else {
                MtkCatLog.d("[BIP]", "[UICC]rx buffer is insufficient - being");
                try {
                    System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, this.mRxBufferCount);
                    this.mRxBufferOffset = 0;
                    this.mRxBufferCount = 0;
                    if (this.mRxBufferCount < this.mBufferSize) {
                        MtkCatLog.d("[BIP]", "< [UICC]notify to read data more to mRxBuffer");
                        this.mLock.notify();
                    }
                    receiveDataResult.remainingCount = 0;
                    i2 = 9;
                    MtkCatLog.d("[BIP]", "[UICC]rx buffer is insufficient - end");
                } catch (IndexOutOfBoundsException e2) {
                    MtkCatLog.d("[BIP]", "[UICC]fail copy rx buffer out 2");
                    return 5;
                }
            }
        }
        return i2;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public ReceiveDataResult receiveData(int i) {
        ReceiveDataResult receiveDataResult = new ReceiveDataResult();
        receiveDataResult.buffer = new byte[i];
        MtkCatLog.d("[BIP]", "[UICC]receiveData " + this.mRxBufferCount + "/" + i + "/" + this.mRxBufferOffset);
        if (this.mRxBufferCount >= i) {
            try {
                MtkCatLog.d("[BIP]", "[UICC]Start to copy data from buffer");
                System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, i);
                this.mRxBufferCount -= i;
                this.mRxBufferOffset += i;
                receiveDataResult.remainingCount = this.mRxBufferCount;
            } catch (IndexOutOfBoundsException e) {
                MtkCatLog.e("[BIP]", "IOOB-1");
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
                        this.mRxBufferOffset += i3;
                        this.mRxBufferCount -= i3;
                        i4 += i3;
                        i2 -= i3;
                    } catch (IndexOutOfBoundsException e2) {
                        MtkCatLog.e("[BIP]", "IOOB-2");
                    }
                } else {
                    try {
                        System.arraycopy(Integer.valueOf(this.mRxBufferCount), this.mRxBufferOffset, receiveDataResult.buffer, i4, i3);
                        this.mRxBufferOffset += i2;
                        i4 += i2;
                        i2 = 0;
                    } catch (IndexOutOfBoundsException e3) {
                        MtkCatLog.e("[BIP]", "IOOB-3");
                    }
                }
                if (i2 == 0) {
                    z = true;
                } else {
                    try {
                        this.mRxBufferCount = this.mInput.read(this.mRxBuffer, 0, this.mRxBuffer.length);
                        this.mRxBufferOffset = 0;
                    } catch (IOException e4) {
                        MtkCatLog.e("[BIP]", "IOException");
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
            MtkCatLog.e("[BIP]", "[UICC]sendData - data null:");
            return 5;
        }
        if (this.mTxBuffer == null) {
            MtkCatLog.e("[BIP]", "[UICC]sendData - mTxBuffer null:");
            return 5;
        }
        int length = this.mTxBuffer.length - this.mTxBufferCount;
        MtkCatLog.d("[BIP]", "[UICC]sendData: size of buffer:" + bArr.length + " mode:" + i);
        MtkCatLog.d("[BIP]", "[UICC]sendData: size of buffer:" + this.mTxBuffer.length + " count:" + this.mTxBufferCount);
        if (this.mTxBufferCount == 0 && 1 == i) {
            bArr2 = bArr;
            this.mTxBufferCount = bArr.length;
        } else {
            try {
                if (length >= bArr.length) {
                    System.arraycopy(bArr, 0, this.mTxBuffer, this.mTxBufferCount, bArr.length);
                    this.mTxBufferCount += bArr.length;
                } else {
                    MtkCatLog.d("[BIP]", "[UICC]sendData - tx buffer is not enough");
                }
                bArr2 = this.mTxBuffer;
            } catch (IndexOutOfBoundsException e) {
                return 5;
            }
        }
        if (i == 1 && this.mChannelStatus == 4 && this.mChannelStatusData.mChannelStatus == -128) {
            try {
                MtkCatLog.d("[BIP]", "S[UICC]END_DATA_MODE_IMMEDIATE:" + this.mTxBuffer.length + " count:" + this.mTxBufferCount);
                this.mOutput.write(bArr2, 0, this.mTxBufferCount);
                this.mOutput.flush();
                this.mTxBufferCount = 0;
            } catch (IOException e2) {
                e2.printStackTrace();
                return 5;
            } catch (NullPointerException e3) {
                e3.printStackTrace();
                return 5;
            }
        }
        return 0;
    }

    public void setCloseBackToTcpListen(boolean z) {
        this.mCloseBackToTcpListen = z;
    }

    public void setTcpStatus(byte b, boolean z) {
        if (this.mChannelStatusData.mChannelStatus == b) {
            return;
        }
        MtkCatLog.d("[BIP]", "[UICC][TCPStatus]" + this.mChannelStatusData.mChannelStatus + "->" + ((int) b));
        this.mChannelStatusData.mChannelStatus = b;
        if (true == z) {
            changeChannelStatus(b);
        }
    }
}
