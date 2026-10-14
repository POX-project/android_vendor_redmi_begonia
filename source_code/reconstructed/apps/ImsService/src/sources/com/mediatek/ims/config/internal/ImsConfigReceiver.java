package com.mediatek.ims.config.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.Log;
import com.android.ims.ImsManager;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.common.ImsCarrierConfigConstants;
import com.mediatek.ims.config.ImsConfigContract;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigReceiver extends BroadcastReceiver {
    private static final String ACTION_CXP_NOTIFY_FEATURE = "com.mediatek.common.carrierexpress.cxp_notify_feature";
    private static final boolean DEBUG;
    private static final String PROPERTY_MTK_RCS_UA_SUPPORT = "persist.vendor.mtk_rcs_ua_support";
    private static final String PROPERTY_MTK_VILTE_SUPPORT = "persist.vendor.vilte_support";
    private static final String PROPERTY_MTK_VIWIFI_SUPPORT = "persist.vendor.viwifi_support";
    private static final String PROPERTY_MTK_VOLTE_SUPPORT = "persist.vendor.volte_support";
    private static final String PROPERTY_MTK_WFC_SUPPORT = "persist.vendor.mtk_wfc_support";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigReceiver";
    private Handler mHandler;
    private final int mPhoneId;
    private ImsCommandsInterface mRilAdapter;
    private int mMainPhoneId = -1;
    private ImsManagerOemPlugin mImsManagerOemPlugin = null;

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public ImsConfigReceiver(Handler handler, int i, ImsCommandsInterface imsCommandsInterface) {
        this.mPhoneId = i;
        this.mHandler = handler;
        this.mRilAdapter = imsCommandsInterface;
    }

    private void forceToSendWfcMode() {
        this.mHandler.removeMessages(10);
        Message message = new Message();
        message.what = 10;
        this.mHandler.sendMessage(message);
    }

    private void handleCarrierConfigChanged(Context context, Intent intent) {
        int intExtra = intent.getIntExtra("phone", -1);
        if (intExtra != this.mPhoneId) {
            return;
        }
        TelephonyManager telephonyManager = TelephonyManager.getDefault();
        if (telephonyManager != null && !telephonyManager.hasIccCard(intExtra)) {
            Log.e(TAG, "No need to reload config storage");
            return;
        }
        resetWfcModeFlag("ACTION_CARRIER_CONFIG_CHANGED");
        boolean booleanCarrierConfig = ImsConfigUtils.getBooleanCarrierConfig(context, ImsCarrierConfigConstants.MTK_KEY_WFC_REMOVE_PREFERENCE_MODE_BOOL, intExtra);
        boolean booleanCarrierConfig2 = ImsConfigUtils.getBooleanCarrierConfig(context, "editable_wfc_mode_bool", intExtra);
        Log.d(TAG, "KEY_WFC_REMOVE_PREFERENCE_MODE_BOOL = " + booleanCarrierConfig);
        Log.d(TAG, "KEY_EDITABLE_WFC_MODE_BOOL = " + booleanCarrierConfig2);
        if (booleanCarrierConfig || !booleanCarrierConfig2) {
            int intCarrierConfig = ImsConfigUtils.getIntCarrierConfig(context, "carrier_default_wfc_ims_mode_int", intExtra);
            Log.d(TAG, "ACTION_CARRIER_CONFIG_CHANGED: set wfc mode = " + intCarrierConfig + ", phoneId:" + intExtra);
            if (ImsCommonUtil.supportMims() || ImsCommonUtil.getMainPhoneIdForSingleIms() == intExtra) {
                ImsManager.getInstance(context, intExtra).setWfcMode(intCarrierConfig);
            } else {
                Log.d(TAG, "no set wfc mode due to mims: " + ImsCommonUtil.supportMims() + ", main phone id:" + ImsCommonUtil.getMainPhoneIdForSingleIms());
            }
        }
        int intCarrierConfig2 = ImsConfigUtils.getIntCarrierConfig(context, ImsCarrierConfigConstants.KEY_OPERATOR_ID_INT, intExtra);
        this.mHandler.removeMessages(1);
        Message message = new Message();
        Log.d(TAG, "carrier config changed, operatorCode = " + intCarrierConfig2 + " on phone " + intExtra);
        message.what = 1;
        message.obj = Integer.valueOf(intCarrierConfig2);
        this.mHandler.sendMessage(message);
    }

    private void resetWfcModeFlag(String str) {
        this.mHandler.removeMessages(8);
        Message message = new Message();
        Log.d(TAG, "resetWfcModeFlag, reason: " + str);
        message.what = 8;
        this.mHandler.sendMessage(message);
    }

    private void updateFeatureSupportProperty(Bundle bundle) {
        if (bundle.getString(PROPERTY_MTK_WFC_SUPPORT, "0").equals("1")) {
            this.mRilAdapter.turnOnWfc(null);
        } else {
            this.mRilAdapter.turnOffWfc(null);
        }
        if (bundle.getString(PROPERTY_MTK_VOLTE_SUPPORT, "0").equals("1")) {
            this.mRilAdapter.turnOnVolte(null);
        } else {
            this.mRilAdapter.turnOffVolte(null);
        }
        if (bundle.getString(PROPERTY_MTK_VILTE_SUPPORT, "0").equals("1")) {
            this.mRilAdapter.turnOnVilte(null);
        } else {
            this.mRilAdapter.turnOffVilte(null);
        }
        if (bundle.getString(PROPERTY_MTK_VIWIFI_SUPPORT, "0").equals("1")) {
            this.mRilAdapter.turnOnViwifi(null);
        } else {
            this.mRilAdapter.turnOffViwifi(null);
        }
        if (bundle.getString(PROPERTY_MTK_RCS_UA_SUPPORT, "0").equals("1")) {
            this.mRilAdapter.turnOnRcsUa(null);
        } else {
            this.mRilAdapter.turnOffRcsUa(null);
        }
    }

    private void updateImsServiceConfig(Context context, int i) {
        if (this.mImsManagerOemPlugin == null) {
            this.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(context).makeImsManagerPlugin(context);
        }
        if (ImsCommonUtil.supportMims() || i == ImsCommonUtil.getMainCapabilityPhoneId()) {
            this.mImsManagerOemPlugin.updateImsServiceConfig(context, i, true);
        } else if (DEBUG) {
            Log.d(TAG, "Do not update if phoneId is not main capability");
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        byte b;
        Bundle extras;
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
        if (b != 0) {
            if (b == 1) {
                handleCarrierConfigChanged(context, intent);
                return;
            }
            if (b == 2) {
                if (intent.getIntExtra("android:phone_id", -1) == this.mPhoneId) {
                    resetWfcModeFlag("ACTION_MTK_MMTEL_READY");
                    this.mHandler.removeMessages(9);
                    Message message = new Message();
                    Log.d(TAG, "ACTION_MTK_MMTEL_READY, update IMS config with phoneId:" + this.mPhoneId);
                    message.what = 9;
                    this.mHandler.sendMessage(message);
                    return;
                }
                return;
            }
            if (b != 3) {
                if (b == 4 && (extras = intent.getExtras()) != null) {
                    updateFeatureSupportProperty(extras);
                    updateImsServiceConfig(context, -1);
                    return;
                }
                return;
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
                this.mHandler.removeMessages(9);
                Message message2 = new Message();
                Log.d(TAG, "SET_RADIO_CAPABILITY_DONE, update IMS config with phoneId:" + this.mPhoneId);
                message2.what = 9;
                this.mHandler.sendMessage(message2);
                return;
            }
            return;
        }
        String stringExtra = intent.getStringExtra("ss");
        if (intent.getIntExtra("phone", -1) == this.mPhoneId) {
            Log.d(TAG, "Update LatestSimState, phoneId = " + this.mPhoneId + ", state = " + stringExtra);
            ImsConfigProvider.LatestSimState.put(Integer.valueOf(this.mPhoneId), stringExtra);
            switch (stringExtra.hashCode()) {
                case -2044189691:
                    if (stringExtra.equals("LOADED")) {
                        b2 = 5;
                    }
                    break;
                case -2044123382:
                    if (stringExtra.equals("LOCKED")) {
                        b2 = 4;
                    }
                    break;
                case -1830845986:
                    if (stringExtra.equals("CARD_IO_ERROR")) {
                        b2 = 3;
                    }
                    break;
                case 77848963:
                    if (stringExtra.equals("READY")) {
                        b2 = 6;
                    }
                    break;
                case 433141802:
                    if (stringExtra.equals("UNKNOWN")) {
                        b2 = 2;
                    }
                    break;
                case 1034051831:
                    if (stringExtra.equals("NOT_READY")) {
                        b2 = 1;
                    }
                    break;
                case 1924388665:
                    if (stringExtra.equals("ABSENT")) {
                        b2 = 0;
                    }
                    break;
            }
            if (b2 != 0) {
                if (b2 != 1 && b2 != 2 && b2 != 3) {
                    if (b2 == 6 && ImsConfigUtils.isWfcEnabledByUser(context, this.mPhoneId) && ImsConfigUtils.getWfcMode(context, this.mPhoneId) == 0) {
                        ImsConfigUtils.sendWifiOnlyModeIntent(context, this.mPhoneId, true);
                        Log.d(TAG, "Turn OFF radio, after sim ready and wfc mode is wifi_only");
                    }
                }
                if (!stringExtra.equals("ABSENT") || stringExtra.equals("LOADED")) {
                    Intent intent2 = new Intent(ImsConfigContract.ACTION_DYNAMIC_IMS_SWITCH_TRIGGER);
                    intent2.putExtra("phone", this.mPhoneId);
                    intent2.putExtra("ss", stringExtra);
                    context.sendBroadcast(intent2, "android.permission.READ_PHONE_STATE");
                }
                return;
            }
            this.mHandler.removeMessages(3);
            Message message3 = new Message();
            Log.d(TAG, "Sim state changed, event = " + stringExtra + ", check for ECC flag");
            message3.what = 3;
            this.mHandler.sendMessage(message3);
            this.mHandler.removeMessages(2);
            Message message4 = new Message();
            Log.d(TAG, "Sim state changed, event = " + stringExtra + ", reset broadcast flag");
            message4.what = 2;
            this.mHandler.sendMessage(message4);
            if (stringExtra.equals("ABSENT")) {
            }
            Intent intent3 = new Intent(ImsConfigContract.ACTION_DYNAMIC_IMS_SWITCH_TRIGGER);
            intent3.putExtra("phone", this.mPhoneId);
            intent3.putExtra("ss", stringExtra);
            context.sendBroadcast(intent3, "android.permission.READ_PHONE_STATE");
        }
    }
}
