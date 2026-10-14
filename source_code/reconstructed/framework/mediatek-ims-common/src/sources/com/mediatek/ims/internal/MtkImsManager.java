package com.mediatek.ims.internal;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.ImsCallSession;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.RegistrationManager;
import android.telephony.ims.aidl.IImsCallSessionListener;
import android.telephony.ims.aidl.IImsCapabilityCallback;
import android.telephony.ims.feature.CapabilityChangeRequest;
import android.telephony.ims.feature.ImsFeature;
import android.telephony.ims.feature.MmTelFeature;
import android.text.TextUtils;
import android.util.Log;
import com.android.ims.ImsCall;
import com.android.ims.ImsException;
import com.android.ims.ImsManager;
import com.android.ims.ImsUtInterface;
import com.android.ims.internal.IImsCallSession;
import com.android.ims.internal.IImsRegistrationListener;
import com.android.ims.internal.IImsUt;
import com.mediatek.ims.MtkImsCall;
import com.mediatek.ims.MtkImsConnectionStateListener;
import com.mediatek.ims.MtkImsUt;
import com.mediatek.ims.internal.ext.IImsManagerExt;
import com.mediatek.ims.internal.ext.OpImsCustomizationUtils;
import com.mediatek.internal.telephony.IMtkPhoneSubInfoEx;
import com.mediatek.internal.telephony.MtkIccCardConstants;
import com.mediatek.internal.telephony.MtkSubscriptionManager;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import mediatek.telephony.MtkServiceState;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsManager extends ImsManager {
    public static final String ACTION_IMS_INCOMING_CALL_INDICATION = "com.android.ims.IMS_INCOMING_CALL_INDICATION";
    public static final String ACTION_IMS_NOT_RINGING_INCOMING_CALL = "com.mediatek.ims.NOT_RINGING_INCOMING_CALL";
    public static final String ACTION_IMS_RADIO_STATE_CHANGED = "com.android.ims.IMS_RADIO_STATE_CHANGED";
    public static final String ACTION_IMS_RTP_INFO = "com.android.ims.IMS_RTP_INFO";
    public static final String ACTION_IMS_SERVICE_DEREGISTERED = "com.android.ims.IMS_SERVICE_DEREGISTERED";
    public static final String DATA_ENABLED_PROP = "net.lte.ims.data.enabled";
    public static final String DATA_ROAMING_PROP = "net.lte.data.roaming";
    public static final String DATA_ROAMING_SETTING_PROP = "net.lte.data.roaming.setting";
    private static final boolean DBG = true;
    public static final String ENHANCED_4G_MODE_ENABLED_SIM2 = "volte_vt_enabled_sim2";
    public static final String ENHANCED_4G_MODE_ENABLED_SIM3 = "volte_vt_enabled_sim3";
    public static final String ENHANCED_4G_MODE_ENABLED_SIM4 = "volte_vt_enabled_sim4";
    public static final String EXTRA_CALL_MODE = "android:imsCallMode";
    public static final String EXTRA_DIAL_STRING = "android:imsDialString";
    public static final String EXTRA_IMS_DISABLE_CAP_KEY = "android:disablecap";
    public static final String EXTRA_IMS_ENABLE_CAP_KEY = "android:enablecap";
    public static final String EXTRA_IMS_RADIO_STATE = "android:imsRadioState";
    public static final String EXTRA_IMS_REG_ERROR_KEY = "android:regError";
    public static final String EXTRA_IMS_REG_STATE_KEY = "android:regState";
    public static final String EXTRA_MT_TO_NUMBER = "mediatek:mtToNumber";
    public static final String EXTRA_PHONE_ID = "android:phoneId";
    public static final String EXTRA_RTP_NETWORK_ID = "android:rtpNetworkId";
    public static final String EXTRA_RTP_PDN_ID = "android:rtpPdnId";
    public static final String EXTRA_RTP_RECV_PKT_LOST = "android:rtpRecvPktLost";
    public static final String EXTRA_RTP_SEND_PKT_LOST = "android:rtpSendPktLost";
    public static final String EXTRA_RTP_TIMER = "android:rtpTimer";
    public static final String EXTRA_RTT_INCOMING_CALL = "rtt_feature:rtt_incoming_call";
    public static final String EXTRA_SEQ_NUM = "android:imsSeqNum";
    public static final int IMS_REGISTERED = 1;
    public static final int IMS_REGISTERING = 0;
    public static final int IMS_REGISTER_FAIL = 2;
    public static final String MTK_IMS_SERVICE = "mtkIms";
    private static final String MULTI_IMS_SUPPORT = "persist.vendor.mims_support";
    public static final int OOS_END_WITH_DISCONN = 0;
    public static final int OOS_END_WITH_RESUME = 2;
    public static final int OOS_START = 1;
    public static final String PREFERRED_TTY_MODE = "preferred_tty_mode";
    public static final String PREFERRED_TTY_MODE_SIM2 = "preferred_tty_mode_sim2";
    public static final String PREFERRED_TTY_MODE_SIM3 = "preferred_tty_mode_sim3";
    public static final String PREFERRED_TTY_MODE_SIM4 = "preferred_tty_mode_sim4";
    private static final String PROPERTY_C2K_LTE_MODE = "ro.vendor.mtk_c2k_lte_mode";
    private static final String PROPERTY_CAPABILITY_SWITCH = "persist.vendor.radio.simswitch";
    private static final String PROPERTY_CT_VOLTE_SUPPORT = "persist.vendor.mtk_ct_volte_support";
    private static final String PROPERTY_DYNAMIC_IMS_SWITCH = "persist.vendor.mtk_dynamic_ims_switch";
    private static final String PROPERTY_IMSCONFIG_FORCE_NOTIFY = "vendor.ril.imsconfig.force.notify";
    private static final String PROPERTY_IMS_SUPPORT = "persist.vendor.ims_support";
    private static final String PROPERTY_MTK_VILTE_SUPPORT = "persist.vendor.vilte_support";
    private static final String PROPERTY_MTK_VOLTE_SUPPORT = "persist.vendor.volte_support";
    private static final String PROPERTY_MTK_WFC_SUPPORT = "persist.vendor.mtk_wfc_support";
    private static final String PROPERTY_TEST_SIM1 = "vendor.gsm.sim.ril.testsim";
    private static final String PROPERTY_TEST_SIM2 = "vendor.gsm.sim.ril.testsim.2";
    private static final String PROPERTY_TEST_SIM3 = "vendor.gsm.sim.ril.testsim.3";
    private static final String PROPERTY_TEST_SIM4 = "vendor.gsm.sim.ril.testsim.4";
    private static final String PROPERTY_VILTE_ENALBE = "persist.vendor.mtk.vilte.enable";
    private static final String PROPERTY_VIWIFI_ENALBE = "persist.vendor.mtk.viwifi.enable";
    private static final String PROPERTY_VOLTE_ENALBE = "persist.vendor.mtk.volte.enable";
    private static final String PROPERTY_WFC_ENALBE = "persist.vendor.mtk.wfc.enable";
    public static final int SERVICE_REG_CAPABILITY_EVENT_ADDED = 1;
    public static final int SERVICE_REG_CAPABILITY_EVENT_ECC_NOT_SUPPORT = 4;
    public static final int SERVICE_REG_CAPABILITY_EVENT_ECC_SUPPORT = 2;
    public static final int SERVICE_REG_CAPABILITY_EVENT_REMOVED = 0;
    public static final int SERVICE_REG_EVENT_WIFI_PDN_OOS_END_WITH_DISCONN = 6;
    public static final int SERVICE_REG_EVENT_WIFI_PDN_OOS_END_WITH_RESUME = 7;
    public static final int SERVICE_REG_EVENT_WIFI_PDN_OOS_START = 5;
    protected static final int SIM_ID_1 = 0;
    protected static final int SIM_ID_2 = 1;
    protected static final int SIM_ID_3 = 2;
    protected static final int SIM_ID_4 = 3;
    private static final String TAG = "MtkImsManager";
    private static final String TTY_MODE = "tty_mode";
    private static final String VILTE_SETTING = "vilte_setting";
    private static final String VOLTE_SETTING = "volte_setting";
    public static final String VT_IMS_ENABLED_SIM2 = "vt_ims_enabled_sim2";
    public static final String VT_IMS_ENABLED_SIM3 = "vt_ims_enabled_sim3";
    public static final String VT_IMS_ENABLED_SIM4 = "vt_ims_enabled_sim4";
    public static final String WFC_IMS_ENABLED_SIM2 = "wfc_ims_enabled_sim2";
    public static final String WFC_IMS_ENABLED_SIM3 = "wfc_ims_enabled_sim3";
    public static final String WFC_IMS_ENABLED_SIM4 = "wfc_ims_enabled_sim4";
    public static final String WFC_IMS_MODE_SIM2 = "wfc_ims_mode_sim2";
    public static final String WFC_IMS_MODE_SIM3 = "wfc_ims_mode_sim3";
    public static final String WFC_IMS_MODE_SIM4 = "wfc_ims_mode_sim4";
    public static final String WFC_IMS_ROAMING_ENABLED_SIM2 = "wfc_ims_roaming_enabled_sim2";
    public static final String WFC_IMS_ROAMING_ENABLED_SIM3 = "wfc_ims_roaming_enabled_sim3";
    public static final String WFC_IMS_ROAMING_ENABLED_SIM4 = "wfc_ims_roaming_enabled_sim4";
    public static final String WFC_IMS_ROAMING_MODE_SIM2 = "wfc_ims_roaming_mode_sim2";
    public static final String WFC_IMS_ROAMING_MODE_SIM3 = "wfc_ims_roaming_mode_sim3";
    public static final String WFC_IMS_ROAMING_MODE_SIM4 = "wfc_ims_roaming_mode_sim4";
    private static final String WFC_MODE_SETTING = "wfc_mode_setting";
    private static final String WFC_ROAMING_MODE_SETTING = "wfc_roaming_mode_setting";
    private static final String WFC_ROAMING_SETTING = "wfc_roaming_setting";
    private static final String WFC_SETTING = "wfc_setting";
    private static final boolean mSupportImsiSwitch = SystemProperties.get("ro.vendor.mtk_imsi_switch_support", "0").equals("1");
    private ArrayList<RegistrationManager.RegistrationCallback> mCallbacks;
    protected IImsRegistrationListener mListener;
    private MtkImsServiceDeathRecipient mMtkDeathRecipient;
    protected IMtkImsRegistrationListener mMtkImsListener;
    private IMtkImsService mMtkImsService;
    private MtkImsUt mMtkUt;
    private boolean mNotifyOnly;

    private class MtkImsServiceDeathRecipient implements IBinder.DeathRecipient {
        private MtkImsServiceDeathRecipient() {
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            MtkImsManager.this.mMtkImsService = null;
            MtkImsManager.this.mMtkUt = null;
            MtkImsManager.this.mNotifyOnly = false;
            MtkImsManager.loge("[" + MtkImsManager.this.mPhoneId + "]MtkImsService binder died!");
        }
    }

    private MtkImsManager(Context context, int i) {
        super(context, i);
        this.mMtkImsService = null;
        this.mMtkDeathRecipient = new MtkImsServiceDeathRecipient();
        this.mMtkUt = null;
        this.mCallbacks = new ArrayList<>();
        this.mListener = null;
        this.mMtkImsListener = null;
        this.mNotifyOnly = DBG;
        createMtkImsService(DBG);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    private void checkAndThrowExceptionIfServiceUnavailable() throws ImsException {
        if (this.mMmTelFeatureConnection == null || !this.mMmTelFeatureConnection.isBinderAlive()) {
            createImsService();
            if (this.mMmTelFeatureConnection == null) {
                throw new ImsException("Service is unavailable", 106);
            }
        }
        if (this.mMtkImsService == null) {
            createMtkImsService(DBG);
            if (this.mMtkImsService == null) {
                throw new ImsException("MtkImsService is unavailable", 106);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public MmTelFeature.MmTelCapabilities convertCapabilities(int[] iArr) {
        boolean[] zArr = new boolean[iArr.length];
        for (int i = 0; i <= 5 && i < iArr.length; i++) {
            if (iArr[i] == i) {
                zArr[i] = DBG;
            } else if (iArr[i] == -1) {
                zArr[i] = false;
            }
        }
        MmTelFeature.MmTelCapabilities mmTelCapabilities = new MmTelFeature.MmTelCapabilities();
        if (zArr[0] || zArr[2]) {
            mmTelCapabilities.addCapabilities(1);
        }
        if (zArr[1] || zArr[SIM_ID_4]) {
            mmTelCapabilities.addCapabilities(2);
        }
        if (zArr[4] || zArr[5]) {
            mmTelCapabilities.addCapabilities(4);
        }
        return mmTelCapabilities;
    }

    private void createMtkImsService(boolean z) {
        if (z && ServiceManager.checkService(getMtkImsServiceName(this.mPhoneId)) == null) {
            log("createMtkImsService binder is null");
            return;
        }
        IBinder service = ServiceManager.getService(getMtkImsServiceName(this.mPhoneId));
        if (service != null) {
            try {
                service.linkToDeath(this.mMtkDeathRecipient, 0);
            } catch (RemoteException e) {
            }
        }
        this.mMtkImsService = IMtkImsService.Stub.asInterface(service);
        log("mMtkImsService = " + this.mMtkImsService);
    }

    private static MtkImsManager getAppropriateManagerForPlugin(Context context, int i) {
        IImsManagerExt imsManagerPluginInstance = getImsManagerPluginInstance(context);
        if (imsManagerPluginInstance != null) {
            i = imsManagerPluginInstance.getImsPhoneId(context, i);
        }
        return (MtkImsManager) ImsManager.getInstance(context, i);
    }

    private static String getCallId(Bundle bundle) {
        if (bundle == null) {
            return null;
        }
        return bundle.getString("android:imsCallID");
    }

    private String getCallNum(Intent intent) {
        if (intent == null) {
            return null;
        }
        return intent.getStringExtra(EXTRA_DIAL_STRING);
    }

    private static int getFeaturePropValue(String str, int i) {
        int i2 = SystemProperties.getInt(str, 0);
        if (isSupportMims()) {
            return ((1 << i) & i2) > 0 ? 1 : 0;
        }
        return (i2 & 1) > 0 ? 1 : 0;
    }

    private static IImsManagerExt getImsManagerPluginInstance(Context context) {
        log("getImsManagerPluginInstance");
        IImsManagerExt iImsManagerExtMakeImsManagerExt = OpImsCustomizationUtils.getOpFactory(context).makeImsManagerExt(context);
        if (iImsManagerExtMakeImsManagerExt == null) {
            log("Unable to create ImsManagerPluginInstane");
        }
        return iImsManagerExtMakeImsManagerExt;
    }

    private String getIsimImpi(int i) {
        if (i == -1) {
            log("[IR] getIsimImpi: Invalid subId so return");
            return null;
        }
        try {
            return getMtkSubscriberInfoEx().getIsimImpiForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public static int getMainPhoneIdForSingleIms(Context context) {
        int i = SystemProperties.getInt(PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        log("[getMainPhoneIdForSingleIms] : " + i);
        return i;
    }

    private static String getMccMncForSubId(int i, SubscriptionManager subscriptionManager) {
        String simOperator = TelephonyManager.getDefault().getSimOperator(i);
        if (simOperator != null && simOperator.length() > 0) {
            log("[IR] Getting mcc mnc from TelephonyManager.getSimOperator");
            return simOperator;
        }
        List<SubscriptionInfo> activeSubscriptionInfoList = subscriptionManager.getActiveSubscriptionInfoList();
        log("[IR] Getting mcc mnc from from subinfo for subId = " + i);
        if (activeSubscriptionInfoList != null && activeSubscriptionInfoList.size() > 0) {
            for (SubscriptionInfo subscriptionInfo : activeSubscriptionInfoList) {
                if (subscriptionInfo.getSubscriptionId() == i) {
                    String str = String.valueOf(subscriptionInfo.getMcc()) + String.valueOf(subscriptionInfo.getMnc());
                    log("[IR] getMccMncForSubId from subInfo = " + str);
                    return str;
                }
            }
        }
        return simOperator;
    }

    private String getMtToNumber(Intent intent) {
        if (intent == null) {
            return null;
        }
        return intent.getStringExtra(EXTRA_MT_TO_NUMBER);
    }

    private static String getMtkImsServiceName(int i) {
        return "mtkIms";
    }

    private IMtkPhoneSubInfoEx getMtkSubscriberInfoEx() {
        return IMtkPhoneSubInfoEx.Stub.asInterface(ServiceManager.getService("iphonesubinfoEx"));
    }

    private String getOperatorNumericFromImpi(String str) {
        String[] strArr = {"405840", "405854", "405855", "405856", "405857", "405858", "405859", "405860", "405861", "405862", "405863", "405864", "405865", "405866", "405867", "405868", "405869", "405870", "405871", "405872", "405873", "405874"};
        if (strArr.length == 0) {
            log("[IR] mImsMccMncList is null, returning default mccmnc");
            return str;
        }
        log("[IR] IMPI requested by phoneId: " + this.mPhoneId);
        String isimImpi = getIsimImpi(MtkSubscriptionManager.getSubIdUsingPhoneId(this.mPhoneId));
        log("[IR] IMPI : " + isimImpi);
        if (isimImpi == null || isimImpi.equals("")) {
            log("[IR] impi is null/empty, returning default mccmnc");
            return str;
        }
        int iIndexOf = isimImpi.indexOf("mcc");
        int iIndexOf2 = isimImpi.indexOf("mnc");
        if (iIndexOf == -1 || iIndexOf2 == -1) {
            log("[IR] mcc/mnc position -1, returning default mccmnc");
            return str;
        }
        String str2 = isimImpi.substring("mcc".length() + iIndexOf, "mcc".length() + iIndexOf + SIM_ID_4) + isimImpi.substring("mnc".length() + iIndexOf2, "mnc".length() + iIndexOf2 + SIM_ID_4);
        log("[IR] MccMnc fetched from IMPI: " + str2);
        if (str2 == null || str2.equals("")) {
            log("[IR] IMPI MccMnc is null/empty, Returning default mccmnc: " + str);
            return str;
        }
        for (String str3 : strArr) {
            if (str2.equals(str3)) {
                log("[IR] mccMnc matched, Returning mccmnc from IMPI: " + str2);
                return str2;
            }
        }
        log("[IR] IMPI mcc/mnc not matched, returning default mccmnc");
        return str;
    }

    private static int getPhoneId(Intent intent) {
        if (intent == null) {
            return -1;
        }
        return intent.getIntExtra(EXTRA_PHONE_ID, -1);
    }

    private int getSeqNum(Intent intent) {
        if (intent == null) {
            return -1;
        }
        return intent.getIntExtra(EXTRA_SEQ_NUM, -1);
    }

    private String getTtyModeSettingKeyForSlot() {
        if (this.mPhoneId == 1) {
            return PREFERRED_TTY_MODE_SIM2;
        }
        if (this.mPhoneId == 2) {
            return PREFERRED_TTY_MODE_SIM3;
        }
        return this.mPhoneId == SIM_ID_4 ? PREFERRED_TTY_MODE_SIM4 : PREFERRED_TTY_MODE;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    private void hookProprietaryImsListener() throws ImsException {
        if (this.mMtkImsService == null) {
            log("hookProprietaryImsListener get NULL mMtkImsService so create it");
            createMtkImsService(DBG);
        }
        if (this.mListener == null) {
            log("[" + this.mPhoneId + "] hook proprietary IMS listener");
            this.mNotifyOnly = false;
            this.mListener = new IImsRegistrationListener.Stub() { // from class: com.mediatek.ims.internal.MtkImsManager.1
                public void registrationAssociatedUriChanged(Uri[] uriArr) throws RemoteException {
                }

                public void registrationChangeFailed(int i, ImsReasonInfo imsReasonInfo) throws RemoteException {
                }

                public void registrationConnected() throws RemoteException {
                }

                public void registrationConnectedWithRadioTech(int i) throws RemoteException {
                    MtkImsManager.log("registrationConnectedWithRadioTech :: imsRadioTech=" + i);
                    synchronized (MtkImsManager.this.mCallbacks) {
                        for (Object obj : MtkImsManager.this.mCallbacks) {
                            if (obj instanceof MtkImsConnectionStateListener) {
                                ((MtkImsConnectionStateListener) obj).onImsConnected(i);
                            }
                        }
                    }
                }

                public void registrationDisconnected(ImsReasonInfo imsReasonInfo) throws RemoteException {
                    synchronized (MtkImsManager.this.mCallbacks) {
                        for (Object obj : MtkImsManager.this.mCallbacks) {
                            if (obj instanceof MtkImsConnectionStateListener) {
                                ((MtkImsConnectionStateListener) obj).onImsDisconnected(imsReasonInfo);
                            }
                        }
                    }
                }

                public void registrationFeatureCapabilityChanged(int i, int[] iArr, int[] iArr2) throws RemoteException {
                    ImsFeature.Capabilities capabilitiesConvertCapabilities = MtkImsManager.this.convertCapabilities(iArr);
                    MtkImsManager.log("registrationFeatureCapabilityChanged :: enabledFeatures=" + capabilitiesConvertCapabilities);
                    synchronized (MtkImsManager.this.mCallbacks) {
                        for (Object obj : MtkImsManager.this.mCallbacks) {
                            if (obj instanceof MtkImsConnectionStateListener) {
                                ((MtkImsConnectionStateListener) obj).onCapabilitiesStatusChanged(capabilitiesConvertCapabilities);
                            }
                        }
                    }
                }

                public void registrationProgressing() throws RemoteException {
                }

                public void registrationProgressingWithRadioTech(int i) throws RemoteException {
                }

                public void registrationResumed() throws RemoteException {
                }

                public void registrationServiceCapabilityChanged(int i, int i2) throws RemoteException {
                    MtkImsManager.this.notifyRegServiceCapabilityChangedEvent(i2);
                }

                public void registrationSuspended() throws RemoteException {
                }

                public void voiceMessageCountUpdate(int i) throws RemoteException {
                }
            };
        } else {
            log("mListener was created");
        }
        if (this.mMtkImsListener == null) {
            this.mMtkImsListener = new IMtkImsRegistrationListener.Stub() { // from class: com.mediatek.ims.internal.MtkImsManager.2
                public void onRedirectIncomingCallIndication(int i, String[] strArr) {
                    MtkImsManager.log("redirectIncomingCallIndication, phoneId: " + i + ", info: " + strArr);
                    synchronized (MtkImsManager.this.mCallbacks) {
                        for (Object obj : MtkImsManager.this.mCallbacks) {
                            if (obj instanceof MtkImsConnectionStateListener) {
                                ((MtkImsConnectionStateListener) obj).onRedirectIncomingCallInd(i, strArr);
                            }
                        }
                    }
                }

                public void onRegistrationImsStateChanged(int i, Uri[] uriArr, int i2, ImsReasonInfo imsReasonInfo) throws RemoteException {
                    MtkImsManager.log("onRegistrationImsStateChanged, state: " + i + ", uri: " + uriArr + ", expireTime: " + i2 + ", imsReasonInfo: " + imsReasonInfo);
                    synchronized (MtkImsManager.this.mCallbacks) {
                        for (Object obj : MtkImsManager.this.mCallbacks) {
                            if (obj instanceof MtkImsConnectionStateListener) {
                                ((MtkImsConnectionStateListener) obj).onRegistrationImsStateInd(i, uriArr, i2, imsReasonInfo.getCode(), imsReasonInfo.getExtraMessage());
                            }
                        }
                    }
                }
            };
        } else {
            log("mMtkListener was created");
        }
        try {
            if (this.mMtkImsService == null) {
                log("mMtkImsService is not ready yet");
            } else {
                this.mMtkImsService.registerProprietaryImsListener(this.mPhoneId, this.mListener, this.mMtkImsListener, this.mNotifyOnly);
                this.mNotifyOnly = DBG;
            }
        } catch (RemoteException e) {
            throw new ImsException("registerProprietaryImsListener(listener)", e, 106);
        }
    }

    private boolean isCellularDataRoaming() {
        TelephonyManager telephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        if (telephonyManager == null) {
            loge("isCellularDataRoaming(): TelephonyManager null");
            return false;
        }
        MtkServiceState serviceStateForSubscriber = telephonyManager.getServiceStateForSubscriber(getSubId());
        if (serviceStateForSubscriber == null) {
            loge("isCellularDataRoaming(): ServiceState null");
            return false;
        }
        if (serviceStateForSubscriber instanceof MtkServiceState) {
            MtkServiceState mtkServiceState = serviceStateForSubscriber;
            int cellularDataRegState = mtkServiceState.getCellularDataRegState();
            boolean cellularDataRoaming = mtkServiceState.getCellularDataRoaming();
            log("isCellularDataRoaming(): regState = " + cellularDataRegState + ", isDataroaming = " + cellularDataRoaming);
            if (cellularDataRegState == 0 && cellularDataRoaming) {
                return DBG;
            }
        } else {
            loge("isCellularDataRoaming(): not MtkServiceState");
        }
        return false;
    }

    private boolean isConvertRoamingStateForSpecificOP() {
        TelephonyManager telephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        boolean booleanCarrierConfig = getBooleanCarrierConfig("mtk_carrier_wfc_mode_domestic_roaming_to_home");
        log("isWfcModeHomeForDomRoaming:" + booleanCarrierConfig);
        if (!booleanCarrierConfig) {
            return false;
        }
        if (telephonyManager == null) {
            loge("isCellularDataRoaming(): TelephonyManager null");
            return false;
        }
        ServiceState serviceStateForSubscriber = telephonyManager.getServiceStateForSubscriber(getSubId());
        if (serviceStateForSubscriber == null) {
            loge("isCellularDataRoaming(): ServiceState null");
            return false;
        }
        int voiceRoamingType = serviceStateForSubscriber.getVoiceRoamingType();
        int dataRoamingType = serviceStateForSubscriber.getDataRoamingType();
        if (voiceRoamingType != 2 && dataRoamingType != 2) {
            return false;
        }
        log("Convert roaming to HOME if it's domestic roaming,  voiceRoamingType: " + voiceRoamingType + " dataRoamingType: " + dataRoamingType);
        return DBG;
    }

    private boolean isFeatureEnabledByPlatformExt(int i) {
        if (this.mContext == null) {
            logw("Invalid: context=" + this.mContext + ", return " + DBG);
            return DBG;
        }
        IImsManagerExt imsManagerPluginInstance = getImsManagerPluginInstance(this.mContext);
        if (imsManagerPluginInstance != null) {
            return imsManagerPluginInstance.isFeatureEnabledByPlatform(this.mContext, i, this.mPhoneId);
        }
        logw("plugin null=" + imsManagerPluginInstance + ", return " + DBG);
        return DBG;
    }

    private boolean isLteSupported() {
        return SystemProperties.get("ro.vendor.mtk_ps1_rat", "").contains("L");
    }

    public static boolean isNonTtyOrTtyOnVolteEnabled(Context context, int i) {
        if (!isSupportMims()) {
            i = getMainPhoneIdForSingleIms(context);
        }
        return getAppropriateManagerForPlugin(context, i).isNonTtyOrTtyOnVolteEnabled();
    }

    private boolean isOp09SimCard(String str) {
        String str2;
        if (str.startsWith("898603") || str.startsWith("898611") || str.startsWith("8985302") || str.startsWith("8985307") || str.startsWith("8985231")) {
            return DBG;
        }
        if (!str.startsWith("894900")) {
            return false;
        }
        if (this.mPhoneId == 0) {
            str2 = SystemProperties.get("vendor.gsm.ril.uicc.mccmnc", "");
        } else {
            str2 = SystemProperties.get("vendor.gsm.ril.uicc.mccmnc." + this.mPhoneId, "");
        }
        log("isOp09SimCard, currentMccMnc:" + str2);
        if (str2 == null) {
            return false;
        }
        if ("46011".equals(str2) || "46003".equals(str2)) {
            return DBG;
        }
        return false;
    }

    private boolean isPhoneIdSupportIms(int i) {
        int i2 = SystemProperties.getInt(PROPERTY_IMS_SUPPORT, 0);
        int i3 = SystemProperties.getInt(MULTI_IMS_SUPPORT, 1);
        if (TelephonyManager.getDefault().getMultiSimConfiguration() != TelephonyManager.MultiSimVariants.TSTS) {
            return DBG;
        }
        if (i2 == 0 || !SubscriptionManager.isValidPhoneId(i)) {
            log("[" + i + "] isPhoneIdSupportIms, not support IMS");
            return false;
        }
        if (i3 == 1) {
            if (getMainCapabilityPhoneId(this.mContext) == i) {
                return DBG;
            }
            return false;
        }
        int protocolStackId = MtkTelephonyManagerEx.getDefault().getProtocolStackId(i);
        log("isPhoneIdSupportIms(), mimsCount:" + i3 + ", phoneId:" + i + ", protocalStackId:" + protocolStackId + ", MainCapabilityPhoneId:" + getMainCapabilityPhoneId(this.mContext));
        if (protocolStackId <= i3) {
            return DBG;
        }
        return false;
    }

    public static boolean isSupportMims() {
        if (SystemProperties.getInt(MULTI_IMS_SUPPORT, 1) > 1) {
            return DBG;
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void log(String str) {
        Rlog.d(TAG, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void loge(String str) {
        Rlog.e(TAG, str);
    }

    private static void loge(String str, Throwable th) {
        Rlog.e(TAG, str, th);
    }

    private static void logi(String str) {
        Rlog.i(TAG, str);
    }

    private static void logw(String str) {
        Rlog.w(TAG, str);
    }

    private static String sensitiveEncode(String str) {
        return Rlog.pii(TAG, str);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    private void setComboFeatureValue(int i, int i2, int i3) {
        int[] iArr = {0, 1, SIM_ID_4, 2};
        int[] iArr2 = {13, 13, 18, 18};
        int[] iArr3 = {0, 0, 0, 0};
        int featurePropValue = getFeaturePropValue(PROPERTY_VOLTE_ENALBE, this.mPhoneId);
        int featurePropValue2 = getFeaturePropValue(PROPERTY_VILTE_ENALBE, this.mPhoneId);
        int featurePropValue3 = getFeaturePropValue(PROPERTY_VIWIFI_ENALBE, this.mPhoneId);
        int featurePropValue4 = getFeaturePropValue(PROPERTY_WFC_ENALBE, this.mPhoneId);
        iArr3[0] = i != -1 ? i : featurePropValue;
        iArr3[1] = i2 != -1 ? i2 : featurePropValue2;
        iArr3[2] = i2 != -1 ? i2 : featurePropValue3;
        iArr3[SIM_ID_4] = i3 != -1 ? i3 : featurePropValue4;
        try {
            MtkImsConfig configInterfaceEx = ((MtkImsManager) ImsManager.getInstance(this.mContext, this.mPhoneId)).getConfigInterfaceEx();
            if (configInterfaceEx != null) {
                configInterfaceEx.setMultiFeatureValues(iArr, iArr2, iArr3, this.mImsConfigListener);
            }
        } catch (ImsException e) {
            loge("setComboFeatureValue(): " + e);
        }
    }

    private void setWfcModeConfigEx(int i) {
        log("setWfcModeConfigEx wfcMode:" + i + ", phoneId:" + this.mPhoneId);
        try {
            getConfigInterfaceEx().setWfcMode(i);
        } catch (ImsException e) {
        }
    }

    private boolean supportMdAutoSetupIms() {
        if (SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1")) {
            return DBG;
        }
        return false;
    }

    public void addImsConnectionStateListener(RegistrationManager.RegistrationCallback registrationCallback) throws ImsException {
        synchronized (this.mCallbacks) {
            log("ImsConnectionStateListener added: " + registrationCallback);
            this.mCallbacks.add(registrationCallback);
            hookProprietaryImsListener();
        }
    }

    protected void changeMmTelCapabilityInternally(CapabilityChangeRequest capabilityChangeRequest) {
        try {
            if (this.mMtkImsService != null) {
                log("[" + this.mPhoneId + "] changeMmTelCapabilityInternally " + capabilityChangeRequest);
                this.mMtkImsService.changeEnabledCapabilities(this.mPhoneId, capabilityChangeRequest);
            }
        } catch (RemoteException e) {
            loge("Fail to changeMmTelCapabilityInternally " + e);
        }
    }

    public void close() {
        log("close");
        super.close();
        this.mMtkUt = null;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public ImsCallSession createCallSession(int i, int i2) throws ImsException {
        try {
            ImsCallProfile imsCallProfile = new ImsCallProfile(i, i2);
            log("createCallSession: profile = " + imsCallProfile);
            ImsCallSession imsCallSessionCreateCallSession = super.createCallSession(imsCallProfile);
            log("createCallSession: imsCallSession = " + imsCallSessionCreateCallSession);
            log("createCallSession: imsCallSession.getSession() = " + imsCallSessionCreateCallSession.getSession());
            return new MtkImsCallSession(imsCallSessionCreateCallSession.getSession(), this.mMtkImsService.createMtkCallSession(this.mPhoneId, imsCallProfile, (IImsCallSessionListener) null, imsCallSessionCreateCallSession.getSession()));
        } catch (RemoteException e) {
            Rlog.w(TAG, "CreateCallSession: Error, remote exception: " + e.getMessage());
            throw new ImsException("createCallSession()", e, 106);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    protected ImsCallSession createCallSession(ImsCallProfile imsCallProfile) throws ImsException {
        try {
            log("createCallSession: profile = " + imsCallProfile);
            ImsCallSession imsCallSessionCreateCallSession = super.createCallSession(imsCallProfile);
            log("createCallSession: imsCallSession = " + imsCallSessionCreateCallSession);
            log("createCallSession: imsCallSession.getSession() = " + imsCallSessionCreateCallSession.getSession());
            return new MtkImsCallSession(imsCallSessionCreateCallSession.getSession(), this.mMtkImsService.createMtkCallSession(this.mPhoneId, imsCallProfile, (IImsCallSessionListener) null, imsCallSessionCreateCallSession.getSession()));
        } catch (RemoteException e) {
            Rlog.w(TAG, "CreateCallSession: Error, remote exception: " + e.getMessage());
            throw new ImsException("createCallSession()", e, 106);
        }
    }

    public void factoryReset() {
        MtkIccCardConstants.CardType cdmaCardType;
        boolean booleanCarrierConfig = getBooleanCarrierConfig("enhanced_4g_lte_on_by_default_bool");
        if (SystemProperties.getInt(PROPERTY_CT_VOLTE_SUPPORT, 0) != 0) {
            SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mContext);
            SubscriptionInfo activeSubscriptionInfo = subscriptionManagerFrom != null ? subscriptionManagerFrom.getActiveSubscriptionInfo(getSubId()) : null;
            String iccId = activeSubscriptionInfo != null ? activeSubscriptionInfo.getIccId() : null;
            if (!TextUtils.isEmpty(iccId) && isOp09SimCard(iccId) && (cdmaCardType = MtkTelephonyManagerEx.getDefault().getCdmaCardType(this.mPhoneId)) != null && !cdmaCardType.is4GCard() && cdmaCardType != MtkIccCardConstants.CardType.SIM_CARD) {
                log("factoryReset, CT 3G card case");
                booleanCarrierConfig = false;
            }
        }
        SubscriptionManager.setSubscriptionProperty(getSubId(), "volte_vt_enabled", booleanToPropertyString(booleanCarrierConfig));
        SubscriptionManager.setSubscriptionProperty(getSubId(), "wfc_ims_enabled", booleanToPropertyString(getBooleanCarrierConfig("carrier_default_wfc_ims_enabled_bool")));
        SubscriptionManager.setSubscriptionProperty(getSubId(), "wfc_ims_mode", Integer.toString(getIntCarrierConfig("carrier_default_wfc_ims_mode_int")));
        SubscriptionManager.setSubscriptionProperty(getSubId(), "wfc_ims_roaming_enabled", booleanToPropertyString(getBooleanCarrierConfig("carrier_default_wfc_ims_roaming_enabled_bool")));
        SubscriptionManager.setSubscriptionProperty(getSubId(), "vt_ims_enabled", booleanToPropertyString(DBG));
        updateImsServiceConfig(DBG);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void fallBackAospMTFlow() throws ImsException {
        log("fallBackAospMTFlow");
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            this.mMtkImsService.fallBackAospMTFlow(this.mPhoneId);
        } catch (RemoteException e) {
            throw new ImsException("fallBackAospMTFlow()", e, 106);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public MtkImsConfig getConfigInterfaceEx() throws ImsException {
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            IMtkImsConfig configInterfaceEx = this.mMtkImsService.getConfigInterfaceEx(this.mPhoneId);
            if (configInterfaceEx != null) {
                return new MtkImsConfig(configInterfaceEx, this.mContext);
            }
            throw new ImsException("getConfigInterfaceEx()", 131);
        } catch (RemoteException e) {
            throw new ImsException("getConfigInterfaceEx()", e, 106);
        }
    }

    protected int getMainCapabilityPhoneId(Context context) {
        return getMainPhoneIdForSingleIms(context);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public IMtkImsCallSession getPendingMtkCallSession(String str) throws ImsException {
        log("getPendingMtkCallSession callId: " + str);
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            return this.mMtkImsService.getPendingMtkCallSession(this.mPhoneId, str);
        } catch (RemoteException e) {
            throw new ImsException("getPendingMtkCallSession()", e, 106);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public ImsUtInterface getSupplementaryServiceConfiguration() throws ImsException {
        MtkImsUt mtkImsUt = this.mMtkUt;
        if (mtkImsUt == null || !mtkImsUt.isBinderAlive()) {
            try {
                checkAndThrowExceptionIfServiceUnavailable();
                try {
                    IImsUt utInterface = this.mMmTelFeatureConnection.getUtInterface();
                    IMtkImsUt mtkUtInterface = this.mMtkImsService.getMtkUtInterface(this.mPhoneId);
                    if (utInterface == null) {
                        throw new ImsException("getSupplementaryServiceConfiguration()", 801);
                    }
                    this.mMtkUt = new MtkImsUt(utInterface, mtkUtInterface);
                } catch (RemoteException e) {
                    throw new ImsException("getSupplementaryServiceConfiguration()", e, 106);
                }
            } catch (ImsException e2) {
                loge("getSupplementaryServiceConfiguration(): ", e2);
                return null;
            }
        }
        return this.mMtkUt;
    }

    public int getWfcRegErrorCode() {
        int wfcRegErrorCode = 0;
        try {
            if (this.mMtkImsService == null) {
                return 0;
            }
            wfcRegErrorCode = this.mMtkImsService.getWfcRegErrorCode(this.mPhoneId);
            log("[" + this.mPhoneId + "] getWfcRegErrorCode: " + wfcRegErrorCode);
            return wfcRegErrorCode;
        } catch (RemoteException e) {
            loge("Fail to getWfcRegErrorCode " + e);
            return wfcRegErrorCode;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void hangupAllCall(int i) throws ImsException {
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            this.mMtkImsService.hangupAllCall(i);
        } catch (RemoteException e) {
            throw new ImsException("hangupAll()", e, 106);
        }
    }

    protected boolean isDataRoaming() {
        TelephonyManager telephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        if (telephonyManager == null) {
            loge("isDataRoaming(): TelephonyManager null");
            return false;
        }
        ServiceState serviceStateForSubscriber = telephonyManager.getServiceStateForSubscriber(getSubId());
        if (serviceStateForSubscriber == null) {
            loge("isDataRoaming(): ServiceState null");
            return false;
        }
        log("[" + this.mPhoneId + "][SubId=" + getSubId() + "] isDataRoaming(): " + serviceStateForSubscriber.getDataRoaming());
        return serviceStateForSubscriber.getDataRoaming();
    }

    protected boolean isDataRoamingSettingsEnabled() {
        boolean z = SystemProperties.getBoolean(DATA_ROAMING_SETTING_PROP + String.valueOf(getSubId()), false);
        log("[" + this.mPhoneId + "][SubId=" + getSubId() + "] isDataRoamingSettingsEnabled(): " + z);
        return z;
    }

    public boolean isEnhanced4gLteModeSettingEnabledByUser() {
        MtkIccCardConstants.CardType cdmaCardType;
        int subId = getSubId();
        int integerSubscriptionProperty = SubscriptionManager.getIntegerSubscriptionProperty(subId, "volte_vt_enabled", -1, this.mContext);
        boolean booleanCarrierConfig = getBooleanCarrierConfig("enhanced_4g_lte_on_by_default_bool");
        boolean zIsPhoneIdSupportIms = isPhoneIdSupportIms(this.mPhoneId);
        if (subId == -1) {
            if (((TelephonyManager) this.mContext.getSystemService("phone")).getSimState(this.mPhoneId) != 1) {
                booleanCarrierConfig = false;
            } else {
                log("isEnhanced4gLteModeSettingEnabledByUser, sim absent");
            }
        }
        if (getBooleanCarrierConfig("editable_enhanced_4g_lte_bool") && !getBooleanCarrierConfig("hide_enhanced_4g_lte_bool") && integerSubscriptionProperty != -1) {
            if (integerSubscriptionProperty == 1 && zIsPhoneIdSupportIms) {
                return DBG;
            }
            return false;
        }
        if (!booleanCarrierConfig || SystemProperties.getInt(PROPERTY_C2K_LTE_MODE, 0) == 0) {
            return booleanCarrierConfig;
        }
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mContext);
        SubscriptionInfo activeSubscriptionInfo = subscriptionManagerFrom != null ? subscriptionManagerFrom.getActiveSubscriptionInfo(subId) : null;
        String iccId = activeSubscriptionInfo != null ? activeSubscriptionInfo.getIccId() : null;
        if (TextUtils.isEmpty(iccId) || !isOp09SimCard(iccId) || (cdmaCardType = MtkTelephonyManagerEx.getDefault().getCdmaCardType(this.mPhoneId)) == null || cdmaCardType.is4GCard()) {
            return booleanCarrierConfig;
        }
        log("isEnhanced4gLteModeSettingEnabledByUser, CT 3G card case");
        return false;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    protected boolean isImsResourceSupport(int i) {
        boolean z = DBG;
        log("isImsResourceSupport, feature:" + i);
        if ("1".equals(SystemProperties.get(PROPERTY_DYNAMIC_IMS_SWITCH))) {
            if (!SubscriptionManager.isValidPhoneId(this.mPhoneId)) {
                loge("Invalid main phone " + this.mPhoneId + ", return true as don't care");
                return DBG;
            }
            try {
                MtkImsConfig configInterfaceEx = getConfigInterfaceEx();
                if (configInterfaceEx != null) {
                    int imsResCapability = configInterfaceEx.getImsResCapability(i);
                    boolean z2 = DBG;
                    if (imsResCapability != 1) {
                        z2 = false;
                    }
                    z = z2;
                }
            } catch (ImsException e) {
                loge("isImsResourceSupport() failed!" + e);
            }
            log("isImsResourceSupport(" + i + ") return " + z + " on phone: " + this.mPhoneId);
        }
        return z;
    }

    public boolean isServiceAvailable() {
        if (!super.isServiceAvailable()) {
            logw("ImsService binder is not available and rebind again");
            createImsService();
        }
        IMtkImsService iMtkImsService = this.mMtkImsService;
        boolean z = DBG;
        if (iMtkImsService == null) {
            createMtkImsService(DBG);
        }
        if (this.mMtkImsService == null) {
            z = false;
        }
        boolean z2 = z;
        log("isServiceAvailable=" + z2);
        return z2;
    }

    protected boolean isTestSim() {
        int mainCapabilityPhoneId = this.mPhoneId;
        if (SystemProperties.getInt(MULTI_IMS_SUPPORT, 1) == 1) {
            mainCapabilityPhoneId = getMainCapabilityPhoneId(this.mContext);
        }
        boolean zEquals = false;
        if (mainCapabilityPhoneId == 0) {
            zEquals = "1".equals(SystemProperties.get(PROPERTY_TEST_SIM1, "0"));
        } else if (mainCapabilityPhoneId == 1) {
            zEquals = "1".equals(SystemProperties.get(PROPERTY_TEST_SIM2, "0"));
        } else if (mainCapabilityPhoneId == 2) {
            zEquals = "1".equals(SystemProperties.get(PROPERTY_TEST_SIM3, "0"));
        } else if (mainCapabilityPhoneId == SIM_ID_4) {
            zEquals = "1".equals(SystemProperties.get(PROPERTY_TEST_SIM4, "0"));
        }
        if (!zEquals) {
            return zEquals;
        }
        String simOperatorNumericForPhone = ((TelephonyManager) this.mContext.getSystemService("phone")).getSimOperatorNumericForPhone(mainCapabilityPhoneId);
        log("isTestSim, currentMccMnc:" + simOperatorNumericForPhone);
        if (simOperatorNumericForPhone == null || simOperatorNumericForPhone.equals("") || "00101".equals(simOperatorNumericForPhone) || "11111".equals(simOperatorNumericForPhone) || "46011".equals(simOperatorNumericForPhone)) {
            return zEquals;
        }
        return false;
    }

    protected boolean isVTIgnoreDataChangedByOpid(String str) {
        if ("OP01".equals(str) || "OP02".equals(str) || "OP09".equals(str) || "OP17".equals(str) || "OP50".equals(str) || "OP149".equals(str) || "OP149".equals(str)) {
            return DBG;
        }
        return false;
    }

    public boolean isVolteEnabledByPlatform() {
        if (SystemProperties.getInt("persist.dbg.volte_avail_ovr" + Integer.toString(this.mPhoneId), -1) == 1 || SystemProperties.getInt("persist.dbg.volte_avail_ovr", -1) == 1) {
            return DBG;
        }
        boolean zIsImsResourceSupport = isImsResourceSupport(0);
        boolean zIsImsResourceSupport2 = isImsResourceSupport(6);
        boolean booleanCarrierConfig = getBooleanCarrierConfig("carrier_volte_available_bool");
        boolean zIsGbaValid = isGbaValid();
        boolean zIsFeatureEnabledByPlatformExt = isFeatureEnabledByPlatformExt(0);
        boolean zIsPhoneIdSupportIms = isPhoneIdSupportIms(this.mPhoneId);
        log("Volte, isVolteResourceSupport:" + zIsImsResourceSupport + ", isVonrResourceSupport:" + zIsImsResourceSupport2 + ", isCarrierConfigSupport:" + booleanCarrierConfig + ", isGbaValidSupport:" + zIsGbaValid + ", isFeatureEnableByPlatformExt:" + zIsFeatureEnabledByPlatformExt + ", isPSsupport:" + zIsPhoneIdSupportIms);
        if (SystemProperties.getInt(PROPERTY_MTK_VOLTE_SUPPORT, 0) == 1 && isLteSupported() && ((zIsImsResourceSupport || zIsImsResourceSupport2) && booleanCarrierConfig && zIsGbaValid && zIsFeatureEnabledByPlatformExt && zIsPhoneIdSupportIms)) {
            return DBG;
        }
        return false;
    }

    public boolean isVtEnabledByPlatform() {
        if (SystemProperties.getInt("persist.dbg.vt_avail_ovr" + Integer.toString(this.mPhoneId), -1) == 1 || SystemProperties.getInt("persist.dbg.vt_avail_ovr", -1) == 1) {
            return DBG;
        }
        boolean zIsImsResourceSupport = DBG;
        boolean zIsImsResourceSupport2 = DBG;
        if (!isTestSim()) {
            zIsImsResourceSupport = isImsResourceSupport(1);
            zIsImsResourceSupport2 = isImsResourceSupport(7);
        }
        boolean booleanCarrierConfig = getBooleanCarrierConfig("carrier_vt_available_bool");
        boolean zIsGbaValid = isGbaValid();
        boolean zIsFeatureEnabledByPlatformExt = isFeatureEnabledByPlatformExt(1);
        log("Vt, isVilteResourceSupport:" + zIsImsResourceSupport + ", isVinrResourceSupport:" + zIsImsResourceSupport2 + ", isCarrierConfigSupport:" + booleanCarrierConfig + ", isGbaValidSupport:" + zIsGbaValid + ", isFeatureEnableByPlatformExt:" + zIsFeatureEnabledByPlatformExt);
        if (SystemProperties.getInt(PROPERTY_MTK_VILTE_SUPPORT, 0) == 1 && isLteSupported() && ((zIsImsResourceSupport || zIsImsResourceSupport2) && booleanCarrierConfig && zIsGbaValid && zIsFeatureEnabledByPlatformExt)) {
            return DBG;
        }
        return false;
    }

    public boolean isWfcEnabledByPlatform() {
        if (SystemProperties.getInt("persist.dbg.wfc_avail_ovr" + Integer.toString(this.mPhoneId), -1) == 1 || SystemProperties.getInt("persist.dbg.wfc_avail_ovr", -1) == 1) {
            return DBG;
        }
        boolean zIsImsResourceSupport = isImsResourceSupport(2);
        boolean booleanCarrierConfig = getBooleanCarrierConfig("carrier_wfc_ims_available_bool");
        boolean zIsGbaValid = isGbaValid();
        boolean zIsFeatureEnabledByPlatformExt = isFeatureEnabledByPlatformExt(2);
        log("Wfc, isResourceSupport:" + zIsImsResourceSupport + ", isCarrierConfigSupport:" + booleanCarrierConfig + ", isGbaValidSupport:" + zIsGbaValid + ", isFeatureEnableByPlatformExt:" + zIsFeatureEnabledByPlatformExt);
        if (SystemProperties.getInt(PROPERTY_MTK_WFC_SUPPORT, 0) == 1 && isLteSupported() && zIsImsResourceSupport && booleanCarrierConfig && zIsGbaValid && zIsFeatureEnabledByPlatformExt) {
            return DBG;
        }
        return false;
    }

    public /* synthetic */ void lambda$setWfcModeInternal$0$MtkImsManager(int i) {
        try {
            getConfigInterface().setConfig(27, i);
        } catch (ImsException e) {
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public ImsCall makeCall(ImsCallProfile imsCallProfile, String[] strArr, ImsCall.Listener listener) throws ImsException {
        log("makeCall :: profile=" + imsCallProfile + ", callees=" + sensitiveEncode(Arrays.toString(strArr)));
        checkAndThrowExceptionIfServiceUnavailable();
        MtkImsCall mtkImsCall = new MtkImsCall(this.mContext, imsCallProfile);
        mtkImsCall.setListener(listener);
        ImsCallSession imsCallSessionCreateCallSession = createCallSession(imsCallProfile);
        if (strArr == null || strArr.length != 1 || imsCallProfile.getCallExtraBoolean("conference")) {
            mtkImsCall.start(imsCallSessionCreateCallSession, strArr);
        } else {
            mtkImsCall.start(imsCallSessionCreateCallSession, strArr[0]);
        }
        return mtkImsCall;
    }

    public void notifyRegServiceCapabilityChangedEvent(int i) {
        if (i == 2) {
            synchronized (this.mCallbacks) {
                for (Object obj : this.mCallbacks) {
                    if (obj instanceof MtkImsConnectionStateListener) {
                        ((MtkImsConnectionStateListener) obj).onImsEmergencyCapabilityChanged(DBG);
                    }
                }
            }
            return;
        }
        if (i == 4) {
            synchronized (this.mCallbacks) {
                for (Object obj2 : this.mCallbacks) {
                    if (obj2 instanceof MtkImsConnectionStateListener) {
                        ((MtkImsConnectionStateListener) obj2).onImsEmergencyCapabilityChanged(false);
                    }
                }
            }
            return;
        }
        if (i == 5) {
            synchronized (this.mCallbacks) {
                for (Object obj3 : this.mCallbacks) {
                    if (obj3 instanceof MtkImsConnectionStateListener) {
                        ((MtkImsConnectionStateListener) obj3).onWifiPdnOOSStateChanged(1);
                    }
                }
            }
            return;
        }
        if (i == 6) {
            synchronized (this.mCallbacks) {
                for (Object obj4 : this.mCallbacks) {
                    if (obj4 instanceof MtkImsConnectionStateListener) {
                        ((MtkImsConnectionStateListener) obj4).onWifiPdnOOSStateChanged(0);
                    }
                }
            }
            return;
        }
        if (i != 7) {
            return;
        }
        synchronized (this.mCallbacks) {
            for (Object obj5 : this.mCallbacks) {
                if (obj5 instanceof MtkImsConnectionStateListener) {
                    ((MtkImsConnectionStateListener) obj5).onWifiPdnOOSStateChanged(2);
                }
            }
        }
    }

    public MmTelFeature.MmTelCapabilities queryCapabilityStatus() {
        StringBuilder sb;
        MmTelFeature.MmTelCapabilities mmTelCapabilities = null;
        try {
            try {
                mmTelCapabilities = this.mMmTelFeatureConnection.queryCapabilityStatus();
                sb = new StringBuilder();
            } catch (RemoteException e) {
                loge("Fail to queryCapabilityStatus " + e.getMessage());
                mmTelCapabilities = new MmTelFeature.MmTelCapabilities();
                sb = new StringBuilder();
            }
        } catch (Throwable th) {
            sb = new StringBuilder();
        }
        sb.append("queryCapabilityStatus = ");
        sb.append(mmTelCapabilities);
        log(sb.toString());
        return mmTelCapabilities;
    }

    public void removeImsConnectionStateListener(RegistrationManager.RegistrationCallback registrationCallback) throws ImsException {
        synchronized (this.mCallbacks) {
            this.mCallbacks.remove(registrationCallback);
            log("ImsConnectionStateListener removed: " + registrationCallback + ", size: " + this.mCallbacks.size());
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setCallIndication(int i, Intent intent, boolean z, int i2) throws ImsException {
        log("setCallIndication :: phoneId=" + i + ", incomingCallIndication=" + intent + ", isAllow=" + z + ", cause=" + i2);
        checkAndThrowExceptionIfServiceUnavailable();
        if (intent == null) {
            throw new ImsException("Can't retrieve session with null intent", 101);
        }
        if (i != getPhoneId(intent)) {
            throw new ImsException("Service id is mismatched in the incoming call intent", 101);
        }
        String callId = getCallId(intent.getExtras());
        if (callId == null) {
            throw new ImsException("Call ID missing in the incoming call intent", 101);
        }
        String callNum = getCallNum(intent);
        if (callNum == null) {
            throw new ImsException("Call Num missing in the incoming call intent", 101);
        }
        int seqNum = getSeqNum(intent);
        if (seqNum == -1) {
            throw new ImsException("seqNum missing in the incoming call intent", 101);
        }
        try {
            try {
                this.mMtkImsService.setCallIndication(i, callId, callNum, seqNum, getMtToNumber(intent), z, i2);
            } catch (RemoteException e) {
                e = e;
                throw new ImsException("setCallIndication()", e, 106);
            }
        } catch (RemoteException e2) {
            e = e2;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setCallIndication(int i, String str, String str2, int i2, String str3, boolean z) throws ImsException {
        log("setCallIndication phoneId:" + i + ", callId:" + str + ",callNum:" + sensitiveEncode(str2) + ",seqNum:" + i2 + ",toNumber:" + sensitiveEncode(str3) + ",isAllow:" + z);
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            this.mMtkImsService.setCallIndication(i, str, str2, i2, str3, z, -1);
        } catch (RemoteException e) {
            throw new ImsException("setCallIndication()", e, 106);
        }
    }

    public void setDataRoamingSettingsEnabled(boolean z) {
        log("[" + this.mPhoneId + "][SubId=" + getSubId() + "] setDataRoamingSettingsEnabled(): " + z);
        SystemProperties.set(DATA_ROAMING_SETTING_PROP + String.valueOf(getSubId()), z ? "true" : "false");
    }

    /* JADX WARN: Code duplicated, block: B:49:0x00c0  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r16v0, types: [com.mediatek.ims.internal.MtkImsManager] */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v10 */
    /* JADX WARN: Type inference failed for: r3v11 */
    /* JADX WARN: Type inference failed for: r3v12 */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v14 */
    /* JADX WARN: Type inference failed for: r3v15 */
    /* JADX WARN: Type inference failed for: r3v2 */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5, types: [int] */
    public void setEnhanced4gLteModeVtSetting(Context context, boolean z, boolean z2) {
        ?? r3;
        int i;
        ?? r4;
        ?? r5;
        boolean z3;
        boolean z4 = z;
        boolean z5 = false;
        ImsManager imsManager = ImsManager.getInstance(context, ((MtkImsManager) this).mPhoneId);
        if (imsManager == null) {
            loge("setEnhanced4gLteModeVtSetting error");
            loge("getInstance null for phoneId=" + ((MtkImsManager) this).mPhoneId);
            return;
        }
        try {
            imsManager.getConfigInterface();
            int i2 = 0;
            if (isSupportMims()) {
                int i3 = getBooleanCarrierConfig("editable_enhanced_4g_lte_bool") ? z4 ? 1 : 0 : 1;
                int integerSubscriptionProperty = SubscriptionManager.getIntegerSubscriptionProperty(getSubId(), "volte_vt_enabled", -1, ((MtkImsManager) this).mContext);
                if (integerSubscriptionProperty == i3 && SystemProperties.getInt(PROPERTY_IMSCONFIG_FORCE_NOTIFY, 0) == 0) {
                    r3 = integerSubscriptionProperty;
                } else {
                    SubscriptionManager.setSubscriptionProperty(getSubId(), "volte_vt_enabled", Integer.toString(z4 ? 1 : 0));
                    r3 = z4;
                }
                SubscriptionManager.setSubscriptionProperty(getSubId(), "volte_vt_enabled", Integer.toString(r3 == true ? 1 : 0));
                setVtSettingOnly(z2);
                i = integerSubscriptionProperty;
                r4 = r3;
            } else {
                i = isEnhanced4gLteModeSettingEnabledByUser() ? 1 : 0;
                SubscriptionManager.setSubscriptionProperty(getSubId(), "volte_vt_enabled", Integer.toString(z4 ? 1 : 0));
                setVtSettingOnly(z2);
                r4 = z4;
            }
            if (!isNonTtyOrTtyOnVolteEnabled(context, ((MtkImsManager) this).mPhoneId)) {
                r5 = i;
            } else if (isVolteEnabledByPlatform() && isVtEnabledByPlatform()) {
                boolean zIsVTIgnoreDataChangedByOpid = isTestSim() ? isVTIgnoreDataChangedByOpid(SystemProperties.get("persist.vendor.operator.optr", "OM")) : getBooleanCarrierConfig("ignore_data_enabled_changed_for_video_calls");
                if (z) {
                    r5 = r4;
                    r5 = r4;
                    if (isVtEnabledByUser() && (zIsVTIgnoreDataChangedByOpid || isDataEnabled())) {
                        z3 = true;
                    } else {
                        r5 = r4;
                        r5 = r4;
                        r5 = r4;
                        r5 = r4;
                        r5 = r4;
                        r5 = r4;
                        z3 = false;
                    }
                } else {
                    r5 = r4;
                    r5 = r4;
                    r5 = r4;
                    r5 = r4;
                    r5 = r4;
                    r5 = r4;
                    z3 = false;
                }
                z5 = z3;
                r5 = r4;
            }
            if (z2 && z5) {
                i2 = 1;
            }
            setComboFeatureValue(r5, i2, -1);
            if (!z && !z2) {
                if (ImsManager.isTurnOffImsAllowedByPlatform(context)) {
                    if (imsManager.isVolteEnabledByPlatform() && isEnhanced4gLteModeSettingEnabledByUser()) {
                        return;
                    }
                    if (imsManager.isWfcEnabledByPlatform() && isWfcEnabledByUser()) {
                        return;
                    }
                    log("setEnhanced4gLteModeVtSetting() : imsServiceAllowTurnOff -> turnOffIms");
                    turnOffIms();
                    return;
                }
                return;
            }
            log("setEnhanced4gLteModeVtSetting() : turnOnIms");
            turnOnIms();
        } catch (ImsException e) {
            loge("setEnhanced4gLteModeVtSetting error");
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setImsPreCallInfo(int i, String str, String str2, HashMap<String, String> map, String[] strArr) throws ImsException {
        log("setImsPreCallInfo mode : " + i + ", address: " + sensitiveEncode(str) + ", fromUri: " + sensitiveEncode(str2) + ", extraHeaders: " + map + ", location: " + strArr);
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            this.mMtkImsService.setImsPreCallInfo(this.mPhoneId, i, str, str2, map, strArr);
        } catch (RemoteException e) {
            throw new ImsException("setImsPreCallInfo()", e, 106);
        }
    }

    protected void setLteFeatureValues(boolean z) {
        log("setLteFeatureValues: " + z);
        CapabilityChangeRequest capabilityChangeRequest = new CapabilityChangeRequest();
        if (z) {
            capabilityChangeRequest.addCapabilitiesToEnableForTech(1, 0);
        } else {
            capabilityChangeRequest.addCapabilitiesToDisableForTech(1, 0);
        }
        if (isVolteEnabledByPlatform() && isVtEnabledByPlatform()) {
            boolean zIsVTIgnoreDataChangedByOpid = isTestSim() ? isVTIgnoreDataChangedByOpid(SystemProperties.get("persist.vendor.operator.optr", "OM")) : getBooleanCarrierConfig("ignore_data_enabled_changed_for_video_calls");
            boolean z2 = !isDataRoaming() || isDataRoamingSettingsEnabled();
            boolean booleanCarrierConfig = getBooleanCarrierConfig("mtk_ignore_data_roaming_for_video_calls");
            boolean zIsCameraAvailable = DBG;
            try {
                if (this.mMtkImsService != null) {
                    zIsCameraAvailable = this.mMtkImsService.isCameraAvailable();
                } else {
                    log("mMtkImsService is not ready yet");
                }
            } catch (RemoteException e) {
                Log.e(TAG, "setLteFeatureValues: isCameraAvailable() Exception: " + e.getMessage());
            }
            boolean z3 = z && isVtEnabledByUser() && zIsCameraAvailable && (zIsVTIgnoreDataChangedByOpid || (isDataEnabled() && (booleanCarrierConfig || z2)));
            boolean z4 = (isVtEnabledByUser() && ((!getBooleanCarrierConfig("mtk_vt_over_wifi_check_volte_enable_bool") || z) && (!getBooleanCarrierConfig("mtk_vt_over_wifi_check_wfc_enable_bool") || isWfcEnabledByUser()))) && zIsCameraAvailable && (!getBooleanCarrierConfig("mtk_vt_over_wifi_check_data_enable_bool") || isDataEnabled());
            if (z3) {
                capabilityChangeRequest.addCapabilitiesToEnableForTech(2, 0);
            } else {
                capabilityChangeRequest.addCapabilitiesToDisableForTech(2, 0);
            }
            if (z4) {
                capabilityChangeRequest.addCapabilitiesToEnableForTech(2, 1);
            } else {
                capabilityChangeRequest.addCapabilitiesToDisableForTech(2, 1);
            }
        }
        try {
            this.mMmTelFeatureConnection.changeEnabledCapabilities(capabilityChangeRequest, (IImsCapabilityCallback) null);
        } catch (RemoteException e2) {
            Log.e(TAG, "setLteFeatureValues: Exception: " + e2.getMessage());
            changeMmTelCapabilityInternally(capabilityChangeRequest);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setMTRedirect(boolean z) throws ImsException {
        log("setMTRedirect: " + z);
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            this.mMtkImsService.setMTRedirect(this.mPhoneId, z);
        } catch (RemoteException e) {
            throw new ImsException("setMTRedirect()", e, 106);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setSipHeader(HashMap<String, String> map, String str) throws ImsException {
        log("setSipHeader fromUri: " + sensitiveEncode(str) + ", extraHeaders: " + map);
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            this.mMtkImsService.setSipHeader(this.mPhoneId, map, str);
        } catch (RemoteException e) {
            throw new ImsException("setSipHeader()", e, 106);
        }
    }

    public void setVdpProvisioned(int i) {
        try {
            Log.i(ImsManager.class.getSimpleName(), "Setting Vdp value to " + i);
            getConfigInterface().setProvisionedValue(1003, i);
        } catch (ImsException e) {
            Log.e(ImsManager.class.getSimpleName(), "Unable to set Vdp value to " + i + ": " + e);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setVoltePreferSetting(int i) {
        try {
            MtkImsConfig configInterfaceEx = getConfigInterfaceEx();
            if (configInterfaceEx != null) {
                configInterfaceEx.setVoltePreference(i);
            }
        } catch (ImsException e) {
            loge("setVoltePreferSetting(): " + e);
        }
    }

    public void setVtSetting(boolean z) {
        if (z && !isVtProvisionedOnDevice()) {
            log("setVtSetting: Not possible to enable Vt due to provisioning.");
            return;
        }
        int subId = getSubId();
        if (isSubIdValid(subId)) {
            SubscriptionManager.setSubscriptionProperty(subId, "vt_ims_enabled", booleanToPropertyString(z));
        } else {
            loge("setVtSetting: sub id invalid, skip modifying vt state in subinfo db; subId=" + subId);
        }
        try {
            changeMmTelCapability(2, 0, z);
            changeMmTelCapability(2, 1, z);
            if (z) {
                log("setVtSetting(b) : turnOnIms");
                turnOnIms();
            } else if (isTurnOffImsAllowedByPlatform() && (!isVolteEnabledByPlatform() || !isEnhanced4gLteModeSettingEnabledByUser())) {
                log("setVtSetting(b) : imsServiceAllowTurnOff -> turnOffIms");
                turnOffIms();
            }
        } catch (ImsException e) {
            loge("setVtSetting(b): ", e);
        }
    }

    public void setVtSettingOnly(boolean z) {
        SubscriptionManager.setSubscriptionProperty(getSubId(), "vt_ims_enabled", booleanToPropertyString(z));
    }

    protected void setWfcModeInternal(final int i) {
        if (!supportMdAutoSetupIms()) {
            log("Set wfc mode to MD.");
            setWfcModeConfigEx(i);
        }
        this.mExecutorFactory.executeRunnable(new Runnable() { // from class: com.mediatek.ims.internal.-$$Lambda$MtkImsManager$_QV_WWPA4yQWzzIUgNq-ZTKbw6g
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.lambda$setWfcModeInternal$0$MtkImsManager(i);
            }
        });
    }

    public void setWfcNonPersistent(boolean z, int i) {
        super.setWfcNonPersistent(z, i);
        CapabilityChangeRequest capabilityChangeRequest = new CapabilityChangeRequest();
        updateVideoCallFeatureValue(capabilityChangeRequest);
        try {
            changeMmTelCapability(capabilityChangeRequest);
        } catch (ImsException e) {
            loge("setWfcNonPersistent(): ", e);
        }
    }

    public void setWfcRegErrorCode(int i) {
        try {
            if (this.mMtkImsService != null) {
                log("[" + this.mPhoneId + "] setWfcRegErrorCode: " + i);
                this.mMtkImsService.setWfcRegErrorCode(this.mPhoneId, i);
            }
        } catch (RemoteException e) {
            loge("Fail to setWfcRegErrorCode " + e);
        }
    }

    public void setWfcSetting(boolean z) {
        if (z && !isWfcProvisionedOnDevice()) {
            log("setWfcSetting: Not possible to enable WFC due to provisioning.");
            return;
        }
        int subId = getSubId();
        if (isSubIdValid(subId)) {
            SubscriptionManager.setSubscriptionProperty(subId, "wfc_ims_enabled", booleanToPropertyString(z));
        } else {
            loge("setWfcSetting: invalid sub id, can not set WFC setting in siminfo db; subId=" + subId);
        }
        boolean zIsNetworkRoaming = ((TelephonyManager) this.mContext.getSystemService("phone")).isNetworkRoaming(subId);
        if (zIsNetworkRoaming && isConvertRoamingStateForSpecificOP()) {
            zIsNetworkRoaming = false;
        }
        setWfcNonPersistent(z, getWfcMode(zIsNetworkRoaming));
    }

    protected boolean shouldEnableImsForIR() {
        if (!mSupportImsiSwitch) {
            log("[IR] IMSI switch feature not supported");
            return DBG;
        }
        boolean z = DBG;
        int subIdUsingPhoneId = MtkSubscriptionManager.getSubIdUsingPhoneId(this.mPhoneId);
        if (subIdUsingPhoneId == -1) {
            log("[IR] shouldEnableImsForIR: Invalid subId so return");
            return DBG;
        }
        String operatorNumericFromImpi = getOperatorNumericFromImpi("0");
        String mccMncForSubId = getMccMncForSubId(subIdUsingPhoneId, SubscriptionManager.from(this.mContext));
        if (!operatorNumericFromImpi.equals(mccMncForSubId) && !"0".equals(operatorNumericFromImpi)) {
            z = false;
        }
        log("[IR] updateVolteFeatureValue: subId = " + subIdUsingPhoneId + ", phoneId = " + this.mPhoneId + ", Current currentMccMnc = " + mccMncForSubId + ", permanentMccMnc = " + operatorNumericFromImpi + ", enableIms = " + z);
        return z;
    }

    protected boolean shouldForceUpdated() {
        if (SystemProperties.getInt(PROPERTY_IMSCONFIG_FORCE_NOTIFY, 0) != 0) {
            return DBG;
        }
        return false;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public ImsCall takeCall(IImsCallSession iImsCallSession, Bundle bundle, ImsCall.Listener listener) throws ImsException {
        StringBuilder sb = new StringBuilder();
        sb.append("takeCall :: incomingCall=");
        sb.append(sensitiveEncode("" + bundle));
        log(sb.toString());
        checkAndThrowExceptionIfServiceUnavailable();
        if (bundle == null) {
            throw new ImsException("Can't retrieve session with null intent", 101);
        }
        if (bundle.getBoolean("android:ussd", false)) {
            log("takeCall :: isUssd = true, invoke original AOPS's takeCall()");
            return super.takeCall(iImsCallSession, listener);
        }
        String callId = getCallId(bundle);
        if (callId == null) {
            throw new ImsException("Call ID missing in the incoming call intent", 101);
        }
        try {
            IMtkImsCallSession pendingMtkCallSession = this.mMtkImsService.getPendingMtkCallSession(this.mPhoneId, callId);
            if (pendingMtkCallSession == null) {
                throw new ImsException("No pending IMtkImsCallSession for the call", 107);
            }
            IImsCallSession iImsCallSession2 = pendingMtkCallSession.getIImsCallSession();
            ImsCallProfile callProfile = pendingMtkCallSession.getCallProfile();
            if (callProfile == null) {
                throw new ImsException("takeCall(): profile is null", 0);
            }
            MtkImsCall mtkImsCall = new MtkImsCall(this.mContext, callProfile);
            mtkImsCall.attachSession(new MtkImsCallSession(iImsCallSession2, pendingMtkCallSession));
            mtkImsCall.setListener(listener);
            return mtkImsCall;
        } catch (Throwable th) {
            throw new ImsException("takeCall()", th, 0);
        }
    }

    /* JADX WARN: Code duplicated, block: B:68:0x019d  */
    /* JADX WARN: Code duplicated, block: B:69:0x01a3  */
    protected void updateVideoCallFeatureValue(CapabilityChangeRequest capabilityChangeRequest) {
        boolean z;
        boolean z2;
        boolean z3;
        boolean zIsVtEnabledByPlatform = isVtEnabledByPlatform();
        boolean z4 = (isEnhanced4gLteModeSettingEnabledByUser() && isVtEnabledByUser()) ? DBG : false;
        boolean zIsNonTtyOrTtyOnVolteEnabled = isNonTtyOrTtyOnVolteEnabled();
        boolean zIsDataEnabled = isDataEnabled();
        boolean zIsVTIgnoreDataChangedByOpid = isTestSim() ? isVTIgnoreDataChangedByOpid(SystemProperties.get("persist.vendor.operator.optr", "OM")) : getBooleanCarrierConfig("ignore_data_enabled_changed_for_video_calls");
        boolean z5 = (!isDataRoaming() || isDataRoamingSettingsEnabled()) ? DBG : false;
        boolean booleanCarrierConfig = getBooleanCarrierConfig("mtk_ignore_data_roaming_for_video_calls");
        boolean zIsCameraAvailable = DBG;
        try {
            if (this.mMtkImsService != null) {
                zIsCameraAvailable = this.mMtkImsService.isCameraAvailable();
            } else {
                log("mMtkImsService is not ready yet");
            }
        } catch (RemoteException e) {
            log("mMtkImsService exception");
        }
        boolean z6 = (zIsVtEnabledByPlatform && z4 && zIsNonTtyOrTtyOnVolteEnabled && zIsCameraAvailable && (zIsVTIgnoreDataChangedByOpid || (zIsDataEnabled && (booleanCarrierConfig || z5)))) ? DBG : false;
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        sb.append(this.mPhoneId);
        sb.append("] updateVideoCallFeatureValue ViLTE: available = ");
        sb.append(zIsVtEnabledByPlatform);
        sb.append(", vilteEnabled = ");
        sb.append(z4);
        sb.append(", nonTTY = ");
        sb.append(zIsNonTtyOrTtyOnVolteEnabled);
        sb.append(", ignoreDataEnabledChanged = ");
        sb.append(zIsVTIgnoreDataChangedByOpid);
        sb.append(", data enabled = ");
        sb.append(zIsDataEnabled);
        sb.append(", ignoreDataRoaming = ");
        sb.append(booleanCarrierConfig);
        sb.append(", data roaming enabled = ");
        sb.append(z5);
        sb.append(", camera support = ");
        sb.append(zIsCameraAvailable);
        sb.append(", is test sim = ");
        sb.append(isTestSim());
        sb.append(" (ignore data = ");
        sb.append(!isTestSim() ? "No need to check" : Boolean.valueOf(isVTIgnoreDataChangedByOpid(SystemProperties.get("persist.vendor.operator.optr", "OM"))));
        sb.append(")");
        log(sb.toString());
        if (z6) {
            z = false;
            capabilityChangeRequest.addCapabilitiesToEnableForTech(2, 0);
        } else {
            z = false;
            capabilityChangeRequest.addCapabilitiesToDisableForTech(2, 0);
        }
        boolean booleanCarrierConfig2 = getBooleanCarrierConfig("mtk_vt_over_wifi_check_wfc_enable_bool");
        boolean booleanCarrierConfig3 = getBooleanCarrierConfig("mtk_vt_over_wifi_check_volte_enable_bool");
        boolean z7 = (!isVtEnabledByUser() || (booleanCarrierConfig3 && !isEnhanced4gLteModeSettingEnabledByUser()) || (booleanCarrierConfig2 && !isWfcEnabledByUser())) ? z : DBG;
        boolean booleanCarrierConfig4 = getBooleanCarrierConfig("mtk_vt_over_wifi_check_data_enable_bool");
        if (zIsVtEnabledByPlatform) {
            z2 = z7;
            if (z2 && zIsNonTtyOrTtyOnVolteEnabled && zIsCameraAvailable && (!booleanCarrierConfig4 || zIsDataEnabled)) {
                z3 = DBG;
            }
            log("[" + this.mPhoneId + "] updateVideoCallFeatureValue ViWiFi: available = " + zIsVtEnabledByPlatform + ", viwifiEnabled = " + z2 + ", isViWifiNeedCheckWfcEnabled = " + booleanCarrierConfig2 + ", isWfcEnabledByUser = " + isWfcEnabledByUser() + ", isViWifiNeedCheckDataEnabled = " + booleanCarrierConfig4 + ", isViWifiNeedCheckVolteEnabled = " + booleanCarrierConfig3);
            if (z3) {
                capabilityChangeRequest.addCapabilitiesToEnableForTech(2, 1);
            } else {
                capabilityChangeRequest.addCapabilitiesToDisableForTech(2, 1);
            }
        }
        z2 = z7;
        z3 = false;
        log("[" + this.mPhoneId + "] updateVideoCallFeatureValue ViWiFi: available = " + zIsVtEnabledByPlatform + ", viwifiEnabled = " + z2 + ", isViWifiNeedCheckWfcEnabled = " + booleanCarrierConfig2 + ", isWfcEnabledByUser = " + isWfcEnabledByUser() + ", isViWifiNeedCheckDataEnabled = " + booleanCarrierConfig4 + ", isViWifiNeedCheckVolteEnabled = " + booleanCarrierConfig3);
        if (z3) {
            capabilityChangeRequest.addCapabilitiesToEnableForTech(2, 1);
        } else {
            capabilityChangeRequest.addCapabilitiesToDisableForTech(2, 1);
        }
    }

    protected void updateWfcFeatureAndProvisionedValues(CapabilityChangeRequest capabilityChangeRequest) {
        boolean zIsNetworkRoaming = new TelephonyManager(this.mContext, getSubId()).isNetworkRoaming();
        boolean zIsWfcEnabledByPlatform = isWfcEnabledByPlatform();
        boolean zIsWfcEnabledByUser = isWfcEnabledByUser();
        if (zIsNetworkRoaming && isConvertRoamingStateForSpecificOP()) {
            zIsNetworkRoaming = false;
        }
        int wfcMode = getWfcMode(zIsNetworkRoaming);
        boolean zIsWfcRoamingEnabledByUser = isWfcRoamingEnabledByUser();
        boolean z = zIsWfcEnabledByPlatform && zIsWfcEnabledByUser;
        log("updateWfcFeatureAndProvisionedValues: available = " + zIsWfcEnabledByPlatform + ", enabled = " + zIsWfcEnabledByUser + ", mode = " + wfcMode + ", roaming = " + zIsWfcRoamingEnabledByUser);
        if (z) {
            capabilityChangeRequest.addCapabilitiesToEnableForTech(1, 1);
        } else {
            capabilityChangeRequest.addCapabilitiesToDisableForTech(1, 1);
        }
        if (!z) {
            wfcMode = 1;
            zIsWfcRoamingEnabledByUser = false;
        }
        setWfcModeInternal(wfcMode);
        setWfcRoamingSettingInternal(zIsWfcRoamingEnabledByUser);
    }
}
