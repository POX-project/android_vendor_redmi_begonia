package com.mediatek.engineermode.hqanfc;

import android.content.Context;
import android.os.RemoteException;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.List;
import vendor.mediatek.hardware.engineermode.V1_3.IEmNfcResponse;
import vendor.mediatek.hardware.engineermode.V1_3.IEmd;

/* JADX INFO: loaded from: classes2.dex */
public class NfcClient extends IEmNfcResponse.Stub {
    private static final boolean DEBUG = false;
    private static NfcClient sInstance;
    private Context mContext;
    private IEmd mEmService;
    private boolean mIsConnected = false;

    private static void dumpHex(List<Byte> list) {
    }

    public static NfcClient getInstance() {
        if (sInstance == null) {
            IEmd emHidlService = EmUtils.getEmHidlService();
            if (emHidlService == null) {
                return null;
            }
            NfcClient nfcClient = new NfcClient();
            try {
                emHidlService.setNfcResponseFunction(nfcClient);
                nfcClient.mEmService = emHidlService;
                sInstance = nfcClient;
            } catch (RemoteException e) {
                return null;
            }
        }
        return sInstance;
    }

    public boolean closeConnection() {
        Elog.d(NfcMainPage.TAG, "[NfcClient] closeConnection().");
        if (!this.mIsConnected) {
            return false;
        }
        try {
            this.mEmService.disconnect();
            this.mIsConnected = false;
            return true;
        } catch (RemoteException e) {
            Elog.w(NfcMainPage.TAG, "[NfcClient] createConnection finally RemoteException: " + e.getMessage());
            return false;
        }
    }

    public boolean createConnection(Context context) {
        if (this.mIsConnected) {
            return false;
        }
        Elog.d(NfcMainPage.TAG, "[NfcClient] createConnection().");
        try {
            if (this.mEmService.connect()) {
                this.mIsConnected = true;
                this.mContext = context;
                return true;
            }
        } catch (RemoteException e) {
            Elog.w(NfcMainPage.TAG, "[NfcClient] createConnection finally RemoteException: " + e.getMessage());
        }
        return false;
    }

    public boolean isConnected() {
        return this.mIsConnected;
    }

    @Override // vendor.mediatek.hardware.engineermode.V1_3.IEmNfcResponse
    public void response(ArrayList<Byte> arrayList) {
        NfcCommand nfcCommand;
        dumpHex(arrayList);
        byte[] bArr = new byte[arrayList.size()];
        for (int i = 0; i < bArr.length; i++) {
            bArr[i] = arrayList.get(i).byteValue();
        }
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        byte[] bArr2 = new byte[4];
        byteBufferWrap.get(bArr2);
        int iByteToInt = NfcCommand.DataConvert.byteToInt(bArr2);
        Elog.d(NfcMainPage.TAG, "[NfcClient] rmsg type: " + iByteToInt);
        if (iByteToInt > 204) {
            Elog.v(NfcMainPage.TAG, "[NfcClient] incorrect rmsg: " + new String(bArr));
            return;
        }
        byte[] bArr3 = new byte[4];
        byteBufferWrap.get(bArr3);
        int iByteToInt2 = NfcCommand.DataConvert.byteToInt(bArr3);
        Elog.d(NfcMainPage.TAG, "[NfcClient] length: " + iByteToInt2);
        if (iByteToInt2 == 0) {
            nfcCommand = new NfcCommand(iByteToInt, null);
        } else {
            byte[] bArr4 = new byte[iByteToInt2];
            byteBufferWrap.get(bArr4);
            nfcCommand = new NfcCommand(iByteToInt, ByteBuffer.wrap(bArr4));
        }
        NfcCommandHandler nfcCommandHandler = NfcCommandHandler.getInstance(this.mContext);
        if (nfcCommandHandler == null) {
            Elog.d(NfcMainPage.TAG, "[NfcClient] Cannot allocate NfcCommandHandler");
        } else {
            nfcCommandHandler.execute(nfcCommand);
        }
    }

    public synchronized int sendCommand(int i, NfcEmReqRsp.NfcEmReq nfcEmReq) {
        ByteBuffer byteBufferAllocate;
        if (!this.mIsConnected) {
            Elog.e(NfcMainPage.TAG, "[NfcClient] Not connected");
            return -1;
        }
        Elog.d(NfcMainPage.TAG, "[NfcClient] Send command type: " + i);
        if (nfcEmReq == null) {
            byteBufferAllocate = ByteBuffer.allocate(8);
            if (byteBufferAllocate == null) {
                Elog.e(NfcMainPage.TAG, "[NfcClient] Cannot alloc memory");
                return -1;
            }
            byteBufferAllocate.put(NfcCommand.DataConvert.intToLH(i));
            byteBufferAllocate.put(NfcCommand.DataConvert.intToLH(0));
        } else {
            byteBufferAllocate = ByteBuffer.allocate(nfcEmReq.getContentSize() + 8);
            if (byteBufferAllocate == null) {
                Elog.e(NfcMainPage.TAG, "[NfcClient] Cannot alloc memory");
                return -1;
            }
            byteBufferAllocate.put(NfcCommand.DataConvert.intToLH(i));
            byteBufferAllocate.put(NfcCommand.DataConvert.intToLH(nfcEmReq.getContentSize()));
            nfcEmReq.writeRaw(byteBufferAllocate);
        }
        byte[] bArrArray = byteBufferAllocate.array();
        Elog.d(NfcMainPage.TAG, "[NfcClient] Send command type: " + i + ",len: " + bArrArray.length);
        ArrayList<Byte> arrayList = new ArrayList<>(bArrArray.length);
        for (int i2 = 0; i2 < bArrArray.length; i2++) {
            arrayList.add(i2, Byte.valueOf(bArrArray[i2]));
        }
        dumpHex(arrayList);
        try {
            this.mEmService.sendNfcRequest(i, arrayList);
            return i;
        } catch (RemoteException e) {
            Elog.w(NfcMainPage.TAG, "[NfcClient] sendCommand RemoteException: " + e.getMessage());
            return -1;
        }
    }
}
