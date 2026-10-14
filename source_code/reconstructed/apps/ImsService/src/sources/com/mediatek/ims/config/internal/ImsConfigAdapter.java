package com.mediatek.ims.config.internal;

import android.content.Context;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import com.android.ims.ImsException;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigAdapter {
    private static final boolean DEBUG;
    public static final int ISLAST_FALSE = 0;
    public static final int ISLAST_NULL = -1;
    public static final int ISLAST_TRUE = 1;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigAdapter";
    private static final boolean TELDBG;
    private Context mContext;
    ImsConfigController mController;
    private String mLogTag;
    private int mPhoneId;
    ImsConfigStorage mStorage;

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    private ImsConfigAdapter() {
        this.mPhoneId = -1;
        this.mContext = null;
    }

    public ImsConfigAdapter(Context context, ImsCommandsInterface imsCommandsInterface, int i) {
        this.mPhoneId = -1;
        this.mContext = null;
        this.mContext = context;
        this.mPhoneId = i;
        this.mLogTag = "ImsConfigAdapter[" + i + "]";
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mController = new ImsConfigController(context, i, imsCommandsInterface);
        } else {
            this.mStorage = new ImsConfigStorage(context, i, imsCommandsInterface);
        }
    }

    public int getFeatureValue(int i, int i2) throws ImsException {
        return ImsCommonUtil.supportMdAutoSetupIms() ? this.mController.getFeatureValue(i, i2) : this.mStorage.getFeatureValue(i, i2);
    }

    public int getImsResCapability(int i) throws ImsException {
        if (i == 3) {
            i = 1;
        }
        return ImsCommonUtil.supportMdAutoSetupIms() ? this.mController.getImsResCapability(i) : this.mStorage.getImsResCapability(i);
    }

    public String getProvisionedStringValue(int i) throws ImsException {
        return ImsCommonUtil.supportMdAutoSetupIms() ? this.mController.getProvisionedValue(i) : this.mStorage.getProvisionedStringValue(i);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getProvisionedValue(int i) throws ImsException {
        if (!ImsCommonUtil.supportMdAutoSetupIms()) {
            return this.mStorage.getProvisionedValue(i);
        }
        String provisionedValue = this.mController.getProvisionedValue(i);
        try {
            return Integer.parseInt(provisionedValue);
        } catch (NumberFormatException e) {
            throw new ImsException("getProvisionedValue wrong, reason: return string while expecting int, result:" + provisionedValue, 101);
        }
    }

    public void sendWfcProfileInfo(int i) {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mController.sendWfcProfileInfo(i);
        } else {
            this.mStorage.sendWfcProfileInfo(i);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setFeatureValue(int i, int i2, int i3, int i4) throws ImsException {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mController.setFeatureValue(i, i2, i3, i4);
        } else {
            this.mStorage.setFeatureValue(i, i2, i3);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setImsResCapability(int i, int i2) throws ImsException {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            Rlog.e(this.mLogTag, "setImsResCapability not supported!");
        } else {
            this.mStorage.setImsResCapability(i, i2);
        }
    }

    public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) {
        return ImsCommonUtil.supportMdAutoSetupIms() ? this.mController.setModemImsCfg(strArr, strArr2, i) : this.mStorage.setModemImsCfg(strArr, strArr2, i);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setProvisionedStringValue(int i, String str) throws ImsException {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mController.setProvisionedValue(i, str);
        } else {
            this.mStorage.setProvisionedStringValue(i, str);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setProvisionedValue(int i, int i2) throws ImsException {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mController.setProvisionedValue(i, String.valueOf(i2));
        } else {
            this.mStorage.setProvisionedValue(i, i2);
        }
    }

    public void setVoltePreference(int i) {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mController.setVoltePreference(i);
        } else {
            this.mStorage.setVoltePreference(i);
        }
    }
}
