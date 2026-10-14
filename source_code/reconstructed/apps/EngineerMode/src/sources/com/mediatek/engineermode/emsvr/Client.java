package com.mediatek.engineermode.emsvr;

import android.net.LocalSocket;
import android.net.LocalSocketAddress;
import com.mediatek.engineermode.Elog;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: classes2.dex */
public class Client {
    private static final String EMPTY = "";
    private static final String EM_SERVER_NAME = "EngineerModeServer";
    private static final String ERROR_NO_INIT = "NOT INIT";
    private static final String ERROR_PARAM_NUM = "param < 0";
    private static final int MAX_BUFFER_SIZE = 1024;
    private static final int PARAM_INT_LENGTH = 4;
    public static final int PARAM_TYPE_INT = 2;
    public static final int PARAM_TYPE_STRING = 1;
    private static final int STATUS_ERROR = -1;
    private static final int STATUS_SUCCESS = 0;
    private static final String TAG = "EmSvr";
    private LocalSocket mSocket = null;
    private DataInputStream mInputStream = null;
    private DataOutputStream mOutputStream = null;
    private int mStatus = 0;

    synchronized String read() throws IOException {
        int i;
        byte[] bArr;
        if (-1 == this.mStatus || this.mInputStream == null) {
            throw new IOException(ERROR_NO_INIT);
        }
        i = this.mInputStream.readInt();
        if (i > 1024) {
            i = 1024;
        }
        bArr = new byte[i];
        return -1 == this.mInputStream.read(bArr, 0, i) ? EMPTY : new String(bArr, Charset.defaultCharset());
    }

    public void startClient() {
        try {
            LocalSocket localSocket = new LocalSocket();
            this.mSocket = localSocket;
            localSocket.connect(new LocalSocketAddress(EM_SERVER_NAME));
            this.mInputStream = new DataInputStream(this.mSocket.getInputStream());
            this.mOutputStream = new DataOutputStream(this.mSocket.getOutputStream());
            this.mStatus = 0;
        } catch (IOException e) {
            Elog.e(TAG, "startclient IOException " + e.getMessage());
            this.mStatus = -1;
        }
    }

    public void stopClient() {
        DataOutputStream dataOutputStream;
        if (this.mInputStream == null || (dataOutputStream = this.mOutputStream) == null || this.mSocket == null) {
            return;
        }
        try {
            dataOutputStream.close();
            this.mInputStream.close();
            this.mSocket.close();
        } catch (IOException e) {
            Elog.e(TAG, "stop client IOException: " + e.getMessage());
        }
    }

    synchronized void writeFunctionNo(String str) throws IOException {
        if (-1 == this.mStatus || this.mOutputStream == null) {
            throw new IOException(ERROR_NO_INIT);
        }
        if (str != null && str.length() != 0) {
            this.mOutputStream.writeInt(str.length());
            this.mOutputStream.write(str.getBytes(Charset.defaultCharset()), 0, str.length());
        }
    }

    synchronized void writeParamInt(int i) throws IOException {
        if (-1 == this.mStatus || this.mOutputStream == null) {
            throw new IOException(ERROR_NO_INIT);
        }
        this.mOutputStream.writeInt(2);
        this.mOutputStream.writeInt(4);
        this.mOutputStream.writeInt(i);
    }

    synchronized void writeParamNo(int i) throws IOException {
        if (-1 == this.mStatus || this.mOutputStream == null) {
            throw new IOException(ERROR_NO_INIT);
        }
        if (i < 0) {
            throw new IOException(ERROR_PARAM_NUM);
        }
        this.mOutputStream.writeInt(i);
    }

    synchronized void writeParamString(String str) throws IOException {
        if (-1 == this.mStatus || this.mOutputStream == null) {
            throw new IOException(ERROR_NO_INIT);
        }
        this.mOutputStream.writeInt(1);
        this.mOutputStream.writeInt(str.length());
        this.mOutputStream.write(str.getBytes(Charset.defaultCharset()), 0, str.length());
    }
}
