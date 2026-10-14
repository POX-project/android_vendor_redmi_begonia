package com.mediatek.internal.telephony.dataconnection;

import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.data.QualifiedNetworksService;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.mediatek.internal.telephony.MtkRIL;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkQualifiedNetworksService extends QualifiedNetworksService {
    private static final String TAG = MtkQualifiedNetworksService.class.getSimpleName();
    private static final int UPDATE_QUALIFIED_NETWORKS = 1;

    public class MtkNetworkAvailabilityProvider extends QualifiedNetworksService.NetworkAvailabilityProvider {
        private static final boolean DBG = true;
        private static final int MD_NW_TYPE_CELLULAR = 1;
        private static final int MD_NW_TYPE_IWLAN = 2;
        private static final int MD_NW_TYPE_UNKNOWN = 0;
        private final Handler mHandler;
        private final HandlerThread mHandlerThread;
        private final Looper mLooper;
        private final Phone mPhone;

        public MtkNetworkAvailabilityProvider(int i) {
            super(MtkQualifiedNetworksService.this, i);
            this.mPhone = PhoneFactory.getPhone(getSlotIndex());
            HandlerThread handlerThread = new HandlerThread(MtkQualifiedNetworksService.class.getSimpleName());
            this.mHandlerThread = handlerThread;
            handlerThread.start();
            this.mLooper = this.mHandlerThread.getLooper();
            this.mHandler = new Handler(this.mLooper) { // from class: com.mediatek.internal.telephony.dataconnection.MtkQualifiedNetworksService.MtkNetworkAvailabilityProvider.1
                @Override // android.os.Handler
                public void handleMessage(Message message) {
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    if (message.what != 1) {
                        MtkQualifiedNetworksService.this.loge("Unexpected event: " + message.what);
                        return;
                    }
                    int[] iArr = (int[]) asyncResult.result;
                    int length = iArr.length;
                    ArrayList arrayList = new ArrayList();
                    int i2 = iArr[0];
                    int i3 = iArr[1];
                    MtkQualifiedNetworksService.this.log("UPDATE_QUALIFIED_NETWORKS mode=" + i2 + " apnTypes=" + i3);
                    for (int i4 = 2; i4 < length; i4++) {
                        arrayList.add(Integer.valueOf(MtkNetworkAvailabilityProvider.this.converNetworkType(iArr[i4])));
                        MtkQualifiedNetworksService.this.log("availabilityUpdate[" + i4 + "]=" + MtkNetworkAvailabilityProvider.this.converNetworkType(iArr[i4]));
                    }
                    MtkNetworkAvailabilityProvider.this.updateQualifiedNetworkTypes(i3, arrayList);
                }
            };
            MtkQualifiedNetworksService.this.log("Register for qualified networks changed.");
            if (this.mPhone.mCi instanceof MtkRIL) {
                this.mPhone.mCi.registerForQualifiedNetworkTypesChanged(this.mHandler, 1, null);
            } else {
                MtkQualifiedNetworksService.this.loge("Constructor: mPhone.mCi is not instanceof MTKRIL!");
            }
        }

        public void close() {
            if (this.mPhone.mCi instanceof MtkRIL) {
                this.mPhone.mCi.unregisterForQualifiedNetworkTypesChanged(this.mHandler);
            } else {
                MtkQualifiedNetworksService.this.loge("close(): mPhone.mCi is not instanceof MTKRIL!");
            }
            this.mHandlerThread.quit();
        }

        public int converNetworkType(int i) {
            if (i != 1) {
                return i != 2 ? 0 : 5;
            }
            return 3;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Rlog.d(TAG, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loge(String str) {
        Rlog.e(TAG, str);
    }

    public QualifiedNetworksService.NetworkAvailabilityProvider onCreateNetworkAvailabilityProvider(int i) {
        log("MtkQNS create MtkNetworkAvailabilityProvider for slot " + i);
        if (SubscriptionManager.isValidSlotIndex(i)) {
            return new MtkNetworkAvailabilityProvider(i);
        }
        loge("Tried to cellular data service with invalid slotId " + i);
        return null;
    }
}
