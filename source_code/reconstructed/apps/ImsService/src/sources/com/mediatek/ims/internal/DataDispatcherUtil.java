package com.mediatek.ims.internal;

import android.telephony.Rlog;
import com.mediatek.ims.ImsAdapter;
import com.mediatek.ims.VaConstants;

/* JADX INFO: loaded from: classes.dex */
public class DataDispatcherUtil {
    private static final String TAG = DataDispatcherUtil.class.getSimpleName();

    public class ImsBearerRequest {
        private String mCapability;
        private int mRequest;
        private int mTransId;

        private ImsBearerRequest(int i, int i2, String str) {
            this.mTransId = i;
            this.mRequest = i2;
            this.mCapability = str;
        }

        public String getCapability() {
            return this.mCapability;
        }

        public int getRequestID() {
            return this.mRequest;
        }

        public int getTransId() {
            return this.mTransId;
        }

        public String toString() {
            return "{ transId: " + this.mTransId + " Request: " + this.mRequest + " Capbility: " + this.mCapability + " }";
        }
    }

    private ImsBearerRequest deCodeNwRelease(ImsAdapter.VaEvent vaEvent) {
        int requestID = vaEvent.getRequestID();
        int i = vaEvent.getByte();
        vaEvent.getByte();
        if (!(vaEvent.getByte() == 1)) {
            requestID = 800004;
        }
        return new ImsBearerRequest(i, requestID, vaEvent.getByte() == 1 ? "emergency" : "ims");
    }

    private ImsBearerRequest deCodeNwRequest(ImsAdapter.VaEvent vaEvent) {
        int requestID = vaEvent.getRequestID();
        int i = vaEvent.getByte();
        vaEvent.getByte();
        return new ImsBearerRequest(i, requestID, vaEvent.getByte() == 1 ? "emergency" : "ims");
    }

    private ImsBearerRequest deCodePcscfDiscovery(ImsAdapter.VaEvent vaEvent) {
        int requestID = vaEvent.getRequestID();
        int i = vaEvent.getByte();
        vaEvent.getByte();
        vaEvent.getBytes(2);
        return new ImsBearerRequest(i, requestID, "ims");
    }

    private ImsAdapter.VaEvent enCodeNotifyNetworkHandle(String str) {
        logd("enCodeNotifyNetworkHandle: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        long j = Long.parseLong(strArrSplit[1]);
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i, VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_NETWORK_HANDLE_NOTIFY);
        vaEvent.putLong(j);
        return vaEvent;
    }

    private ImsAdapter.VaEvent enCodeNotifyNwLost(String str) {
        logd("enCodeNotifyNwLost: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        int i2 = Integer.parseInt(strArrSplit[1]);
        String str2 = strArrSplit.length > 2 ? strArrSplit[2] : "";
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i, VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_IND);
        vaEvent.putByte(i2);
        vaEvent.putBytes(new byte[3]);
        vaEvent.putString(str2, 16);
        return vaEvent;
    }

    private ImsAdapter.VaEvent enCodeNwReleased(String str) {
        logd("enCodeNwReleased: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        int i2 = Integer.parseInt(strArrSplit[1]);
        int i3 = Integer.parseInt(strArrSplit[2]);
        String str2 = strArrSplit.length > 3 ? strArrSplit[3] : "";
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i2, VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_ACK_RESP);
        vaEvent.putByte(i);
        vaEvent.putByte(i3);
        vaEvent.putBytes(new byte[2]);
        vaEvent.putString(str2, 16);
        return vaEvent;
    }

    private ImsAdapter.VaEvent enCodeNwRequested(String str) {
        logd("enCodeNwRequested: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        int i2 = Integer.parseInt(strArrSplit[1]);
        int i3 = Integer.parseInt(strArrSplit[2]);
        String str2 = strArrSplit.length > 3 ? strArrSplit[3] : "";
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i2, VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_ACK_RESP);
        vaEvent.putByte(i);
        vaEvent.putBytes(new byte[3]);
        vaEvent.putInt(i3);
        vaEvent.putString(str2, 16);
        return vaEvent;
    }

    private ImsAdapter.VaEvent enCodeRejectNwReleased(String str) {
        logd("enCodeRejectNwReleased: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        int i2 = Integer.parseInt(strArrSplit[1]);
        int i3 = Integer.parseInt(strArrSplit[2]);
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i2, VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_REJ_RESP);
        vaEvent.putByte(i);
        vaEvent.putBytes(new byte[3]);
        vaEvent.putInt(i3);
        return vaEvent;
    }

    private ImsAdapter.VaEvent enCodeRejectNwRequested(String str) {
        logd("enCodeRejectNwRequested: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        int i2 = Integer.parseInt(strArrSplit[1]);
        int i3 = Integer.parseInt(strArrSplit[2]);
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i2, VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_REJ_RESP);
        vaEvent.putByte(i);
        vaEvent.putBytes(new byte[3]);
        vaEvent.putInt(i3);
        return vaEvent;
    }

    private ImsAdapter.VaEvent enCodeRejectPcscfDiscovery(String str) {
        logd("enCodeRejectPcscfDiscovery: " + str);
        String[] strArrSplit = str.split(",");
        int i = Integer.parseInt(strArrSplit[0]);
        int i2 = Integer.parseInt(strArrSplit[1]);
        int i3 = Integer.parseInt(strArrSplit[2]);
        ImsAdapter.VaEvent vaEvent = new ImsAdapter.VaEvent(i2, VaConstants.MSG_ID_REJECT_PCSCF_DISCOVERY);
        vaEvent.putByte(i);
        vaEvent.putByte(i3);
        vaEvent.putBytes(new byte[2]);
        return vaEvent;
    }

    public ImsBearerRequest deCodeEvent(ImsAdapter.VaEvent vaEvent) {
        int requestID = vaEvent.getRequestID();
        if (requestID == 900008) {
            return deCodeNwRequest(vaEvent);
        }
        if (requestID == 900011) {
            return deCodeNwRelease(vaEvent);
        }
        if (requestID != 900403) {
            return null;
        }
        return deCodePcscfDiscovery(vaEvent);
    }

    public ImsAdapter.VaEvent enCodeEvent(int i, String str) {
        switch (i) {
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_ACK_RESP /* 900009 */:
                return enCodeNwRequested(str);
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_REJ_RESP /* 900010 */:
                return enCodeRejectNwRequested(str);
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_ACK_RESP /* 900012 */:
                return enCodeNwReleased(str);
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_REJ_RESP /* 900013 */:
                return enCodeRejectNwReleased(str);
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_IND /* 900014 */:
                return enCodeNotifyNwLost(str);
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_NETWORK_HANDLE_NOTIFY /* 900301 */:
                return enCodeNotifyNetworkHandle(str);
            case VaConstants.MSG_ID_REJECT_PCSCF_DISCOVERY /* 900405 */:
                return enCodeRejectPcscfDiscovery(str);
            default:
                loge("not support event: " + i);
                return null;
        }
    }

    public void logd(String str) {
        Rlog.d(TAG, str);
    }

    public void loge(String str) {
        Rlog.e(TAG, str);
    }

    public void logi(String str) {
        Rlog.i(TAG, str);
    }
}
