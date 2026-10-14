package com.mediatek.ims.internal;

import android.content.Context;
import android.os.RemoteException;
import android.telephony.Rlog;
import com.android.ims.ImsConfigListener;
import com.android.ims.ImsException;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsConfig {
    public static final int MTK_CONFIG_START = 1000;
    private static final String TAG = "MtkImsConfig";
    private boolean DBG = true;
    private Context mContext;
    private final IMtkImsConfig miConfig;

    public static class ConfigConstants {
        public static final int CONFIG_START = 1000;
        public static final int EPDG_ADDRESS = 1000;
        public static final int PROVISIONED_CONFIG_END = 1003;
        public static final int PROVISIONED_CONFIG_START = 1000;
        public static final int PUBLISH_ERROR_RETRY_TIMER = 1001;
        public static final int VOICE_DOMAIN_PREFERENCE = 1003;
        public static final int VOICE_OVER_WIFI_MDN = 1002;
    }

    public static class WfcModeFeatureValueConstants {
        public static final int CELLULAR_ONLY = 3;
        public static final int CELLULAR_PREFERRED = 1;
        public static final int WIFI_ONLY = 0;
        public static final int WIFI_PREFERRED = 2;
    }

    public MtkImsConfig(IMtkImsConfig iMtkImsConfig, Context context) {
        this.miConfig = iMtkImsConfig;
        this.mContext = context;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void getFeatureValue(int i, int i2, ImsConfigListener imsConfigListener) throws ImsException {
        if (this.DBG) {
            Rlog.d(TAG, "getFeatureValue: feature = " + i + ", network =" + i2 + ", listener =" + imsConfigListener);
        }
        try {
            this.miConfig.getFeatureValue(i, i2, imsConfigListener);
        } catch (RemoteException e) {
            throw new ImsException("getFeatureValue()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getImsResCapability(int i) throws ImsException {
        try {
            return this.miConfig.getImsResCapability(i);
        } catch (RemoteException e) {
            throw new ImsException("getImsResCapability()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public String getProvisionedStringValue(int i) throws ImsException {
        try {
            String provisionedStringValue = this.miConfig.getProvisionedStringValue(i);
            if (this.DBG) {
                Rlog.d(TAG, "getProvisionedStringValue(): item = " + i + ", ret =" + provisionedStringValue);
            }
            return provisionedStringValue;
        } catch (RemoteException e) {
            throw new ImsException("getProvisionedStringValue()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getProvisionedValue(int i) throws ImsException {
        try {
            int provisionedValue = this.miConfig.getProvisionedValue(i);
            if (this.DBG) {
                Rlog.d(TAG, "getProvisionedValue(): item = " + i + ", ret =" + provisionedValue);
            }
            return provisionedValue;
        } catch (RemoteException e) {
            throw new ImsException("getValue()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setFeatureValue(int i, int i2, int i3, ImsConfigListener imsConfigListener) throws ImsException {
        try {
            this.miConfig.setFeatureValue(i, i2, i3, imsConfigListener);
        } catch (RemoteException e) {
            throw new ImsException("setFeatureValue()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setImsResCapability(int i, int i2) throws ImsException {
        try {
            this.miConfig.setImsResCapability(i, i2);
        } catch (RemoteException e) {
            throw new ImsException("setImsResCapability()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) throws ImsException {
        try {
            return this.miConfig.setModemImsCfg(strArr, strArr2, i);
        } catch (RemoteException e) {
            throw new ImsException("setModemImsCfg()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int[] setModemImsIwlanCfg(String[] strArr, String[] strArr2, int i) throws ImsException {
        try {
            return this.miConfig.setModemImsIwlanCfg(strArr, strArr2, i);
        } catch (RemoteException e) {
            throw new ImsException("setImsModemIwlanCfg()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int[] setModemImsWoCfg(String[] strArr, String[] strArr2, int i) throws ImsException {
        try {
            return this.miConfig.setModemImsWoCfg(strArr, strArr2, i);
        } catch (RemoteException e) {
            throw new ImsException("setModemImsWoCfg()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setMultiFeatureValues(int[] iArr, int[] iArr2, int[] iArr3, ImsConfigListener imsConfigListener) throws ImsException {
        try {
            Rlog.d(TAG, "setMultiFeatureValues()");
            this.miConfig.setMultiFeatureValues(iArr, iArr2, iArr3, imsConfigListener);
        } catch (RemoteException e) {
            throw new ImsException("setMultiFeatureValues()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int setProvisionedStringValue(int i, String str) throws ImsException {
        try {
            return this.miConfig.setProvisionedStringValue(i, str);
        } catch (RemoteException e) {
            throw new ImsException("setProvisionedStringValue()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int setProvisionedValue(int i, int i2) throws ImsException {
        try {
            return this.miConfig.setProvisionedValue(i, i2);
        } catch (RemoteException e) {
            throw new ImsException("setProvisionedValue()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setVoltePreference(int i) throws ImsException {
        try {
            this.miConfig.setVoltePreference(i);
        } catch (RemoteException e) {
            throw new ImsException("setVoltePreference()", e, 131);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setWfcMode(int i) throws ImsException {
        try {
            this.miConfig.setWfcMode(i);
        } catch (RemoteException e) {
            throw new ImsException("setWfcMode()", e, 131);
        }
    }
}
