package com.mediatek.mdml;

import android.net.LocalServerSocket;
import android.net.LocalSocket;
import android.util.Log;
import java.io.IOException;

/* JADX INFO: loaded from: classes3.dex */
class SocketListener {
    private static final String TAG = "MDML/SocketListener";
    private LocalServerSocket m_socket;
    private Thread m_threadId;
    private boolean m_notifyListenThreadStop = false;
    private ConnectionHandlerInterface m_connHandlerInstance = null;

    private class ListenRunnable implements Runnable {
        private ListenRunnable() {
        }

        @Override // java.lang.Runnable
        public void run() {
            while (!SocketListener.this.m_notifyListenThreadStop) {
                try {
                    Log.d(SocketListener.TAG, "ListenRunnable.run");
                    LocalSocket localSocketAccept = SocketListener.this.m_socket.accept();
                    if (SocketListener.this.m_notifyListenThreadStop) {
                        SocketListener.this.m_socket.close();
                        return;
                    }
                    SocketConnection socketConnection = new SocketConnection(localSocketAccept);
                    boolean zDataIn = true;
                    while (!SocketListener.this.m_notifyListenThreadStop) {
                        Log.d(SocketListener.TAG, "ListenRunnable.run. Ready to read");
                        if (SocketListener.this.m_connHandlerInstance != null) {
                            zDataIn = SocketListener.this.m_connHandlerInstance.DataIn(socketConnection);
                        }
                        Log.d(SocketListener.TAG, "ListenRunnable.run. Ready to read done!");
                        if (!zDataIn) {
                            break;
                        }
                    }
                    Log.d(SocketListener.TAG, "ListenRunnable will be stopped.");
                    SocketListener.this.m_socket.close();
                } catch (IOException e) {
                    Log.d(SocketListener.TAG, "ListenRunnable will be stopped.");
                    e.printStackTrace();
                    return;
                }
            }
        }
    }

    public SocketListener(String str) {
        this.m_threadId = null;
        try {
            this.m_socket = new LocalServerSocket(str);
            Thread thread = new Thread(new ListenRunnable());
            this.m_threadId = thread;
            thread.start();
        } catch (Exception e) {
            Log.e(TAG, "Failed to initialize SocketListener.");
            e.printStackTrace();
        }
    }

    public void SetConnectionHandler(ConnectionHandlerInterface connectionHandlerInterface) {
        this.m_connHandlerInstance = connectionHandlerInterface;
    }

    public void finalize() {
        this.m_notifyListenThreadStop = true;
        Thread thread = this.m_threadId;
        if (thread != null) {
            thread.interrupt();
        }
        LocalServerSocket localServerSocket = this.m_socket;
        if (localServerSocket != null) {
            try {
                localServerSocket.close();
            } catch (Exception e) {
                Log.e(TAG, "Failed to close socket.");
                e.printStackTrace();
            }
        }
    }
}
