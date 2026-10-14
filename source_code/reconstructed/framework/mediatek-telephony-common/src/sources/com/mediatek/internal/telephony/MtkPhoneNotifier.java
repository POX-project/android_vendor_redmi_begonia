package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.CellInfo;
import android.telephony.PreciseDataConnectionState;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import android.telephony.TelephonyManager;
import android.telephony.data.ApnSetting;
import android.text.TextUtils;
import com.android.internal.telephony.DefaultPhoneNotifier;
import com.android.internal.telephony.DefaultPhoneNotifierInjector;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.mediatek.internal.telephony.dataconnection.MtkDcTracker;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import java.util.List;
import mediatek.telephony.MtkServiceState;
import mediatek.telephony.MtkSignalStrength;

/* JADX INFO: loaded from: classes.dex */
public class MtkPhoneNotifier extends DefaultPhoneNotifier {
    private static final boolean DBG = false;
    private static final String LOG_TAG = "MtkPhoneNotifr";
    private final int mFakeSub;
    private boolean mIsOp20;
    protected IMtkTelephonyRegistryEx mMtkRegistry;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.MtkPhoneNotifier$2, reason: invalid class name */
    class AnonymousClass2 implements Runnable {
        final /* synthetic */ MtkSignalStrength val$mtkSS;
        final /* synthetic */ int val$phoneId;
        final /* synthetic */ int val$subId;

        AnonymousClass2(int i, int i2, MtkSignalStrength mtkSignalStrength) {
            this.val$phoneId = i;
            this.val$subId = i2;
            this.val$mtkSS = mtkSignalStrength;
        }

        @Override // java.lang.Runnable
        public void run() {
            Rlog.v(MtkPhoneNotifier.LOG_TAG, "notifySignalStrength phoneId=" + this.val$phoneId + " subId=" + this.val$subId + " ss=" + this.val$mtkSS);
            if (MtkPhoneNotifier.this.mTelephonyRegistryMgr != null) {
                MtkPhoneNotifier.this.mTelephonyRegistryMgr.notifySignalStrengthChanged(this.val$subId, this.val$phoneId, this.val$mtkSS);
            } else {
                Rlog.e(MtkPhoneNotifier.LOG_TAG, "notifySignalStrength mTelephonyRegistryMgr null");
            }
        }
    }

    public MtkPhoneNotifier(Context context) {
        super(context);
        this.mFakeSub = 2147483646;
        this.mIsOp20 = "OP20".equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, ""));
        Rlog.d(LOG_TAG, "constructor");
        MtkTelephonyRegistryEx.init();
        this.mMtkRegistry = IMtkTelephonyRegistryEx.Stub.asInterface(ServiceManager.getService("telephony.mtkregistry"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getServiceStateBrief(ServiceState serviceState) {
        if (serviceState == null) {
            return "n/a";
        }
        return "voice=" + serviceState.getVoiceRegState() + ", data=" + serviceState.getDataRegState() + ", voice_type=" + serviceState.getVoiceNetworkType() + ", data_type=" + serviceState.getDataNetworkType();
    }

    protected String mtkConvertDunToDefault(String str, Phone phone) {
        ServiceState serviceState;
        if (!this.mIsOp20 || (serviceState = phone.getServiceState()) == null || phone.getActiveApnHost(str) == null || phone.getActiveApnHost(str).toLowerCase().contains("pam") || !TextUtils.equals(str, ApnSetting.getApnTypeString(8)) || phone.getDataConnectionState() == PhoneConstants.DataState.CONNECTED) {
            return str;
        }
        int iNetworkTypeToRilRadioTechnology = ServiceState.networkTypeToRilRadioTechnology(serviceState.getDataNetworkType());
        return (iNetworkTypeToRilRadioTechnology == 4 || iNetworkTypeToRilRadioTechnology == 5 || iNetworkTypeToRilRadioTechnology == 6 || iNetworkTypeToRilRadioTechnology == 7 || iNetworkTypeToRilRadioTechnology == 8 || iNetworkTypeToRilRadioTechnology == 12) ? ApnSetting.getApnTypeString(17) : str;
    }

    protected int mtkGetDataNetworkType(TelephonyManager telephonyManager, Phone phone, String str, PhoneConstants.DataState dataState, int i) {
        MtkServiceState turboSS;
        if (!str.equals("default") || dataState != PhoneConstants.DataState.CONNECTED || (turboSS = ((MtkDcTracker) phone.getDcTracker(1)).getTurboSS()) == null) {
            return super.mtkGetDataNetworkType(telephonyManager, phone, str, dataState, i);
        }
        Rlog.d(LOG_TAG, "mtkGetDataNetworkType: get turbo SS");
        return turboSS.getDataNetworkType();
    }

    public void notifyCellInfo(Phone phone, final List<CellInfo> list) {
        final int subId = phone.getSubId();
        new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.MtkPhoneNotifier.3
            @Override // java.lang.Runnable
            public void run() {
                if (MtkPhoneNotifier.this.mTelephonyRegistryMgr == null) {
                    Rlog.e(MtkPhoneNotifier.LOG_TAG, "notifyCellInfo mTelephonyRegistryMgr null");
                } else {
                    Rlog.v(MtkPhoneNotifier.LOG_TAG, "notifyCellInfo");
                    MtkPhoneNotifier.this.mTelephonyRegistryMgr.notifyCellInfoChanged(subId, list);
                }
            }
        }).start();
    }

    public void notifyDataConnection(Phone phone, String str, PreciseDataConnectionState preciseDataConnectionState) {
        if (phone.getActiveApnHost(str) != null || "default".equals(str) || "emergency".equals(str)) {
            MtkServiceStateTracker mtkServiceStateTracker = (MtkServiceStateTracker) phone.getServiceStateTracker();
            if (mtkServiceStateTracker == null || !mtkServiceStateTracker.mIsModemDataRestoring) {
                super.notifyDataConnection(phone, str, preciseDataConnectionState);
            } else {
                Rlog.d(LOG_TAG, "active trigger re-registration network : stop notifyDataConnection");
            }
        }
    }

    public void notifyMtkServiceState(Phone phone, MtkServiceState mtkServiceState) {
        MtkServiceState mtkServiceState2 = mtkServiceState;
        int phoneId = phone.getPhoneId();
        int subId = phone.getSubId() > -1 ? phone.getSubId() : 2147483646;
        if (mtkServiceState2 == null) {
            mtkServiceState2 = new MtkServiceState();
            mtkServiceState2.setStateOutOfService();
        }
        Rlog.d(LOG_TAG, "MtkPhoneNotifier notifyMtkServiceState phoneId:" + phoneId + " subId: " + subId + " ServiceState: " + getServiceStateBrief(mtkServiceState2));
        if (this.mTelephonyRegistryMgr != null) {
            this.mTelephonyRegistryMgr.notifyServiceStateChanged(subId, phoneId, mtkServiceState2);
        }
    }

    public void notifyMtkSignalStrength(Phone phone, SignalStrength signalStrength) {
        int phoneId = phone.getPhoneId();
        int subId = phone.getSubId() > -1 ? phone.getSubId() : 2147483646;
        Rlog.d(LOG_TAG, "MtkPhoneNotifier notifyMtkSignalStrength phoneId:" + phoneId + " subId: " + subId + " signal: " + signalStrength);
        if (this.mTelephonyRegistryMgr != null) {
            this.mTelephonyRegistryMgr.notifySignalStrengthChanged(subId, phoneId, signalStrength);
        }
    }

    public void notifyServiceState(Phone phone) {
        if (phone.getSubId() > -1) {
            final int phoneId = phone.getPhoneId();
            final int subId = phone.getSubId();
            final MtkServiceState mtkServiceState = new MtkServiceState(phone.getServiceState());
            new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.MtkPhoneNotifier.1
                @Override // java.lang.Runnable
                public void run() {
                    Rlog.d(MtkPhoneNotifier.LOG_TAG, "notifyServiceState: phoneId=" + phoneId + " subId=" + subId + " ss=" + MtkPhoneNotifier.this.getServiceStateBrief(mtkServiceState));
                    if (MtkPhoneNotifier.this.mTelephonyRegistryMgr != null) {
                        MtkPhoneNotifier.this.mTelephonyRegistryMgr.notifyServiceStateChanged(subId, phoneId, mtkServiceState);
                    } else {
                        Rlog.e(MtkPhoneNotifier.LOG_TAG, "notifyServiceState mTelephonyRegistryMgr null");
                    }
                    DefaultPhoneNotifierInjector.cbNotifyServiceStateForPhoneId(phoneId, mtkServiceState);
                }
            }).start();
            return;
        }
        ServiceState serviceState = phone.getServiceState();
        int phoneId2 = phone.getPhoneId();
        if (serviceState == null) {
            serviceState = new MtkServiceState();
            serviceState.setStateOutOfService();
        } else {
            serviceState.setIsManualSelection(false);
        }
        Rlog.d(LOG_TAG, "notifyServiceState phoneId=" + phoneId2 + " subId=2147483646 ss=" + getServiceStateBrief(serviceState));
        if (this.mTelephonyRegistryMgr != null) {
            this.mTelephonyRegistryMgr.notifyServiceStateChanged(2147483646, phoneId2, serviceState);
            this.mTelephonyRegistryMgr.notifyServiceStateChanged(-1, phoneId2, serviceState);
        }
    }

    public void notifySignalStrength(Phone phone) {
        if (phone.getSubId() > -1) {
            super.notifySignalStrength(phone);
            return;
        }
        int phoneId = phone.getPhoneId();
        Rlog.d(LOG_TAG, "notifySignalStrength phoneId=" + phoneId + " subId=2147483646 ss=" + phone.getSignalStrength());
        if (this.mTelephonyRegistryMgr != null) {
            this.mTelephonyRegistryMgr.notifySignalStrengthChanged(2147483646, phoneId, phone.getSignalStrength());
        }
    }
}
