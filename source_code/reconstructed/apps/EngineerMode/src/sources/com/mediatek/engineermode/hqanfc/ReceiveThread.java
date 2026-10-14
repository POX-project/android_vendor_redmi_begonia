package com.mediatek.engineermode.hqanfc;

import android.content.Context;
import com.mediatek.engineermode.Elog;
import java.io.DataInputStream;
import java.io.IOException;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class ReceiveThread implements Runnable {
    private Context mContext;
    private DataInputStream mInputStream;
    private boolean mRunning = false;

    public ReceiveThread(DataInputStream dataInputStream, Context context) {
        this.mContext = context;
        this.mInputStream = dataInputStream;
    }

    public boolean isRunning() {
        return this.mRunning;
    }

    @Override // java.lang.Runnable
    public void run() {
        boolean z;
        NfcCommand nfcCommand;
        if (this.mInputStream == null) {
            Elog.d(NfcMainPage.TAG, "[ReceiveThread]The dispatcher or stream object is null!");
            return;
        }
        this.mRunning = true;
        NfcCommandHandler nfcCommandHandler = NfcCommandHandler.getInstance(this.mContext);
        while (true) {
            z = this.mRunning;
            if (!z) {
                break;
            }
            try {
                byte[] bArr = new byte[1024];
                this.mInputStream.read(bArr);
                for (byte b : bArr) {
                    Elog.d(NfcMainPage.TAG, ((int) b) + " ");
                }
                Elog.d(NfcMainPage.TAG, "done receive");
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
                byte[] bArr2 = new byte[4];
                byteBufferWrap.get(bArr2);
                int iByteToInt = NfcCommand.DataConvert.byteToInt(bArr2);
                Elog.d(NfcMainPage.TAG, "[ReceiveThread:info]Recieved data message type is " + iByteToInt);
                if (iByteToInt > 204) {
                    Elog.v(NfcMainPage.TAG, "[ReceiveThread]receive message is not the correct msg and the content: " + new String(bArr));
                } else {
                    byte[] bArr3 = new byte[4];
                    byteBufferWrap.get(bArr3);
                    int iByteToInt2 = NfcCommand.DataConvert.byteToInt(bArr3);
                    Elog.d(NfcMainPage.TAG, "[ReceiveThread:info]Recieved data message lenght is " + iByteToInt2);
                    if (iByteToInt2 == 0) {
                        nfcCommand = new NfcCommand(iByteToInt, null);
                    } else {
                        byte[] bArr4 = new byte[iByteToInt2];
                        byteBufferWrap.get(bArr4);
                        nfcCommand = new NfcCommand(iByteToInt, ByteBuffer.wrap(bArr4));
                    }
                    nfcCommandHandler.execute(nfcCommand);
                }
            } catch (IOException e) {
                String message = e.getMessage();
                if (!message.equals("Try again")) {
                    this.mRunning = false;
                    e.printStackTrace();
                }
                Elog.v(NfcMainPage.TAG, "[ReceiveThread]receive thread IOException: " + message);
            }
        }
        if (z) {
            return;
        }
        nfcCommandHandler.destroy();
    }

    public void setRunning(boolean z) {
        this.mRunning = z;
    }
}
