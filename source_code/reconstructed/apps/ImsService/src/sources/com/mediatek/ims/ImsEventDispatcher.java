package com.mediatek.ims;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.mediatek.ims.internal.CallControlDispatcher;
import com.mediatek.ims.internal.ImsDataTracker;
import com.mediatek.ims.internal.ImsSimservsDispatcher;
import com.mediatek.ims.internal.WfcDispatcher;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class ImsEventDispatcher extends Handler {
    private static final String TAG = "[ImsEventDispatcher]";
    private CallControlDispatcher mCallControlDispatcher;
    private Context mContext;
    private ImsDataTracker mImsDataTracker;
    private ImsSimservsDispatcher mSimservsDispatcher;
    private ImsAdapter.VaSocketIO mSocket;
    private ArrayList<VaEventDispatcher> mVaEventDispatcher = new ArrayList<>();
    private WfcDispatcher mWfcDispatcher;

    public interface VaEventDispatcher {
        void disableRequest(int i);

        void enableRequest(int i);

        void vaEventCallback(ImsAdapter.VaEvent vaEvent);
    }

    public ImsEventDispatcher(Context context, ImsAdapter.VaSocketIO vaSocketIO) {
        this.mContext = context;
        this.mSocket = vaSocketIO;
        createDispatcher();
    }

    private void createDispatcher() {
        CallControlDispatcher callControlDispatcher = new CallControlDispatcher(this.mContext, this.mSocket);
        this.mCallControlDispatcher = callControlDispatcher;
        this.mVaEventDispatcher.add(callControlDispatcher);
        ImsDataTracker imsDataTracker = new ImsDataTracker(this.mContext, this.mSocket);
        this.mImsDataTracker = imsDataTracker;
        this.mVaEventDispatcher.add(imsDataTracker);
        ImsSimservsDispatcher imsSimservsDispatcher = new ImsSimservsDispatcher(this.mContext, this.mSocket);
        this.mSimservsDispatcher = imsSimservsDispatcher;
        this.mVaEventDispatcher.add(imsSimservsDispatcher);
        WfcDispatcher wfcDispatcher = new WfcDispatcher(this.mContext, this.mSocket);
        this.mWfcDispatcher = wfcDispatcher;
        this.mVaEventDispatcher.add(wfcDispatcher);
    }

    void disableRequest(int i) {
        Iterator<VaEventDispatcher> it = this.mVaEventDispatcher.iterator();
        while (it.hasNext()) {
            it.next().disableRequest(i);
        }
    }

    void dispatchCallback(ImsAdapter.VaEvent vaEvent) {
        Log.d(TAG, "dispatchCallback: request ID:" + ImsAdapter.requestIdToString(vaEvent.getRequestID()));
        switch (vaEvent.getRequestID()) {
            case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_INFORMATION_REQ /* 900002 */:
            case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ /* 900008 */:
            case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ /* 900011 */:
            case VaConstants.MSG_ID_REQUEST_PCSCF_DISCOVERY /* 900403 */:
                this.mImsDataTracker.vaEventCallback(vaEvent);
                break;
            case VaConstants.MSG_ID_IMS_ENABLE_IND /* 900003 */:
                enableRequest(vaEvent.getPhoneId());
                break;
            case VaConstants.MSG_ID_IMS_DISABLE_IND /* 900004 */:
                disableRequest(vaEvent.getPhoneId());
                break;
            case VaConstants.MSG_ID_NOTIFY_XUI_IND /* 900401 */:
                this.mSimservsDispatcher.vaEventCallback(vaEvent);
                break;
            case VaConstants.MSG_ID_NOTIFY_SS_PROGRESS_INDICATION /* 900402 */:
                this.mCallControlDispatcher.vaEventCallback(vaEvent);
                break;
            case VaConstants.MSG_ID_REQUEST_VOWIFI_RELATED_INFO /* 900406 */:
                this.mWfcDispatcher.vaEventCallback(vaEvent);
                break;
            default:
                Log.d(TAG, "Receive unsupported Request ID");
                break;
        }
    }

    void enableRequest(int i) {
        Iterator<VaEventDispatcher> it = this.mVaEventDispatcher.iterator();
        while (it.hasNext()) {
            it.next().enableRequest(i);
        }
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        dispatchCallback((ImsAdapter.VaEvent) message.obj);
    }
}
