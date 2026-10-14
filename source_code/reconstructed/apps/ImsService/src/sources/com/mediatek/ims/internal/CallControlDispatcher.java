package com.mediatek.ims.internal;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.mediatek.ims.ImsAdapter;
import com.mediatek.ims.ImsConstants;
import com.mediatek.ims.ImsEventDispatcher;
import com.mediatek.ims.ImsServiceCallTracker;

/* JADX INFO: loaded from: classes.dex */
public class CallControlDispatcher implements ImsEventDispatcher.VaEventDispatcher {
    private static final int IMC_PROGRESS_NOTIFY_CONFERENCE = 257;
    private static final int IMC_PROGRESS_NOTIFY_DIALOG = 256;
    private static final int IMC_PROGRESS_NOTIFY_MWI = 258;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final String TAG = "[CallControlDispatcher]";
    private static final boolean TELDBG;
    private Context mContext;
    private ImsAdapter.VaSocketIO mSocket;

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public CallControlDispatcher(Context context, ImsAdapter.VaSocketIO vaSocketIO) {
        this.mContext = context;
        this.mSocket = vaSocketIO;
    }

    private int getDataLength(byte[] bArr, int i) {
        int i2 = 0;
        while (i2 < i && bArr[i2] != 0) {
            i2++;
        }
        return i2;
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void disableRequest(int i) {
        Rlog.d(TAG, "disableRequest()");
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void enableRequest(int i) {
        Rlog.d(TAG, "enableRequest()");
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void vaEventCallback(ImsAdapter.VaEvent vaEvent) {
        try {
            int requestID = vaEvent.getRequestID();
            vaEvent.getDataLen();
            int i = vaEvent.getInt();
            int phoneId = vaEvent.getPhoneId();
            int i2 = vaEvent.getInt();
            byte[] bytes = vaEvent.getBytes(4000);
            String str = new String(bytes);
            int dataLength = getDataLength(bytes, 4000);
            if (!SENLOG || TELDBG) {
                Rlog.d(TAG, "requestId = " + requestID + ", length = " + dataLength + ", callId = " + i + ", phoneId = " + phoneId + ", serviceId = " + i2 + ", data = " + ImsServiceCallTracker.sensitiveEncode(str.substring(0, dataLength)));
            } else {
                Rlog.d(TAG, "requestId = " + requestID + ", length = " + dataLength + ", callId = " + i + ", phoneId = " + phoneId + ", serviceId = " + i2 + ", data = [hidden]");
            }
            switch (i2) {
                case 256:
                    Intent intent = new Intent(ImsConstants.ACTION_IMS_DIALOG_EVENT_PACKAGE);
                    intent.putExtra(ImsConstants.EXTRA_DEP_CONTENT, str.substring(0, dataLength));
                    intent.putExtra(ImsConstants.EXTRA_CALL_ID, i);
                    intent.putExtra(ImsConstants.EXTRA_PHONE_ID, phoneId);
                    LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent);
                    Rlog.d(TAG, "Dialog event package intent is sent.");
                    break;
                case 257:
                    Intent intent2 = new Intent(ImsConstants.ACTION_IMS_CONFERENCE_CALL_INDICATION);
                    intent2.putExtra(ImsConstants.EXTRA_MESSAGE_CONTENT, str.substring(0, dataLength));
                    intent2.putExtra(ImsConstants.EXTRA_CALL_ID, i);
                    intent2.putExtra(ImsConstants.EXTRA_PHONE_ID, phoneId);
                    LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent2);
                    Rlog.d(TAG, "Conference call XML message is sent.");
                    break;
                case 258:
                    Intent intent3 = new Intent(ImsConstants.ACTION_LTE_MESSAGE_WAITING_INDICATION);
                    intent3.putExtra(ImsConstants.EXTRA_LTE_MWI_BODY, str);
                    intent3.putExtra(ImsConstants.EXTRA_PHONE_ID, phoneId);
                    this.mContext.sendBroadcast(intent3, "com.mediatek.permission.READ_LTE_MESSAGE_WAITING_INDICATION");
                    Rlog.d(TAG, "Message Waiting Message is sent.");
                    break;
                default:
                    Rlog.d(TAG, "Unkonwn serviceId: " + i2);
                    break;
            }
        } catch (Exception e) {
            StringBuilder sb = new StringBuilder();
            sb.append("vaEventCallback exception: ");
            sb.append(ImsServiceCallTracker.sensitiveEncode("" + e));
            Rlog.e(TAG, sb.toString());
        }
    }
}
