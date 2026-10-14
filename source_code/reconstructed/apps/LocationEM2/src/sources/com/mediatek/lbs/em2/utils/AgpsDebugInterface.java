package com.mediatek.lbs.em2.utils;

import android.os.Bundle;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.Message;
import android.os.RemoteException;
import android.util.Log;
import java.io.IOException;
import java.util.ArrayList;
import vendor.mediatek.hardware.lbs.V1_0.ILbs;
import vendor.mediatek.hardware.lbs.V1_0.ILbsCallback;

/* JADX INFO: loaded from: classes.dex */
public class AgpsDebugInterface {
    ILbs mLbsHidlClient;
    protected MessageHandler messageHandler;
    protected DataCoder2.DataCoderBuffer in = new DataCoder2.DataCoderBuffer(8192);
    LbsHidlCallback mLbsHidlCallback = new LbsHidlCallback();
    LbsHidlDeathRecipient mLLbsHidlDeathRecipient = new LbsHidlDeathRecipient();

    class LbsHidlCallback extends ILbsCallback.Stub {
        LbsHidlCallback() {
        }

        @Override // vendor.mediatek.hardware.lbs.V1_0.ILbsCallback
        public boolean callbackToClient(ArrayList<Byte> arrayList) {
            AgpsDebugInterface.log("callbackToClient() size=" + arrayList.size());
            AgpsDebugInterface.covertArrayListToByteArray(arrayList, AgpsDebugInterface.this.in.mBuff);
            AgpsDebugInterface.this.in.clear();
            while (AgpsDebugInterface.this.in.mOffset < arrayList.size()) {
                try {
                    AgpsDebugInterface.this.sendMessage2Handler(DataCoder2.getInt(AgpsDebugInterface.this.in), DataCoder2.getInt(AgpsDebugInterface.this.in), DataCoder2.getInt(AgpsDebugInterface.this.in), DataCoder2.getInt(AgpsDebugInterface.this.in), DataCoder2.getString(AgpsDebugInterface.this.in), DataCoder2.getString(AgpsDebugInterface.this.in), DataCoder2.getBinary(AgpsDebugInterface.this.in));
                } catch (IOException e) {
                    e.printStackTrace();
                    return true;
                }
            }
            return true;
        }
    }

    class LbsHidlDeathRecipient implements IHwBinder.DeathRecipient {
        LbsHidlDeathRecipient() {
        }

        public void serviceDied(long j) {
            AgpsDebugInterface.log("serviceDied");
            AgpsDebugInterface.this.mLbsHidlClient = null;
            boolean zDoHidl = false;
            while (!zDoHidl) {
                AgpsDebugInterface.msleep(500);
                zDoHidl = AgpsDebugInterface.this.doHidl("AgpsDebugInterface");
            }
        }
    }

    protected static class MessageHandler extends Handler {
        protected AgpsDebugListener listener;

        public MessageHandler(AgpsDebugListener agpsDebugListener) {
            this.listener = agpsDebugListener;
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Bundle data = message.getData();
            int i = data.getInt("type");
            int i2 = data.getInt("data1");
            int i3 = data.getInt("data2");
            int i4 = data.getInt("data3");
            String string = data.getString("msg1");
            String string2 = data.getString("msg2");
            byte[] byteArray = data.getByteArray("bin");
            if (i == 0) {
                if ((i2 & 1) == 1) {
                    this.listener.onToastMessageReceived(string2);
                }
                if ((i2 & 2) == 2) {
                    this.listener.onViewMessageReceived(i3, string2);
                }
                if ((i2 & 4) == 4) {
                    this.listener.onDialogMessageReceived(string, string2);
                }
                if ((i2 & 8) == 8) {
                    this.listener.onVzwDebugMessageReceived(string2);
                }
                if ((i2 & 16) == 16) {
                    this.listener.onNiStatisticMessageReceived(i3, i4, string2);
                    return;
                }
                return;
            }
            if (i != 1) {
                return;
            }
            AgpsDebugInterface.log("type=" + i + " data1=" + i2 + " data2=" + i3 + " data3=" + i4 + " msg1=" + string + " msg2=" + string2 + " bin=" + byteArray);
            if (byteArray != null) {
                AgpsDebugInterface.log("bin.len=" + byteArray.length);
            }
        }
    }

    public AgpsDebugInterface(AgpsDebugListener agpsDebugListener) throws IOException {
        if (agpsDebugListener == null) {
            throw new RuntimeException("listener cannot be null");
        }
        this.messageHandler = new MessageHandler(agpsDebugListener);
        connect();
    }

    public static void covertArrayListToByteArray(ArrayList<Byte> arrayList, byte[] bArr) {
        for (int i = 0; i < arrayList.size() && i < bArr.length; i++) {
            bArr[i] = arrayList.get(i).byteValue();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean doHidl(String str) {
        try {
            if (this.mLbsHidlClient != null) {
                return true;
            }
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

    protected static void log(Object obj) {
        Log.d("AgpsDebugInterface", "" + obj);
    }

    protected static void msleep(int i) {
        try {
            Thread.sleep(i);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    protected void connect() throws IOException {
        doHidl("AgpsDebugInterface");
    }

    public void removeListener() {
        write(255);
    }

    protected void sendMessage2Handler(int i, int i2, int i3, int i4, String str, String str2, byte[] bArr) {
        Bundle bundle = new Bundle();
        bundle.putInt("type", i);
        bundle.putInt("data1", i2);
        bundle.putInt("data2", i3);
        bundle.putInt("data3", i4);
        bundle.putString("msg1", str);
        bundle.putString("msg2", str2);
        bundle.putByteArray("bin", bArr);
        Message messageObtain = Message.obtain();
        messageObtain.what = 0;
        messageObtain.setData(bundle);
        this.messageHandler.sendMessage(messageObtain);
    }

    protected void write(int i) {
        try {
            ArrayList<Byte> arrayList = new ArrayList<>();
            arrayList.add((byte) -1);
            this.mLbsHidlClient.sendToServer(arrayList);
        } catch (RemoteException | RuntimeException e) {
            e.printStackTrace();
        }
    }
}
