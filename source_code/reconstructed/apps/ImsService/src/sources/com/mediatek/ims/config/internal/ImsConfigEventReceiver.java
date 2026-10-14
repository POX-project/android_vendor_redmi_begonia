package com.mediatek.ims.config.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.ims.ImsManager;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.common.ImsCarrierConfigConstants;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigEventReceiver extends BroadcastReceiver {
    private static final String ACTION_CXP_NOTIFY_FEATURE = "com.mediatek.common.carrierexpress.cxp_notify_feature";
    private static final boolean DEBUG;
    private static final String PROPERTY_MTK_RCS_UA_SUPPORT = "persist.vendor.mtk_rcs_ua_support";
    private static final String PROPERTY_MTK_VILTE_SUPPORT = "persist.vendor.vilte_support";
    private static final String PROPERTY_MTK_VIWIFI_SUPPORT = "persist.vendor.viwifi_support";
    private static final String PROPERTY_MTK_VOLTE_SUPPORT = "persist.vendor.volte_support";
    private static final String PROPERTY_MTK_WFC_SUPPORT = "persist.vendor.mtk_wfc_support";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigEventReceiver";
    private Handler mHandler;
    private String mLogTag;
    private final int mPhoneId;
    private ImsCommandsInterface mRilAdapter;
    private int mMainPhoneId = -1;
    private boolean mIsCarrierConfigLoaded = false;
    private ImsManagerOemPlugin mImsManagerOemPlugin = null;

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public ImsConfigEventReceiver(Handler handler, int i, ImsCommandsInterface imsCommandsInterface) {
        this.mPhoneId = i;
        this.mHandler = handler;
        this.mRilAdapter = imsCommandsInterface;
        this.mLogTag = "ImsConfigEventReceiver[" + i + "]";
    }

    private void handleCarrierConfigChanged(Context context, Intent intent) {
        int intExtra = intent.getIntExtra("phone", -1);
        int i = this.mPhoneId;
        if (intExtra != i) {
            return;
        }
        int simStateForSlotIndex = TelephonyManager.getSimStateForSlotIndex(i);
        Rlog.d(this.mLogTag, "received CARRIER_CONFIG_CHANGED[" + this.mPhoneId + "], simState = " + simStateForSlotIndex);
        if (simStateForSlotIndex == 10) {
            this.mIsCarrierConfigLoaded = true;
        }
        TelephonyManager telephonyManager = TelephonyManager.getDefault();
        if (telephonyManager != null && !telephonyManager.hasIccCard(intExtra)) {
            Rlog.e(this.mLogTag, "No need to reload config storage");
            return;
        }
        resetWfcModeFlag("ACTION_CARRIER_CONFIG_CHANGED");
        boolean booleanCarrierConfig = ImsConfigUtils.getBooleanCarrierConfig(context, ImsCarrierConfigConstants.MTK_KEY_WFC_REMOVE_PREFERENCE_MODE_BOOL, intExtra);
        boolean booleanCarrierConfig2 = ImsConfigUtils.getBooleanCarrierConfig(context, "editable_wfc_mode_bool", intExtra);
        Rlog.d(this.mLogTag, "KEY_WFC_REMOVE_PREFERENCE_MODE_BOOL = " + booleanCarrierConfig);
        Rlog.d(this.mLogTag, "KEY_EDITABLE_WFC_MODE_BOOL = " + booleanCarrierConfig2);
        if (booleanCarrierConfig2) {
            return;
        }
        int intCarrierConfig = ImsConfigUtils.getIntCarrierConfig(context, "carrier_default_wfc_ims_mode_int", intExtra);
        Rlog.d(this.mLogTag, "ACTION_CARRIER_CONFIG_CHANGED: set wfc mode = " + intCarrierConfig + ", phoneId:" + intExtra);
        if (ImsCommonUtil.supportMims() || ImsCommonUtil.getMainPhoneIdForSingleIms() == intExtra) {
            ImsManager.getInstance(context, intExtra).setWfcMode(intCarrierConfig);
            return;
        }
        Rlog.d(this.mLogTag, "no set wfc mode due to mims: " + ImsCommonUtil.supportMims() + ", main phone id:" + ImsCommonUtil.getMainPhoneIdForSingleIms());
    }

    private void resetWfcModeFlag(String str) {
        this.mHandler.removeMessages(108);
        Message message = new Message();
        Rlog.d(this.mLogTag, "resetWfcModeFlag, reason: " + str);
        message.what = 108;
        this.mHandler.sendMessage(message);
    }

    private void updateFeatureSupportProperty(Bundle bundle) {
        boolean zEquals = bundle.getString(PROPERTY_MTK_WFC_SUPPORT, "0").equals("1");
        if (zEquals) {
            this.mRilAdapter.turnOnWfc(null);
        } else {
            this.mRilAdapter.turnOffWfc(null);
        }
        boolean zEquals2 = bundle.getString(PROPERTY_MTK_VOLTE_SUPPORT, "0").equals("1");
        if (zEquals2) {
            this.mRilAdapter.turnOnVolte(null);
        } else {
            this.mRilAdapter.turnOffVolte(null);
        }
        boolean zEquals3 = bundle.getString(PROPERTY_MTK_VILTE_SUPPORT, "0").equals("1");
        if (zEquals3) {
            this.mRilAdapter.turnOnVilte(null);
        } else {
            this.mRilAdapter.turnOffVilte(null);
        }
        boolean zEquals4 = bundle.getString(PROPERTY_MTK_VIWIFI_SUPPORT, "0").equals("1");
        if (zEquals4) {
            this.mRilAdapter.turnOnViwifi(null);
        } else {
            this.mRilAdapter.turnOffViwifi(null);
        }
        boolean zEquals5 = bundle.getString(PROPERTY_MTK_RCS_UA_SUPPORT, "0").equals("1");
        if (zEquals5) {
            this.mRilAdapter.turnOnRcsUa(null);
        } else {
            this.mRilAdapter.turnOffRcsUa(null);
        }
        String str = this.mLogTag;
        StringBuilder sb = new StringBuilder();
        sb.append("updateFeatureSupportProperty(), volte:");
        sb.append(zEquals2 ? "1" : "0");
        sb.append(" wfc:");
        sb.append(zEquals ? "1" : "0");
        sb.append(" vilte:");
        sb.append(zEquals3 ? "1" : "0");
        sb.append(" viwifi:");
        sb.append(zEquals4 ? "1" : "0");
        sb.append(" isRcsUaOn:");
        sb.append(zEquals5 ? "1" : "0");
        Rlog.d(str, sb.toString());
    }

    private void updateImsServiceConfig(Context context, int i) {
        if (this.mImsManagerOemPlugin == null) {
            this.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(context).makeImsManagerPlugin(context);
        }
        if (ImsCommonUtil.supportMims() || i == ImsCommonUtil.getMainCapabilityPhoneId()) {
            this.mImsManagerOemPlugin.updateImsServiceConfig(context, i, true);
        } else if (DEBUG) {
            Rlog.d(this.mLogTag, "Do not update if phoneId is not main capability");
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        byte b;
        byte b2 = -1;
        switch (intent.getAction()) {
            case "com.mediatek.ims.MTK_MMTEL_READY":
                b = 2;
                break;
            case "android.telephony.action.CARRIER_CONFIG_CHANGED":
                b = 1;
                break;
            case "com.mediatek.common.carrierexpress.cxp_notify_feature":
                b = 4;
                break;
            case "android.intent.action.SIM_STATE_CHANGED":
                b = 0;
                break;
            case "android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE":
                b = 3;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0) {
            String stringExtra = intent.getStringExtra("ss");
            int intExtra = intent.getIntExtra("phone", -1);
            if (intExtra == this.mPhoneId) {
                int iHashCode = stringExtra.hashCode();
                if (iHashCode != -2044189691) {
                    if (iHashCode != 77848963) {
                        if (iHashCode == 1924388665 && stringExtra.equals("ABSENT")) {
                            b2 = 1;
                        }
                    } else if (stringExtra.equals("READY")) {
                        b2 = 0;
                    }
                } else if (stringExtra.equals("LOADED")) {
                    b2 = 2;
                }
                if (b2 == 0) {
                    if (ImsConfigUtils.isWfcEnabledByUser(context, this.mPhoneId) && ImsConfigUtils.getWfcMode(context, this.mPhoneId) == 0) {
                        ImsConfigUtils.sendWifiOnlyModeIntent(context, this.mPhoneId, true);
                        Rlog.d(this.mLogTag, "Turn OFF radio, after sim ready and wfc mode is wifi_only");
                        return;
                    }
                    return;
                }
                if (b2 == 1 || b2 == 2) {
                    if (stringExtra == "ABSENT") {
                        Rlog.d(this.mLogTag, "ICC_ABSENT[" + intExtra + "], reset carrier config loaded flag.");
                        this.mIsCarrierConfigLoaded = false;
                    }
                    if ("1".equals(SystemProperties.get("persist.vendor.mtk_dynamic_ims_switch"))) {
                        return;
                    }
                    Rlog.d(this.mLogTag, "updateImsServiceConfig after SIM event, phoneId:" + intExtra);
                    updateImsServiceConfig(context, intExtra);
                    return;
                }
                return;
            }
            return;
        }
        if (b == 1) {
            handleCarrierConfigChanged(context, intent);
            return;
        }
        if (b == 2) {
            int intExtra2 = intent.getIntExtra("android:phone_id", -1);
            if (intExtra2 == this.mPhoneId) {
                resetWfcModeFlag("ACTION_MTK_MMTEL_READY");
                int simStateForSlotIndex = TelephonyManager.getSimStateForSlotIndex(this.mPhoneId);
                Rlog.d(this.mLogTag, "ACTION_MTK_MMTEL_READY, update IMS config with phoneId:" + intExtra2 + ", simState = " + simStateForSlotIndex + ", carrier config loaded: " + this.mIsCarrierConfigLoaded);
                if (simStateForSlotIndex == 1 || this.mIsCarrierConfigLoaded) {
                    updateImsServiceConfig(context, intExtra2);
                    return;
                } else {
                    Rlog.d(this.mLogTag, "sim state isn't absent or carrier config isn't loaded, don't update ims service config.");
                    return;
                }
            }
            return;
        }
        if (b != 3) {
            if (b != 4) {
                return;
            }
            Bundle extras = intent.getExtras();
            if (extras == null) {
                Rlog.d(this.mLogTag, "ACTION_CXP_NOTIFY_FEATURE, opFeature is null");
                return;
            } else {
                updateFeatureSupportProperty(extras);
                updateImsServiceConfig(context, -1);
                return;
            }
        }
        boolean z = true;
        if (this.mMainPhoneId == -1) {
            this.mMainPhoneId = ImsCommonUtil.getMainCapabilityPhoneId();
            z = false;
        } else {
            int mainCapabilityPhoneId = ImsCommonUtil.getMainCapabilityPhoneId();
            if (mainCapabilityPhoneId == this.mMainPhoneId) {
                z = false;
            } else {
                this.mMainPhoneId = mainCapabilityPhoneId;
                if (this.mPhoneId != mainCapabilityPhoneId) {
                    z = false;
                }
            }
        }
        if (z) {
            resetWfcModeFlag("ACTION_SET_RADIO_CAPABILITY_DONE");
            Rlog.d(this.mLogTag, "SET_RADIO_CAPABILITY_DONE, update IMS config with phoneId:" + this.mPhoneId);
            updateImsServiceConfig(context, this.mPhoneId);
        }
    }
}
