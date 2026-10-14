package com.mediatek.ims.config.internal;

import android.content.Context;
import android.os.Binder;
import android.os.Build;
import android.os.Process;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.ims.compat.stub.ImsConfigImplBase;
import android.text.TextUtils;
import com.android.ims.ImsConfigListener;
import com.android.ims.ImsException;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsCallOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigImpl extends ImsConfigImplBase {
    private static final boolean DEBUG;
    private static final String PROPERTY_IMSCONFIG_FORCE_NOTIFY = "vendor.ril.imsconfig.force.notify";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigImpl";
    private ImsConfigAdapter mConfigAdapter;
    private Context mContext;
    private ImsCallOemPlugin mImsCallOemPlugin;
    private String mLogTag;
    private int mPhoneId;
    private ImsCommandsInterface mRilAdapter;

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public ImsConfigImpl(Context context, ImsCommandsInterface imsCommandsInterface, ImsConfigAdapter imsConfigAdapter, int i) {
        super(context);
        this.mConfigAdapter = null;
        this.mImsCallOemPlugin = null;
        this.mContext = context;
        this.mPhoneId = i;
        this.mRilAdapter = imsCommandsInterface;
        this.mConfigAdapter = imsConfigAdapter;
        this.mLogTag = "ImsConfigImpl[" + i + "]";
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void getFeatureValue(int i, int i2, ImsConfigListener imsConfigListener) {
        try {
            try {
                int featureValue = this.mConfigAdapter.getFeatureValue(i, i2);
                Rlog.i(this.mLogTag, "getFeatureValue(" + i + ", " + i2 + ") : " + featureValue + " on phone " + this.mPhoneId);
                imsConfigListener.onGetFeatureResponse(i, i2, featureValue, 0);
            } catch (ImsException e) {
                Rlog.e(this.mLogTag, "getFeatureValue(" + i + ") failed, code: " + e.getCode());
                imsConfigListener.onGetFeatureResponse(i, i2, 0, 1);
            }
        } catch (RemoteException e2) {
            Rlog.e(this.mLogTag, "getFeatureValue(" + i + ") remote failed!");
            throw new RuntimeException(e2);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public String getProvisionedStringValue(int i) {
        try {
            String provisionedStringValue = this.mConfigAdapter.getProvisionedStringValue(i);
            Rlog.i(this.mLogTag, "getProvisionedStringValue(" + i + ") : " + provisionedStringValue + " on phone " + this.mPhoneId + " from binder pid " + Binder.getCallingPid() + ", binder uid " + Binder.getCallingUid() + ", process pid " + Process.myPid() + ", process uid " + Process.myUid());
            return provisionedStringValue;
        } catch (ImsException e) {
            Rlog.e(this.mLogTag, "getProvisionedStringValue(" + i + ") failed, code: " + e.getCode());
            if (Binder.getCallingPid() == Process.myPid()) {
                return "Unknown";
            }
            return null;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getProvisionedValue(int i) {
        try {
            int provisionedValue = this.mConfigAdapter.getProvisionedValue(i);
            Rlog.i(this.mLogTag, "getProvisionedValue(" + i + ") : " + provisionedValue + " on phone" + this.mPhoneId + " from binder pid " + Binder.getCallingPid() + ", binder uid " + Binder.getCallingUid() + ", process pid " + Process.myPid() + ", process uid " + Process.myUid());
            return provisionedValue;
        } catch (ImsException e) {
            Rlog.e(this.mLogTag, "getProvisionedValue(" + i + ") failed, code: " + e.getCode());
            return Binder.getCallingPid() == Process.myPid() ? 0 : -1;
        }
    }

    public boolean getVolteProvisioned() {
        return true;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setFeatureValue(int i, int i2, int i3, ImsConfigListener imsConfigListener) {
        try {
            try {
                if (DEBUG) {
                    Rlog.i(this.mLogTag, "setFeatureValue(" + i + ", " + i2 + ", " + i3 + ") on phone " + this.mPhoneId + " from pid " + Binder.getCallingPid() + ", uid " + Binder.getCallingUid() + ", listener " + imsConfigListener);
                }
                if (i == 4 || i == 5) {
                    Rlog.i(this.mLogTag, "setFeatureValue is not support UT currently.");
                    throw new ImsException("setFeatureValue is not support UT currently.", 102);
                }
                if (!ImsCommonUtil.supportMims() && ImsCommonUtil.getMainCapabilityPhoneId() != this.mPhoneId) {
                    Rlog.i(this.mLogTag, "setFeatureValue is not allow on non main capability phoneId:" + this.mPhoneId + " in non MIMS project");
                    throw new ImsException("Do not setFeatureValue for non MIMS not main capability phoneId: " + this.mPhoneId, 102);
                }
                if (i3 == 1 && "1".equals(SystemProperties.get("persist.vendor.mtk_dynamic_ims_switch")) && this.mConfigAdapter.getImsResCapability(i) != 1 && SystemProperties.getInt(PROPERTY_IMSCONFIG_FORCE_NOTIFY, 0) == 0) {
                    Rlog.i(this.mLogTag, "setFeatureValue, modify the value in ImsConfig.");
                    i3 = 0;
                }
                this.mConfigAdapter.setFeatureValue(i, i2, i3, -1);
                if (this.mImsCallOemPlugin == null) {
                    this.mImsCallOemPlugin = ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsCallPlugin(this.mContext);
                }
                if (this.mImsCallOemPlugin.isUpdateViwifiFeatureValueAsViLTE() && 1 == i) {
                    this.mConfigAdapter.setFeatureValue(3, 1, i3, -1);
                }
                if (!ImsCommonUtil.supportMdAutoSetupIms()) {
                    if (i != 0) {
                        if (i != 1) {
                            if (i != 2) {
                                if (i == 3 && i3 != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VIWIFI_ENALBE, this.mPhoneId)) {
                                    if (i3 == 1) {
                                        this.mRilAdapter.turnOnViwifi(null);
                                    } else {
                                        this.mRilAdapter.turnOffViwifi(null);
                                    }
                                }
                            } else if (i3 != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_WFC_ENALBE, this.mPhoneId)) {
                                if (i3 == 1) {
                                    this.mRilAdapter.turnOnWfc(null);
                                } else {
                                    this.mRilAdapter.turnOffWfc(null);
                                }
                            }
                        } else if (i3 != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VILTE_ENALBE, this.mPhoneId)) {
                            if (i3 == 1) {
                                this.mRilAdapter.turnOnVilte(null);
                                if (this.mImsCallOemPlugin.isUpdateViwifiFeatureValueAsViLTE()) {
                                    this.mRilAdapter.turnOnViwifi(null);
                                }
                            } else {
                                this.mRilAdapter.turnOffVilte(null);
                                if (this.mImsCallOemPlugin.isUpdateViwifiFeatureValueAsViLTE()) {
                                    this.mRilAdapter.turnOffViwifi(null);
                                }
                            }
                        }
                    } else if (i3 != ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VOLTE_ENALBE, this.mPhoneId)) {
                        if (i3 == 1) {
                            this.mRilAdapter.turnOnVolte(null);
                        } else {
                            this.mRilAdapter.turnOffVolte(null);
                        }
                    }
                }
                if (imsConfigListener != null) {
                    imsConfigListener.onSetFeatureResponse(i, i2, i3, 0);
                }
            } catch (ImsException e) {
                Rlog.e(this.mLogTag, "setFeatureValue(" + i + ") failed, code: " + e.getCode());
                if (imsConfigListener != null) {
                    imsConfigListener.onSetFeatureResponse(i, i2, 0, 1);
                }
            }
        } catch (RemoteException e2) {
            Rlog.e(this.mLogTag, "setFeatureValue(" + i + ") remote failed!");
            throw new RuntimeException(e2);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int setProvisionedStringValue(int i, String str) {
        try {
            this.mConfigAdapter.setProvisionedStringValue(i, str);
            Rlog.i(this.mLogTag, "setProvisionedStringValue(" + i + ", " + str + ") on phone " + this.mPhoneId + " from pid " + Binder.getCallingPid() + ", uid " + Binder.getCallingUid() + " ,retVal:0");
            return 0;
        } catch (ImsException e) {
            Rlog.e(this.mLogTag, "setProvisionedValue(" + i + ") failed, code: " + e.getCode());
            return 1;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int setProvisionedValue(int i, int i2) {
        try {
            this.mConfigAdapter.setProvisionedValue(i, i2);
            if (DEBUG) {
                Rlog.i(this.mLogTag, "setProvisionedValue(" + i + ", " + i2 + ") on phone " + this.mPhoneId + " from pid " + Binder.getCallingPid() + ", uid " + Binder.getCallingUid() + " ,retVal:0");
            }
            return 0;
        } catch (ImsException e) {
            Rlog.e(this.mLogTag, "setProvisionedValue(" + i + ") failed, code: " + e.getCode());
            return 1;
        }
    }
}
