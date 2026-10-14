package com.mediatek.internal.telephony.datasub;

import android.content.ContentResolver;
import android.content.Context;
import android.net.ConnectivityManager;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.RegistrantList;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.OpTelephonyCustomizationFactoryBase;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.wfo.IMwiService;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.MwisConstants;
import com.mediatek.wfo.WifiOffloadManager;

/* JADX INFO: loaded from: classes.dex */
public class SmartDataSwitchAssistant extends Handler {
    private static final boolean DBG = true;
    private static final int EVENT_CALL_ENDED = 20;
    private static final int EVENT_CALL_STARTED = 10;
    private static final int EVENT_ID_INTVL = 10;
    private static final int EVENT_SERVICE_STATE_CHANGED = 40;
    private static final int EVENT_SRVCC_STATE_CHANGED = 30;
    private static final String LOG_TAG = "SmartDataSwitch";
    private static final String TEMP_DATA_MODE = "temp_data_mode";
    public static final int TEMP_DATA_MODE_DEFAULT = 0;
    public static final int TEMP_DATA_MODE_EXCEPT_CSFB = 2;
    public static final int TEMP_DATA_MODE_ONLY_VOLTE = 1;
    private static String mOperatorSpec;
    private static SmartDataSwitchAssistant sSmartDataSwitchAssistant = null;
    private ConnectivityManager mConnectivityManager;
    private Context mContext;
    private HandoverStateListener mHandoverStateListener;
    private ConnectivityManager.NetworkCallback mNetworkCallback;
    protected int mPhoneNum;
    protected Phone[] mPhones;
    private final RegistrantList mReEvalueRegistrants;
    protected ContentResolver mResolver;
    private ISmartDataSwitchAssistantOpExt mSmartDataOpExt;
    private IWifiOffloadService mWfoService;
    protected int mInCallPhoneId = -1;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory = null;
    private TelephonyManager mTelephonyManager = null;

    private class HandoverStateListener extends WifiOffloadManager.Listener {
        private HandoverStateListener() {
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onHandover(int i, int i2, int i3) {
            SmartDataSwitchAssistant.logd("onHandover() simIdx:" + i + " stage:" + i2 + " ratType:" + i3);
            if (i2 == 1) {
                if (i3 == 2) {
                    SmartDataSwitchAssistant.this.onHandoverToWifi();
                    SmartDataSwitchAssistant.this.mReEvalueRegistrants.notifyRegistrants();
                } else if (i3 == 1 || i3 == 3) {
                    SmartDataSwitchAssistant.this.onHandoverToCellular();
                    SmartDataSwitchAssistant.this.mReEvalueRegistrants.notifyRegistrants();
                }
            }
        }
    }

    private SmartDataSwitchAssistant(Context context, Phone[] phoneArr) {
        this.mSmartDataOpExt = null;
        this.mContext = null;
        logd(" is created");
        this.mPhones = phoneArr;
        this.mPhoneNum = phoneArr.length;
        this.mContext = context;
        this.mResolver = context.getContentResolver();
        mOperatorSpec = SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "OM");
        if (isSmartDataSwitchSupport()) {
            registerEvents();
        }
        initOpSmartDataSwitchAssistant(context);
        if (this.mSmartDataOpExt == null) {
            this.mSmartDataOpExt = new SmartDataSwitchAssistantOpExt(context);
        }
        this.mSmartDataOpExt.init(this);
        this.mReEvalueRegistrants = new RegistrantList();
        logd("init done");
    }

    private Phone findPhoneById(int i) {
        if (SubscriptionManager.isValidPhoneId(i)) {
            return PhoneFactory.getPhone(i);
        }
        loge("findPhoneById: invalid phoneId");
        return null;
    }

    private ConnectivityManager getConnectivityManager() {
        if (this.mConnectivityManager == null) {
            this.mConnectivityManager = (ConnectivityManager) this.mContext.getSystemService("connectivity");
        }
        return this.mConnectivityManager;
    }

    public static SmartDataSwitchAssistant getInstance() {
        SmartDataSwitchAssistant smartDataSwitchAssistant = sSmartDataSwitchAssistant;
        if (smartDataSwitchAssistant != null) {
            return smartDataSwitchAssistant;
        }
        throw new RuntimeException("Should not be called before sSmartDataSwitchAssistant");
    }

    private TelephonyManager getTelephonyManager() {
        if (this.mTelephonyManager == null) {
            this.mTelephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        }
        return this.mTelephonyManager;
    }

    private IWifiOffloadService getWifiOffLoadService() {
        if (this.mWfoService == null) {
            IBinder service = ServiceManager.getService(WifiOffloadManager.WFO_SERVICE);
            if (service != null) {
                this.mWfoService = IWifiOffloadService.Stub.asInterface(service);
            } else {
                IBinder service2 = ServiceManager.getService(MwisConstants.MWI_SERVICE);
                try {
                    if (service2 != null) {
                        this.mWfoService = IMwiService.Stub.asInterface(service2).getWfcHandlerInterface();
                    } else {
                        loge("getWifiOffLoadService: No MwiService exist");
                    }
                } catch (Exception e) {
                    loge("getWifiOffLoadService: can't get MwiService error:" + e);
                }
            }
        }
        return this.mWfoService;
    }

    private void initOpSmartDataSwitchAssistant(Context context) {
        try {
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(context);
            this.mTelephonyCustomizationFactory = opFactory;
            this.mSmartDataOpExt = opFactory.makeSmartDataSwitchAssistantOpExt(context);
        } catch (Exception e) {
            loge("mSmartDataOpExt init fail");
            e.printStackTrace();
        }
    }

    private boolean isSmartDataSwitchSupport() {
        return SystemProperties.get("persist.vendor.radio.smart.data.switch").equals("1");
    }

    protected static void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    protected static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    protected static void logi(String str) {
        Rlog.i(LOG_TAG, str);
    }

    protected static void logv(String str) {
        Rlog.v(LOG_TAG, str);
    }

    public static SmartDataSwitchAssistant makeSmartDataSwitchAssistant(Context context, Phone[] phoneArr) {
        if (context == null || phoneArr == null) {
            throw new RuntimeException("param is null");
        }
        SmartDataSwitchAssistant smartDataSwitchAssistant = sSmartDataSwitchAssistant;
        if (smartDataSwitchAssistant == null) {
            sSmartDataSwitchAssistant = new SmartDataSwitchAssistant(context, phoneArr);
        } else {
            smartDataSwitchAssistant.updatePhones(phoneArr);
        }
        logd("makeSDSA: X sSDSA =" + sSmartDataSwitchAssistant);
        return sSmartDataSwitchAssistant;
    }

    private void registerEvents() {
        logd("registerEvents");
    }

    private void setInCallPhoneId(int i) {
        this.mInCallPhoneId = i;
    }

    private void unregisterEvents() {
        logd("unregisterEvents");
    }

    public boolean checkIsSwitchAvailable(int i) {
        if (isSmartDataSwitchSupport()) {
            return this.mSmartDataOpExt.checkIsSwitchAvailable(i);
        }
        logd("checkIsSwitchAvailable: not have TempDataSwitchCapability");
        return false;
    }

    public void dispose() {
        logd("SmartDataSwitchAssistant.dispose");
        if (isSmartDataSwitchSupport()) {
            unregisterEvents();
        }
    }

    public boolean getAospTemporaryDataSettings(int i) {
        Phone phoneFindPhoneById = findPhoneById(i);
        return phoneFindPhoneById != null && phoneFindPhoneById.getDataEnabledSettings().isDataAllowedInVoiceCall();
    }

    public int getInCallPhoneId() {
        return this.mInCallPhoneId;
    }

    public int getTemporaryDataMode() {
        return Settings.Global.getInt(this.mResolver, TEMP_DATA_MODE, 1);
    }

    public int getVoiceNetworkType(int i) {
        if (i != -1) {
            return this.mPhones[i].getServiceStateTracker().mSS.getRilVoiceRadioTechnology();
        }
        loge("updateCallType() invalid Phone Id!");
        return 0;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        int i = message.what % 10;
        int i2 = message.what - i;
        if (i2 == 30) {
            logd("SRVCC, phoneId=" + i);
            onSrvccStateChanged();
            this.mReEvalueRegistrants.notifyRegistrants();
            return;
        }
        if (i2 != 40) {
            logd("Unhandled message with number: " + message.what);
            return;
        }
        if (onServiceStateChanged(i)) {
            logd("EVENT_SERVICE_STATE_CHANGED: notify");
            this.mReEvalueRegistrants.notifyRegistrants();
        }
    }

    public boolean isVoLteCalling(int i) {
        MtkGsmCdmaPhone[] mtkGsmCdmaPhoneArr = this.mPhones;
        if (mtkGsmCdmaPhoneArr[i] != null) {
            return mtkGsmCdmaPhoneArr[i].isDuringVoLteCall();
        }
        loge("isVoLteCalling: mPhones[" + i + "] is null");
        return false;
    }

    public boolean isWifcCalling(int i) {
        return this.mPhones[i].isWifiCallingEnabled();
    }

    public void onDsdaStateChanged() {
        logd("onDsdaStateChanged: notify");
        this.mReEvalueRegistrants.notifyRegistrants();
    }

    public void onHandoverToCellular() {
        logd("onHandoverToCellular()");
    }

    public void onHandoverToWifi() {
        logd("onHandoverToWifi()");
    }

    public boolean onServiceStateChanged(int i) {
        return this.mSmartDataOpExt.onServiceStateChanged(i);
    }

    public void onSrvccStateChanged() {
        logd("onSrvccStateChanged()");
        this.mSmartDataOpExt.onSrvccStateChanged();
    }

    public void regImsHandoverEvent() {
        if (this.mWfoService == null) {
            this.mWfoService = getWifiOffLoadService();
        }
        if (this.mWfoService != null) {
            try {
                if (this.mHandoverStateListener == null) {
                    this.mHandoverStateListener = new HandoverStateListener();
                }
                this.mWfoService.registerForHandoverEvent(this.mHandoverStateListener);
            } catch (Exception e) {
                loge("regImsHandoverEvent(): RemoteException mWfoService()");
            }
        }
    }

    public void regServiceStateChangedEvent() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mPhones[i].registerForServiceStateChanged(this, i + 40, (Object) null);
        }
    }

    public void regSrvccEvent() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mPhones[i].registerForHandoverStateChanged(this, i + 30, (Object) null);
        }
    }

    public void registerReEvaluateEvent(Handler handler, int i, Object obj, int i2) {
        if (!isSmartDataSwitchSupport()) {
            logd("registerReEvaluateEvent: not have TempDataSwitchCapability");
            return;
        }
        Registrant registrant = new Registrant(handler, i, obj);
        logd("registerReEvaluateEvent()");
        setInCallPhoneId(i2);
        this.mReEvalueRegistrants.add(registrant);
        regImsHandoverEvent();
        this.mSmartDataOpExt.onCallStarted();
    }

    public void unregImsHandoverEvent() {
        try {
            this.mWfoService.unregisterForHandoverEvent(this.mHandoverStateListener);
        } catch (Exception e) {
            loge("unregImsHandoverEvent: RemoteException mWfoService()");
        }
    }

    public void unregServiceStateChangedEvent() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mPhones[i].unregisterForServiceStateChanged(this);
        }
    }

    public void unregSrvccEvent() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mPhones[i].unregisterForHandoverStateChanged(this);
        }
    }

    public void unregisterReEvaluateEvent(Handler handler) {
        if (!isSmartDataSwitchSupport()) {
            logd("unregisterReEvaluateEvent: not have TempDataSwitchCapability");
            return;
        }
        logd("unregisterReEvaluateEvent()");
        setInCallPhoneId(-1);
        this.mReEvalueRegistrants.remove(handler);
        unregImsHandoverEvent();
        this.mSmartDataOpExt.onCallEnded();
    }

    public void updatePhones(Phone[] phoneArr) {
        logd("updatePhones: prev=" + this.mPhoneNum + ", current=" + phoneArr.length);
        if (this.mPhoneNum > phoneArr.length) {
            return;
        }
        int i = this.mPhoneNum;
        this.mPhones = phoneArr;
        this.mPhoneNum = phoneArr.length;
        if (isSmartDataSwitchSupport()) {
            registerEvents();
        }
    }
}
