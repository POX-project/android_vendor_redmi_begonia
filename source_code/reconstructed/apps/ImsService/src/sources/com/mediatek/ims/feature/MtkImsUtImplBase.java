package com.mediatek.ims.feature;

import android.annotation.SystemApi;
import android.os.Bundle;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import com.mediatek.ims.internal.IMtkImsUt;
import com.mediatek.ims.internal.IMtkImsUtListener;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class MtkImsUtImplBase {
    private IMtkImsUt.Stub mServiceImpl = new IMtkImsUt.Stub() { // from class: com.mediatek.ims.feature.MtkImsUtImplBase.1
        public String getUtIMPUFromNetwork() {
            return MtkImsUtImplBase.this.getUtIMPUFromNetwork();
        }

        public String getXcapConflictErrorMessage() {
            return MtkImsUtImplBase.this.getXcapConflictErrorMessage();
        }

        public boolean isSupportCFT() {
            return MtkImsUtImplBase.this.isSupportCFT();
        }

        public void processECT(Message message, Messenger messenger) {
            MtkImsUtImplBase.this.explicitCallTransfer(message, messenger);
        }

        public int queryCFForServiceClass(int i, String str, int i2) {
            return MtkImsUtImplBase.this.queryCFForServiceClass(i, str, i2);
        }

        public int queryCallForwardInTimeSlot(int i) {
            return MtkImsUtImplBase.this.queryCallForwardInTimeSlot(i);
        }

        public void setListener(IMtkImsUtListener iMtkImsUtListener) throws RemoteException {
            MtkImsUtImplBase.this.setListener(new MtkImsUtListener(iMtkImsUtListener));
        }

        public void setupXcapUserAgentString(String str) {
            MtkImsUtImplBase.this.setupXcapUserAgentString(str);
        }

        public int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) {
            return MtkImsUtImplBase.this.updateCallBarringForServiceClass(str, i, i2, strArr, i3);
        }

        public int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) {
            return MtkImsUtImplBase.this.updateCallForwardInTimeSlot(i, i2, str, i3, jArr);
        }
    };

    public void explicitCallTransfer(Message message, Messenger messenger) {
    }

    public IMtkImsUt getInterface() {
        return this.mServiceImpl;
    }

    public String getUtIMPUFromNetwork() {
        return "";
    }

    public String getXcapConflictErrorMessage() {
        return "";
    }

    public boolean isSupportCFT() {
        return false;
    }

    public int queryCFForServiceClass(int i, String str, int i2) {
        return -1;
    }

    public int queryCallForwardInTimeSlot(int i) {
        return -1;
    }

    public void setListener(MtkImsUtListener mtkImsUtListener) {
    }

    public void setupXcapUserAgentString(String str) {
    }

    public int transact(Bundle bundle) {
        return -1;
    }

    public int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) {
        return -1;
    }

    public int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) {
        return -1;
    }
}
