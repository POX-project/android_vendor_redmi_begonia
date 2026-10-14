package com.mediatek.internal.telephony.cat;

import android.net.Network;
import java.io.BufferedOutputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketException;
import java.net.SocketTimeoutException;

/* JADX INFO: compiled from: Channel.java */
/* JADX INFO: loaded from: classes.dex */
class TcpChannel extends Channel {
    private static final int TCP_CONN_TIMEOUT = 15000;
    DataInputStream mInput;
    BufferedOutputStream mOutput;
    Socket mSocket;
    Thread rt;

    TcpChannel(int i, int i2, int i3, InetAddress inetAddress, int i4, int i5, MtkCatService mtkCatService, BipService bipService) {
        super(i, i2, i3, inetAddress, i4, i5, mtkCatService, bipService);
        this.mSocket = null;
        this.mInput = null;
        this.mOutput = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onOpenChannelCompleted() {
        int iCheckBufferSize;
        if (this.mChannelStatus == 4) {
            try {
                MtkCatLog.d("[BIP]", "[TCP]stream is open");
                this.mInput = new DataInputStream(this.mSocket.getInputStream());
                this.mOutput = new BufferedOutputStream(this.mSocket.getOutputStream());
                Thread thread = new Thread(new Channel.TcpReceiverThread(this.mInput));
                this.rt = thread;
                thread.start();
                iCheckBufferSize = checkBufferSize();
                this.mRxBuffer = new byte[this.mBufferSize];
                this.mTxBuffer = new byte[this.mBufferSize];
            } catch (IOException e) {
                MtkCatLog.d("[BIP]", "[TCP]Fail to create data stream");
                e.printStackTrace();
                iCheckBufferSize = 5;
            }
        } else {
            MtkCatLog.d("[BIP]", "[TCP]socket is not open");
            iCheckBufferSize = 5;
        }
        this.mBipService.openChannelCompleted(iCheckBufferSize, this);
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int closeChannel() {
        MtkCatLog.d("[BIP]", "[TCP]closeChannel.");
        if (this.rt != null) {
            requestStop();
            this.rt = null;
        }
        new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.cat.TcpChannel.3
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Type inference failed for: r1v0 */
            /* JADX WARN: Type inference failed for: r1v1 */
            /* JADX WARN: Type inference failed for: r1v2, types: [byte[], java.net.Socket] */
            /* JADX WARN: Type inference failed for: r1v4 */
            /* JADX WARN: Type inference failed for: r1v7 */
            /* JADX WARN: Type inference failed for: r1v8 */
            /* JADX WARN: Type inference failed for: r1v9 */
            @Override // java.lang.Runnable
            public synchronized void run() {
                ?? r1 = 0;
                r1 = 0;
                try {
                    try {
                        try {
                            if (TcpChannel.this.mInput != null) {
                                try {
                                    TcpChannel.this.mInput.close();
                                } catch (IOException e) {
                                    MtkCatLog.e("[BIP]", "[TCP]closeChannel - IOE");
                                    TcpChannel.this.mSocket = null;
                                    TcpChannel.this.mRxBuffer = null;
                                    TcpChannel.this.mTxBuffer = null;
                                    TcpChannel tcpChannel = TcpChannel.this;
                                    tcpChannel.mChannelStatus = 2;
                                    r1 = tcpChannel;
                                } catch (Throwable th) {
                                    th = th;
                                    TcpChannel.this.mSocket = r1;
                                    TcpChannel.this.mRxBuffer = r1;
                                    TcpChannel.this.mTxBuffer = r1;
                                    TcpChannel.this.mChannelStatus = 2;
                                    throw th;
                                }
                            }
                            if (TcpChannel.this.mOutput != null) {
                                TcpChannel.this.mOutput.close();
                            }
                            if (TcpChannel.this.mSocket != null) {
                                TcpChannel.this.mSocket.close();
                            }
                            TcpChannel.this.mSocket = null;
                            TcpChannel.this.mRxBuffer = null;
                            TcpChannel.this.mTxBuffer = null;
                            TcpChannel tcpChannel2 = TcpChannel.this;
                            tcpChannel2.mChannelStatus = 2;
                            r1 = tcpChannel2;
                        } catch (Throwable th2) {
                            th = th2;
                        }
                    } catch (IOException e2) {
                    }
                } catch (Throwable th3) {
                    throw th3;
                }
            }
        }).start();
        return 0;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int getTxAvailBufferSize() {
        if (this.mTxBuffer == null) {
            MtkCatLog.e("[BIP]", "[TCP]getTxAvailBufferSize - mTxBuffer null:");
            return 0;
        }
        int length = this.mTxBuffer.length - this.mTxBufferCount;
        MtkCatLog.d("[BIP]", "[TCP]available tx buffer size:" + length);
        return length;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int openChannel(BipCmdMessage bipCmdMessage, Network network) {
        this.mNetwork = network;
        if (this.mLinkMode == 0) {
            new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.cat.TcpChannel.1
                @Override // java.lang.Runnable
                public synchronized void run() {
                    MtkCatLog.d("[BIP]", "[TCP]running TCP channel thread");
                    try {
                        TcpChannel.this.mSocket = TcpChannel.this.mNetwork.getSocketFactory().createSocket();
                        TcpChannel.this.mSocket.setSoLinger(false, 0);
                        try {
                            TcpChannel.this.mSocket.connect(new InetSocketAddress(TcpChannel.this.mAddress, TcpChannel.this.mPort), TcpChannel.TCP_CONN_TIMEOUT);
                        } catch (SocketTimeoutException e) {
                            MtkCatLog.d("[BIP]", "[TCP]Time out of connect " + e + ":" + TcpChannel.TCP_CONN_TIMEOUT + " sec");
                            TcpChannel.this.mChannelStatus = 7;
                            if (TcpChannel.this.mBipService.mIsOpenChannelOverWifi) {
                                TcpChannel.this.mBipService.mIsConnectTimeout = true;
                                TcpChannel.this.mBipService.mIsOpenChannelOverWifi = false;
                            }
                        }
                        if (TcpChannel.this.mSocket.isConnected()) {
                            TcpChannel.this.mChannelStatus = 4;
                            TcpChannel.this.mChannelStatusData.mChannelStatus = 128;
                        } else {
                            MtkCatLog.e("[BIP]", "[TCP]socket is not connected.");
                            TcpChannel.this.mChannelStatus = 7;
                            TcpChannel.this.mSocket.close();
                        }
                    } catch (IOException e2) {
                        MtkCatLog.e("[BIP]", "[TCP]Fail to create socket");
                        e2.printStackTrace();
                        TcpChannel.this.mChannelStatus = 7;
                        if (TcpChannel.this.mBipService.mIsOpenChannelOverWifi) {
                            TcpChannel.this.mBipService.mIsConnectTimeout = true;
                            TcpChannel.this.mBipService.mIsOpenChannelOverWifi = false;
                        }
                    } catch (NullPointerException e3) {
                        MtkCatLog.e("[BIP]", "[TCP]Null pointer tcp socket " + e3);
                        TcpChannel.this.mChannelStatus = 7;
                    }
                    TcpChannel.this.onOpenChannelCompleted();
                }
            }).start();
            return 10;
        }
        if (this.mLinkMode != 1) {
            return 0;
        }
        new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.cat.TcpChannel.2
            @Override // java.lang.Runnable
            public synchronized void run() {
                try {
                    MtkCatLog.d("[BIP]", "[TCP]running TCP channel thread");
                    try {
                        TcpChannel.this.mSocket = new Socket();
                        TcpChannel.this.mSocket.setSoLinger(false, 0);
                        TcpChannel.this.mSocket.setSoTimeout(TcpChannel.TCP_CONN_TIMEOUT);
                    } catch (SocketException e) {
                        MtkCatLog.d("[BIP]", "[TCP]Fail to create tcp socket");
                        TcpChannel.this.mChannelStatus = 7;
                    }
                } catch (Throwable th) {
                    throw th;
                }
            }
        }).start();
        this.mChannelStatus = 4;
        int iCheckBufferSize = checkBufferSize();
        if (iCheckBufferSize == 3) {
            MtkCatLog.d("[BIP]", "[TCP]openChannel: buffer size is modified");
            bipCmdMessage.mBufferSize = this.mBufferSize;
        }
        this.mRxBuffer = new byte[this.mBufferSize];
        this.mTxBuffer = new byte[this.mBufferSize];
        return iCheckBufferSize;
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public int receiveData(int i, ReceiveDataResult receiveDataResult) {
        MtkCatLog.d("[BIP]", "[TCP]new receiveData method");
        if (receiveDataResult == null) {
            MtkCatLog.e("[BIP]", "[TCP]rdr is null");
            return 5;
        }
        MtkCatLog.d("[BIP]", "[TCP]receiveData mRxBufferCount:" + this.mRxBufferCount + " requestSize: " + i + " mRxBufferOffset:" + this.mRxBufferOffset);
        receiveDataResult.buffer = new byte[i];
        if (this.mRxBufferCount >= i) {
            try {
                synchronized (this.mLock) {
                    if (this.mRxBuffer == null || receiveDataResult.buffer == null) {
                        MtkCatLog.d("[BIP]", "[TCP]mRxBuffer or rdr.buffer is null 1");
                        return 5;
                    }
                    System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, i);
                    this.mRxBufferOffset += i;
                    this.mRxBufferCount -= i;
                    if (this.mRxBufferCount == 0) {
                        this.mRxBufferOffset = 0;
                    }
                    receiveDataResult.remainingCount = this.mRxBufferCount;
                    return 0;
                }
            } catch (IndexOutOfBoundsException e) {
                MtkCatLog.e("[BIP]", "[TCP]fail copy rx buffer out 1");
                return 5;
            }
        }
        MtkCatLog.e("[BIP]", "[TCP]rx buffer is insufficient !!!");
        try {
            synchronized (this.mLock) {
                if (this.mRxBuffer == null || receiveDataResult.buffer == null) {
                    MtkCatLog.d("[BIP]", "[TCP]mRxBuffer or rdr.buffer is null 2");
                    return 5;
                }
                System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, this.mRxBufferCount);
                this.mRxBufferOffset = 0;
                this.mRxBufferCount = 0;
                this.mLock.notify();
                receiveDataResult.remainingCount = 0;
                return 9;
            }
        } catch (IndexOutOfBoundsException e2) {
            MtkCatLog.e("[BIP]", "[TCP]fail copy rx buffer out 2");
            return 5;
        }
    }

    @Override // com.mediatek.internal.telephony.cat.Channel
    public ReceiveDataResult receiveData(int i) {
        ReceiveDataResult receiveDataResult = new ReceiveDataResult();
        receiveDataResult.buffer = new byte[i];
        MtkCatLog.d("[BIP]", "[TCP]receiveData " + this.mRxBufferCount + "/" + i + "/" + this.mRxBufferOffset);
        if (this.mRxBufferCount >= i) {
            try {
                MtkCatLog.d("[BIP]", "[TCP]Start to copy data from buffer");
                System.arraycopy(this.mRxBuffer, this.mRxBufferOffset, receiveDataResult.buffer, 0, i);
                this.mRxBufferCount -= i;
                this.mRxBufferOffset += i;
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
                        this.mRxBufferOffset += i3;
                        this.mRxBufferCount -= i3;
                        i4 += i3;
                        i2 -= i3;
                    } catch (IndexOutOfBoundsException e2) {
                    }
                } else {
                    try {
                        System.arraycopy(Integer.valueOf(this.mRxBufferCount), this.mRxBufferOffset, receiveDataResult.buffer, i4, i3);
                        this.mRxBufferOffset += i2;
                        i4 += i2;
                        i2 = 0;
                    } catch (IndexOutOfBoundsException e3) {
                    }
                }
                if (i2 == 0) {
                    z = true;
                } else {
                    try {
                        this.mRxBufferCount = this.mInput.read(this.mRxBuffer, 0, this.mRxBuffer.length);
                        this.mRxBufferOffset = 0;
                    } catch (IOException e4) {
                        MtkCatLog.e("[BIP]", "[TCP]receiveData - IOE");
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
            MtkCatLog.e("[BIP]", "[TCP]sendData - data null:");
            return 5;
        }
        if (this.mTxBuffer == null) {
            MtkCatLog.e("[BIP]", "[TCP]sendData - mTxBuffer null:");
            return 5;
        }
        int length = this.mTxBuffer.length - this.mTxBufferCount;
        try {
            MtkCatLog.d("[BIP]", "[TCP]sendData: size of data:" + bArr.length + " mode:" + i);
            MtkCatLog.d("[BIP]", "[TCP]sendData: size of buffer:" + this.mTxBuffer.length + " count:" + this.mTxBufferCount);
            if (this.mTxBufferCount == 0 && 1 == i) {
                bArr2 = bArr;
                this.mTxBufferCount = bArr.length;
            } else {
                try {
                    if (length >= bArr.length) {
                        System.arraycopy(bArr, 0, this.mTxBuffer, this.mTxBufferCount, bArr.length);
                        this.mTxBufferCount += bArr.length;
                    } else {
                        MtkCatLog.d("[BIP]", "[TCP]sendData - tx buffer is not enough");
                    }
                    bArr2 = this.mTxBuffer;
                } catch (IndexOutOfBoundsException e) {
                    return 5;
                }
            }
            if (i != 1 || this.mChannelStatus != 4) {
                return 0;
            }
            try {
                MtkCatLog.d("[BIP]", "[TCP]SEND_DATA_MODE_IMMEDIATE:" + this.mTxBuffer.length + " count:" + this.mTxBufferCount);
                this.mOutput.write(bArr2, 0, this.mTxBufferCount);
                this.mOutput.flush();
                this.mTxBufferCount = 0;
                return 0;
            } catch (IOException e2) {
                MtkCatLog.e("[BIP]", "[TCP]sendData - Exception");
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
