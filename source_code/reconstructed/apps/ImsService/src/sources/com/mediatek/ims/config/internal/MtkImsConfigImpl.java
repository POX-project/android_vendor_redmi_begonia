package com.mediatek.ims.config.internal;

import android.content.Context;
import android.os.Binder;
import android.os.Build;
import android.os.Process;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import com.android.ims.ImsConfigListener;
import com.android.ims.ImsException;
import com.android.ims.internal.IImsConfig;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.internal.IMtkImsConfig;
import com.mediatek.ims.ril.ImsCommandsInterface;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsConfigImpl extends IMtkImsConfig.Stub {
    private static final boolean DEBUG;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "MtkImsConfigImpl";
    private ImsConfigAdapter mConfigAdapter;
    private Context mContext;
    private HashMap<Integer, Integer> mImsCapabilities;
    private HashMap<Integer, Boolean> mImsCapabilitiesIsCache = new HashMap<>();
    private final IImsConfig mImsConfig;
    private int mPhoneId;
    private ImsCommandsInterface mRilAdapter;

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public MtkImsConfigImpl(Context context, ImsCommandsInterface imsCommandsInterface, IImsConfig iImsConfig, ImsConfigAdapter imsConfigAdapter, int i) {
        HashMap<Integer, Integer> map = new HashMap<>();
        this.mImsCapabilities = map;
        this.mContext = context;
        this.mPhoneId = i;
        this.mRilAdapter = imsCommandsInterface;
        this.mImsConfig = iImsConfig;
        this.mConfigAdapter = imsConfigAdapter;
        map.put(0, 1);
        this.mImsCapabilities.put(1, 0);
        this.mImsCapabilities.put(2, 0);
        this.mImsCapabilities.put(3, 0);
        this.mImsCapabilities.put(4, 0);
        this.mImsCapabilities.put(5, 0);
        this.mImsCapabilities.put(6, 0);
        this.mImsCapabilities.put(7, 0);
        this.mImsCapabilitiesIsCache.put(0, false);
        this.mImsCapabilitiesIsCache.put(1, false);
        this.mImsCapabilitiesIsCache.put(2, false);
        this.mImsCapabilitiesIsCache.put(3, false);
        this.mImsCapabilitiesIsCache.put(4, false);
        this.mImsCapabilitiesIsCache.put(5, false);
        this.mImsCapabilitiesIsCache.put(6, false);
        this.mImsCapabilitiesIsCache.put(7, false);
    }

    public void getFeatureValue(int i, int i2, ImsConfigListener imsConfigListener) {
        try {
            Rlog.i(TAG, "getFeatureValue(" + i + ", " + i2 + ") : on phone " + this.mPhoneId);
            this.mImsConfig.getFeatureValue(i, i2, imsConfigListener);
        } catch (RemoteException e) {
            Rlog.e(TAG, "getFeatureValue(" + i + ") remote failed!");
            throw new RuntimeException(e);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getImsResCapability(int i) {
        try {
            int iIntValue = this.mImsCapabilitiesIsCache.get(Integer.valueOf(i)).booleanValue() ? this.mImsCapabilities.get(Integer.valueOf(i)).intValue() : this.mConfigAdapter.getImsResCapability(i);
            if (iIntValue != 1 && iIntValue != 0) {
                throw new ImsException(" result value:" + iIntValue + " incorrect!", 101);
            }
            return iIntValue;
        } catch (ImsException e) {
            Rlog.e(TAG, "getImsResCapability(" + i + ") failed, code: " + e.getCode());
            return this.mImsCapabilities.get(Integer.valueOf(i)).intValue();
        }
    }

    public String getProvisionedStringValue(int i) {
        try {
            String provisionedStringValue = this.mImsConfig.getProvisionedStringValue(i);
            Rlog.i(TAG, "getProvisionedStringValue(" + i + ") : " + provisionedStringValue + " on phone " + this.mPhoneId + " from binder pid " + Binder.getCallingPid() + ", binder uid " + Binder.getCallingUid() + ", process pid " + Process.myPid() + ", process uid " + Process.myUid());
            return provisionedStringValue;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getProvisionedStringValue(" + i + ") remote failed!");
            throw new RuntimeException(e);
        }
    }

    public int getProvisionedValue(int i) {
        try {
            int provisionedValue = this.mImsConfig.getProvisionedValue(i);
            Rlog.i(TAG, "getProvisionedValue(" + i + ") : " + provisionedValue + " on phone" + this.mPhoneId + " from binder pid " + Binder.getCallingPid() + ", binder uid " + Binder.getCallingUid() + ", process pid " + Process.myPid() + ", process uid " + Process.myUid());
            return provisionedValue;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getProvisionedValue(" + i + ") remote failed!");
            throw new RuntimeException(e);
        }
    }

    public void getVideoQuality(ImsConfigListener imsConfigListener) {
    }

    public void setFeatureValue(int i, int i2, int i3, ImsConfigListener imsConfigListener) {
        try {
            this.mImsConfig.setFeatureValue(i, i2, i3, imsConfigListener);
        } catch (RemoteException e) {
            Rlog.e(TAG, "setFeatureValue(" + i + ") remote failed!");
            throw new RuntimeException(e);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setImsResCapability(int i, int i2) {
        this.mImsCapabilities.put(Integer.valueOf(i), Integer.valueOf(i2));
        this.mImsCapabilitiesIsCache.put(Integer.valueOf(i), true);
        try {
            if (DEBUG) {
                Rlog.i(TAG, "setImsResCapability(" + i + ") : " + i2 + " on phone " + this.mPhoneId + " from binder pid " + Binder.getCallingPid() + ", binder uid " + Binder.getCallingUid());
            }
            this.mConfigAdapter.setImsResCapability(i, i2);
        } catch (ImsException e) {
            Rlog.e(TAG, "setImsResCapability(" + i + ") failed, code: " + e.getCode());
        }
    }

    public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) {
        Rlog.i(TAG, "setModemImsCfg phoneId:" + i);
        return this.mConfigAdapter.setModemImsCfg(strArr, strArr2, 0);
    }

    public int[] setModemImsIwlanCfg(String[] strArr, String[] strArr2, int i) {
        Rlog.i(TAG, "setModemImsIwlanCfg phoneId:" + i);
        return this.mConfigAdapter.setModemImsCfg(strArr, strArr2, 2);
    }

    public int[] setModemImsWoCfg(String[] strArr, String[] strArr2, int i) {
        Rlog.i(TAG, "setModemImsWoCfg phoneId:" + i);
        return this.mConfigAdapter.setModemImsCfg(strArr, strArr2, 1);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setMultiFeatureValues(int[] iArr, int[] iArr2, int[] iArr3, ImsConfigListener imsConfigListener) {
        try {
            try {
                if (!ImsCommonUtil.supportMims() && ImsCommonUtil.getMainCapabilityPhoneId() != this.mPhoneId) {
                    Rlog.i(TAG, "setFeatureValue is not allow on non main capability phoneId:" + this.mPhoneId + " in non MIMS project");
                    throw new ImsException("Do not setFeatureValue for non MIMS not main capability phoneId: " + this.mPhoneId, 102);
                }
                int i = 0;
                while (i < iArr.length) {
                    try {
                        try {
                            if (ImsCommonUtil.supportMdAutoSetupIms()) {
                                int i2 = i == iArr.length - 1 ? 1 : 0;
                                if (iArr3[i] == 1 && "1".equals(SystemProperties.get("persist.vendor.mtk_dynamic_ims_switch")) && this.mConfigAdapter.getImsResCapability(iArr[i]) != 1) {
                                    Rlog.i(TAG, "setMultiFeatureValues, modify the value in ImsConfig.");
                                    iArr3[i] = 0;
                                }
                                Rlog.i(TAG, "setMultiFeatureValues i:" + i + " feature: " + iArr[i] + " network: " + iArr2[i] + " value: " + iArr3[i] + " isLast: " + i2);
                                this.mConfigAdapter.mController.setFeatureValue(iArr[i], iArr2[i], iArr3[i], i2);
                            } else {
                                this.mConfigAdapter.mStorage.setFeatureValue(iArr[i], iArr2[i], iArr3[i]);
                                int i3 = iArr[i];
                                if (i3 == 0) {
                                    if (iArr3[i] != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VOLTE_ENALBE, this.mPhoneId)) {
                                        if (iArr3[i] == 1) {
                                            this.mRilAdapter.turnOnVolte(null);
                                        } else {
                                            this.mRilAdapter.turnOffVolte(null);
                                        }
                                    }
                                } else if (i3 == 1) {
                                    if (iArr3[i] != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VILTE_ENALBE, this.mPhoneId)) {
                                        if (iArr3[i] == 1) {
                                            this.mRilAdapter.turnOnVilte(null);
                                        } else {
                                            this.mRilAdapter.turnOffVilte(null);
                                        }
                                    }
                                } else if (i3 == 2) {
                                    if (iArr3[i] != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_WFC_ENALBE, this.mPhoneId)) {
                                        if (iArr3[i] == 1) {
                                            this.mRilAdapter.turnOnWfc(null);
                                        } else {
                                            this.mRilAdapter.turnOffWfc(null);
                                        }
                                    }
                                } else if (i3 == 3) {
                                    if (iArr3[i] != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VIWIFI_ENALBE, this.mPhoneId)) {
                                        if (iArr3[i] == 1) {
                                            this.mRilAdapter.turnOnViwifi(null);
                                        } else {
                                            this.mRilAdapter.turnOffViwifi(null);
                                        }
                                    }
                                }
                            }
                            if (imsConfigListener != null) {
                                imsConfigListener.onSetFeatureResponse(iArr[i], iArr2[i], iArr3[i], 0);
                            }
                        } catch (RemoteException e) {
                            Rlog.e(TAG, "setMultiFeatureValues onSetFeatureResponse remote failed!");
                            throw new RuntimeException(e);
                        }
                    } catch (ImsException e2) {
                        Rlog.e(TAG, "setFeatureValue(" + iArr[i] + ") failed, code: " + e2.getCode());
                        if (imsConfigListener != null) {
                            imsConfigListener.onSetFeatureResponse(iArr[i], iArr2[i], 0, 1);
                        }
                    }
                    i++;
                }
            } catch (ImsException e3) {
                Rlog.e(TAG, "setMultiFeatureValues failed, code: " + e3.getCode());
                if (imsConfigListener != null) {
                    for (int i4 = 0; i4 < iArr.length; i4++) {
                        imsConfigListener.onSetFeatureResponse(iArr[i4], iArr2[i4], 0, 1);
                    }
                }
            }
        } catch (RemoteException e4) {
            Rlog.e(TAG, "setMultiFeatureValues onSetFeatureResponse remote failed!");
            throw new RuntimeException(e4);
        }
    }

    public int setProvisionedStringValue(int i, String str) {
        try {
            return this.mImsConfig.setProvisionedStringValue(i, str);
        } catch (RemoteException e) {
            Rlog.e(TAG, "setProvisionedValue(" + i + ") remote failed!");
            return 1;
        }
    }

    public int setProvisionedValue(int i, int i2) {
        try {
            return this.mImsConfig.setProvisionedValue(i, i2);
        } catch (RemoteException e) {
            Rlog.e(TAG, "setProvisionedValue(" + i + ") remote failed!");
            return 1;
        }
    }

    public void setVideoQuality(int i, ImsConfigListener imsConfigListener) {
    }

    public void setVoltePreference(int i) {
        this.mConfigAdapter.setVoltePreference(i);
    }

    public void setWfcMode(int i) {
        Rlog.i(TAG, "setWfcMode(" + i + ")");
        int i2 = 1;
        if (i == 0) {
            i2 = 3;
        } else if (i == 1) {
            i2 = 2;
        } else if (i != 2) {
            Rlog.i(TAG, "setWfcMode mapping error, value is invalid!");
        } else {
            i2 = 1;
        }
        this.mConfigAdapter.sendWfcProfileInfo(i2);
    }
}
