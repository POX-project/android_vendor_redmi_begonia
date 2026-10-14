package com.mediatek.ygps;

import android.util.Log;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class ClientSocket {
    private static final String[][] CMD_RESPONSE = {new String[]{"PMTK605", "$PMTK705"}, new String[]{"PMTK837", "PMTK001"}};
    private YgpsActivity mCallBack;
    private BlockingQueue<String> mCommandQueue;
    private byte[] mDataBuffer;
    private Thread mSendThread;
    private Socket mClientSocket = null;
    private DataInputStream mDataInput = null;
    private DataOutputStream mDataOutput = null;
    private String mCommand = null;
    private String mResponse = null;

    public ClientSocket(YgpsActivity ygpsActivity) {
        this.mCommandQueue = null;
        this.mCallBack = null;
        this.mSendThread = null;
        this.mDataBuffer = null;
        this.mCallBack = ygpsActivity;
        this.mCommandQueue = new LinkedBlockingQueue();
        this.mDataBuffer = new byte[1024];
        Thread thread = new Thread(new Runnable() { // from class: com.mediatek.ygps.ClientSocket.1
            @Override // java.lang.Runnable
            public void run() {
                while (true) {
                    try {
                        ClientSocket.this.mCommand = (String) ClientSocket.this.mCommandQueue.take();
                        Log.v("YGPS/ClientSocket", "Queue take command:" + ClientSocket.this.mCommand);
                        ClientSocket.this.openClient();
                        if (ClientSocket.this.mDataOutput != null && ClientSocket.this.mDataInput != null) {
                            try {
                                ClientSocket.this.mDataOutput.writeBytes(ClientSocket.this.mCommand);
                                ClientSocket.this.mDataOutput.write(13);
                                ClientSocket.this.mDataOutput.write(10);
                                ClientSocket.this.mDataOutput.flush();
                                String str = "PMTK";
                                for (String[] strArr : ClientSocket.CMD_RESPONSE) {
                                    if (ClientSocket.this.mCommand.contains(strArr[0])) {
                                        str = strArr[1];
                                        break;
                                    }
                                }
                                long jCurrentTimeMillis = System.currentTimeMillis();
                                while (true) {
                                    int i = ClientSocket.this.mDataInput.read(ClientSocket.this.mDataBuffer);
                                    if (i == -1) {
                                        break;
                                    }
                                    String str2 = new String(ClientSocket.this.mDataBuffer, 0, i);
                                    if (str2.contains(str)) {
                                        String strSubstring = str2.substring(str2.indexOf(str));
                                        int iIndexOf = strSubstring.indexOf("*");
                                        if (iIndexOf == -1) {
                                            break;
                                        }
                                        ClientSocket.this.mResponse = strSubstring.substring(0, iIndexOf);
                                        if (ClientSocket.this.mCallBack == null) {
                                            break;
                                        }
                                        ClientSocket.this.mCallBack.onResponse(ClientSocket.this.mResponse);
                                        break;
                                    }
                                    if (System.currentTimeMillis() - jCurrentTimeMillis > 2000) {
                                        Log.e("YGPS/ClientSocket", "check time timeout");
                                        break;
                                    }
                                }
                            } catch (IOException e) {
                                Log.w("YGPS/ClientSocket", "sendCommand IOException: " + e.getMessage());
                            }
                        }
                        ClientSocket.this.mCommand = null;
                        ClientSocket.this.closeClient();
                    } catch (InterruptedException e2) {
                        Log.w("YGPS/ClientSocket", "Take command interrupted:" + e2.getMessage());
                        return;
                    }
                }
            }
        });
        this.mSendThread = thread;
        thread.start();
    }

    private String calcCS(String str) {
        if (str == null || "".equals(str)) {
            return "";
        }
        int i = 0;
        for (byte b : str.toUpperCase().getBytes()) {
            i ^= b;
        }
        return String.format("%1$02x", Integer.valueOf(i & 255)).toUpperCase();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public void closeClient() {
        Log.v("YGPS/ClientSocket", "enter closeClient");
        try {
            try {
                if (this.mDataInput != null) {
                    this.mDataInput.close();
                }
                if (this.mDataOutput != null) {
                    this.mDataOutput.close();
                }
                if (this.mClientSocket != null) {
                    this.mClientSocket.close();
                }
            } catch (IOException e) {
                Log.e("YGPS/ClientSocket", "closeClient IOException: " + e.getMessage());
            }
        } finally {
            this.mClientSocket = null;
            this.mDataInput = null;
            this.mDataOutput = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void openClient() {
        Log.v("YGPS/ClientSocket", "enter startClient");
        Socket socket = this.mClientSocket;
        if (socket != null && socket.isConnected()) {
            Log.i("YGPS/ClientSocket", "localSocket has started, return");
            return;
        }
        try {
            Socket socket2 = new Socket("127.0.0.1", 7000);
            this.mClientSocket = socket2;
            socket2.setSoTimeout(2000);
            this.mDataOutput = new DataOutputStream(this.mClientSocket.getOutputStream());
            this.mDataInput = new DataInputStream(this.mClientSocket.getInputStream());
        } catch (UnknownHostException e) {
            Log.e("YGPS/ClientSocket", e.getMessage());
        } catch (IOException e2) {
            Log.e("YGPS/ClientSocket", e2.getMessage());
        }
    }

    void endClient() {
        Log.v("YGPS/ClientSocket", "enter endClient");
        this.mSendThread.interrupt();
        Log.i("YGPS/ClientSocket", "Queue remaining:" + this.mCommandQueue.size());
        closeClient();
        this.mCallBack = null;
    }

    void sendCommand(String str) {
        String str2 = "$" + str + "*" + calcCS(str);
        Log.i("YGPS/ClientSocket", "Send command: " + str2);
        if (!this.mSendThread.isAlive()) {
            Log.w("YGPS/ClientSocket", "sendThread is not alive");
            this.mSendThread.start();
        }
        if (str.equals(str2) || this.mCommandQueue.contains(str2)) {
            Log.i("YGPS/ClientSocket", "send command return because of hasn't handle the same");
            return;
        }
        try {
            this.mCommandQueue.put(str2);
        } catch (InterruptedException e) {
            Log.e("YGPS/ClientSocket", "send command interrupted:" + e.getMessage());
        }
    }
}
