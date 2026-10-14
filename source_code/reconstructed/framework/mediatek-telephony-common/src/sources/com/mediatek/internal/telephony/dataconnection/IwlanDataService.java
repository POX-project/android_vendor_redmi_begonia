package com.mediatek.internal.telephony.dataconnection;

import android.net.LinkProperties;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.data.DataCallResponse;
import android.telephony.data.DataProfile;
import android.telephony.data.DataService;
import android.telephony.data.DataServiceCallback;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class IwlanDataService extends DataService {
    private static final int DATA_CALL_LIST_CHANGED = 6;
    private static final boolean DBG = true;
    private static final int DEACTIVATE_DATA_ALL_COMPLETE = 2;
    private static final int GET_DATA_CALL_LIST_COMPLETE = 5;
    private static final int SETUP_DATA_CALL_COMPLETE = 1;
    private static final int SET_DATA_PROFILE_COMPLETE = 4;
    private static final int SET_INITIAL_ATTACH_APN_COMPLETE = 3;
    private static final String TAG = IwlanDataService.class.getSimpleName();

    private class IwlanDataServiceProvider extends DataService.DataServiceProvider {
        private final Map<Message, DataServiceCallback> mCallbackMap;
        private final Handler mHandler;
        private final HandlerThread mHandlerThread;
        private final Looper mLooper;
        private final Phone mPhone;

        private IwlanDataServiceProvider(int i) {
            super(IwlanDataService.this, i);
            this.mCallbackMap = new HashMap();
            this.mPhone = PhoneFactory.getPhone(getSlotIndex());
            HandlerThread handlerThread = new HandlerThread(IwlanDataService.class.getSimpleName());
            this.mHandlerThread = handlerThread;
            handlerThread.start();
            this.mLooper = this.mHandlerThread.getLooper();
            this.mHandler = new Handler(this.mLooper) { // from class: com.mediatek.internal.telephony.dataconnection.IwlanDataService.IwlanDataServiceProvider.1
                @Override // android.os.Handler
                public void handleMessage(Message message) {
                    DataServiceCallback dataServiceCallback = (DataServiceCallback) IwlanDataServiceProvider.this.mCallbackMap.remove(message);
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    switch (message.what) {
                        case 1:
                            dataServiceCallback.onSetupDataCallComplete(asyncResult.exception == null ? 0 : 4, (DataCallResponse) asyncResult.result);
                            break;
                        case 2:
                            dataServiceCallback.onDeactivateDataCallComplete(asyncResult.exception == null ? 0 : 4);
                            break;
                        case 3:
                            dataServiceCallback.onSetInitialAttachApnComplete(asyncResult.exception == null ? 0 : 4);
                            break;
                        case 4:
                            dataServiceCallback.onSetDataProfileComplete(asyncResult.exception == null ? 0 : 4);
                            break;
                        case 5:
                            dataServiceCallback.onRequestDataCallListComplete(asyncResult.exception == null ? 0 : 4, asyncResult.exception != null ? null : (List) asyncResult.result);
                            break;
                        case 6:
                            IwlanDataServiceProvider.this.notifyDataCallListChanged((List) asyncResult.result);
                            break;
                        default:
                            IwlanDataService.this.loge("Unexpected event: " + message.what);
                            break;
                    }
                }
            };
            IwlanDataService.this.log("Register for data call list changed.");
            this.mPhone.mCi.registerForDataCallListChanged(this.mHandler, 6, (Object) null);
        }

        public void close() {
            this.mPhone.mCi.unregisterForDataCallListChanged(this.mHandler);
            this.mHandlerThread.quit();
        }

        public void deactivateDataCall(int i, int i2, DataServiceCallback dataServiceCallback) {
            IwlanDataService.this.log("deactivateDataCall " + getSlotIndex());
            Message messageObtain = null;
            if (dataServiceCallback != null) {
                messageObtain = Message.obtain(this.mHandler, 2);
                this.mCallbackMap.put(messageObtain, dataServiceCallback);
            }
            this.mPhone.mCi.deactivateDataCall(i, i2, messageObtain);
        }

        public void requestDataCallList(DataServiceCallback dataServiceCallback) {
            IwlanDataService.this.log("requestDataCallList " + getSlotIndex());
            Message messageObtain = null;
            if (dataServiceCallback != null) {
                messageObtain = Message.obtain(this.mHandler, 5);
                this.mCallbackMap.put(messageObtain, dataServiceCallback);
            }
            this.mPhone.mCi.getDataCallList(messageObtain);
        }

        public void setDataProfile(List<DataProfile> list, boolean z, DataServiceCallback dataServiceCallback) {
            IwlanDataService.this.log("setDataProfile " + getSlotIndex());
            Message messageObtain = null;
            if (dataServiceCallback != null) {
                messageObtain = Message.obtain(this.mHandler, 4);
                this.mCallbackMap.put(messageObtain, dataServiceCallback);
            }
            this.mPhone.mCi.setDataProfile((DataProfile[]) list.toArray(new DataProfile[list.size()]), z, messageObtain);
        }

        public void setInitialAttachApn(DataProfile dataProfile, boolean z, DataServiceCallback dataServiceCallback) {
            IwlanDataService.this.log("setInitialAttachApn " + getSlotIndex());
            Message messageObtain = null;
            if (dataServiceCallback != null) {
                messageObtain = Message.obtain(this.mHandler, 3);
                this.mCallbackMap.put(messageObtain, dataServiceCallback);
            }
            this.mPhone.mCi.setInitialAttachApn(dataProfile, z, messageObtain);
        }

        public void setupDataCall(int i, DataProfile dataProfile, boolean z, boolean z2, int i2, LinkProperties linkProperties, DataServiceCallback dataServiceCallback) {
            IwlanDataService.this.log("setupDataCall " + getSlotIndex());
            Message messageObtain = null;
            if (dataServiceCallback != null) {
                messageObtain = Message.obtain(this.mHandler, 1);
                this.mCallbackMap.put(messageObtain, dataServiceCallback);
            }
            this.mPhone.mCi.setupDataCall(i, dataProfile, z, z2, i2, linkProperties, messageObtain);
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

    public DataService.DataServiceProvider onCreateDataServiceProvider(int i) {
        log("IWLAN data service created for slot " + i);
        if (SubscriptionManager.isValidSlotIndex(i)) {
            return new IwlanDataServiceProvider(i);
        }
        loge("Tried to IWLAN data service with invalid slotId " + i);
        return null;
    }
}
