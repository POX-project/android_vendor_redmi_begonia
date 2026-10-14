package com.mediatek.mdml;

import android.net.LocalSocket;
import android.net.LocalSocketAddress;
import android.util.Log;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes3.dex */
class SocketConnection {
    private static final String TAG = "MDML/SocketConnection";
    protected DataQueue m_dataQ;
    private boolean m_isValid;
    private LocalSocket m_socket;

    public SocketConnection() {
        this.m_isValid = false;
        this.m_socket = null;
        this.m_dataQ = new DataQueue();
    }

    public SocketConnection(LocalSocket localSocket) {
        this.m_isValid = true;
        this.m_socket = localSocket;
        this.m_dataQ = new DataQueue();
    }

    public boolean Connect(Object obj) {
        Log.d(TAG, "SocketConnection::Connect");
        if (obj == null) {
            Log.e(TAG, "Input arg is null");
            return false;
        }
        Reset();
        LocalSocket localSocket = new LocalSocket();
        this.m_socket = localSocket;
        try {
            localSocket.connect(new LocalSocketAddress((String) obj, LocalSocketAddress.Namespace.ABSTRACT));
            this.m_isValid = true;
            return true;
        } catch (Exception e) {
            Log.e(TAG, "Failed to connect to " + ((String) obj));
            e.printStackTrace();
            return false;
        }
    }

    public DataQueue GetDataQueue() {
        return this.m_dataQ;
    }

    public boolean IsValid() {
        return this.m_isValid;
    }

    public int Read(byte[] bArr, int i, int i2) {
        if (bArr == null || i < 0 || i2 <= 0) {
            return -2;
        }
        LocalSocket localSocket = this.m_socket;
        if (localSocket == null) {
            Log.e(TAG, "SocketConnection is not connected.");
            return -1;
        }
        try {
            try {
                int i3 = localSocket.getInputStream().read(bArr, i, i2);
                if (i3 == 0) {
                    Log.e(TAG, "Socket is closed.");
                    this.m_isValid = false;
                    return -1;
                }
                Log.d(TAG, "SocketConnection::Read done! read [" + i3 + "] bytes.");
                return i3;
            } catch (Exception e) {
                Log.e(TAG, "Failed to get input stream");
                e.printStackTrace();
                return -1;
            }
        } catch (Exception e2) {
            Log.e(TAG, "Failed to get input stream");
            e2.printStackTrace();
            return -1;
        }
    }

    public boolean ReadToBuffer() {
        Log.d(TAG, "BufferedConnection::ReadToBuffer. There're " + this.m_dataQ.SpaceSize() + " bytes of space in dataQ.");
        int iRead = Read(this.m_dataQ.GetData(), this.m_dataQ.SpaceStartOffset(), this.m_dataQ.SpaceSize());
        if (iRead < 0) {
            Log.e(TAG, "Failed to read from connection");
            return false;
        }
        this.m_dataQ.IncSize(iRead);
        return true;
    }

    public void Reset() {
        this.m_isValid = false;
        LocalSocket localSocket = this.m_socket;
        if (localSocket != null) {
            try {
                if (!localSocket.isClosed()) {
                    this.m_socket.close();
                }
            } catch (Exception e) {
                Log.e(TAG, "Failed to close socket.");
                e.printStackTrace();
            }
            this.m_socket = null;
        }
    }

    public boolean Write(byte[] bArr, int i) {
        if (bArr == null) {
            return false;
        }
        if (i == 0) {
            return true;
        }
        LocalSocket localSocket = this.m_socket;
        if (localSocket == null) {
            Log.e(TAG, "SocketConnection is not connected.");
            return false;
        }
        try {
            OutputStream outputStream = localSocket.getOutputStream();
            if (!IsValid()) {
                return false;
            }
            try {
                outputStream.write(bArr, 0, i);
                return true;
            } catch (Exception e) {
                Log.e(TAG, "Failed to write to output stream.");
                e.printStackTrace();
                return false;
            }
        } catch (Exception e2) {
            Log.e(TAG, "Failed to get output stream.");
            return false;
        }
    }

    public void finalize() throws Throwable {
        Log.d(TAG, "~SocketConnection");
        Reset();
        super.finalize();
    }
}
